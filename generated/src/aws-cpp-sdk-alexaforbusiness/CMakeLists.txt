add_project(aws-cpp-sdk-alexaforbusiness "C++ SDK for the AWS alexaforbusiness service" aws-cpp-sdk-core)

file(GLOB AWS_ALEXAFORBUSINESS_HEADERS
    "include/aws/alexaforbusiness/*.h"
)

file(GLOB AWS_ALEXAFORBUSINESS_MODEL_HEADERS
    "include/aws/alexaforbusiness/model/*.h"
)

file(GLOB AWS_ALEXAFORBUSINESS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ALEXAFORBUSINESS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ALEXAFORBUSINESS_UNIFIED_HEADERS
    ${AWS_ALEXAFORBUSINESS_HEADERS}
    ${AWS_ALEXAFORBUSINESS_MODEL_HEADERS}
)

file(GLOB ALEXAFORBUSINESS_UNITY_SRC
    ${AWS_ALEXAFORBUSINESS_SOURCE}
    ${AWS_ALEXAFORBUSINESS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ALEXAFORBUSINESS" ALEXAFORBUSINESS_UNITY_SRC)
endif()

file(GLOB ALEXAFORBUSINESS_SRC
    ${ALEXAFORBUSINESS_UNIFIED_HEADERS}
    ${ALEXAFORBUSINESS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\alexaforbusiness" FILES ${AWS_ALEXAFORBUSINESS_HEADERS})
        source_group("Header Files\\aws\\alexaforbusiness\\model" FILES ${AWS_ALEXAFORBUSINESS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ALEXAFORBUSINESS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ALEXAFORBUSINESS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ALEXAFORBUSINESS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ALEXAFORBUSINESS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ALEXAFORBUSINESS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ALEXAFORBUSINESS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/alexaforbusiness)
install (FILES ${AWS_ALEXAFORBUSINESS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/alexaforbusiness/model)

do_packaging()


