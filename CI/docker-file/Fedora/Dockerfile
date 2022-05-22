# Using official fedora docker image
FROM fedora:latest

# Install wget, git, zip, cmake, g++, zlib, libcurl, openssl, java, doxygen and maven via dnf
RUN dnf upgrade --refresh -y && \
    dnf install -y wget git zip cmake gcc-g++ zlib-devel libcurl-devel openssl-devel java-1.8.0-openjdk-devel doxygen python3-pip

RUN dnf install -y maven
# Install awscli
RUN pip install awscli --upgrade

# Download and install Android NDK
RUN wget https://dl.google.com/android/repository/android-ndk-r19c-linux-x86_64.zip && \
    unzip android-ndk-r19c-linux-x86_64.zip && \
    mv android-ndk-r19c /opt && \
    rm android-ndk-r19c-linux-x86_64.zip
ENV ANDROID_NDK /opt/android-ndk-r19c
