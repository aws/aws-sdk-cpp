add_project(aws-cpp-sdk-lambda "C++ SDK for the AWS lambda service" aws-cpp-sdk-core)

file(GLOB AWS_LAMBDA_HEADERS
    "include/aws/lambda/*.h"
)

file(GLOB AWS_LAMBDA_MODEL_HEADERS
    "include/aws/lambda/model/*.h"
)

file(GLOB AWS_LAMBDA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LAMBDA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LAMBDA_UNIFIED_HEADERS
    ${AWS_LAMBDA_HEADERS}
    ${AWS_LAMBDA_MODEL_HEADERS}
)

file(GLOB LAMBDA_UNITY_SRC
    ${AWS_LAMBDA_SOURCE}
    ${AWS_LAMBDA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LAMBDA" LAMBDA_UNITY_SRC)
endif()

file(GLOB LAMBDA_SRC
    ${LAMBDA_UNIFIED_HEADERS}
    ${LAMBDA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lambda" FILES ${AWS_LAMBDA_HEADERS})
        source_group("Header Files\\aws\\lambda\\model" FILES ${AWS_LAMBDA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LAMBDA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LAMBDA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LAMBDA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LAMBDA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LAMBDA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LAMBDA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lambda)
install (FILES ${AWS_LAMBDA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lambda/model)

do_packaging()


