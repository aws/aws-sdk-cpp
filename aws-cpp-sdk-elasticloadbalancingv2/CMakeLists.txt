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

include_directories(${ELASTICLOADBALANCINGV2_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICLOADBALANCINGV2_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ELASTICLOADBALANCINGV2_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_ELASTICLOADBALANCINGV2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticloadbalancingv2)
install (FILES ${AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticloadbalancingv2/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


