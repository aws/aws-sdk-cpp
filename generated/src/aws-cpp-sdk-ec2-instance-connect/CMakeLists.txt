add_project(aws-cpp-sdk-ec2-instance-connect "C++ SDK for the AWS ec2-instance-connect service" aws-cpp-sdk-core)

file(GLOB AWS_EC2-INSTANCE-CONNECT_HEADERS
    "include/aws/ec2-instance-connect/*.h"
)

file(GLOB AWS_EC2-INSTANCE-CONNECT_MODEL_HEADERS
    "include/aws/ec2-instance-connect/model/*.h"
)

file(GLOB AWS_EC2-INSTANCE-CONNECT_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EC2-INSTANCE-CONNECT_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EC2-INSTANCE-CONNECT_UNIFIED_HEADERS
    ${AWS_EC2-INSTANCE-CONNECT_HEADERS}
    ${AWS_EC2-INSTANCE-CONNECT_MODEL_HEADERS}
)

file(GLOB EC2-INSTANCE-CONNECT_UNITY_SRC
    ${AWS_EC2-INSTANCE-CONNECT_SOURCE}
    ${AWS_EC2-INSTANCE-CONNECT_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EC2-INSTANCE-CONNECT" EC2-INSTANCE-CONNECT_UNITY_SRC)
endif()

file(GLOB EC2-INSTANCE-CONNECT_SRC
    ${EC2-INSTANCE-CONNECT_UNIFIED_HEADERS}
    ${EC2-INSTANCE-CONNECT_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\ec2-instance-connect" FILES ${AWS_EC2-INSTANCE-CONNECT_HEADERS})
        source_group("Header Files\\aws\\ec2-instance-connect\\model" FILES ${AWS_EC2-INSTANCE-CONNECT_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EC2-INSTANCE-CONNECT_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EC2-INSTANCE-CONNECT_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EC2-INSTANCE-CONNECT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EC2-INSTANCE-CONNECT_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EC2INSTANCECONNECT_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EC2-INSTANCE-CONNECT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ec2-instance-connect)
install (FILES ${AWS_EC2-INSTANCE-CONNECT_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/ec2-instance-connect/model)

do_packaging()


