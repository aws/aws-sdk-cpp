add_project(aws-cpp-sdk-route53domains "C++ SDK for the AWS route53domains service" aws-cpp-sdk-core)

file(GLOB AWS_ROUTE53DOMAINS_HEADERS
    "include/aws/route53domains/*.h"
)

file(GLOB AWS_ROUTE53DOMAINS_MODEL_HEADERS
    "include/aws/route53domains/model/*.h"
)

file(GLOB AWS_ROUTE53DOMAINS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ROUTE53DOMAINS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ROUTE53DOMAINS_UNIFIED_HEADERS
    ${AWS_ROUTE53DOMAINS_HEADERS}
    ${AWS_ROUTE53DOMAINS_MODEL_HEADERS}
)

file(GLOB ROUTE53DOMAINS_UNITY_SRC
    ${AWS_ROUTE53DOMAINS_SOURCE}
    ${AWS_ROUTE53DOMAINS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROUTE53DOMAINS" ROUTE53DOMAINS_UNITY_SRC)
endif()

file(GLOB ROUTE53DOMAINS_SRC
    ${ROUTE53DOMAINS_UNIFIED_HEADERS}
    ${ROUTE53DOMAINS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\route53domains" FILES ${AWS_ROUTE53DOMAINS_HEADERS})
        source_group("Header Files\\aws\\route53domains\\model" FILES ${AWS_ROUTE53DOMAINS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ROUTE53DOMAINS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ROUTE53DOMAINS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ROUTE53DOMAINS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${ROUTE53DOMAINS_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ROUTE53DOMAINS_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${ROUTE53DOMAINS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_ROUTE53DOMAINS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53domains)
install (FILES ${AWS_ROUTE53DOMAINS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/route53domains/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


