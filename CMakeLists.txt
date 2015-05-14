cmake_minimum_required (VERSION 2.6)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

# there isn't a reliable way of detecting what architecture we want to build for in a cross-compiling environment, so force the user
# to specify on the command line.  Since testing string equality is ugly and awkward in cmake, we use the specified architecture
# to conditionally set a symbol to 1 so that we can continue to just do "if (SYMBOL)" for our conditional execution
SET(PLATFORM_WINDOWS 0)
SET(PLATFORM_LINUX 0)
SET(PLATFORM_ANDROID 0)

if("${TARGET_ARCH}" STREQUAL "WINDOWS")
    SET(PLATFORM_WINDOWS 1)
elseif("${TARGET_ARCH}" STREQUAL "LINUX")
    SET(PLATFORM_LINUX 1)
elseif("${TARGET_ARCH}" STREQUAL "ANDROID")
    SET(PLATFORM_ANDROID 1)
    SET(CMAKE_TOOLCHAIN_FILE ./android-build/android.toolchain.cmake)
else()
    message(STATUS "TARGET_ARCH not specified; inferring host OS to be platform compilation target")
    if(WIN32)
        SET(PLATFORM_WINDOWS 1)
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
elseif(PLATFORM_ANDROID)
    message(STATUS "Generating android build config")
else()
    message(FATAL_ERROR "Unknown target platform.  How did this happen?")
endif()

project(AWSNativeSDKAll)

# shared libraries as intermediate (non-leaf) targets are not supported in android due to std::string issues
if(PLATFORM_ANDROID)
    SET(BUILD_SHARED_LIBS 0)
else()
    SET(BUILD_SHARED_LIBS 1)
endif()

if(BUILD_SHARED_LIBS)
    SET(LIBTYPE SHARED)
    if(PLATFORM_WINDOWS)
        add_definitions("-DUSE_IMPORT_EXPORT=1")
        add_definitions(-DJSON_DLL_BUILD=1)
        add_definitions(-DTINYXML2_EXPORT=1)
        SET(SUFFIX dll)
    elseif(PLATFORM_LINUX OR PLATFORM_ANDROID)
        SET(SUFFIX so)
    endif()
else()
    SET(LIBTYPE STATIC)
    if(PLATFORM_WINDOWS)
        SET(SUFFIX lib)
    elseif(PLATFORM_LINUX OR PLATFORM_ANDROID)
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

#add_definitions(-DAWS_CUSTOM_MEMORY_MANAGEMENT=1)

# pass this flag to the jsoncpp amalgamated source
add_definitions(-DJSON_USE_EXCEPTION=0)

if(NOT PLATFORM_WINDOWS)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
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
elseif(PLATFORM_LINUX OR PLATFORM_ANDROID)
    # max warning level, warnings are errors, turn off unused private field. We have one for an empty class.
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wno-unused-private-field")
endif()

