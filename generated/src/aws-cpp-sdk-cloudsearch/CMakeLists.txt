add_project(aws-cpp-sdk-cloudsearch "C++ SDK for the AWS cloudsearch service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDSEARCH_HEADERS
    "include/aws/cloudsearch/*.h"
)

file(GLOB AWS_CLOUDSEARCH_MODEL_HEADERS
    "include/aws/cloudsearch/model/*.h"
)

file(GLOB AWS_CLOUDSEARCH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDSEARCH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDSEARCH_UNIFIED_HEADERS
    ${AWS_CLOUDSEARCH_HEADERS}
    ${AWS_CLOUDSEARCH_MODEL_HEADERS}
)

file(GLOB CLOUDSEARCH_UNITY_SRC
    ${AWS_CLOUDSEARCH_SOURCE}
    ${AWS_CLOUDSEARCH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDSEARCH" CLOUDSEARCH_UNITY_SRC)
endif()

file(GLOB CLOUDSEARCH_SRC
    ${CLOUDSEARCH_UNIFIED_HEADERS}
    ${CLOUDSEARCH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudsearch" FILES ${AWS_CLOUDSEARCH_HEADERS})
        source_group("Header Files\\aws\\cloudsearch\\model" FILES ${AWS_CLOUDSEARCH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDSEARCH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDSEARCH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDSEARCH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDSEARCH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDSEARCH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDSEARCH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudsearch)
install (FILES ${AWS_CLOUDSEARCH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudsearch/model)

do_packaging()


