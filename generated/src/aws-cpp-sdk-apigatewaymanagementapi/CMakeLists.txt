add_project(aws-cpp-sdk-apigatewaymanagementapi "C++ SDK for the AWS apigatewaymanagementapi service" aws-cpp-sdk-core)

file(GLOB AWS_APIGATEWAYMANAGEMENTAPI_HEADERS
    "include/aws/apigatewaymanagementapi/*.h"
)

file(GLOB AWS_APIGATEWAYMANAGEMENTAPI_MODEL_HEADERS
    "include/aws/apigatewaymanagementapi/model/*.h"
)

file(GLOB AWS_APIGATEWAYMANAGEMENTAPI_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APIGATEWAYMANAGEMENTAPI_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APIGATEWAYMANAGEMENTAPI_UNIFIED_HEADERS
    ${AWS_APIGATEWAYMANAGEMENTAPI_HEADERS}
    ${AWS_APIGATEWAYMANAGEMENTAPI_MODEL_HEADERS}
)

file(GLOB APIGATEWAYMANAGEMENTAPI_UNITY_SRC
    ${AWS_APIGATEWAYMANAGEMENTAPI_SOURCE}
    ${AWS_APIGATEWAYMANAGEMENTAPI_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APIGATEWAYMANAGEMENTAPI" APIGATEWAYMANAGEMENTAPI_UNITY_SRC)
endif()

file(GLOB APIGATEWAYMANAGEMENTAPI_SRC
    ${APIGATEWAYMANAGEMENTAPI_UNIFIED_HEADERS}
    ${APIGATEWAYMANAGEMENTAPI_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\apigatewaymanagementapi" FILES ${AWS_APIGATEWAYMANAGEMENTAPI_HEADERS})
        source_group("Header Files\\aws\\apigatewaymanagementapi\\model" FILES ${AWS_APIGATEWAYMANAGEMENTAPI_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APIGATEWAYMANAGEMENTAPI_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APIGATEWAYMANAGEMENTAPI_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APIGATEWAYMANAGEMENTAPI_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APIGATEWAYMANAGEMENTAPI_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APIGATEWAYMANAGEMENTAPI_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APIGATEWAYMANAGEMENTAPI_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apigatewaymanagementapi)
install (FILES ${AWS_APIGATEWAYMANAGEMENTAPI_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apigatewaymanagementapi/model)

do_packaging()


