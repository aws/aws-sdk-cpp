add_project(aws-cpp-sdk-elasticbeanstalk "C++ SDK for the AWS elasticbeanstalk service" aws-cpp-sdk-core)

file(GLOB AWS_ELASTICBEANSTALK_HEADERS
    "include/aws/elasticbeanstalk/*.h"
)

file(GLOB AWS_ELASTICBEANSTALK_MODEL_HEADERS
    "include/aws/elasticbeanstalk/model/*.h"
)

file(GLOB AWS_ELASTICBEANSTALK_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_ELASTICBEANSTALK_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB ELASTICBEANSTALK_UNIFIED_HEADERS
    ${AWS_ELASTICBEANSTALK_HEADERS}
    ${AWS_ELASTICBEANSTALK_MODEL_HEADERS}
)

file(GLOB ELASTICBEANSTALK_UNITY_SRC
    ${AWS_ELASTICBEANSTALK_SOURCE}
    ${AWS_ELASTICBEANSTALK_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICBEANSTALK" ELASTICBEANSTALK_UNITY_SRC)
endif()

file(GLOB ELASTICBEANSTALK_SRC
    ${ELASTICBEANSTALK_UNIFIED_HEADERS}
    ${ELASTICBEANSTALK_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\elasticbeanstalk" FILES ${AWS_ELASTICBEANSTALK_HEADERS})
        source_group("Header Files\\aws\\elasticbeanstalk\\model" FILES ${AWS_ELASTICBEANSTALK_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_ELASTICBEANSTALK_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_ELASTICBEANSTALK_MODEL_SOURCE})
    endif(MSVC)
endif()

set(ELASTICBEANSTALK_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${ELASTICBEANSTALK_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_ELASTICBEANSTALK_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_ELASTICBEANSTALK_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticbeanstalk)
install (FILES ${AWS_ELASTICBEANSTALK_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/elasticbeanstalk/model)

do_packaging()


