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

add_library(${PROJECT_NAME} ${STORAGEGATEWAY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_STORAGEGATEWAY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_STORAGEGATEWAY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/storagegateway)
install (FILES ${AWS_STORAGEGATEWAY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/storagegateway/model)

do_packaging()


