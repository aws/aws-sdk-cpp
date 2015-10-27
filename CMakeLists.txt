#
# Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

# minimum version of cmake that 
#   (1) supports ExternalProject_Add URL_HASH
#   (2) correctly extracts OPENSSL's version number from openssl/opensslv.h in version 1.0.2d
cmake_minimum_required (VERSION 2.8)

# Cmake invocation variables:
#   CUSTOM_MEMORY_MANAGEMENT - if set to 1, generates the sdk project files with custom memory management enabled, otherwise disables it
#   STATIC_LINKING - if set to 1, generates the sdk project files to build static libraries, otherwise disables it
#   NO_HTTP_CLIENT - if set to 1, will not include any platform-specific http client implementations; you will need to provide one 

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
set(AWS_INSTALLED_LIBS "")
# there isn't a reliable way of detecting what architecture we want to build for in a cross-compiling environment, so force the user
# to specify on the command line.  Since testing string equality is ugly and awkward in cmake, we use the specified architecture
# to conditionally set a symbol to 1 so that we can continue to just do "if (SYMBOL)" for our conditional execution
SET(PLATFORM_WINDOWS 0)
SET(PLATFORM_LINUX 0)
SET(PLATFORM_ANDROID 0)
SET(PLATFORM_APPLE 0)

if("${TARGET_ARCH}" STREQUAL "WINDOWS")
    SET(PLATFORM_WINDOWS 1)
elseif("${TARGET_ARCH}" STREQUAL "LINUX")
    SET(PLATFORM_LINUX 1)
elseif("${TARGET_ARCH}" STREQUAL "APPLE")
    SET(PLATFORM_APPLE 1)
elseif("${TARGET_ARCH}" STREQUAL "ANDROID")
    SET(PLATFORM_ANDROID 1)
    SET(CMAKE_TOOLCHAIN_FILE ./android-build/android.toolchain.cmake)
else()
    message(STATUS "TARGET_ARCH not specified; inferring host OS to be platform compilation target")
    if(WIN32)
        SET(PLATFORM_WINDOWS 1)
    elseif(APPLE)
        SET(PLATFORM_APPLE 1)
    elseif(UNIX)
        SET(PLATFORM_LINUX 1)
    else()
        message(FATAL_ERROR "Unknown host OS; unable to determine platform compilation target")
    endif()
endif()

if(PLATFORM_WINDOWS)
    message(STATUS "Generating windows build config")
elseif(PLATFORM_LINUX)
    message(STATUS "Generating linux build config")
elseif(PLATFORM_APPLE)
    message(STATUS "Generating Mac OSX/IOS build config")
elseif(PLATFORM_ANDROID)
    message(STATUS "Generating android build config")
else()
    message(FATAL_ERROR "Unknown target platform.  How did this happen?")
endif()

# shared libraries as intermediate (non-leaf) targets are not supported in android due to std::string issues
if("${STATIC_LINKING}" STREQUAL "1")
    SET(BUILD_SHARED_LIBS 0)
    SET(ARCHIVE_DIRECTORY "lib")
    message(STATUS "Dynamic linking disabled")
else()
    SET(BUILD_SHARED_LIBS 1)
    SET(ARCHIVE_DIRECTORY "bin")
    message(STATUS "Dynamic linking enabled")
endif()

# If building shared libraries, custom memory management enabled is the default, otherwise regular memory management is the default.
# We make custom memory management the default on shared library builds because it is safer and much more difficult to accidentally
# allocate in one DLLs heap while freeing in another (which will lead to runtime crashes)
if(("${CUSTOM_MEMORY_MANAGEMENT}" STREQUAL "1") OR (BUILD_SHARED_LIBS AND NOT ("${CUSTOM_MEMORY_MANAGEMENT}" STREQUAL "0")))
    add_definitions(-DAWS_CUSTOM_MEMORY_MANAGEMENT)
    message(STATUS "Custom memory management enabled; stl objects now using custom allocators")
