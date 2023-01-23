add_project(aws-cpp-sdk-ebs "C++ SDK for the AWS ebs service" aws-cpp-sdk-core)

file(GLOB AWS_EBS_HEADERS
    "include/aws/ebs/*.h"
)

file(GLOB AWS_EBS_MODEL_HEADERS
    "include/aws/ebs/model/*.h"
)

file(GLOB AWS_EBS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EBS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EBS_UNIFIED_HEADERS
    ${AWS_EBS_HEADERS}
    ${AWS_EBS_MODEL_HEADERS}
)

file(GLOB EBS_UNITY_SRC
    ${AWS_EBS_SOURCE}
    ${AWS_EBS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EBS" EBS_UNITY_SRC)
endif()

file(GLOB EBS_SRC
    ${EBS_UNIFIED_HEADERS}
    ${EBS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ebs" FILES ${AWS_EBS_HEADERS})
        source_group("Header Files\\aws\\ebs\\model" FILES ${AWS_EBS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EBS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EBS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EBS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EBS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EBS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EBS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ebs)
install (FILES ${AWS_EBS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ebs/model)

do_packaging()


