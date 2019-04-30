# Using Amazon Linux 2 docker image
FROM amazonlinux:2

#Install g++
RUN yum groupinstall "Development Tools" -y

#Install cmake
RUN curl https://cmake.org/files/v3.13/cmake-3.13.3-Linux-x86_64.tar.gz --output cmake-3.13.3-Linux-x86_64.tar.gz && \
    tar -xvzf cmake-3.13.3-Linux-x86_64.tar.gz && \
    mv cmake-3.13.3-Linux-x86_64 /opt && \
    rm cmake-3.13.3-Linux-x86_64.tar.gz && \
    ln -s /opt/cmake-3.13.3-Linux-x86_64/bin/cmake /usr/local/bin/cmake

#Install curl and openssl
RUN yum install curl-devel -y && \
    yum install openssl-devel -y

#Install awscli
RUN yum install python-pip -y && \
    pip install awscli
