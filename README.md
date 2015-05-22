# aws-sdk-cpp

#Building:

Recommended Procedure for Out of Source Build:

First, you need to make sure cmake and the relevant build tools for your platform are installed
and available in your executable path.

Next create your build directory. For these instructions, let's call it BUILD_DIR.

cd BUILD_DIR
cmake <path-to-root-of-this-source-code>
--For Non-Windows systems
make
--For Windows
msbuild ALL_BUILD.vcxproj

--alternatively for release builds, you can run
--For non-windows systems
cmake -DCMAKE_BUILD_TYPE=Release  <path-to-root-of-this-source-code>
make
sudo make install

--For windows systems
cmake <path-to-root-of-this-source-code> -G "Visual Studio 12 Win64"
msbuild INSTALL.vcxproj /p:Configuration=Release

That's it! This will build the entire source tree for your platform, run unit tests, and build integration tests.

CMake Variables:

CUSTOM_MEMORY_MANAGEMENT  

Set this value to 1 to use a custom memory manager. When using this option, all STL types will use our custom allocation interface which you can install a custom allocator into.
If this is set to 0, you should still use our STL template types to help with DLL safety on windows. Note: Whatever value you use here, you need to make sure you use accross your entire build system since a mismatch here will cause linker errors.

STATIC_LINKING 

By default, the build creates shared libs for each platform. If you want to statically link, specify this value as 1.

TARGET_ARCH

By default, the build detects the host operating system and builds for that. If you want a cross compile, or you are building for a mobile platform, you will need to specify the target platform.
Options here are: WINDOWS | LINUX | APPLE | ANDROID

G

Especially for Windows, you want to specify this, example: -G "Visual Studio 12 Win64". Refer to the cmake documentation for your platform for more information.



Running integration tests:

You will notice that there are several directories appended with *integration-tests. After building your project, you can run these executables to make sure everything is working properly.

Dependencies:
For Linux, in order to compile, you will need the header files for libcurl and libopenssl. These packages are usually available in your package manager:

example:
   sudo apt-get install libcurl-dev
   
  






