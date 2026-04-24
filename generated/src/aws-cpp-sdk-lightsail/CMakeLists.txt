add_project(aws-cpp-sdk-lightsail "C++ SDK for the AWS lightsail service" aws-cpp-sdk-core)

file(GLOB AWS_LIGHTSAIL_HEADERS
    "include/aws/lightsail/*.h"
)

file(GLOB AWS_LIGHTSAIL_MODEL_HEADERS
    "include/aws/lightsail/model/*.h"
)

file(GLOB AWS_LIGHTSAIL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LIGHTSAIL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LIGHTSAIL_UNIFIED_HEADERS
    ${AWS_LIGHTSAIL_HEADERS}
    ${AWS_LIGHTSAIL_MODEL_HEADERS}
)

file(GLOB LIGHTSAIL_UNITY_SRC
    ${AWS_LIGHTSAIL_SOURCE}
    ${AWS_LIGHTSAIL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LIGHTSAIL" LIGHTSAIL_UNITY_SRC)
endif()

file(GLOB LIGHTSAIL_SRC
    ${LIGHTSAIL_UNIFIED_HEADERS}
    ${LIGHTSAIL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lightsail" FILES ${AWS_LIGHTSAIL_HEADERS})
        source_group("Header Files\\aws\\lightsail\\model" FILES ${AWS_LIGHTSAIL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LIGHTSAIL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LIGHTSAIL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LIGHTSAIL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LIGHTSAIL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LIGHTSAIL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LIGHTSAIL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lightsail)
install (FILES ${AWS_LIGHTSAIL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lightsail/model)

do_packaging()


