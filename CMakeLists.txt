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
cmake_minimum_required (VERSION 2.8.12)

# git is required for Android builds and optional for all other platforms
find_package(Git)

# Cmake invocation variables:
#   CUSTOM_MEMORY_MANAGEMENT - if set to 1, generates the sdk project files with custom memory management enabled, otherwise disables it
#   BUILD_ONLY - a semi-colon delimited list, if this is set we will build only the projects listed. Core will always be built as will its unit tests.
#                    Also if a high level client is specified then we will build its dependencies as well. If a project has tests, the tests will be built.
#   REGENERATE_CLIENTS - all clients being built on this run will be regenerated from the api definitions, this option involves some setup of python, java 8, jdk 1.8, and maven
#   ADD_CUSTOM_CLIENTS - semi-colon delimited list of format serviceName=<yourserviceName>,version=<theVersionNumber>;serviceName2=<yourOtherServiceName>,version=<versionNumber2>
#                          to use these arguments, you should add the api definition .normal.json file for your service to the api-description folder in the generator.
#   NDK_DIR - directory where the android NDK is installed; if not set, the location will be read from the ANDROID_NDK environment variable
#   CUSTOM_PLATFORM_DIR - directory where custom platform scripts, modules, and source resides

# Settings to pull in an external, non-system install of Curl
# On platforms that by default build these libraries (Android), you must define these for both Curl and Openssl; partial building isn't supported
# CURL_INCLUDE_DIR "Location of curl header files" "")
# CURL_LIB_DIR "Location of curl library files" "")

# Settings to pull in an external, non-system install of Openssl
# On platforms that by default build these libraries (Android), you must define these for both Curl and Openssl; partial building isn't supported
# OPENSSL_INCLUDE_DIR "Location of openssl header files" "")
# OPENSSL_LIB_DIR "Location of openssl library files" "")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")
# TODO: convert boolean invocation variables to options
option(ENABLE_UNITY_BUILD "If enabled, the SDK will be built using a single unified .cpp file for each service library.  Reduces the size of static library binaries on Windows and Linux" OFF)
option(MINIMIZE_SIZE "If enabled, the SDK will be built via a unity aggregation process that results in smaller static libraries; additionally, release binaries will favor size optimizations over speed" OFF)
option(BUILD_SHARED_LIBS "If enabled, all aws sdk libraries will be build as shared objects; otherwise all Aws libraries will be built as static objects" ON)
option(FORCE_SHARED_CRT "If enabled, will unconditionally link the standard libraries in dynamically, otherwise the standard library will be linked in based on the BUILD_SHARED_LIBS setting" ON)
option(DISABLE_ANDROID_STANDALONE_BUILD "If enabled, the android build will not attempt to generate a standalone toolchain and instead rely on externally passed cmake parameters to specify the complete build environment.  The included toolchain file is still used." OFF)
option(SIMPLE_INSTALL "If enabled, removes all the additional indirection (platform/cpu/config) in the bin and lib directories on the install step" ON)
option(NO_HTTP_CLIENT "If enabled, no platform-default http client will be included in the library.  For the library to be used you will need to provide your own platform-specific implementation" OFF)
option(NO_ENCRYPTION "If enabled, no platform-default encryption will be included in the library.  For the library to be used you will need to provide your own platform-specific implementations" OFF)
option(ENABLE_RTTI "Flag to enable/disable rtti within the library" ON)
option(ENABLE_TESTING "Flag to enable/disable building unit and integration tests" ON)
set(BUILD_ONLY "" CACHE STRING "A semi-colon delimited list of the projects to build")
set(CPP_STANDARD "11" CACHE STRING "Flag to upgrade the C++ standard used. The default is 11. The minimum is 11.")

# backwards compatibility with old command line params
if("${STATIC_LINKING}" STREQUAL "1")
    SET(BUILD_SHARED_LIBS OFF)
endif()

if(MINIMIZE_SIZE)
    message(STATUS "MINIMIZE_SIZE enabled")
    SET(ENABLE_UNITY_BUILD ON) # MINIMIZE_SIZE always implies UNITY_BUILD
endif()

SET(PYTHON_CMD "python")

# ToDo: untangle platform and compiler specific logic.  Right now we have a lot of things checking platform that should be checking compiler
#
# Platform recognition
SET(PLATFORM_WINDOWS 0)
SET(PLATFORM_LINUX 0)
SET(PLATFORM_ANDROID 0)
SET(PLATFORM_APPLE 0)
SET(PLATFORM_CUSTOM 0)

if("${TARGET_ARCH}" STREQUAL "WINDOWS")
    SET(PLATFORM_WINDOWS 1)
elseif("${TARGET_ARCH}" STREQUAL "LINUX")
    SET(PLATFORM_LINUX 1)
elseif("${TARGET_ARCH}" STREQUAL "APPLE")
    SET(PLATFORM_APPLE 1)
elseif("${TARGET_ARCH}" STREQUAL "ANDROID")
    SET(PLATFORM_ANDROID 1)
    SET(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/toolchains/android.toolchain.cmake)
    if(NOT GIT_FOUND)
        message(FATAL "Unable to find git; git is required in order to build for Android")
    endif()
    # TODO: check for patch, it's required to build zlib/curl/openssl
    # TODO: check for sh, it's required to generate the standalone toolchains
elseif(TARGET_ARCH)
    SET(PLATFORM_CUSTOM 1)
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

if(PLATFORM_ANDROID)
    # minimum version of cmake that 
    #   (1) supports ExternalProject_Add URL_HASH
    #   (2) correctly extracts OPENSSL's version number from openssl/opensslv.h in version 1.0.2d
    cmake_minimum_required (VERSION 3.1.2)
else()
    cmake_minimum_required (VERSION 2.8.12)
endif()

if(PLATFORM_WINDOWS)
    message(STATUS "Generating windows build config")
    set(SDK_INSTALL_BINARY_PREFIX "windows")
    set(USE_WINDOWS_DLL_SEMANTICS 1)
elseif(PLATFORM_LINUX)
    message(STATUS "Generating linux build config")
    set(SDK_INSTALL_BINARY_PREFIX "linux")
elseif(PLATFORM_APPLE)
    message(STATUS "Generating Mac OSX/IOS build config")
    set(SDK_INSTALL_BINARY_PREFIX "mac")