else()
    message(STATUS "Custom memory management disabled")
endif()

# on Windows, set CURL_DIR to a valid curl install directory in order to enable the curl client
set(ENABLE_CURL_CLIENT 0)
set(ENABLE_WINDOWS_CLIENT 0)
if(NOT "${NO_HTTP_CLIENT}" STREQUAL "1")
    if(PLATFORM_WINDOWS)
        set(ENABLE_WINDOWS_CLIENT 1)
        if(DEFINED CURL_DIR)
	    set(ENABLE_CURL_CLIENT 1)
            set(CURL_INCLUDE_DIR "${CURL_DIR}\\include")
            set(CURL_LIBRARY_DIR "${CURL_DIR}\\lib")

            include_directories(${CURL_INCLUDE_DIR})
            link_directories(${CURL_LIBRARY_DIR})
        endif()
    else()
        set(ENABLE_CURL_CLIENT 1)
    endif()
endif()

if(ENABLE_CURL_CLIENT)
    add_definitions(-DENABLE_CURL_CLIENT)
    message(STATUS "Curl client enabled")
    if(TEST_CERT_PATH)
        message(STATUS "Setting cert path to ${TEST_CERT_PATH}")
        add_definitions(-DTEST_CERT_PATH="\"${TEST_CERT_PATH}\"")
    endif()
else()
    message(STATUS "Curl client disabled")    
endif()

if(ENABLE_WINDOWS_CLIENT)
    add_definitions(-DENABLE_WINDOWS_CLIENT)
    message(STATUS "Windows clients enabled")
else()
    message(STATUS "Windows clients disabled")
endif()

project(AWSNativeSDKAll)

# install setup
# This install section must come after the initial "project(..)" declaration since that's when the compiler settings are discovered; prior to that CMAKE_SIZEOF_VOID_P is empty
# install syntax (after building): cmake -DCMAKE_INSTALL_CONFIG_NAME=<Release/Debug> -DCMAKE_INSTALL_PREFIX=<install_root> -P cmake_install.cmake
# ToDo: consoles
if(PLATFORM_WINDOWS)
    set(SDK_INSTALL_BINARY_PREFIX "windows")
elseif(PLATFORM_LINUX)
    set(SDK_INSTALL_BINARY_PREFIX "linux")
elseif(PLATFORM_ANDROID)
    set(SDK_INSTALL_BINARY_PREFIX "android")
elseif(PLATFORM_APPLE)
    set(SDK_INSTALL_BINARY_PREFIX "mac")
endif()

# ToDo: Mac/ios/android/consoles
if(PLATFORM_WINDOWS OR PLATFORM_LINUX)
    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        set(SDK_INSTALL_BINARY_PREFIX "${SDK_INSTALL_BINARY_PREFIX}/intel64")
    else()
        set(SDK_INSTALL_BINARY_PREFIX "${SDK_INSTALL_BINARY_PREFIX}/ia32")
    endif()
elseif(PLATFORM_ANDROID)
    if("${ANDROID_ABI}" STREQUAL "")
        message(FATAL_ERROR "No ABI set for Android build")
    endif()

    set(SDK_INSTALL_BINARY_PREFIX "${SDK_INSTALL_BINARY_PREFIX}/${ANDROID_ABI}")
endif()

message(STATUS "Install binary prefix: ${SDK_INSTALL_BINARY_PREFIX}")

if(BUILD_SHARED_LIBS)
    SET(LIBTYPE SHARED)
    if(PLATFORM_WINDOWS)
        add_definitions("-DUSE_IMPORT_EXPORT")
        SET(SUFFIX dll)
    elseif(PLATFORM_LINUX OR PLATFORM_ANDROID)
        SET(SUFFIX so)
    elseif(PLATFORM_APPLE)
        SET(SUFFIX dylib)
    endif()
else()
    SET(LIBTYPE STATIC)
    if(PLATFORM_WINDOWS)
        SET(SUFFIX lib)
    elseif(PLATFORM_LINUX OR PLATFORM_ANDROID OR PLATFORM_APPLE)
        SET(SUFFIX a)
    endif()
