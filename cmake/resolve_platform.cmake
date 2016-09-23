
# Platform recognition
if(TARGET_ARCH)
    string(TOUPPER ${TARGET_ARCH} __UPPER_TARGET_ARCH)
endif()

if("${__UPPER_TARGET_ARCH}" STREQUAL "WINDOWS" OR 
   "${__UPPER_TARGET_ARCH}" STREQUAL "LINUX" OR 
   "${__UPPER_TARGET_ARCH}" STREQUAL "APPLE" OR 
   "${__UPPER_TARGET_ARCH}" STREQUAL "ANDROID")
    SET(PLATFORM_${__UPPER_TARGET_ARCH} 1)
elseif(TARGET_ARCH)
    SET(PLATFORM_CUSTOM 1)
else()
    message(STATUS "TARGET_ARCH not specified; inferring host OS to be platform compilation target")
    if(CMAKE_HOST_WIN32)
        SET(PLATFORM_WINDOWS 1)
        SET(TARGET_ARCH "WINDOWS")
        SET(__UPPER_TARGET_ARCH "WINDOWS")
    elseif(CMAKE_HOST_APPLE)
        SET(PLATFORM_APPLE 1)
        SET(TARGET_ARCH "APPLE")
        SET(__UPPER_TARGET_ARCH "APPLE")
    elseif(CMAKE_HOST_UNIX)
        SET(PLATFORM_LINUX 1)
        SET(TARGET_ARCH "LINUX")
        SET(__UPPER_TARGET_ARCH "LINUX")
    else()
        message(FATAL_ERROR "Unknown host OS; unable to determine platform compilation target")
    endif()
endif()

# directory defaults; linux overrides these on SIMPLE_INSTALL builds
SET(BINARY_DIRECTORY "bin")
SET(LIBRARY_DIRECTORY "lib")
SET(INCLUDE_DIRECTORY "include")
if(BUILD_SHARED_LIBS)
    SET(ARCHIVE_DIRECTORY "bin")
    SET(LIBTYPE SHARED)
    message(STATUS "Building AWS libraries as shared objects")
else()
    SET(ARCHIVE_DIRECTORY "lib")
    SET(LIBTYPE STATIC)
    message(STATUS "Building AWS libraries as static objects")
endif()

string(TOLOWER ${TARGET_ARCH} __LOWER_ARCH)

if(PLATFORM_LINUX OR PLATFORM_APPLE OR PLATFORM_ANDROID)
    include(platform/unix)
endif()

if(NOT PLATFORM_CUSTOM)
    include(platform/${__LOWER_ARCH})
else()
    include(platform/custom)
endif()

# only usable in .cpp files
add_definitions(-DPLATFORM_${__UPPER_TARGET_ARCH})
