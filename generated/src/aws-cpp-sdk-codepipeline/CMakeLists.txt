add_project(aws-cpp-sdk-codepipeline "C++ SDK for the AWS codepipeline service" aws-cpp-sdk-core)

file(GLOB AWS_CODEPIPELINE_HEADERS
    "include/aws/codepipeline/*.h"
)

file(GLOB AWS_CODEPIPELINE_MODEL_HEADERS
    "include/aws/codepipeline/model/*.h"
)

file(GLOB AWS_CODEPIPELINE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODEPIPELINE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODEPIPELINE_UNIFIED_HEADERS
    ${AWS_CODEPIPELINE_HEADERS}
    ${AWS_CODEPIPELINE_MODEL_HEADERS}
)

file(GLOB CODEPIPELINE_UNITY_SRC
    ${AWS_CODEPIPELINE_SOURCE}
    ${AWS_CODEPIPELINE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODEPIPELINE" CODEPIPELINE_UNITY_SRC)
endif()

file(GLOB CODEPIPELINE_SRC
    ${CODEPIPELINE_UNIFIED_HEADERS}
    ${CODEPIPELINE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codepipeline" FILES ${AWS_CODEPIPELINE_HEADERS})
        source_group("Header Files\\aws\\codepipeline\\model" FILES ${AWS_CODEPIPELINE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODEPIPELINE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODEPIPELINE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODEPIPELINE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODEPIPELINE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODEPIPELINE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODEPIPELINE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codepipeline)
install (FILES ${AWS_CODEPIPELINE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codepipeline/model)

do_packaging()


