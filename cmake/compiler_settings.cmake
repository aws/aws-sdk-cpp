# Compiler recognition
SET(COMPILER_MSVC 0)
SET(COMPILER_GCC 0)
SET(COMPILER_CLANG 0)

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

    if(MINIMIZE_SIZE AND COMPILER_GCC)
        set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -s")
    endif()
endif()
