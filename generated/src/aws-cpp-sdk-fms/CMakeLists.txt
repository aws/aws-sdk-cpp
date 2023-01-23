add_project(aws-cpp-sdk-fms "C++ SDK for the AWS fms service" aws-cpp-sdk-core)

file(GLOB AWS_FMS_HEADERS
    "include/aws/fms/*.h"
)

file(GLOB AWS_FMS_MODEL_HEADERS
    "include/aws/fms/model/*.h"
)

file(GLOB AWS_FMS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_FMS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB FMS_UNIFIED_HEADERS
    ${AWS_FMS_HEADERS}
    ${AWS_FMS_MODEL_HEADERS}
)

file(GLOB FMS_UNITY_SRC
    ${AWS_FMS_SOURCE}
    ${AWS_FMS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("FMS" FMS_UNITY_SRC)
endif()

file(GLOB FMS_SRC
    ${FMS_UNIFIED_HEADERS}
    ${FMS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\fms" FILES ${AWS_FMS_HEADERS})
        source_group("Header Files\\aws\\fms\\model" FILES ${AWS_FMS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_FMS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_FMS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(FMS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${FMS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_FMS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_FMS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/fms)
install (FILES ${AWS_FMS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/fms/model)

do_packaging()


