# Using official gcc docker image
FROM gcc:7.4

# Install zip, cmake, maven, python-pip via apt
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y zip cmake python-pip

# Install awscli
RUN pip install awscli --upgrade

# We can install openjdk by "apt install openjdk-8-jdk", but it has some issues during building code-generation, we have to install it manually.
RUN wget --no-check-certificate -c --header "Cookie: oraclelicense=accept-securebackup-cookie" https://download.oracle.com/otn-pub/java/jdk/8u191-b12/2787e4a523244c269598db4e85c51e0c/jdk-8u191-linux-x64.tar.gz && \
    tar zxvf jdk-8u191-linux-x64.tar.gz && \
    mkdir /usr/bin/java && \
    mv jdk1.8.0_191 /usr/bin/java && \
    rm jdk-8u191-linux-x64.tar.gz && \
    ln -s /usr/bin/java/jdk1.8.0_191/bin/java /bin/java && \
    ln -s /usr/bin/java/jdk1.8.0_191/bin/javac /bin/javac
ENV JAVA_HOME /usr/bin/java/jdk1.8.0_191
RUN apt-get install -y maven

# Download and install Android NDK
RUN wget https://dl.google.com/android/repository/android-ndk-r19c-linux-x86_64.zip && \
    unzip android-ndk-r19c-linux-x86_64.zip && \
    mv android-ndk-r19c /opt && \
    rm android-ndk-r19c-linux-x86_64.zip
ENV ANDROID_NDK /opt/android-ndk-r19c