endif()

#for now, only build examples on windows build.
if(PLATFORM_WINDOWS)
    SET(BUILD_EXAMPLES 1)
else()
    SET(BUILD_EXAMPLES 0)
endif()

macro(copyDlls exeName)
    if(PLATFORM_WINDOWS AND BUILD_SHARED_LIBS)
        foreach(arg ${ARGN})
            add_custom_command(TARGET ${exeName}
                               POST_BUILD
                               COMMAND ${CMAKE_COMMAND} -E copy_if_different
                               "${CMAKE_BINARY_DIR}/${arg}/$<CONFIGURATION>/${arg}.dll"      
                               ${CMAKE_CURRENT_BINARY_DIR}/$<CONFIGURATION>/)    
        endforeach()
    endif()
endmacro()

# In Windows, this dumps the CL and LINK command lines to the output - makes it much easier to
# check that CMake is passing in the right defines, paths, etc...
#
# set( CMAKE_VERBOSE_MAKEFILE 1 )

# Setup the project configurations.

get_filename_component(AWS_NATIVE_SDK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}" ABSOLUTE)

set(CMAKE_CONFIGURATION_TYPES
    Debug                   # Setup for easy debugging. No optimizations.
    DebugOpt                # An optimized version of Debug.
    Release                 # Fully optimized, no debugging information.
    RelWithDebInfo          # A debuggable version of Release.
    MinSizeRel              # Like Release, but optimized for memory rather than speed.
)

# pass this flag to the jsoncpp amalgamated source
add_definitions(-DJSON_USE_EXCEPTION=0)

if(NOT PLATFORM_WINDOWS)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions")
endif()

# warning control
if(PLATFORM_WINDOWS)
    if(MSVC)
        # some of the clients are exceeding the 16-bit code section limit when building x64 debug, so use /bigobj when we build
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")

        # warnings as errors, max warning level (4)
        if(NOT CMAKE_CXX_FLAGS MATCHES "/WX")
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /WX")
        endif()

        # taken from http://stackoverflow.com/questions/2368811/how-to-set-warning-level-in-cmake
        if(CMAKE_CXX_FLAGS MATCHES "/W[0-4]")
            string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
        else()
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
        endif()
    endif()
elseif(PLATFORM_LINUX OR PLATFORM_ANDROID OR PLATFORM_APPLE)
    # max warning level, warnings are errors, turn off unused private field. We have one for an empty class.
    # We also have some nested comments in the auto-generated member comments so turn that off as well
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wno-unused-private-field -Wno-comment")
endif()

