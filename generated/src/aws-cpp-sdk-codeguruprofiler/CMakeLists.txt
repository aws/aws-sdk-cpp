add_project(aws-cpp-sdk-codeguruprofiler "C++ SDK for the AWS codeguruprofiler service" aws-cpp-sdk-core)

file(GLOB AWS_CODEGURUPROFILER_HEADERS
    "include/aws/codeguruprofiler/*.h"
)

file(GLOB AWS_CODEGURUPROFILER_MODEL_HEADERS
    "include/aws/codeguruprofiler/model/*.h"
)

file(GLOB AWS_CODEGURUPROFILER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CODEGURUPROFILER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CODEGURUPROFILER_UNIFIED_HEADERS
    ${AWS_CODEGURUPROFILER_HEADERS}
    ${AWS_CODEGURUPROFILER_MODEL_HEADERS}
)

file(GLOB CODEGURUPROFILER_UNITY_SRC
    ${AWS_CODEGURUPROFILER_SOURCE}
    ${AWS_CODEGURUPROFILER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CODEGURUPROFILER" CODEGURUPROFILER_UNITY_SRC)
endif()

file(GLOB CODEGURUPROFILER_SRC
    ${CODEGURUPROFILER_UNIFIED_HEADERS}
    ${CODEGURUPROFILER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\codeguruprofiler" FILES ${AWS_CODEGURUPROFILER_HEADERS})
        source_group("Header Files\\aws\\codeguruprofiler\\model" FILES ${AWS_CODEGURUPROFILER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CODEGURUPROFILER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CODEGURUPROFILER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CODEGURUPROFILER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CODEGURUPROFILER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CODEGURUPROFILER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CODEGURUPROFILER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeguruprofiler)
install (FILES ${AWS_CODEGURUPROFILER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/codeguruprofiler/model)

do_packaging()


