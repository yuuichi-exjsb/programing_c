#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    double x,y,pi,cnt;
    int i,n;

    n=10000000;
    cnt = 0;
    for(i=0;i<n;i++){
        x = 2*(double)rand()/RAND_MAX-1;
        y = 2*(double)rand()/RAND_MAX-1;
        if (x*x+y*y<=1.0){
        cnt +=1;
        }
        /*printf("(x,y)=(%f,%f)\n",x,y);*/
    }
    pi = 4*cnt/n;
   /*printf("cnt = %d\n",cnt);
    printf("p=%f\n",(double)cnt/n);*/
    printf("π=%f\n",pi);
    return 0;

}