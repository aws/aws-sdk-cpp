add_project(aws-cpp-sdk-healthlake "C++ SDK for the AWS healthlake service" aws-cpp-sdk-core)

file(GLOB AWS_HEALTHLAKE_HEADERS
    "include/aws/healthlake/*.h"
)

file(GLOB AWS_HEALTHLAKE_MODEL_HEADERS
    "include/aws/healthlake/model/*.h"
)

file(GLOB AWS_HEALTHLAKE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_HEALTHLAKE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB HEALTHLAKE_UNIFIED_HEADERS
    ${AWS_HEALTHLAKE_HEADERS}
    ${AWS_HEALTHLAKE_MODEL_HEADERS}
)

file(GLOB HEALTHLAKE_UNITY_SRC
    ${AWS_HEALTHLAKE_SOURCE}
    ${AWS_HEALTHLAKE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("HEALTHLAKE" HEALTHLAKE_UNITY_SRC)
endif()

file(GLOB HEALTHLAKE_SRC
    ${HEALTHLAKE_UNIFIED_HEADERS}
    ${HEALTHLAKE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\healthlake" FILES ${AWS_HEALTHLAKE_HEADERS})
        source_group("Header Files\\aws\\healthlake\\model" FILES ${AWS_HEALTHLAKE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_HEALTHLAKE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_HEALTHLAKE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(HEALTHLAKE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${HEALTHLAKE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_HEALTHLAKE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_HEALTHLAKE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/healthlake)
install (FILES ${AWS_HEALTHLAKE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/healthlake/model)

do_packaging()


