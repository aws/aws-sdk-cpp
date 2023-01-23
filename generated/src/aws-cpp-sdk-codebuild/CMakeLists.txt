add_project(aws-cpp-sdk-codebuild "C++ SDK for the AWS codebuild service" aws-cpp-sdk-core)

file(GLOB AWS_CODEBUILD_HEADERS
    "include/aws/codebuild/*.h"
)

file(GLOB AWS_CODEBUILD_MODEL_HEADERS
    "include/aws/codebuild/model/*.h"
)

file(GLOB AWS_CODEBUILD_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODEBUILD_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODEBUILD_UNIFIED_HEADERS
    ${AWS_CODEBUILD_HEADERS}
    ${AWS_CODEBUILD_MODEL_HEADERS}
)

file(GLOB CODEBUILD_UNITY_SRC
    ${AWS_CODEBUILD_SOURCE}
    ${AWS_CODEBUILD_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODEBUILD" CODEBUILD_UNITY_SRC)
endif()

file(GLOB CODEBUILD_SRC
    ${CODEBUILD_UNIFIED_HEADERS}
    ${CODEBUILD_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codebuild" FILES ${AWS_CODEBUILD_HEADERS})
        source_group("Header Files\\aws\\codebuild\\model" FILES ${AWS_CODEBUILD_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODEBUILD_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODEBUILD_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODEBUILD_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODEBUILD_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODEBUILD_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODEBUILD_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codebuild)
install (FILES ${AWS_CODEBUILD_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codebuild/model)

do_packaging()


