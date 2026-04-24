add_project(aws-cpp-sdk-ecr-public "C++ SDK for the AWS ecr-public service" aws-cpp-sdk-core)

file(GLOB AWS_ECR-PUBLIC_HEADERS
    "include/aws/ecr-public/*.h"
)

file(GLOB AWS_ECR-PUBLIC_MODEL_HEADERS
    "include/aws/ecr-public/model/*.h"
)

file(GLOB AWS_ECR-PUBLIC_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ECR-PUBLIC_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ECR-PUBLIC_UNIFIED_HEADERS
    ${AWS_ECR-PUBLIC_HEADERS}
    ${AWS_ECR-PUBLIC_MODEL_HEADERS}
)

file(GLOB ECR-PUBLIC_UNITY_SRC
    ${AWS_ECR-PUBLIC_SOURCE}
    ${AWS_ECR-PUBLIC_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ECR-PUBLIC" ECR-PUBLIC_UNITY_SRC)
endif()

file(GLOB ECR-PUBLIC_SRC
    ${ECR-PUBLIC_UNIFIED_HEADERS}
    ${ECR-PUBLIC_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ecr-public" FILES ${AWS_ECR-PUBLIC_HEADERS})
        source_group("Header Files\\aws\\ecr-public\\model" FILES ${AWS_ECR-PUBLIC_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ECR-PUBLIC_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ECR-PUBLIC_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ECR-PUBLIC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ECR-PUBLIC_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ECRPUBLIC_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ECR-PUBLIC_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ecr-public)
install (FILES ${AWS_ECR-PUBLIC_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ecr-public/model)

do_packaging()


