
message(STATUS "Generating linux build config")
set(SDK_INSTALL_BINARY_PREFIX "linux")

if(SIMPLE_INSTALL)
    include(CMakePackageConfigHelpers)

    if(BUILD_SHARED_LIBS)
        SET(ARCHIVE_DIRECTORY "${CMAKE_INSTALL_BINDIR}")
    else()
        SET(ARCHIVE_DIRECTORY "${CMAKE_INSTALL_LIBDIR}")
    endif()

    SET(BINARY_DIRECTORY "${CMAKE_INSTALL_BINDIR}")
    SET(LIBRARY_DIRECTORY "${CMAKE_INSTALL_LIBDIR}")
    set(INCLUDE_DIRECTORY "${CMAKE_INSTALL_INCLUDEDIR}")
endif()

macro(apply_post_project_platform_settings)
    include(GNUInstallDirs)

    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        set(SDK_INSTALL_BINARY_PREFIX "${SDK_INSTALL_BINARY_PREFIX}/intel64")
    else()
        set(SDK_INSTALL_BINARY_PREFIX "${SDK_INSTALL_BINARY_PREFIX}/ia32")
    endif()

    set(PLATFORM_DEP_LIBS pthread)
    set(PLATFORM_DEP_LIBS_ABSTRACT_NAME pthread)

endmacro()