set(CORE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/aws-cpp-sdk-core/")

if(PLATFORM_ANDROID)
    include(ExternalProject)

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -fno-exceptions")
    set(BASE_SDK_DIR ${CMAKE_SOURCE_DIR} CACHE STRING "Android build" FORCE)
    set(EXTERNAL_PROJECTS_DIR ${CMAKE_SOURCE_DIR}/external CACHE STRING "Android build" FORCE)
    set(USE_PROJECT_CMAKE_MODULE_PATH "-DCMAKE_MODULE_PATH=${MAKE_MODULE_PATH}")
    set(TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/android-build/android.toolchain.cmake)
    
    # the headers are the same across abis, but since the libs are different and installation is done in a single step, we partition by abi
    set(EXTERNAL_INSTALL_DIR ${CMAKE_SOURCE_DIR}/external/${ANDROID_ABI})

    #zlib
    #based on http://stackoverflow.com/questions/16842218/how-to-use-cmake-externalproject-add-or-alternatives-in-a-cross-platform-way
    #likely, some of the things here are unnecessary
    set(ZLIB_SOURCE_DIR ${CMAKE_SOURCE_DIR}/zlib CACHE INTERNAL "zlib source dir")
    set(ZLIB_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/zlib CACHE INTERNAL "zlib install dir")
    set(ZLIB_INCLUDE_DIR ${ZLIB_INSTALL_DIR}/include CACHE INTERNAL "zlib include dir")
    set(ZLIB_LIBRARY_DIR ${ZLIB_INSTALL_DIR}/lib CACHE INTERNAL "zlib library dir")
    set(ZLIB_DEFINES "-msse2 -mfpmath=sse" CACHE INTERNAL "zlib defines")

    ExternalProject_Add(ZLIB
			SOURCE_DIR ${ZLIB_SOURCE_DIR}
			URL http://zlib.net/zlib-1.2.8.tar.gz
			URL_MD5 44d667c142d7cda120332623eab69f40
			UPDATE_COMMAND ""
			CMAKE_ARGS 
			   -DCMAKE_TOOLCHAIN_FILE=${TOOLCHAIN_FILE}
			   -DCMAKE_INSTALL_PREFIX=${ZLIB_INSTALL_DIR}
			   -DCMAKE_CXX_FLAGS=${CMAKE_CXX_FLAGS} 
			   -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS} 
			   -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
			   ${USE_PROJECT_CMAKE_MODULE_PATH}
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
    set(OPENSSL_LIBRARY_DIR ${OPENSSL_INSTALL_DIR}/lib CACHE INTERNAL "openssl library dir")

    set(OPENSSL_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIE" CACHE INTERNAL "openssl")
    set(OPENSSL_C_FLAGS "${CMAKE_C_FLAGS} -fPIE" CACHE INTERNAL "openssl")
    set(OPENSSL_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fPIE -pie" CACHE INTERNAL "openssl")

    ExternalProject_Add(OPENSSL
			SOURCE_DIR ${OPENSSL_SOURCE_DIR}
			URL http://www.openssl.org/source/openssl-1.0.2a.tar.gz
			URL_MD5 a06c547dac9044161a477211049f60ef
			UPDATE_COMMAND cd ${CMAKE_SOURCE_DIR} && python android-build/configure_openssl_cmake.py  # openssl does not have cmake files, this script fixes that
			CMAKE_ARGS 
			   -DCMAKE_TOOLCHAIN_FILE=${TOOLCHAIN_FILE}
			   -DCMAKE_INSTALL_PREFIX=${OPENSSL_INSTALL_DIR}
			   -DCMAKE_CXX_FLAGS=${OPENSSL_CXX_FLAGS} 
			   -DCMAKE_C_FLAGS=${OPENSSL_C_FLAGS} 
			   -DCMAKE_EXE_LINKER_FLAGS=${OPENSSL_EXE_LINKER_FLAGS}
			   -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
			   ${USE_PROJECT_CMAKE_MODULE_PATH}
			   )

    add_library(ssl UNKNOWN IMPORTED)
    set_property(TARGET ssl PROPERTY IMPORTED_LOCATION ${OPENSSL_LIBRARY_DIR}/libssl.a)
    add_library(crypto UNKNOWN IMPORTED)
    set_property(TARGET crypto PROPERTY IMPORTED_LOCATION ${OPENSSL_LIBRARY_DIR}/libcrypto.a)


    #curl
    set(CURL_SOURCE_DIR ${CMAKE_SOURCE_DIR}/curl CACHE INTERNAL "libcurl source dir")
    set(CURL_INSTALL_DIR ${EXTERNAL_INSTALL_DIR}/curl CACHE INTERNAL "libcurl install dir")
    set(CURL_INCLUDE_DIR ${CURL_INSTALL_DIR}/include CACHE INTERNAL "libcurl include dir")
    set(CURL_LIBRARY_DIR ${CURL_INSTALL_DIR}/lib CACHE INTERNAL "libcurl library dir")

    set( ZLIB_INCLUDE_FLAGS "-isystem ${ZLIB_INCLUDE_DIR}" CACHE INTERNAL "compiler flags to find zlib includes")
    set( OPENSSL_INCLUDE_FLAGS "-isystem ${OPENSSL_INCLUDE_DIR} -isystem ${OPENSSL_INCLUDE_DIR}/openssl" CACHE INTERNAL "compiler flags to find openssl includes")
    set( ZLIB_LINKER_FLAGS "-L${ZLIB_LIBRARY_DIR}" CACHE INTERNAL "linker flags to find zlib")
    set( OPENSSL_LINKER_FLAGS "-L${OPENSSL_LIBRARY_DIR}" CACHE INTERNAL "linker flags to find openssl")

    set( CURL_STATIC_LINKER_FLAGS "${CMAKE_STATIC_LINKER_FLAGS} ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "" )
    set( CURL_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "" )
    set( CURL_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OPENSSL_INCLUDE_FLAGS} ${ZLIB_INCLUDE_FLAGS} -Wno-unused-value -fPIE ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "")
    set( CURL_C_FLAGS "${CMAKE_C_FLAGS}  ${OPENSSL_INCLUDE_FLAGS} ${ZLIB_INCLUDE_FLAGS} -Wno-unused-value -fPIE ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "")
    set( CURL_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fPIE -pie ${ZLIB_LINKER_FLAGS} ${OPENSSL_LINKER_FLAGS}" CACHE INTERNAL "" )

    #todo: figure out a better way of doing this
    set( GIT_EXECUTABLE /usr/bin/git )

    ExternalProject_Add(CURL
                        DEPENDS OPENSSL ZLIB 
			SOURCE_DIR ${CURL_SOURCE_DIR}
			GIT_REPOSITORY https://github.com/bagder/curl.git
			GIT_TAG ff83742  # 7.41.0
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
			   -DCURL_STATICLIB=ON
			   -DBUILD_CURL_EXE=ON
			   ${USE_PROJECT_CMAKE_MODULE_PATH}
    )

    add_library(curl UNKNOWN IMPORTED)
    set_property(TARGET curl PROPERTY IMPORTED_LOCATION ${CURL_LIBRARY_DIR}/libcurl.a)

endif()

# default libraries to link in per-platform
if(PLATFORM_WINDOWS)
    set(PLATFORM_DEP_LIBS Bcrypt Crypt32 Wininet)
elseif(PLATFORM_LINUX)
    set(PLATFORM_DEP_LIBS curl ssl crypto pthread)
elseif(PLATFORM_ANDROID)
    set(PLATFORM_DEP_LIBS curl ssl crypto ${ZLIB_LIBRARY_DIR}/${ZLIB_NAME}.a log atomic)
endif()

add_subdirectory(aws-cpp-sdk-core)
add_subdirectory(testing-resources)
add_subdirectory(aws-cpp-sdk-dynamodb)
add_subdirectory(aws-cpp-sdk-cognito-identity)
add_subdirectory(aws-cpp-sdk-sqs)
add_subdirectory(aws-cpp-sdk-kinesis)
add_subdirectory(aws-cpp-sdk-lambda)
add_subdirectory(aws-cpp-sdk-s3)

if(PLATFORM_ANDROID)
    add_subdirectory(android-unified-tests)
else()
    add_subdirectory(aws-cpp-sdk-core-tests)
    add_subdirectory(aws-cpp-sdk-dynamodb-integration-tests)
    add_subdirectory(aws-cpp-sdk-cognitoidentity-integration-tests)
    add_subdirectory(aws-cpp-sdk-sqs-integration-tests)
    add_subdirectory(aws-cpp-sdk-lambda-integration-tests) 
    add_subdirectory(aws-cpp-sdk-s3-integration-tests)
endif()

if(BUILD_EXAMPLES)
    add_subdirectory(aws-cpp-sdk-example1)
endif()
