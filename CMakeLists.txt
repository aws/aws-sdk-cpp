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
option(ANDROID_BUILD_CURL "When building for Android, should curl be built as well" ON)
option(ANDROID_BUILD_OPENSSL "When building for Android, should Openssl be built as well" ON)
option(ANDROID_BUILD_ZLIB "When building for Android, should Zlib be built as well" ON)
option(FORCE_CURL "Forces usage of the Curl client rather than the default OS-specific api" OFF)

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


if(PLATFORM_WINDOWS)
    INCLUDE(platform/windows)
elseif(PLATFORM_LINUX)
    INCLUDE(platform/unix)
    INCLUDE(platform/linux)
elseif(PLATFORM_APPLE)
    INCLUDE(platform/unix)
    INCLUDE(platform/apple)
elseif(PLATFORM_ANDROID)
    INCLUDE(platform/unix)
    INCLUDE(platform/android)
elseif(PLATFORM_CUSTOM)
    INCLUDE(platform/custom)
else()
    message(FATAL_ERROR "Unknown target platform.  How did this happen?")
endif()

if(BUILD_SHARED_LIBS)
    SET(ARCHIVE_DIRECTORY "bin")
    SET(LIBTYPE SHARED)
    message(STATUS "Building AWS libraries as shared objects")
else()
    SET(ARCHIVE_DIRECTORY "lib")
    SET(LIBTYPE STATIC)
    message(STATUS "Building AWS libraries as static objects")
endif()

# use response files to prevent command-line-too-big errors for large libraries like iam
SET(CMAKE_CXX_USE_RESPONSE_FILE_FOR_OBJECTS 1)
SET(CMAKE_CXX_USE_RESPONSE_FILE_FOR_INCLUDES 1)
SET(CMAKE_CXX_RESPONSE_FILE_LINK_FLAG "@")

if(COMMAND apply_pre_project_platform_settings)
    apply_pre_project_platform_settings()
endif()

project(aws-sdk-cpp-all)

# http client, encryption, zlib, uuid
include(external_dependencies)

if(COMMAND apply_post_project_platform_settings)
    apply_post_project_platform_settings()
endif()

set(CMAKE_CONFIGURATION_TYPES
        Debug                   # Setup for easy debugging. No optimizations.
        DebugOpt                # An optimized version of Debug.
        Release                 # Fully optimized, no debugging information.
        RelWithDebInfo          # A debuggable version of Release.
        MinSizeRel              # Like Release, but optimized for memory rather than speed.
        )

include(compiler_settings)

include(sdks)

include(utilities)

# In Windows, this dumps the CL and LINK command lines to the output - makes it much easier to
# check that CMake is passing in the right defines, paths, etc...
#
# set( CMAKE_VERBOSE_MAKEFILE 1 )

# Setup the project configurations.

get_filename_component(AWS_NATIVE_SDK_ROOT "${CMAKE_CURRENT_SOURCE_DIR}" ABSOLUTE)

# pass this flag to the jsoncpp amalgamated source
add_definitions(-DJSON_USE_EXCEPTION=0)

set(CORE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/aws-cpp-sdk-core/")

include(build_external)

if(USE_WINDOWS_DLL_SEMANTICS)
    if(BUILD_SHARED_LIBS)
        add_definitions("-DUSE_IMPORT_EXPORT")
    endif()

    add_definitions(-DUSE_WINDOWS_DLL_SEMANTICS)
endif()

if(COMMAND apply_custom_platform_settings)
    apply_custom_platform_settings()
endif()

add_sdks()

