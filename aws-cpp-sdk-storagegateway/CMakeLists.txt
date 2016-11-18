add_project(aws-cpp-sdk-storagegateway "C++ SDK for the AWS storagegateway service" aws-cpp-sdk-core)

file(GLOB AWS_STORAGEGATEWAY_HEADERS
    "include/aws/storagegateway/*.h"
)

file(GLOB AWS_STORAGEGATEWAY_MODEL_HEADERS
    "include/aws/storagegateway/model/*.h"
)

file(GLOB AWS_STORAGEGATEWAY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_STORAGEGATEWAY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB STORAGEGATEWAY_UNIFIED_HEADERS
    ${AWS_STORAGEGATEWAY_HEADERS}
    ${AWS_STORAGEGATEWAY_MODEL_HEADERS}
)

file(GLOB STORAGEGATEWAY_UNITY_SRC
    ${AWS_STORAGEGATEWAY_SOURCE}
    ${AWS_STORAGEGATEWAY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("STORAGEGATEWAY" STORAGEGATEWAY_UNITY_SRC)
endif()

file(GLOB STORAGEGATEWAY_SRC
    ${STORAGEGATEWAY_UNIFIED_HEADERS}
    ${STORAGEGATEWAY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\storagegateway" FILES ${AWS_STORAGEGATEWAY_HEADERS})
        source_group("Header Files\\aws\\storagegateway\\model" FILES ${AWS_STORAGEGATEWAY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_STORAGEGATEWAY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_STORAGEGATEWAY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(STORAGEGATEWAY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

include_directories(${STORAGEGATEWAY_INCLUDES})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_STORAGEGATEWAY_EXPORTS")
endif()

add_library(${PROJECT_NAME} ${LIBTYPE} ${STORAGEGATEWAY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})

setup_install()

install (FILES ${AWS_STORAGEGATEWAY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/storagegateway)
install (FILES ${AWS_STORAGEGATEWAY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/storagegateway/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


