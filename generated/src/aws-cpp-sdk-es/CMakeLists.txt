add_project(aws-cpp-sdk-es "C++ SDK for the AWS es service" aws-cpp-sdk-core)

file(GLOB AWS_ES_HEADERS
    "include/aws/es/*.h"
)

file(GLOB AWS_ES_MODEL_HEADERS
    "include/aws/es/model/*.h"
)

file(GLOB AWS_ES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ES_UNIFIED_HEADERS
    ${AWS_ES_HEADERS}
    ${AWS_ES_MODEL_HEADERS}
)

file(GLOB ES_UNITY_SRC
    ${AWS_ES_SOURCE}
    ${AWS_ES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ES" ES_UNITY_SRC)
endif()

file(GLOB ES_SRC
    ${ES_UNIFIED_HEADERS}
    ${ES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\es" FILES ${AWS_ES_HEADERS})
        source_group("Header Files\\aws\\es\\model" FILES ${AWS_ES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ELASTICSEARCHSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/es)
install (FILES ${AWS_ES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/es/model)

do_packaging()


