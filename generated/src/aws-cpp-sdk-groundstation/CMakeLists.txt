add_project(aws-cpp-sdk-groundstation "C++ SDK for the AWS groundstation service" aws-cpp-sdk-core)

file(GLOB AWS_GROUNDSTATION_HEADERS
    "include/aws/groundstation/*.h"
)

file(GLOB AWS_GROUNDSTATION_MODEL_HEADERS
    "include/aws/groundstation/model/*.h"
)

file(GLOB AWS_GROUNDSTATION_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GROUNDSTATION_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GROUNDSTATION_UNIFIED_HEADERS
    ${AWS_GROUNDSTATION_HEADERS}
    ${AWS_GROUNDSTATION_MODEL_HEADERS}
)

file(GLOB GROUNDSTATION_UNITY_SRC
    ${AWS_GROUNDSTATION_SOURCE}
    ${AWS_GROUNDSTATION_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GROUNDSTATION" GROUNDSTATION_UNITY_SRC)
endif()

file(GLOB GROUNDSTATION_SRC
    ${GROUNDSTATION_UNIFIED_HEADERS}
    ${GROUNDSTATION_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\groundstation" FILES ${AWS_GROUNDSTATION_HEADERS})
        source_group("Header Files\\aws\\groundstation\\model" FILES ${AWS_GROUNDSTATION_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GROUNDSTATION_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GROUNDSTATION_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GROUNDSTATION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GROUNDSTATION_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GROUNDSTATION_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GROUNDSTATION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/groundstation)
install (FILES ${AWS_GROUNDSTATION_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/groundstation/model)

do_packaging()


