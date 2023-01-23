add_project(aws-cpp-sdk-elasticloadbalancingv2 "C++ SDK for the AWS elasticloadbalancingv2 service" aws-cpp-sdk-core)

file(GLOB AWS_ELASTICLOADBALANCINGV2_HEADERS
    "include/aws/elasticloadbalancingv2/*.h"
)

file(GLOB AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS
    "include/aws/elasticloadbalancingv2/model/*.h"
)

file(GLOB AWS_ELASTICLOADBALANCINGV2_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELASTICLOADBALANCINGV2_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELASTICLOADBALANCINGV2_UNIFIED_HEADERS
    ${AWS_ELASTICLOADBALANCINGV2_HEADERS}
    ${AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS}
)

file(GLOB ELASTICLOADBALANCINGV2_UNITY_SRC
    ${AWS_ELASTICLOADBALANCINGV2_SOURCE}
    ${AWS_ELASTICLOADBALANCINGV2_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICLOADBALANCINGV2" ELASTICLOADBALANCINGV2_UNITY_SRC)
endif()

file(GLOB ELASTICLOADBALANCINGV2_SRC
    ${ELASTICLOADBALANCINGV2_UNIFIED_HEADERS}
    ${ELASTICLOADBALANCINGV2_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elasticloadbalancingv2" FILES ${AWS_ELASTICLOADBALANCINGV2_HEADERS})
        source_group("Header Files\\aws\\elasticloadbalancingv2\\model" FILES ${AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELASTICLOADBALANCINGV2_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELASTICLOADBALANCINGV2_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELASTICLOADBALANCINGV2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ELASTICLOADBALANCINGV2_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ELASTICLOADBALANCINGV2_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ELASTICLOADBALANCINGV2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticloadbalancingv2)
install (FILES ${AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticloadbalancingv2/model)

do_packaging()