set(CORE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/aws-cpp-sdk-core/")

if(PLATFORM_ANDROID)
    include(ExternalProject)

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -fno-exceptions")
    set(BASE_SDK_DIR ${CMAKE_SOURCE_DIR} CACHE STRING "Android build" FORCE)
    set(EXTERNAL_PROJECTS_DIR ${CMAKE_SOURCE_DIR}/external CACHE STRING "Android build" FORCE)
    set(USE_PROJECT_CMAKE_MODULE_PATH "-DCMAKE_MODULE_PATH=${MAKE_MODULE_PATH}")
    set(TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/android-build/android.toolchain.cmake)
    
    # we patch the install process for each dependency to match what we need for 3rd party installation
    set(EXTERNAL_INSTALL_DIR ${CMAKE_SOURCE_DIR}/external)

    #zlib
    #based on http://stackoverflow.com/questions/16842218/how-to-use-cmake-externalproject-add-or-alternatives-in-a-cross-platform-way
    #likely, some of the things here are unnecessary
    set(ZLIB_SOURCE_DIR ${CMAKE_SOURCE_DIR}/zlib CACHE INTERNAL "zlib source dir")
    set(ZLIB_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/zlib CACHE INTERNAL "zlib install dir")
    set(ZLIB_INCLUDE_DIR ${ZLIB_INSTALL_DIR}/include/zlib CACHE INTERNAL "zlib include dir")
    set(ZLIB_LIBRARY_DIR ${ZLIB_INSTALL_DIR}/lib/${SDK_INSTALL_BINARY_PREFIX}/${CMAKE_BUILD_TYPE} CACHE INTERNAL "zlib library dir")
    set(ZLIB_DEFINES "-msse2 -mfpmath=sse" CACHE INTERNAL "zlib defines")

    set( ZLIB_INCLUDE_FLAGS "-isystem ${ZLIB_INCLUDE_DIR}" CACHE INTERNAL "compiler flags to find zlib includes")
    set( ZLIB_LINKER_FLAGS "-L${ZLIB_LIBRARY_DIR}" CACHE INTERNAL "linker flags to find zlib")

    ExternalProject_Add(ZLIB
			SOURCE_DIR ${ZLIB_SOURCE_DIR}
			URL http://zlib.net/zlib-1.2.8.tar.gz
			URL_HASH "SHA256=36658cb768a54c1d4dec43c3116c27ed893e88b02ecfcb44f2166f9c0b7f2a0d"
			PATCH_COMMAND patch CMakeLists.txt < ${CMAKE_SOURCE_DIR}/android-build/patches/zlib/CMakeLists.patch
			CMAKE_ARGS 
			   -DCMAKE_TOOLCHAIN_FILE=${TOOLCHAIN_FILE}
			   -DCMAKE_INSTALL_PREFIX=${ZLIB_INSTALL_DIR}
			   -DCMAKE_CXX_FLAGS=${CMAKE_CXX_FLAGS} 
			   -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS} 
			   -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
			   -DSDK_INSTALL_BINARY_PREFIX=${SDK_INSTALL_BINARY_PREFIX}
			   -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
			   ${USE_PROJECT_CMAKE_MODULE_PATH}
    )
    

    if(UNIX)
       set(ZLIB_NAME libz)
    else()
       set(ZLIB_NAME zlib)
    endif()
 
    add_library(zlib UNKNOWN IMPORTED)
    set_property(TARGET zlib PROPERTY IMPORTED_LOCATION ${ZLIB_LIBRARY_DIR}/${ZLIB_NAME}.${SUFFIX})

    #OpenSSL
    set(OPENSSL_SOURCE_DIR ${CMAKE_SOURCE_DIR}/openssl CACHE INTERNAL "openssl source dir")
    set(OPENSSL_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/openssl CACHE INTERNAL "openssl install dir")
    set(OPENSSL_INCLUDE_DIR ${OPENSSL_INSTALL_DIR}/include CACHE INTERNAL "openssl include dir")
    set(OPENSSL_LIBRARY_DIR ${OPENSSL_INSTALL_DIR}/lib/${SDK_INSTALL_BINARY_PREFIX}/${CMAKE_BUILD_TYPE} CACHE INTERNAL "openssl library dir")
    set(OPENSSL_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${ZLIB_INCLUDE_FLAGS} -fPIE" CACHE INTERNAL "openssl")
    set(OPENSSL_C_FLAGS "${CMAKE_C_FLAGS} ${ZLIB_INCLUDE_FLAGS} -fPIE" CACHE INTERNAL "openssl")
    set(OPENSSL_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fPIE -pie" CACHE INTERNAL "openssl")

    set( OPENSSL_INCLUDE_FLAGS "-isystem ${OPENSSL_INCLUDE_DIR} -isystem ${OPENSSL_INCLUDE_DIR}/openssl" CACHE INTERNAL "compiler flags to find openssl includes")
    set( OPENSSL_LINKER_FLAGS "-L${OPENSSL_LIBRARY_DIR}" CACHE INTERNAL "linker flags to find openssl")

    if(BUILD_SHARED_LIBS)
        set(OPENSSL_SHARED_FLAG "shared" CACHE INTERNAL "")
        set(OPENSSL_ZLIB_SHARED_FLAG "zlib zlib-shared" CACHE INTERNAL "")
    else()
        set(OPENSSL_SHARED_FLAG "no-shared" CACHE INTERNAL "")
        set(OPENSSL_ZLIB_SHARED_FLAG "zlib" CACHE INTERNAL "")     
    endif()

    ExternalProject_Add(OPENSSL
                        DEPENDS ZLIB
			SOURCE_DIR ${OPENSSL_SOURCE_DIR}
			URL http://www.openssl.org/source/openssl-1.0.2d.tar.gz
			URL_HASH "SHA256=671c36487785628a703374c652ad2cebea45fa920ae5681515df25d9f2c9a8c8"
			UPDATE_COMMAND cd ${CMAKE_SOURCE_DIR} && python android-build/configure_openssl_cmake.py 
			CMAKE_ARGS 
			   -DCMAKE_TOOLCHAIN_FILE=${TOOLCHAIN_FILE}
			   -DCMAKE_INSTALL_PREFIX=${OPENSSL_INSTALL_DIR}
			   -DCMAKE_CXX_FLAGS=${OPENSSL_CXX_FLAGS} 
			   -DCMAKE_C_FLAGS=${OPENSSL_C_FLAGS} 
			   -DCMAKE_EXE_LINKER_FLAGS=${OPENSSL_EXE_LINKER_FLAGS}
			   -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
                           -DSDK_INSTALL_BINARY_PREFIX=${SDK_INSTALL_BINARY_PREFIX}
			   -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
			   ${USE_PROJECT_CMAKE_MODULE_PATH}
			   )

    add_library(ssl UNKNOWN IMPORTED)
    set_property(TARGET ssl PROPERTY IMPORTED_LOCATION ${OPENSSL_LIBRARY_DIR}/libssl.${SUFFIX})
    add_library(crypto UNKNOWN IMPORTED)
    set_property(TARGET crypto PROPERTY IMPORTED_LOCATION ${OPENSSL_LIBRARY_DIR}/libcrypto.${SUFFIX})

    if(ENABLE_CURL_CLIENT)
        #curl
        set(CURL_SOURCE_DIR ${CMAKE_SOURCE_DIR}/curl CACHE INTERNAL "libcurl source dir")
        set(CURL_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/curl CACHE INTERNAL "libcurl install dir")
        set(CURL_INCLUDE_DIR ${CURL_INSTALL_DIR}/include CACHE INTERNAL "libcurl include dir")
        set(CURL_LIBRARY_DIR ${CURL_INSTALL_DIR}/lib/${SDK_INSTALL_BINARY_PREFIX}/${CMAKE_BUILD_TYPE} CACHE INTERNAL "libcurl library dir")

        #    required when using cmake 2.8.7, but invalid for later versions
        #    set( CURL_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "" )
        #    set( CURL_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "" )
        set( CURL_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS}" CACHE INTERNAL "" )
        set( CURL_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}" CACHE INTERNAL "" )

        set( CURL_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OPENSSL_INCLUDE_FLAGS} ${ZLIB_INCLUDE_FLAGS} -Wno-unused-value -fPIE ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "")
        set( CURL_C_FLAGS "${CMAKE_C_FLAGS}  ${OPENSSL_INCLUDE_FLAGS} ${ZLIB_INCLUDE_FLAGS} -Wno-unused-value -fPIE ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "")
        set( CURL_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fPIE -pie ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "" )

        if ( BUILD_SHARED_LIBS )
            set( CURL_STATICLIB OFF CACHE INTERNAL "" )
	    set( BUILD_CURL_EXE OFF CACHE INTERNAL "" )
        else()
            set( CURL_STATICLIB ON CACHE INTERNAL "" )
	    set( BUILD_CURL_EXE ON CACHE INTERNAL "" )
        endif()

        #todo: figure out a better way of doing this
        set( GIT_EXECUTABLE /usr/bin/git )

        ExternalProject_Add(CURL
            DEPENDS OPENSSL ZLIB 
	    SOURCE_DIR ${CURL_SOURCE_DIR}
	    GIT_REPOSITORY https://github.com/bagder/curl.git
	    GIT_TAG 38e0788  # 7.43.0
            PATCH_COMMAND patch lib/CMakeLists.txt < ${CMAKE_SOURCE_DIR}/android-build/patches/curl/lib/CMakeLists.patch && patch src/CMakeLists.txt < ${CMAKE_SOURCE_DIR}/android-build/patches/curl/src/CMakeLists.patch
	    CMAKE_ARGS
	    -C ${CMAKE_SOURCE_DIR}/android-build/CurlAndroidCrossCompile.cmake
	    -DCMAKE_TOOLCHAIN_FILE=${TOOLCHAIN_FILE}
	    -DCMAKE_INSTALL_PREFIX=${CURL_INSTALL_DIR}
	    -DCMAKE_CXX_FLAGS=${CURL_CXX_FLAGS}
	    -DCMAKE_C_FLAGS=${CURL_C_FLAGS}
	    -DCMAKE_STATIC_LINKER_FLAGS=${CURL_STATIC_LINKER_FLAGS}
	    -DCMAKE_SHARED_LINKER_FLAGS=${CURL_SHARED_LINKER_FLAGS}
	    -DCMAKE_EXE_LINKER_FLAGS=${CURL_EXE_LINKER_FLAGS}
	    -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
	    -DOPENSSL_ROOT_DIR=${OPENSSL_SOURCE_DIR}
	    -DOPENSSL_INCLUDE_DIR=${OPENSSL_INCLUDE_DIR}
	    -DCURL_STATICLIB=${CURL_STATICLIB}
	    -DBUILD_CURL_EXE=${BUILD_CURL_EXE}
	    -DBUILD_CURL_TESTS=OFF
            -DSDK_INSTALL_BINARY_PREFIX=${SDK_INSTALL_BINARY_PREFIX}
	    ${USE_PROJECT_CMAKE_MODULE_PATH}
	)

        add_library(curl UNKNOWN IMPORTED)
        set_property(TARGET curl PROPERTY IMPORTED_LOCATION ${CURL_LIBRARY_DIR}/libcurl.${SUFFIX})
    endif()
endif()

#release pdbs in windows
if(PLATFORM_WINDOWS)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
    set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
    set(CMAKE_STATIC_LINKER_FLAGS_RELEASE "${CMAKE_STATIC_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
endif()

# default libraries to link in per-platform
if(PLATFORM_WINDOWS)
    set(PLATFORM_DEP_LIBS Bcrypt Crypt32 Userenv )
elseif(PLATFORM_LINUX OR PLATFORM_APPLE)
    set(PLATFORM_DEP_LIBS ssl crypto pthread)
elseif(PLATFORM_ANDROID)
    set(PLATFORM_DEP_LIBS ssl crypto z log atomic)
endif()

# client-related libraries
if(ENABLE_CURL_CLIENT)
    if(PLATFORM_WINDOWS)
        set(CLIENT_LIBS ${CLIENT_LIBS} libcurl)
    else()
        set(CLIENT_LIBS ${CLIENT_LIBS} curl)
    endif()
endif()

if(ENABLE_WINDOWS_CLIENT)
    set(CLIENT_LIBS ${CLIENT_LIBS} Wininet winhttp)
endif()

set(GENERATE_VERSION_INFO 0)

#sdks
add_subdirectory(aws-cpp-sdk-core)
add_subdirectory(testing-resources)
add_subdirectory(aws-cpp-sdk-dynamodb)
add_subdirectory(aws-cpp-sdk-cognito-identity)
add_subdirectory(aws-cpp-sdk-identity-management)
add_subdirectory(aws-cpp-sdk-sqs)
add_subdirectory(aws-cpp-sdk-kinesis)
add_subdirectory(aws-cpp-sdk-lambda)
add_subdirectory(aws-cpp-sdk-s3)
add_subdirectory(aws-cpp-sdk-mobileanalytics)
add_subdirectory(aws-cpp-sdk-elasticloadbalancing)
add_subdirectory(aws-cpp-sdk-opsworks)
add_subdirectory(aws-cpp-sdk-cloudfront)
add_subdirectory(aws-cpp-sdk-kms)
add_subdirectory(aws-cpp-sdk-codedeploy)
add_subdirectory(aws-cpp-sdk-redshift)
add_subdirectory(aws-cpp-sdk-iam)
add_subdirectory(aws-cpp-sdk-ecs)
add_subdirectory(aws-cpp-sdk-datapipeline)
add_subdirectory(aws-cpp-sdk-glacier)
add_subdirectory(aws-cpp-sdk-logs)
add_subdirectory(aws-cpp-sdk-email)
add_subdirectory(aws-cpp-sdk-elasticache)
add_subdirectory(aws-cpp-sdk-elasticmapreduce)
add_subdirectory(aws-cpp-sdk-monitoring)
add_subdirectory(aws-cpp-sdk-cognito-sync)
add_subdirectory(aws-cpp-sdk-sdb)
add_subdirectory(aws-cpp-sdk-sts)
add_subdirectory(aws-cpp-sdk-elastictranscoder)
add_subdirectory(aws-cpp-sdk-sns)
add_subdirectory(aws-cpp-sdk-autoscaling)
add_subdirectory(aws-cpp-sdk-cloudformation)
add_subdirectory(aws-cpp-sdk-rds)
add_subdirectory(aws-cpp-sdk-access-management)
add_subdirectory(aws-cpp-sdk-transfer)
add_subdirectory(aws-cpp-sdk-queues)
# trying to compile EC2Client.cpp hangs linux/android, may need some kind of custom build settings to handle it
#add_subdirectory(aws-cpp-sdk-ec2)
add_subdirectory(aws-cpp-sdk-swf)

if(NOT PLATFORM_ANDROID)
    # the EventSeverity::DEBUG entry doesn't compile on android because DEBUG is #defined
    # ToDo: fix the client generator to map DEBUG to something else
    add_subdirectory(aws-cpp-sdk-elasticbeanstalk)
endif()

#testing
if(PLATFORM_ANDROID AND NOT BUILD_SHARED_LIBS)
    add_subdirectory(android-unified-tests)
else()
    add_subdirectory(aws-cpp-sdk-core-tests)
    add_subdirectory(aws-cpp-sdk-dynamodb-integration-tests)
    add_subdirectory(aws-cpp-sdk-cognitoidentity-integration-tests)
    add_subdirectory(aws-cpp-sdk-sqs-integration-tests)
    add_subdirectory(aws-cpp-sdk-lambda-integration-tests) 
    add_subdirectory(aws-cpp-sdk-s3-integration-tests)
    add_subdirectory(aws-cpp-sdk-identity-management-tests)
 #   add_subdirectory(aws-cpp-sdk-cloudfront-integration-tests)
    add_subdirectory(aws-cpp-sdk-transfer-tests)
 #   add_subdirectory(aws-cpp-sdk-redshift-integration-tests)

    if(PLATFORM_WINDOWS)
        add_subdirectory(aws-cpp-sdk-wininet-winhttp-test)
    endif()
endif()

if(BUILD_EXAMPLES)
    add_subdirectory(aws-cpp-sdk-example1)
endif()


set(CONFIG_INCLUDE_DIR "${CMAKE_INSTALL_PREFIX}/include")
set(CONFIG_LIB_DIRS "${CMAKE_INSTALL_PREFIX}/lib/${SDK_INSTALL_BINARY_PREFIX}/${CMAKE_BUILD_TYPE}")

configure_file(${PROJECT_SOURCE_DIR}/AWSSDKCPPConfig.cmake.in ${PROJECT_BINARY_DIR}/AWSSDKCPPConfig.cmake @ONLY)
install(FILES ${PROJECT_BINARY_DIR}/AWSSDKCPPConfig.cmake DESTINATION "share")
