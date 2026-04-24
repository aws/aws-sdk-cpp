add_project(aws-cpp-sdk-codeconnections "C++ SDK for the AWS codeconnections service" aws-cpp-sdk-core)

file(GLOB AWS_CODECONNECTIONS_HEADERS
    "include/aws/codeconnections/*.h"
)

file(GLOB AWS_CODECONNECTIONS_MODEL_HEADERS
    "include/aws/codeconnections/model/*.h"
)

file(GLOB AWS_CODECONNECTIONS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODECONNECTIONS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODECONNECTIONS_UNIFIED_HEADERS
    ${AWS_CODECONNECTIONS_HEADERS}
    ${AWS_CODECONNECTIONS_MODEL_HEADERS}
)

file(GLOB CODECONNECTIONS_UNITY_SRC
    ${AWS_CODECONNECTIONS_SOURCE}
    ${AWS_CODECONNECTIONS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODECONNECTIONS" CODECONNECTIONS_UNITY_SRC)
endif()

file(GLOB CODECONNECTIONS_SRC
    ${CODECONNECTIONS_UNIFIED_HEADERS}
    ${CODECONNECTIONS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codeconnections" FILES ${AWS_CODECONNECTIONS_HEADERS})
        source_group("Header Files\\aws\\codeconnections\\model" FILES ${AWS_CODECONNECTIONS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODECONNECTIONS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODECONNECTIONS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODECONNECTIONS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODECONNECTIONS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODECONNECTIONS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODECONNECTIONS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeconnections)
install (FILES ${AWS_CODECONNECTIONS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeconnections/model)

do_packaging()