elseif(PLATFORM_ANDROID)
    message(STATUS "Generating android build config")
    set(SDK_INSTALL_BINARY_PREFIX "android")

    # android-specific required overrrides
    set(CUSTOM_MEMORY_MANAGEMENT "1")
    set(ANDROID_STL_FORCE_FEATURES "OFF")

    # android-specific parameter defaults
    if(NOT ANDROID_ABI)
        set(ANDROID_ABI "armeabi-v7a")
        message(STATUS "Android ABI: none specified, defaulting to ${ANDROID_ABI}")
    else()
        message(STATUS "Android ABI: ${ANDROID_ABI}")
    endif()

    if(NOT ANDROID_TOOLCHAIN_NAME)
        set(ANDROID_TOOLCHAIN_NAME "standalone-clang")
	    message(STATUS "Android toolchain unspecified, defaulting to ${ANDROID_TOOLCHAIN_NAME}")
    endif()

    if(ANDROID_STL MATCHES "libc" OR NOT ANDROID_STL)
        if(FORCE_SHARED_CRT OR BUILD_SHARED_LIBS)
            SET(ANDROID_STL "libc++_shared" CACHE STRING "" FORCE)
        else()
            SET(ANDROID_STL "libc++_static" CACHE STRING "" FORCE)
        endif()

	    # API levels below 21 will not build with libc++
        string(REGEX REPLACE "android-(..?)" "\\1" EXTRACTED_API_LEVEL "${ANDROID_NATIVE_API_LEVEL}")
        if(NOT ANDROID_NATIVE_API_LEVEL OR EXTRACTED_API_LEVEL LESS "21")
	        message(STATUS "Libc++ requires setting API level to at least 21")
            set(ANDROID_NATIVE_API_LEVEL "android-21" CACHE STRING "" FORCE)
        endif()

        set(STANDALONE_TOOLCHAIN_STL "libc++")
    elseif(ANDROID_STL MATCHES "gnustl")
        if(FORCE_SHARED_CRT OR BUILD_SHARED_LIBS)
            SET(ANDROID_STL "gnustl_shared" CACHE STRING "" FORCE)
        else()
            SET(ANDROID_STL "gnustl_static" CACHE STRING "" FORCE)
        endif()

	    # With gnustl, API level can go as low as 3, but let's make a reasonably modern default
        if(NOT ANDROID_NATIVE_API_LEVEL)
            set(ANDROID_NATIVE_API_LEVEL "android-19") 
        endif()

        set(STANDALONE_TOOLCHAIN_STL "gnustl")
    else()
        message(FATAL_ERROR "Invalid value for ANDROID_STL: ${ANDROID_STL}")
    endif()

    message(STATUS "Android std lib: ${ANDROID_STL}")
    message(STATUS "Android API level: ${ANDROID_NATIVE_API_LEVEL}")

    # if not explicitly disabled, generate a standalone toolchain
    if(NOT DISABLE_ANDROID_STANDALONE_BUILD AND NOT ANDROID_STANDALONE_TOOLCHAIN)
        set(STANDALONE_TOOLCHAIN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/toolchains/android/${ANDROID_ABI}-${ANDROID_TOOLCHAIN_NAME}-${ANDROID_NATIVE_API_LEVEL}-${ANDROID_STL}")
        if( NOT EXISTS ${STANDALONE_TOOLCHAIN_DIR} )
            message(STATUS "Could not find an appropriate standalone toolchain.  Generating one into ${STANDALONE_TOOLCHAIN_DIR}")
            if( NOT NDK_DIR )
                set( NDK_DIR $ENV{ANDROID_NDK} )
            endif()

            if( NOT IS_DIRECTORY "${NDK_DIR}" )
                message(FATAL_ERROR "Could not find Android NDK (${NDK_DIR}); either set the ANDROID_NDK environment variable or pass the path in via -DNDK_DIR=..." )
            endif()

            if(CMAKE_HOST_WIN32)
                set(SH_VAR "sh")
            endif()

            #
            if(ANDROID_ABI MATCHES "armeabi")
                set(__TOOLCHAIN "arm-linux-androideabi-clang")
            elseif(ANDROID_ABI MATCHES "arm64")
                set(__TOOLCHAIN "aarch64-linux-android-clang")
            elseif(ANDROID_ABI MATCHES "x86_64")
                set(__TOOLCHAIN "x86_64-clang")
            elseif(ANDROID_ABI MATCHES "x86")
                set(__TOOLCHAIN "x86-clang")
            elseif(ANDROID_ABI MATCHES "mips64")
                set(__TOOLCHAIN "mips64el-linux-android-clang")
            elseif(ANDROID_ABI MATCHES "mips")
                set(__TOOLCHAIN "mipsel-linux-android-clang")
            else()
                message(FATAL, "Unable to map ANDROID_ABI value ${ANDROID_ABI} to a valid architecture for make-standalone-toolchain")
            endif()

            message(STATUS "standalone toolchain name: ${__TOOLCHAIN}")

            execute_process(
                COMMAND ${SH_VAR} ${NDK_DIR}/build/tools/make-standalone-toolchain.sh --ndk-dir=${NDK_DIR} --toolchain=${__TOOLCHAIN} --use-llvm --stl=${STANDALONE_TOOLCHAIN_STL} --platform=${ANDROID_NATIVE_API_LEVEL} --install-dir=${STANDALONE_TOOLCHAIN_DIR}
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            )
        else()
            message(STATUS "Using existing standalone toolchain located at ${STANDALONE_TOOLCHAIN_DIR}")
        endif()

        set(ANDROID_STANDALONE_TOOLCHAIN "${STANDALONE_TOOLCHAIN_DIR}")
    else()
        message(STATUS "Standalone toolchain disabled; this is not a well-supported option")
    endif()

    add_definitions("-DDISABLE_HOME_DIR_REDIRECT")

elseif(PLATFORM_CUSTOM)
    if(NOT CUSTOM_PLATFORM_DIR )
        message(FATAL_ERROR "Custom platforms require the CUSTOM_PLATFORM_DIR parameter to be set")
    endif()

    file(TO_CMAKE_PATH "${CUSTOM_PLATFORM_DIR}" __custom_platform_dir)
    if(NOT IS_DIRECTORY "${__custom_platform_dir}")
        message(FATAL_ERROR "${CUSTOM_PLATFORM_DIR} is not a valid directory for a custom platform")
    endif()

    set(__toolchain_file ${__custom_platform_dir}/${TARGET_ARCH}.toolchain.cmake)
    IF(NOT (EXISTS ${__toolchain_file}))
        message(FATAL "Custom architecture target ${TARGET_ARCH} requires a cmake toolchain file at: ${__toolchain_file}")
    endif()
    SET(CMAKE_TOOLCHAIN_FILE ${__toolchain_file})

    set(CUSTOM_PLATFORM_SOURCE_PATH "${__custom_platform_dir}/src")
    list(APPEND CMAKE_MODULE_PATH "${__custom_platform_dir}/modules")

    string(TOLOWER "${TARGET_ARCH}" __lower_arch)
    set(SDK_INSTALL_BINARY_PREFIX ${__lower_arch})
    include(${__custom_platform_dir}/${__lower_arch}_platform.cmake)

    message(STATUS "Generating ${__lower_arch} build config")
else()
    message(FATAL_ERROR "Unknown target platform.  How did this happen?")
endif()

if(BUILD_SHARED_LIBS)
    SET(ARCHIVE_DIRECTORY "bin")
    SET(LIBTYPE SHARED)
    if(PLATFORM_WINDOWS)
        SET(SUFFIX dll)
    elseif(PLATFORM_LINUX OR PLATFORM_ANDROID)
        SET(SUFFIX so)
    elseif(PLATFORM_APPLE)
        SET(SUFFIX dylib)
    endif()

    message(STATUS "Building AWS libraries as shared objects")
else()
    SET(ARCHIVE_DIRECTORY "lib")
    SET(LIBTYPE STATIC)
    if(PLATFORM_WINDOWS)
        SET(SUFFIX lib)
    elseif(PLATFORM_LINUX OR PLATFORM_ANDROID OR PLATFORM_APPLE)
        SET(SUFFIX a)
    endif()

    message(STATUS "Building AWS libraries as static objects")
endif()


# Http client control
# After this section runs, client availability is technically platform-independent (ie we use the client #defines rather than a mess of platform #defines)
# On Windows, set CURL_INCLUDE_DIR and CURL_LIB_DIR appropriately in order to enable the curl client
set(ENABLE_CURL_CLIENT 0)
set(ENABLE_WINDOWS_CLIENT 0)
if(NOT NO_HTTP_CLIENT)
    if(PLATFORM_WINDOWS)
        if(CURL_INCLUDE_DIR AND CURL_LIB_DIR)
            set(ENABLE_CURL_CLIENT 1)
        else()
            set(ENABLE_WINDOWS_CLIENT 1)
        endif()
    elseif(PLATFORM_LINUX OR PLATFORM_APPLE OR PLATFORM_ANDROID)
        set(ENABLE_CURL_CLIENT 1)
    endif()

    if(ENABLE_CURL_CLIENT)
        if(CURL_INCLUDE_DIR AND CURL_LIB_DIR)
            if(NOT IS_DIRECTORY "${CURL_INCLUDE_DIR}")
                message(FATAL_ERROR "Curl header location (${CURL_INCLUDE_DIR}) is not a valid directory")
            endif()

            if(NOT EXISTS "${CURL_INCLUDE_DIR}/curl/curl.h")
                message(FATAL_ERROR "Curl header location (${CURL_INCLUDE_DIR}) is an invalid curl installation")
            endif()

            if(NOT IS_DIRECTORY "${CURL_LIB_DIR}")
                message(FATAL_ERROR "Curl library location (${CURL_LIB_DIR}) is not a valid directory")
            endif()

            #TODO: platform-specific lib check

        elseif(PLATFORM_ANDROID)
            set(BUILD_CURL 1)
        endif()

        add_definitions(-DENABLE_CURL_CLIENT)
        message(STATUS "Http client: Curl")
        if(TEST_CERT_PATH)
            message(STATUS "Setting curl cert path to ${TEST_CERT_PATH}")
            add_definitions(-DTEST_CERT_PATH="\"${TEST_CERT_PATH}\"")
        endif()
    elseif(ENABLE_WINDOWS_CLIENT)
        add_definitions(-DENABLE_WINDOWS_CLIENT)
        message(STATUS "Http client: WinHttp")
    else()
        message(FATAL_ERROR "No http client available for target platform and client injection not enabled (-DNO_HTTP_CLIENT=ON)")
    endif()
else()
    message(STATUS "You will need to inject an http client implementation before making any http requests!")
endif()


# Encryption control
# After this section runs, the encryption implementation is technically platform-independent (ie we use the enable #defines rather than a mess of platform #defines)
set(ENABLE_BCRYPT_ENCRYPTION 0)
set(ENABLE_OPENSSL_ENCRYPTION 0)
set(ENABLE_COMMONCRYPTO_ENCRYPTION 0)
set(ENABLE_INJECTED_ENCRYPTION 0)
if(NOT NO_ENCRYPTION)
    if(PLATFORM_WINDOWS)
        set(ENABLE_BCRYPT_ENCRYPTION 1)
    elseif(PLATFORM_LINUX OR PLATFORM_ANDROID)
        set(ENABLE_OPENSSL_ENCRYPTION 1)
    elseif(PLATFORM_APPLE)
        set(ENABLE_COMMONCRYPTO_ENCRYPTION 1)
    else()
        message(FATAL_ERROR "No encryption available for target platform and injection not enabled (-DNO_ENCRYPTION=1)")
    endif()

    if(ENABLE_OPENSSL_ENCRYPTION)
        if(OPENSSL_INCLUDE_DIR AND OPENSSL_LIB_DIR)
            if(NOT IS_DIRECTORY "${OPENSSL_INCLUDE_DIR}")
                message(FATAL_ERROR "Openssl header location (${OPENSSL_INCLUDE_DIR}) is not a valid directory")
            endif()

            if(NOT EXISTS "${OPENSSL_INCLUDE_DIR}/openssl/opensslconf.h")
                message(FATAL_ERROR "Openssl header location (${OPENSSL_INCLUDE_DIR}) is an invalid openssl installation")
            endif()

            if(NOT IS_DIRECTORY "${OPENSSL_LIB_DIR}")
                message(FATAL_ERROR "Openssl library location (${OPENSSL_LIB_DIR}) is not a valid directory")
            endif()

            #TODO: platform-specific lib existence check

        elseif(PLATFORM_ANDROID)
            set(BUILD_OPENSSL 1)
        endif()
    endif()
else()
    set(ENABLE_INJECTED_ENCRYPTION 1)
endif()


if(ENABLE_BCRYPT_ENCRYPTION)
    add_definitions(-DENABLE_BCRYPT_ENCRYPTION)
    message(STATUS "Encryption: Bcrypt")
elseif(ENABLE_OPENSSL_ENCRYPTION)
    add_definitions(-DENABLE_OPENSSL_ENCRYPTION)
    message(STATUS "Encryption: Openssl")
elseif(ENABLE_COMMONCRYPTO_ENCRYPTION)
    add_definitions(-DENABLE_COMMONCRYPTO_ENCRYPTION)
    message(STATUS "Encryption: CommonCrypto")
elseif(ENABLE_INJECTED_ENCRYPTION)
    add_definitions(-DENABLE_INJECTED_ENCRYPTION)
    message(STATUS "Encryption: None")
    message(STATUS "You will need to inject an encryption implementation before making any http requests!")
endif()

# use response files to prevent command-line-too-big errors for large libraries like iam
SET(CMAKE_CXX_USE_RESPONSE_FILE_FOR_OBJECTS 1)
SET(CMAKE_CXX_USE_RESPONSE_FILE_FOR_INCLUDES 1)
SET(CMAKE_CXX_RESPONSE_FILE_LINK_FLAG "@")

project(aws-sdk-cpp-all)

if(PLATFORM_CUSTOM)
    apply_custom_post_toolchain_settings()
endif()

# install setup
# This install section must come after the initial "project(..)" declaration since that's when the compiler settings are discovered; prior to that CMAKE_SIZEOF_VOID_P is empty
# install syntax (after building): cmake -DCMAKE_INSTALL_CONFIG_NAME=<Release/Debug> -DCMAKE_INSTALL_PREFIX=<install_root> -P cmake_install.cmake
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

if((BUILD_CURL AND NOT BUILD_OPENSSL) OR (NOT BUILD_CURL AND BUILD_OPENSSL))
    message(FATAL_ERROR "Inconsistent external library import settings for a platform that requires both curl and openssl. \
                         Curl and Openssl must both either be external imports or internally built as part of the SDK.")
endif()

if(ENABLE_OPENSSL_ENCRYPTION AND OPENSSL_INCLUDE_DIR AND OPENSSL_LIB_DIR)
    include_directories(${OPENSSL_INCLUDE_DIR})
    link_directories(${OPENSSL_LIB_DIR})
endif()

if(ENABLE_CURL_CLIENT AND CURL_INCLUDE_DIR AND CURL_LIB_DIR)
    include_directories(${CURL_INCLUDE_DIR})
    link_directories(${CURL_LIB_DIR})
endif()

# Compiler recognition
SET(COMPILER_MSVC 0)
SET(COMPILER_GCC 0)

# ToDo: extend as necessary and remove common assumptions
if(MSVC)
    SET(COMPILER_MSVC 1)
else()
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        SET(COMPILER_CLANG 1)
    else()
        SET(COMPILER_GCC 1)
    endif()
    SET(USE_GCC_FLAGS 1)
endif()

# Based on the FORCE_SHARED_CRT and BUILD_SHARED_LIBS options, make sure our compile/link flags bring in the right CRT library
# modified from gtest's version; while only the else clause is actually necessary, do both for completeness/future-proofing
macro(set_msvc_crt_settings)
    if(COMPILER_MSVC)
        foreach (var
                 CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
                 CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
            if(BUILD_SHARED_LIBS OR FORCE_SHARED_CRT)
                string(REPLACE "/MT" "/MD" ${var} "${${var}}")
            else()
                string(REPLACE "/MD" "/MT" ${var} "${${var}}")
            endif()
        endforeach()
    endif()
endmacro()

set_msvc_crt_settings()


# cmake doesn't support maps, so we use list elements as key-value pairs; the ':' becomes a separator between key and value
set(C2J_LIST "")
list(APPEND C2J_LIST "acm:2015-12-08") 
list(APPEND C2J_LIST "apigateway:2015-07-09")
list(APPEND C2J_LIST "autoscaling:2011-01-01")
list(APPEND C2J_LIST "cloudformation:2010-05-15")
list(APPEND C2J_LIST "cloudfront:2016-01-28")
list(APPEND C2J_LIST "cloudhsm:2014-05-30")
list(APPEND C2J_LIST "cloudsearch:2013-01-01")
list(APPEND C2J_LIST "cloudsearchdomain:2013-01-01")
list(APPEND C2J_LIST "cloudtrail:2013-11-01")
list(APPEND C2J_LIST "codecommit:2015-04-13")
list(APPEND C2J_LIST "codedeploy:2014-10-06")
list(APPEND C2J_LIST "codepipeline:2015-07-09")
list(APPEND C2J_LIST "cognito-identity:2014-06-30")
list(APPEND C2J_LIST "cognito-sync:2014-06-30")
list(APPEND C2J_LIST "config:2014-11-12")
list(APPEND C2J_LIST "datapipeline:2012-10-29")
list(APPEND C2J_LIST "devicefarm:2015-06-23")
list(APPEND C2J_LIST "directconnect:2012-10-25")
list(APPEND C2J_LIST "dms:2016-01-01")
list(APPEND C2J_LIST "ds:2015-04-16")
list(APPEND C2J_LIST "dynamodb:2012-08-10")
if(NOT PLATFORM_ANDROID OR NOT CMAKE_HOST_WIN32)  # ec2 isn't building for android on windows atm due to an internal compiler error, TODO: investigate further
    list(APPEND C2J_LIST "ec2:2015-10-01")
endif()
list(APPEND C2J_LIST "ecr:2015-09-21")
list(APPEND C2J_LIST "ecs:2014-11-13")
list(APPEND C2J_LIST "elasticache:2015-02-02")
list(APPEND C2J_LIST "elasticbeanstalk:2010-12-01")
list(APPEND C2J_LIST "elasticfilesystem:2015-02-01")
list(APPEND C2J_LIST "elasticloadbalancing:2012-06-01")
list(APPEND C2J_LIST "elasticmapreduce:2009-03-31")
list(APPEND C2J_LIST "elastictranscoder:2012-09-25")
list(APPEND C2J_LIST "email:2010-12-01")
list(APPEND C2J_LIST "es:2015-01-01")
list(APPEND C2J_LIST "events:2015-10-07")
list(APPEND C2J_LIST "firehose:2015-08-04")
list(APPEND C2J_LIST "gamelift:2015-10-01")
list(APPEND C2J_LIST "glacier:2012-06-01")
list(APPEND C2J_LIST "iam:2010-05-08")
list(APPEND C2J_LIST "importexport:2010-06-01")
list(APPEND C2J_LIST "inspector:2015-08-18")
list(APPEND C2J_LIST "iot:2015-05-28")
list(APPEND C2J_LIST "kinesis:2013-12-02")
list(APPEND C2J_LIST "kms:2014-11-01")
list(APPEND C2J_LIST "lambda:2015-03-31")
list(APPEND C2J_LIST "logs:2014-03-28")
list(APPEND C2J_LIST "machinelearning:2014-12-12")
list(APPEND C2J_LIST "marketplacecommerceanalytics:2015-07-01")
list(APPEND C2J_LIST "meteringmarketplace:2016-01-14")
list(APPEND C2J_LIST "mobileanalytics:2014-06-05")
list(APPEND C2J_LIST "monitoring:2010-08-01")
list(APPEND C2J_LIST "opsworks:2013-02-18")
list(APPEND C2J_LIST "rds:2014-10-31")
list(APPEND C2J_LIST "redshift:2012-12-01")
list(APPEND C2J_LIST "route53:2013-04-01")
list(APPEND C2J_LIST "route53domains:2014-05-15")
list(APPEND C2J_LIST "s3:2006-03-01")
list(APPEND C2J_LIST "sdb:2009-04-15")
list(APPEND C2J_LIST "sns:2010-03-31")
list(APPEND C2J_LIST "sqs:2012-11-05")
list(APPEND C2J_LIST "ssm:2014-11-06")
list(APPEND C2J_LIST "storagegateway:2013-06-30")
list(APPEND C2J_LIST "sts:2011-06-15")
list(APPEND C2J_LIST "support:2013-04-15")
list(APPEND C2J_LIST "swf:2012-01-25")
list(APPEND C2J_LIST "waf:2015-08-24")
list(APPEND C2J_LIST "workspaces:2015-04-08")
list(APPEND C2J_LIST "cognito-idp:2016-04-18")
list(APPEND C2J_LIST "application-autoscaling:2016-02-06")
list(APPEND C2J_LIST "servicecatalog:2015-12-10")

set(SDK_TEST_PROJECT_LIST "")
list(APPEND SDK_TEST_PROJECT_LIST "cognito-identity:aws-cpp-sdk-cognitoidentity-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "dynamodb:aws-cpp-sdk-dynamodb-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "identity-management:aws-cpp-sdk-identity-management-tests")
list(APPEND SDK_TEST_PROJECT_LIST "lambda:aws-cpp-sdk-lambda-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "s3:aws-cpp-sdk-s3-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "sqs:aws-cpp-sdk-sqs-integration-tests")
list(APPEND SDK_TEST_PROJECT_LIST "transfer:aws-cpp-sdk-transfer-tests")

set(SDK_DEPENDENCY_LIST "")
list(APPEND SDK_DEPENDENCY_LIST "access-management:iam")
list(APPEND SDK_DEPENDENCY_LIST "identity-management:cognito-identity")
list(APPEND SDK_DEPENDENCY_LIST "queues:sqs")
list(APPEND SDK_DEPENDENCY_LIST "transfer:s3")

set(TEST_DEPENDENCY_LIST "")
list(APPEND TEST_DEPENDENCY_LIST "identity-management:cognito-identity")
list(APPEND TEST_DEPENDENCY_LIST "lambda:access-management,cognito-identity,iam,kinesis")
list(APPEND TEST_DEPENDENCY_LIST "sqs:access-management,cognito-identity,iam")
list(APPEND TEST_DEPENDENCY_LIST "transfer:s3")

# make a list of the generated clients
set(GENERATED_SERVICE_LIST "")
foreach(GENERATED_C2J_SERVICE IN LISTS C2J_LIST)
    STRING(REGEX REPLACE "([^:]+):.*" "\\1" SERVICE_RESULT ${GENERATED_C2J_SERVICE})
    list(APPEND GENERATED_SERVICE_LIST ${SERVICE_RESULT})
endforeach()

# helper function that that gives primitive map functionality by treating a colon as the key-value separator, while the list semi-colon separates pairs
# to use, pass the list-map in as a third parameter (see helper functions below)
function(get_map_element KEY VALUE_VAR)
    foreach(ELEMENT_PAIR ${ARGN})
        STRING(REGEX REPLACE "([^:]+):.*" "\\1" KEY_RESULT ${ELEMENT_PAIR})
        if(${KEY_RESULT} STREQUAL ${KEY} )
            STRING(REGEX REPLACE "[^:]+:(.*)" "\\1" VALUE_RESULT ${ELEMENT_PAIR})
            set(${VALUE_VAR} "${VALUE_RESULT}" PARENT_SCOPE)
            return()
        endif()
    endforeach()
    set(${VALUE_VAR} "" PARENT_SCOPE)
endfunction(get_map_element)

# a bunch of key-value retrieval functions for the list-maps we defined above
function(get_c2j_date_for_service SERVICE_NAME C2J_DATE_VAR)
    get_map_element(${SERVICE_NAME} TEMP_VAR ${C2J_LIST})
    set(${C2J_DATE_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

function(get_test_project_for_service SERVICE_NAME TEST_PROJECT_NAME_VAR)
    get_map_element(${SERVICE_NAME} TEMP_VAR ${SDK_TEST_PROJECT_LIST})
    set(${TEST_PROJECT_NAME_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

function(get_dependencies_for_sdk PROJECT_NAME DEPENDENCY_LIST_VAR)
    get_map_element(${PROJECT_NAME} TEMP_VAR ${SDK_DEPENDENCY_LIST})
    set(${DEPENDENCY_LIST_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

function(get_dependencies_for_test TEST_NAME DEPENDENCY_LIST_VAR)
    get_map_element(${TEST_NAME} TEMP_VAR ${TEST_DEPENDENCY_LIST})
    set(${DEPENDENCY_LIST_VAR} "${TEMP_VAR}" PARENT_SCOPE)
endfunction()

# returns all sdks, including itself, that depend on the supplied sdk
function(get_sdks_depending_on SDK_NAME DEPENDING_SDKS_VAR)
    set(TEMP_SDK_LIST "${SDK_NAME}")
    foreach(SDK_DEP ${SDK_DEPENDENCY_LIST})
        STRING(REGEX REPLACE "([^:]+):.*" "\\1" KEY_RESULT ${SDK_DEP})
        STRING(REGEX REPLACE "[^:]+:(.*)" "\\1" VALUE_RESULT ${SDK_DEP})
        STRING(REPLACE "," ";" LIST_RESULT ${VALUE_RESULT})
        list(FIND LIST_RESULT ${SDK_NAME} FIND_INDEX)
        if(FIND_INDEX GREATER -1)
            list(APPEND TEMP_SDK_LIST ${KEY_RESULT})
        endif()
    endforeach()

    SET(${DEPENDING_SDKS_VAR} "${TEMP_SDK_LIST}" PARENT_SCOPE)
endfunction()

# when building a fixed target set, missing SDKs are an error
# when building "everything", we forgive missing SDKs; should this become an option instead?
if(BUILD_ONLY)
    set(SDK_BUILD_LIST ${BUILD_ONLY})

    foreach(TARGET IN LISTS BUILD_ONLY)
        message(STATUS "Considering ${TARGET}")
        get_dependencies_for_sdk(${TARGET} DEPENDENCY_LIST)
        if(DEPENDENCY_LIST)
            STRING(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
            foreach(DEPENDENCY IN LISTS LIST_RESULT)
                list(APPEND SDK_BUILD_LIST ${DEPENDENCY})
            endforeach()
        endif()

        get_dependencies_for_test(${TARGET} DEPENDENCY_LIST)
        if(DEPENDENCY_LIST)
            STRING(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
            foreach(DEPENDENCY IN LISTS LIST_RESULT)
                list(APPEND SDK_BUILD_LIST ${DEPENDENCY})
            endforeach()
        endif()
    endforeach()

    LIST(REMOVE_DUPLICATES SDK_BUILD_LIST)

    # make sure all the sdks/c2js are present; a missing sdk-directory or c2j file is a build error when building a manually-specified set
    foreach(SDK IN LISTS SDK_BUILD_LIST)
        SET(SDK_DIR "aws-cpp-sdk-${SDK}")
        if(NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${SDK_DIR}")
            message(FATAL "${SDK} is required for build, but ${SDK_DIR} directory is missing!")
        endif()

        get_c2j_date_for_service(${SDK} SDK_C2J_DATE)
        SET(SDK_C2J_FILE "${CMAKE_CURRENT_SOURCE_DIR}/code-generation/api-descriptions/${SDK}-${SDK_C2J_DATE}.normal.json")
        if(REGENERATE_CLIENTS AND SDK_C2J_DATE AND NOT (EXISTS ${SDK_C2J_FILE}))
            message(FATAL "${SDK} is required for build, but C2J file '${SDK_C2J_FILE}' is missing!")
        endif()
    endforeach()
else()
    set(TEMP_SDK_BUILD_LIST ${GENERATED_SERVICE_LIST})
    list(APPEND TEMP_SDK_BUILD_LIST "access-management")
    list(APPEND TEMP_SDK_BUILD_LIST "identity-management")
    list(APPEND TEMP_SDK_BUILD_LIST "queues")
    list(APPEND TEMP_SDK_BUILD_LIST "transfer")

    set(SDK_BUILD_LIST ${TEMP_SDK_BUILD_LIST})

    # remove any missing targets from the build list, factoring in dependencies appropriately
    foreach(SDK IN LISTS TEMP_SDK_BUILD_LIST)
        SET(REMOVE_SDK 0)

        get_c2j_date_for_service(${SDK} SDK_C2J_DATE)
        SET(SDK_C2J_FILE "${CMAKE_CURRENT_SOURCE_DIR}/code-generation/api-descriptions/${SDK}-${SDK_C2J_DATE}.normal.json")
        if(REGENERATE_CLIENTS AND SDK_C2J_DATE AND NOT (EXISTS ${SDK_C2J_FILE}))
            SET(REMOVE_SDK 1)
        endif()

        SET(SDK_DIR "aws-cpp-sdk-${SDK}")
        if(NOT REGENERATE_CLIENTS OR NOT SDK_C2J_DATE)
            if(NOT IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${SDK_DIR}")
                SET(REMOVE_SDK 1)
            endif()
        endif()

        if(REMOVE_SDK)
            get_sdks_depending_on(${SDK} REMOVE_LIST)
            foreach(REMOVE_SDK IN LISTS REMOVE_LIST)
                list(REMOVE_ITEM SDK_BUILD_LIST ${REMOVE_SDK})
            endforeach()
        endif()
    endforeach()
endif()

# SDK_BUILD_LIST is now a list of present SDKs that can be processed unconditionally

if(ADD_CUSTOM_CLIENTS OR REGENERATE_CLIENTS)
    execute_process(
        COMMAND ${PYTHON_CMD} scripts/generate_sdks.py --prepareTools
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )
endif()

if(REGENERATE_CLIENTS)
    message(STATUS "Regenerating clients that have been selected for build.")

    execute_process( COMMAND ${PYTHON_CMD} scripts/wipe_generated_code.py  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )

    foreach(SDK IN LISTS SDK_BUILD_LIST)
        get_c2j_date_for_service(${SDK} C2J_DATE)
        if(C2J_DATE)
            execute_process(
                COMMAND ${PYTHON_CMD} scripts/generate_sdks.py --serviceName ${SDK} --apiVersion ${C2J_DATE} --outputLocation ./
                WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            )
        endif()
    endforeach()
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

# this function is based on the unity build function described at: https://cheind.wordpress.com/2009/12/10/reducing-compilation-time-unity-builds/
function(enable_unity_build UNITY_SUFFIX SOURCE_FILES)
    set(files ${${SOURCE_FILES}})

    # Generate a unique filename for the unity build translation unit
    set(unity_build_file ${CMAKE_CURRENT_BINARY_DIR}/ub_${UNITY_SUFFIX}.cpp)

    # Exclude all translation units from compilation
    set_source_files_properties(${files} PROPERTIES HEADER_FILE_ONLY true)

    # Open the ub file
    FILE(WRITE ${unity_build_file} "// Unity Build generated by CMake\n")

    # Add include statement for each translation unit
    foreach(source_file ${files} )
        FILE( APPEND ${unity_build_file} "#include <${source_file}>\n")
    endforeach(source_file)

    # Complement list of translation units with the name of ub
    set(${SOURCE_FILES} ${${SOURCE_FILES}} ${unity_build_file} PARENT_SCOPE)
endfunction(enable_unity_build)


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

# cmake warnings
if(MSVC)
    #remove bogus errors at generation time if these variables haven't been manually set
    if(NOT CMAKE_CONFIGURATION_TYPES)
        set(CMAKE_CONFIGURATION_TYPES "Debug;Release;MinSizeRel;RelWithDebInfo")
    endif()
    
    if(NOT CMAKE_CXX_FLAGS_DEBUGOPT)
        set(CMAKE_CXX_FLAGS_DEBUGOPT "")
    endif()

    if(NOT CMAKE_EXE_LINKER_FLAGS_DEBUGOPT)
        set(CMAKE_EXE_LINKER_FLAGS_DEBUGOPT "")
    endif()

    if(NOT CMAKE_SHARED_LINKER_FLAGS_DEBUGOPT)
        set(CMAKE_SHARED_LINKER_FLAGS_DEBUGOPT "")
    endif()
endif()

# compiler warning control
if(PLATFORM_WINDOWS)
    if(MSVC)
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
elseif(USE_GCC_FLAGS)
    # max warning level, warnings are errors, turn off unused private field. We have one for an empty class.    
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -pedantic -Wextra")

    if(COMPILER_CLANG)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-private-field")
        if(PLATFORM_ANDROID AND ANDROID_ABI MATCHES "mips*")
            string(REGEX REPLACE "-finline-functions" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
        endif()
    endif()
endif()

# other compiler flags
if(MSVC)
    # some of the clients are exceeding the 16-bit code section limit when building x64 debug, so use /bigobj when we build
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")

    if(NOT ENABLE_RTTI)
        string(REGEX REPLACE "/GR " " " CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GR-")
    endif()

    # special windows build options:
    #   debug info: pdbs with dlls, embedded in static libs
    #   release optimisations to purely focus on size, override debug info settings as necessary
    if(BUILD_SHARED_LIBS)
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
        set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
    else()
        if(CMAKE_CXX_FLAGS MATCHES "/Zi")
            string(REGEX REPLACE "/Zi" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
        endif()
        if(CMAKE_CXX_FLAGS_DEBUG MATCHES "/Zi")
            message(STATUS "Clearing pdb setting")
            string(REGEX REPLACE "/Zi" "" CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
        endif()

        # put Z7 in config-specific flags so we can strip from release if we're concerned about size
        set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Z7")
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Z7")
    endif()

    if(MINIMIZE_SIZE)
        # strip debug info from release
        string(REGEX REPLACE "/Z[a-zA-Z0-9]" "" CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
        string(REGEX REPLACE "/DEBUG" "" CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE}")

        # strip optimization settings and replace with
        string(REGEX REPLACE "/O[a-zA-Z0-9]*" "" CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")

        # pure size flags
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /O1 /Ob0 /Os")
    endif()
elseif(USE_GCC_FLAGS)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions")

    if(NOT BUILD_SHARED_LIBS)
        SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
    endif()

    if(MINIMIZE_SIZE)
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")
    endif()
endif()

set(CORE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/aws-cpp-sdk-core/")

# The NDK does not provide any http or crypto functionality out of the box; we build versions of zlib, openssl, and curl to account for this.
if(BUILD_CURL OR BUILD_OPENSSL)
    include(ExternalProject)

    set(EXTERNAL_CXX_FLAGS "-Wno-unused-private-field")
    set(EXTERNAL_C_FLAGS "")

    set(BASE_SDK_DIR ${CMAKE_SOURCE_DIR} CACHE STRING "Android build" FORCE)
    set(EXTERNAL_PROJECTS_DIR ${CMAKE_SOURCE_DIR}/external CACHE STRING "Android build" FORCE)

    # we patch the install process for each dependency to match what we need for 3rd party installation
    set(EXTERNAL_INSTALL_DIR ${CMAKE_SOURCE_DIR}/external)

    set(ZLIB_SOURCE_DIR ${CMAKE_SOURCE_DIR}/zlib CACHE INTERNAL "zlib source dir")
    set(ZLIB_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/zlib CACHE INTERNAL "zlib install dir")
    set(ZLIB_INCLUDE_DIR ${ZLIB_INSTALL_DIR}/include/zlib CACHE INTERNAL "zlib include dir")
    set(ZLIB_LIBRARY_DIR ${ZLIB_INSTALL_DIR}/lib/${SDK_INSTALL_BINARY_PREFIX}/${CMAKE_BUILD_TYPE} CACHE INTERNAL "zlib library dir")
    #set(ZLIB_DEFINES "-msse2 -mfpmath=sse" CACHE INTERNAL "zlib defines")

    set( ZLIB_INCLUDE_FLAGS "-isystem ${ZLIB_INCLUDE_DIR}" CACHE INTERNAL "compiler flags to find zlib includes")
    set( ZLIB_LINKER_FLAGS "-L${ZLIB_LIBRARY_DIR}" CACHE INTERNAL "linker flags to find zlib")

    #zlib
    #based on http://stackoverflow.com/questions/16842218/how-to-use-cmake-externalproject-add-or-alternatives-in-a-cross-platform-way
    #likely, some of the things here are unnecessary
    ExternalProject_Add(ZLIB
        SOURCE_DIR ${ZLIB_SOURCE_DIR}
        URL http://zlib.net/zlib-1.2.8.tar.gz
        URL_HASH "SHA256=36658cb768a54c1d4dec43c3116c27ed893e88b02ecfcb44f2166f9c0b7f2a0d"
        PATCH_COMMAND patch CMakeLists.txt < ${CMAKE_SOURCE_DIR}/android-build/patches/zlib/CMakeLists.patch
        CMAKE_ARGS
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DANDROID_NATIVE_API_LEVEL=${ANDROID_NATIVE_API_LEVEL}
        -DANDROID_ABI=${ANDROID_ABI}
        -DANDROID_TOOLCHAIN_NAME=${ANDROID_TOOLCHAIN_NAME}
        -DANDROID_STANDALONE_TOOLCHAIN=${ANDROID_STANDALONE_TOOLCHAIN}
        -DANDROID_STL=${ANDROID_STL}
        -DCMAKE_INSTALL_PREFIX=${ZLIB_INSTALL_DIR}
        -DCMAKE_CXX_FLAGS=${EXTERNAL_CXX_FLAGS}
        -DCMAKE_C_FLAGS=${EXTERNAL_C_FLAGS}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DSDK_INSTALL_BINARY_PREFIX=${SDK_INSTALL_BINARY_PREFIX}
        -DBUILD_SHARED_LIBS=0
        )

    if(UNIX)
        set(ZLIB_NAME libz)
    else()
        set(ZLIB_NAME zlib)
    endif()

    add_library(zlib UNKNOWN IMPORTED)
    set_property(TARGET zlib PROPERTY IMPORTED_LOCATION ${ZLIB_LIBRARY_DIR}/${ZLIB_NAME}.a)

    #OpenSSL
    set(OPENSSL_SOURCE_DIR ${CMAKE_SOURCE_DIR}/openssl CACHE INTERNAL "openssl source dir")
    set(OPENSSL_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/openssl CACHE INTERNAL "openssl install dir")
    set(OPENSSL_INCLUDE_DIR ${OPENSSL_INSTALL_DIR}/include CACHE INTERNAL "openssl include dir")
    set(OPENSSL_LIBRARY_DIR ${OPENSSL_INSTALL_DIR}/lib/${SDK_INSTALL_BINARY_PREFIX}/${CMAKE_BUILD_TYPE} CACHE INTERNAL "openssl library dir")
    set(OPENSSL_CXX_FLAGS "${EXTERNAL_CXX_FLAGS} ${ZLIB_INCLUDE_FLAGS} -fPIE" CACHE INTERNAL "openssl")
    set(OPENSSL_C_FLAGS "${EXTERNAL_C_FLAGS} ${ZLIB_INCLUDE_FLAGS} -fPIE" CACHE INTERNAL "openssl")
    set(OPENSSL_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fPIE -pie" CACHE INTERNAL "openssl")

    set(OPENSSL_INCLUDE_FLAGS "-isystem ${OPENSSL_INCLUDE_DIR} -isystem ${OPENSSL_INCLUDE_DIR}/openssl" CACHE INTERNAL "compiler flags to find openssl includes")
    set(OPENSSL_LINKER_FLAGS "-L${OPENSSL_LIBRARY_DIR}" CACHE INTERNAL "linker flags to find openssl")

    ExternalProject_Add(OPENSSL
        DEPENDS ZLIB
        SOURCE_DIR ${OPENSSL_SOURCE_DIR}
        GIT_REPOSITORY https://github.com/openssl/openssl.git
        GIT_TAG 902f3f50d051dfd6ebf009d352aaf581195caabf # 1.0.2g
        UPDATE_COMMAND cd ${CMAKE_SOURCE_DIR} && python android-build/configure_openssl_cmake.py
        CMAKE_ARGS
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DANDROID_NATIVE_API_LEVEL=${ANDROID_NATIVE_API_LEVEL}
        -DANDROID_ABI=${ANDROID_ABI}
        -DANDROID_TOOLCHAIN_NAME=${ANDROID_TOOLCHAIN_NAME}
        -DANDROID_STANDALONE_TOOLCHAIN=${ANDROID_STANDALONE_TOOLCHAIN}
        -DANDROID_STL=${ANDROID_STL}
        -DCMAKE_INSTALL_PREFIX=${OPENSSL_INSTALL_DIR}
        -DCMAKE_CXX_FLAGS=${OPENSSL_CXX_FLAGS}
        -DCMAKE_C_FLAGS=${OPENSSL_C_FLAGS}
        -DCMAKE_EXE_LINKER_FLAGS=${OPENSSL_EXE_LINKER_FLAGS}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DSDK_INSTALL_BINARY_PREFIX=${SDK_INSTALL_BINARY_PREFIX}
        -DBUILD_SHARED_LIBS=0
        )

    add_library(ssl UNKNOWN IMPORTED)
    set_property(TARGET ssl PROPERTY IMPORTED_LOCATION ${OPENSSL_LIBRARY_DIR}/libssl.a)
    add_library(crypto UNKNOWN IMPORTED)
    set_property(TARGET crypto PROPERTY IMPORTED_LOCATION ${OPENSSL_LIBRARY_DIR}/libcrypto.a)

    #curl
    set(CURL_SOURCE_DIR ${CMAKE_SOURCE_DIR}/curl CACHE INTERNAL "libcurl source dir")
    set(CURL_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/curl CACHE INTERNAL "libcurl install dir")
    set(CURL_INCLUDE_DIR ${CURL_INSTALL_DIR}/include CACHE INTERNAL "libcurl include dir")
    set(CURL_LIBRARY_DIR ${CURL_INSTALL_DIR}/lib/${SDK_INSTALL_BINARY_PREFIX}/${CMAKE_BUILD_TYPE} CACHE INTERNAL "libcurl library dir")

    set( CURL_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS}" CACHE INTERNAL "" )
    set( CURL_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}" CACHE INTERNAL "" )

    set( CURL_CXX_FLAGS "${EXTERNAL_CXX_FLAGS} ${OPENSSL_INCLUDE_FLAGS} ${ZLIB_INCLUDE_FLAGS} -Wno-unused-value -fPIE ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "")
    set( CURL_C_FLAGS "${EXTERNAL_C_FLAGS}  ${OPENSSL_INCLUDE_FLAGS} ${ZLIB_INCLUDE_FLAGS} -Wno-unused-value -fPIE ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "")
    set( CURL_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fPIE -pie ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "" )

    ExternalProject_Add(CURL
            DEPENDS ZLIB OPENSSL
            SOURCE_DIR ${CURL_SOURCE_DIR}
            GIT_REPOSITORY https://github.com/bagder/curl.git
            GIT_TAG 9819cec61b00cc872136ea5faf469627b3b87e69  # 7.48.0
            UPDATE_COMMAND ""
            PATCH_COMMAND patch lib/CMakeLists.txt < ${CMAKE_SOURCE_DIR}/android-build/patches/curl/lib/CMakeLists.patch && patch src/CMakeLists.txt < ${CMAKE_SOURCE_DIR}/android-build/patches/curl/src/CMakeLists.patch
            CMAKE_ARGS
            -C ${CMAKE_SOURCE_DIR}/android-build/CurlAndroidCrossCompile.cmake
            -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
            -DANDROID_NATIVE_API_LEVEL=${ANDROID_NATIVE_API_LEVEL}
            -DANDROID_ABI=${ANDROID_ABI}
            -DANDROID_TOOLCHAIN_NAME=${ANDROID_TOOLCHAIN_NAME}
            -DANDROID_STANDALONE_TOOLCHAIN=${ANDROID_STANDALONE_TOOLCHAIN}
            -DANDROID_STL=${ANDROID_STL}
            -DCMAKE_INSTALL_PREFIX=${CURL_INSTALL_DIR}
            -DCMAKE_CXX_FLAGS=${CURL_CXX_FLAGS}
            -DCMAKE_C_FLAGS=${CURL_C_FLAGS}
            -DCMAKE_STATIC_LINKER_FLAGS=${CURL_STATIC_LINKER_FLAGS}
            -DCMAKE_SHARED_LINKER_FLAGS=${CURL_SHARED_LINKER_FLAGS}
            -DCMAKE_EXE_LINKER_FLAGS=${CURL_EXE_LINKER_FLAGS}
            -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
            -DOPENSSL_ROOT_DIR=${OPENSSL_SOURCE_DIR}
            -DOPENSSL_INCLUDE_DIR=${OPENSSL_INCLUDE_DIR}
            -DCURL_STATICLIB=ON
            -DBUILD_CURL_EXE=ON
            -DBUILD_CURL_TESTS=OFF
            -DSDK_INSTALL_BINARY_PREFIX=${SDK_INSTALL_BINARY_PREFIX}
            )

    add_library(curl UNKNOWN IMPORTED)
    set_property(TARGET curl PROPERTY IMPORTED_LOCATION ${CURL_LIBRARY_DIR}/libcurl.a)
endif()

if(USE_WINDOWS_DLL_SEMANTICS)
    if(BUILD_SHARED_LIBS)
        add_definitions("-DUSE_IMPORT_EXPORT")
    endif()

    add_definitions(-DUSE_WINDOWS_DLL_SEMANTICS)
endif()

# default libraries to link in per-platform
if(PLATFORM_WINDOWS)
    set(PLATFORM_DEP_LIBS Userenv Rpcrt4)
elseif(PLATFORM_LINUX)
    set(PLATFORM_DEP_LIBS pthread uuid)
elseif(PLATFORM_APPLE)
    set(PLATFORM_DEP_LIBS pthread)
elseif(PLATFORM_ANDROID)
    set(PLATFORM_DEP_LIBS log atomic)
endif()

# encryption related libraries
if(ENABLE_BCRYPT_ENCRYPTION)
    set(CRYPTO_LIBS Bcrypt)
elseif(ENABLE_OPENSSL_ENCRYPTION)
    set(CRYPTO_LIBS ssl crypto z )
endif()

# client-related libraries
if(ENABLE_CURL_CLIENT)
    if(PLATFORM_WINDOWS)
        set(CLIENT_LIBS ${CLIENT_LIBS} libcurl)
    else()
        set(CLIENT_LIBS ${CLIENT_LIBS} curl)
    endif()
elseif(ENABLE_WINDOWS_CLIENT)
    set(CLIENT_LIBS ${CLIENT_LIBS} Wininet winhttp)
endif()

LIST(APPEND EXPORTS "")

if(PLATFORM_CUSTOM)
    apply_custom_platform_settings()
endif()

#sdks
add_subdirectory(aws-cpp-sdk-core)
LIST(APPEND EXPORTS "aws-cpp-sdk-core")

foreach(SDK IN LISTS SDK_BUILD_LIST)
    SET(SDK_DIR "aws-cpp-sdk-${SDK}")
    add_subdirectory("${SDK_DIR}")
    LIST(APPEND EXPORTS "${SDK_DIR}")
endforeach()

#at this point, if user has specified some customized clients, generate them and add them to the build here.
foreach(custom_client ${ADD_CUSTOM_CLIENTS})
    message(STATUS "${custom_client}")
    STRING(REGEX MATCHALL "serviceName=(.*), ?version=(.*)" CLIENT_MATCHES "${custom_client}")
    SET(C_LEN 0)
    LIST(LENGTH CLIENT_MATCHES C_LEN)
    if(CMAKE_MATCH_COUNT GREATER 0)
        SET(C_SERVICE_NAME ${CMAKE_MATCH_1})
        SET(C_VERSION ${CMAKE_MATCH_2})
        message(STATUS "generating client for ${C_SERVICE_NAME} version ${C_VERSION}")
        execute_process(
            COMMAND ${PYTHON_CMD} scripts/generate_sdks.py --serviceName ${C_SERVICE_NAME} --apiVersion ${C_VERSION} --outputLocation ./
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )

        STRING(CONCAT C_DIR "aws-cpp-sdk-" ${C_SERVICE_NAME})
        add_subdirectory(${C_DIR})
    endif()

endforeach(custom_client)

#testing
if(ENABLE_TESTING)
    add_subdirectory(testing-resources)

    if(PLATFORM_ANDROID AND NOT BUILD_SHARED_LIBS)
	add_subdirectory(android-unified-tests)
    else()
        add_subdirectory(aws-cpp-sdk-core-tests)
	foreach(SDK IN LISTS SDK_BUILD_LIST)
	    get_test_project_for_service(${SDK} TEST_PROJECT)
	    if(TEST_PROJECT) 
		# before we add the test, make sure all of its dependencies are present
		set(ADD_TEST 1)
		get_dependencies_for_test(${SDK} DEPENDENCY_LIST)
		if(DEPENDENCY_LIST)
		    STRING(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
		    foreach(DEPENDENCY IN LISTS LIST_RESULT)
			list(FIND SDK_BUILD_LIST ${DEPENDENCY} DEPENDENCY_INDEX)
			if(DEPENDENCY_INDEX LESS 0)
			    set(ADD_TEST 0)
			endif()
		    endforeach()
		endif()

		if(ADD_TEST)
		    add_subdirectory(${TEST_PROJECT})
		endif()
	    endif()
	 endforeach()
    endif()
endif()

export(TARGETS ${EXPORTS} FILE aws-sdk-cpp-config.cmake)
