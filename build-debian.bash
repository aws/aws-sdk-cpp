#!/bin/bash


mkdir build && cd build
cmake .. \
  -DLEGACY_BUILD=ON \
  -DBUILD_ONLY=secretsmanager \
  -DBUILD_TESTING=OFF \
  -DBUILD_DEPS=ON \
  -DENABLE_UNITY_BUILD=ON \
  -DBUILD_SHARED_LIBS=ON \
  -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
  -DCMAKE_INSTALL_PREFIX=/usr/local

make -j$(nproc)
make install DESTDIR=../../burro-aws-sdk-cpp

pushd ../../

cat <<EOF > burro-aws-sdk-cpp/DEBIAN/control
Package: burro-aws-sdk-cpp
Version: 1.9.0
Architecture: amd64
Maintainer: Wolf Liang <debo@burro.ai>
Depends: libcurl4-openssl-dev, zlib1g-dev
Description: AWS SDK for C++ (Secrets Manager) for Burro
 Compiled AWS SDK C++ library with Secrets Manager support.
 Built for Ubuntu 20.04 with shared libraries enabled.
EOF


cat <<EOF > burro-aws-sdk-cpp/DEBIAN/postinst
#!/bin/bash
ldconfig
EOF

chmod 755 burro-aws-sdk-cpp/DEBIAN/postinst

dpkg-deb --build burro-aws-sdk-cpp

echo "burro-aws-sdk-cpp.deb is built, feel free to install"
