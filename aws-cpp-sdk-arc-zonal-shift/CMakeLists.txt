add_project(aws-cpp-sdk-arc-zonal-shift "C++ SDK for the AWS arc-zonal-shift service" aws-cpp-sdk-core)

file(GLOB AWS_ARC-ZONAL-SHIFT_HEADERS
    "include/aws/arc-zonal-shift/*.h"
)

file(GLOB AWS_ARC-ZONAL-SHIFT_MODEL_HEADERS
    "include/aws/arc-zonal-shift/model/*.h"
)

file(GLOB AWS_ARC-ZONAL-SHIFT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ARC-ZONAL-SHIFT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ARC-ZONAL-SHIFT_UNIFIED_HEADERS
    ${AWS_ARC-ZONAL-SHIFT_HEADERS}
    ${AWS_ARC-ZONAL-SHIFT_MODEL_HEADERS}
)

file(GLOB ARC-ZONAL-SHIFT_UNITY_SRC
    ${AWS_ARC-ZONAL-SHIFT_SOURCE}
    ${AWS_ARC-ZONAL-SHIFT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ARC-ZONAL-SHIFT" ARC-ZONAL-SHIFT_UNITY_SRC)
endif()

file(GLOB ARC-ZONAL-SHIFT_SRC
    ${ARC-ZONAL-SHIFT_UNIFIED_HEADERS}
    ${ARC-ZONAL-SHIFT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\arc-zonal-shift" FILES ${AWS_ARC-ZONAL-SHIFT_HEADERS})
        source_group("Header Files\\aws\\arc-zonal-shift\\model" FILES ${AWS_ARC-ZONAL-SHIFT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ARC-ZONAL-SHIFT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ARC-ZONAL-SHIFT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ARC-ZONAL-SHIFT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ARC-ZONAL-SHIFT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ARCZONALSHIFT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ARC-ZONAL-SHIFT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/arc-zonal-shift)
install (FILES ${AWS_ARC-ZONAL-SHIFT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/arc-zonal-shift/model)

do_packaging()


