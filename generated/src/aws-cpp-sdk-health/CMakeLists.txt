add_project(aws-cpp-sdk-health "C++ SDK for the AWS health service" aws-cpp-sdk-core)

file(GLOB AWS_HEALTH_HEADERS
    "include/aws/health/*.h"
)

file(GLOB AWS_HEALTH_MODEL_HEADERS
    "include/aws/health/model/*.h"
)

file(GLOB AWS_HEALTH_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_HEALTH_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB HEALTH_UNIFIED_HEADERS
    ${AWS_HEALTH_HEADERS}
    ${AWS_HEALTH_MODEL_HEADERS}
)

file(GLOB HEALTH_UNITY_SRC
    ${AWS_HEALTH_SOURCE}
    ${AWS_HEALTH_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("HEALTH" HEALTH_UNITY_SRC)
endif()

file(GLOB HEALTH_SRC
    ${HEALTH_UNIFIED_HEADERS}
    ${HEALTH_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\health" FILES ${AWS_HEALTH_HEADERS})
        source_group("Header Files\\aws\\health\\model" FILES ${AWS_HEALTH_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_HEALTH_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_HEALTH_MODEL_SOURCE})
    endif(MSVC)
endif()

set(HEALTH_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${HEALTH_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_HEALTH_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_HEALTH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/health)
install (FILES ${AWS_HEALTH_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/health/model)

do_packaging()


