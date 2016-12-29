add_project(aws-cpp-sdk-route53 "C++ SDK for the AWS route53 service" aws-cpp-sdk-core)

file(GLOB AWS_ROUTE53_HEADERS
    "include/aws/route53/*.h"
)

file(GLOB AWS_ROUTE53_MODEL_HEADERS
    "include/aws/route53/model/*.h"
)

file(GLOB AWS_ROUTE53_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ROUTE53_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ROUTE53_UNIFIED_HEADERS
    ${AWS_ROUTE53_HEADERS}
    ${AWS_ROUTE53_MODEL_HEADERS}
)

file(GLOB ROUTE53_UNITY_SRC
    ${AWS_ROUTE53_SOURCE}
    ${AWS_ROUTE53_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROUTE53" ROUTE53_UNITY_SRC)
endif()

file(GLOB ROUTE53_SRC
    ${ROUTE53_UNIFIED_HEADERS}
    ${ROUTE53_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\route53" FILES ${AWS_ROUTE53_HEADERS})
        source_group("Header Files\\aws\\route53\\model" FILES ${AWS_ROUTE53_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ROUTE53_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ROUTE53_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ROUTE53_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${ROUTE53_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ROUTE53_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ROUTE53_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_ROUTE53_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53)
install (FILES ${AWS_ROUTE53_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


