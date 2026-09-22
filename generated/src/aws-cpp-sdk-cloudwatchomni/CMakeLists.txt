add_project(aws-cpp-sdk-cloudwatchomni "C++ SDK for the AWS cloudwatchomni service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDWATCHOMNI_HEADERS
    "include/aws/cloudwatchomni/*.h"
)

file(GLOB AWS_CLOUDWATCHOMNI_MODEL_HEADERS
    "include/aws/cloudwatchomni/model/*.h"
)

file(GLOB AWS_CLOUDWATCHOMNI_INTERNAL_HEADERS
    "include/aws/cloudwatchomni/internal/*.h"
)

file(GLOB AWS_CLOUDWATCHOMNI_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDWATCHOMNI_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDWATCHOMNI_UNIFIED_HEADERS
    ${AWS_CLOUDWATCHOMNI_HEADERS}
    ${AWS_CLOUDWATCHOMNI_INTERNAL_HEADERS}
    ${AWS_CLOUDWATCHOMNI_MODEL_HEADERS}
)

file(GLOB CLOUDWATCHOMNI_UNITY_SRC
    ${AWS_CLOUDWATCHOMNI_SOURCE}
    ${AWS_CLOUDWATCHOMNI_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDWATCHOMNI" CLOUDWATCHOMNI_UNITY_SRC)
endif()

file(GLOB CLOUDWATCHOMNI_SRC
    ${CLOUDWATCHOMNI_UNIFIED_HEADERS}
    ${CLOUDWATCHOMNI_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudwatchomni" FILES ${AWS_CLOUDWATCHOMNI_HEADERS})
        source_group("Header Files\\aws\\cloudwatchomni\\internal" FILES ${AWS_CLOUDWATCHOMNI_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\cloudwatchomni\\model" FILES ${AWS_CLOUDWATCHOMNI_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDWATCHOMNI_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDWATCHOMNI_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDWATCHOMNI_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDWATCHOMNI_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDWATCHOMNI_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDWATCHOMNI_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudwatchomni)
install (FILES ${AWS_CLOUDWATCHOMNI_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudwatchomni/model)

do_packaging()


