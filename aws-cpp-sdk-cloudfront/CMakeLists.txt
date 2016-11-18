add_project(aws-cpp-sdk-cloudfront "C++ SDK for the AWS cloudfront service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDFRONT_HEADERS
    "include/aws/cloudfront/*.h"
)

file(GLOB AWS_CLOUDFRONT_MODEL_HEADERS
    "include/aws/cloudfront/model/*.h"
)

file(GLOB AWS_CLOUDFRONT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDFRONT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDFRONT_UNIFIED_HEADERS
    ${AWS_CLOUDFRONT_HEADERS}
    ${AWS_CLOUDFRONT_MODEL_HEADERS}
)

file(GLOB CLOUDFRONT_UNITY_SRC
    ${AWS_CLOUDFRONT_SOURCE}
    ${AWS_CLOUDFRONT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDFRONT" CLOUDFRONT_UNITY_SRC)
endif()

file(GLOB CLOUDFRONT_SRC
    ${CLOUDFRONT_UNIFIED_HEADERS}
    ${CLOUDFRONT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudfront" FILES ${AWS_CLOUDFRONT_HEADERS})
        source_group("Header Files\\aws\\cloudfront\\model" FILES ${AWS_CLOUDFRONT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDFRONT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDFRONT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDFRONT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${CLOUDFRONT_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDFRONT_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${CLOUDFRONT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_CLOUDFRONT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudfront)
install (FILES ${AWS_CLOUDFRONT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudfront/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


