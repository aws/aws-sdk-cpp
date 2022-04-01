add_project(aws-cpp-sdk-polly "C++ SDK for the AWS polly service" aws-cpp-sdk-core)

file(GLOB AWS_POLLY_HEADERS
    "include/aws/polly/*.h"
)

file(GLOB AWS_POLLY_MODEL_HEADERS
    "include/aws/polly/model/*.h"
)

file(GLOB AWS_POLLY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_POLLY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB POLLY_UNIFIED_HEADERS
    ${AWS_POLLY_HEADERS}
    ${AWS_POLLY_MODEL_HEADERS}
)

file(GLOB POLLY_UNITY_SRC
    ${AWS_POLLY_SOURCE}
    ${AWS_POLLY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("POLLY" POLLY_UNITY_SRC)
endif()

file(GLOB POLLY_SRC
    ${POLLY_UNIFIED_HEADERS}
    ${POLLY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\polly" FILES ${AWS_POLLY_HEADERS})
        source_group("Header Files\\aws\\polly\\model" FILES ${AWS_POLLY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_POLLY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_POLLY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(POLLY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${POLLY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_POLLY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_POLLY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/polly)
install (FILES ${AWS_POLLY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/polly/model)

do_packaging()


