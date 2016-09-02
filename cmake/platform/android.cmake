
# minimum version of cmake that 
#   (1) supports ExternalProject_Add URL_HASH
#   (2) correctly extracts OPENSSL's version number from openssl/opensslv.h in version 1.0.2d
cmake_minimum_required (VERSION 3.1.2)

SET(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/toolchains/android.toolchain.cmake)
if(NOT GIT_FOUND)
    message(FATAL_ERROR "Unable to find git; git is required in order to build for Android")
endif()

find_program(PATCH_FOUND patch)
if(NOT PATCH_FOUND AND (BUILD_CURL OR BUILD_ZLIB))
    message(FATAL_ERROR "Unable to find patch; patch is required in order to build Curl and Zlib for Android")
endif()

if(CMAKE_HOST_WIN32)
    find_program(SH_FOUND sh)
    if(NOT SH_FOUND)
	message(FATAL_ERROR "Unable to find sh; sh is required to construct standalone toolchains when building for Android on Windows using NDK 11 and earlier")
    endif()
endif()

# TODO: check for sh, it's required to generate the standalone toolchains

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

macro(apply_post_project_platform_settings)
    set(SDK_INSTALL_BINARY_PREFIX "${SDK_INSTALL_BINARY_PREFIX}/${ANDROID_ABI}")

    set(PLATFORM_DEP_LIBS log atomic)
endmacro()