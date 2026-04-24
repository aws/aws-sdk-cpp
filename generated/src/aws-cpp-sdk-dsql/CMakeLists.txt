add_project(aws-cpp-sdk-dsql "C++ SDK for the AWS dsql service" aws-cpp-sdk-core)

file(GLOB AWS_DSQL_HEADERS
    "include/aws/dsql/*.h"
)

file(GLOB AWS_DSQL_MODEL_HEADERS
    "include/aws/dsql/model/*.h"
)

file(GLOB AWS_DSQL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DSQL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DSQL_UNIFIED_HEADERS
    ${AWS_DSQL_HEADERS}
    ${AWS_DSQL_MODEL_HEADERS}
)

file(GLOB DSQL_UNITY_SRC
    ${AWS_DSQL_SOURCE}
    ${AWS_DSQL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DSQL" DSQL_UNITY_SRC)
endif()

file(GLOB DSQL_SRC
    ${DSQL_UNIFIED_HEADERS}
    ${DSQL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\dsql" FILES ${AWS_DSQL_HEADERS})
        source_group("Header Files\\aws\\dsql\\model" FILES ${AWS_DSQL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DSQL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DSQL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DSQL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DSQL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DSQL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DSQL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dsql)
install (FILES ${AWS_DSQL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dsql/model)

do_packaging()


