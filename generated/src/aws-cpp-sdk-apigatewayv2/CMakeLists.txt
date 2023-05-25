add_project(aws-cpp-sdk-apigatewayv2 "C++ SDK for the AWS apigatewayv2 service" aws-cpp-sdk-core)

file(GLOB AWS_APIGATEWAYV2_HEADERS
    "include/aws/apigatewayv2/*.h"
)

file(GLOB AWS_APIGATEWAYV2_MODEL_HEADERS
    "include/aws/apigatewayv2/model/*.h"
)

file(GLOB AWS_APIGATEWAYV2_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APIGATEWAYV2_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APIGATEWAYV2_UNIFIED_HEADERS
    ${AWS_APIGATEWAYV2_HEADERS}
    ${AWS_APIGATEWAYV2_MODEL_HEADERS}
)

file(GLOB APIGATEWAYV2_UNITY_SRC
    ${AWS_APIGATEWAYV2_SOURCE}
    ${AWS_APIGATEWAYV2_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APIGATEWAYV2" APIGATEWAYV2_UNITY_SRC)
endif()

file(GLOB APIGATEWAYV2_SRC
    ${APIGATEWAYV2_UNIFIED_HEADERS}
    ${APIGATEWAYV2_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\apigatewayv2" FILES ${AWS_APIGATEWAYV2_HEADERS})
        source_group("Header Files\\aws\\apigatewayv2\\model" FILES ${AWS_APIGATEWAYV2_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APIGATEWAYV2_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APIGATEWAYV2_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APIGATEWAYV2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${APIGATEWAYV2_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APIGATEWAYV2_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APIGATEWAYV2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apigatewayv2)
install (FILES ${AWS_APIGATEWAYV2_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apigatewayv2/model)

do_packaging()


