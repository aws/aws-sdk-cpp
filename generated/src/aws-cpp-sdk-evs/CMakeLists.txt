add_project(aws-cpp-sdk-evs "C++ SDK for the AWS evs service" aws-cpp-sdk-core)

file(GLOB AWS_EVS_HEADERS
    "include/aws/evs/*.h"
)

file(GLOB AWS_EVS_MODEL_HEADERS
    "include/aws/evs/model/*.h"
)

file(GLOB AWS_EVS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EVS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EVS_UNIFIED_HEADERS
    ${AWS_EVS_HEADERS}
    ${AWS_EVS_MODEL_HEADERS}
)

file(GLOB EVS_UNITY_SRC
    ${AWS_EVS_SOURCE}
    ${AWS_EVS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EVS" EVS_UNITY_SRC)
endif()

file(GLOB EVS_SRC
    ${EVS_UNIFIED_HEADERS}
    ${EVS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\evs" FILES ${AWS_EVS_HEADERS})
        source_group("Header Files\\aws\\evs\\model" FILES ${AWS_EVS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EVS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EVS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EVS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EVS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EVS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EVS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/evs)
install (FILES ${AWS_EVS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/evs/model)

do_packaging()


