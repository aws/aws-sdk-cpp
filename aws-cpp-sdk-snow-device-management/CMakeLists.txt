add_project(aws-cpp-sdk-snow-device-management "C++ SDK for the AWS snow-device-management service" aws-cpp-sdk-core)

file(GLOB AWS_SNOW-DEVICE-MANAGEMENT_HEADERS
    "include/aws/snow-device-management/*.h"
)

file(GLOB AWS_SNOW-DEVICE-MANAGEMENT_MODEL_HEADERS
    "include/aws/snow-device-management/model/*.h"
)

file(GLOB AWS_SNOW-DEVICE-MANAGEMENT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SNOW-DEVICE-MANAGEMENT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SNOW-DEVICE-MANAGEMENT_UNIFIED_HEADERS
    ${AWS_SNOW-DEVICE-MANAGEMENT_HEADERS}
    ${AWS_SNOW-DEVICE-MANAGEMENT_MODEL_HEADERS}
)

file(GLOB SNOW-DEVICE-MANAGEMENT_UNITY_SRC
    ${AWS_SNOW-DEVICE-MANAGEMENT_SOURCE}
    ${AWS_SNOW-DEVICE-MANAGEMENT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SNOW-DEVICE-MANAGEMENT" SNOW-DEVICE-MANAGEMENT_UNITY_SRC)
endif()

file(GLOB SNOW-DEVICE-MANAGEMENT_SRC
    ${SNOW-DEVICE-MANAGEMENT_UNIFIED_HEADERS}
    ${SNOW-DEVICE-MANAGEMENT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\snow-device-management" FILES ${AWS_SNOW-DEVICE-MANAGEMENT_HEADERS})
        source_group("Header Files\\aws\\snow-device-management\\model" FILES ${AWS_SNOW-DEVICE-MANAGEMENT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SNOW-DEVICE-MANAGEMENT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SNOW-DEVICE-MANAGEMENT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SNOW-DEVICE-MANAGEMENT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SNOW-DEVICE-MANAGEMENT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_SNOWDEVICEMANAGEMENT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SNOW-DEVICE-MANAGEMENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/snow-device-management)
install (FILES ${AWS_SNOW-DEVICE-MANAGEMENT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/snow-device-management/model)

do_packaging()


