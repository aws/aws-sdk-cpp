add_project(aws-cpp-sdk-awstransfer "C++ SDK for the AWS awstransfer service" aws-cpp-sdk-core)

file(GLOB AWS_AWSTRANSFER_HEADERS
    "include/aws/awstransfer/*.h"
)

file(GLOB AWS_AWSTRANSFER_MODEL_HEADERS
    "include/aws/awstransfer/model/*.h"
)

file(GLOB AWS_AWSTRANSFER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AWSTRANSFER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AWSTRANSFER_UNIFIED_HEADERS
    ${AWS_AWSTRANSFER_HEADERS}
    ${AWS_AWSTRANSFER_MODEL_HEADERS}
)

file(GLOB AWSTRANSFER_UNITY_SRC
    ${AWS_AWSTRANSFER_SOURCE}
    ${AWS_AWSTRANSFER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AWSTRANSFER" AWSTRANSFER_UNITY_SRC)
endif()

file(GLOB AWSTRANSFER_SRC
    ${AWSTRANSFER_UNIFIED_HEADERS}
    ${AWSTRANSFER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\awstransfer" FILES ${AWS_AWSTRANSFER_HEADERS})
        source_group("Header Files\\aws\\awstransfer\\model" FILES ${AWS_AWSTRANSFER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AWSTRANSFER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AWSTRANSFER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AWSTRANSFER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${AWSTRANSFER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_TRANSFER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_AWSTRANSFER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/awstransfer)
install (FILES ${AWS_AWSTRANSFER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/awstransfer/model)

do_packaging()


