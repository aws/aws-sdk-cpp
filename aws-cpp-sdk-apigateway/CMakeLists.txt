add_project(aws-cpp-sdk-apigateway "C++ SDK for the AWS apigateway service" aws-cpp-sdk-core)

file(GLOB AWS_APIGATEWAY_HEADERS
    "include/aws/apigateway/*.h"
)

file(GLOB AWS_APIGATEWAY_MODEL_HEADERS
    "include/aws/apigateway/model/*.h"
)

file(GLOB AWS_APIGATEWAY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APIGATEWAY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APIGATEWAY_UNIFIED_HEADERS
    ${AWS_APIGATEWAY_HEADERS}
    ${AWS_APIGATEWAY_MODEL_HEADERS}
)

file(GLOB APIGATEWAY_UNITY_SRC
    ${AWS_APIGATEWAY_SOURCE}
    ${AWS_APIGATEWAY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APIGATEWAY" APIGATEWAY_UNITY_SRC)
endif()

file(GLOB APIGATEWAY_SRC
    ${APIGATEWAY_UNIFIED_HEADERS}
    ${APIGATEWAY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\apigateway" FILES ${AWS_APIGATEWAY_HEADERS})
        source_group("Header Files\\aws\\apigateway\\model" FILES ${AWS_APIGATEWAY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APIGATEWAY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APIGATEWAY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APIGATEWAY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${APIGATEWAY_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_APIGATEWAY_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${APIGATEWAY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_APIGATEWAY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apigateway)
install (FILES ${AWS_APIGATEWAY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/apigateway/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


