add_project(aws-cpp-sdk-comprehend "C++ SDK for the AWS comprehend service" aws-cpp-sdk-core)

file(GLOB AWS_COMPREHEND_HEADERS
    "include/aws/comprehend/*.h"
)

file(GLOB AWS_COMPREHEND_MODEL_HEADERS
    "include/aws/comprehend/model/*.h"
)

file(GLOB AWS_COMPREHEND_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_COMPREHEND_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB COMPREHEND_UNIFIED_HEADERS
    ${AWS_COMPREHEND_HEADERS}
    ${AWS_COMPREHEND_MODEL_HEADERS}
)

file(GLOB COMPREHEND_UNITY_SRC
    ${AWS_COMPREHEND_SOURCE}
    ${AWS_COMPREHEND_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("COMPREHEND" COMPREHEND_UNITY_SRC)
endif()

file(GLOB COMPREHEND_SRC
    ${COMPREHEND_UNIFIED_HEADERS}
    ${COMPREHEND_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\comprehend" FILES ${AWS_COMPREHEND_HEADERS})
        source_group("Header Files\\aws\\comprehend\\model" FILES ${AWS_COMPREHEND_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_COMPREHEND_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_COMPREHEND_MODEL_SOURCE})
    endif(MSVC)
endif()

set(COMPREHEND_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${COMPREHEND_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_COMPREHEND_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_COMPREHEND_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/comprehend)
install (FILES ${AWS_COMPREHEND_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/comprehend/model)

do_packaging()


