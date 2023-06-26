add_project(aws-cpp-sdk-cloud9 "C++ SDK for the AWS cloud9 service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUD9_HEADERS
    "include/aws/cloud9/*.h"
)

file(GLOB AWS_CLOUD9_MODEL_HEADERS
    "include/aws/cloud9/model/*.h"
)

file(GLOB AWS_CLOUD9_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUD9_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUD9_UNIFIED_HEADERS
    ${AWS_CLOUD9_HEADERS}
    ${AWS_CLOUD9_MODEL_HEADERS}
)

file(GLOB CLOUD9_UNITY_SRC
    ${AWS_CLOUD9_SOURCE}
    ${AWS_CLOUD9_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUD9" CLOUD9_UNITY_SRC)
endif()

file(GLOB CLOUD9_SRC
    ${CLOUD9_UNIFIED_HEADERS}
    ${CLOUD9_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloud9" FILES ${AWS_CLOUD9_HEADERS})
        source_group("Header Files\\aws\\cloud9\\model" FILES ${AWS_CLOUD9_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUD9_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUD9_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUD9_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUD9_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUD9_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUD9_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloud9)
install (FILES ${AWS_CLOUD9_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloud9/model)

do_packaging()


