add_project(aws-cpp-sdk-cloudtrail "C++ SDK for the AWS cloudtrail service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDTRAIL_HEADERS
    "include/aws/cloudtrail/*.h"
)

file(GLOB AWS_CLOUDTRAIL_MODEL_HEADERS
    "include/aws/cloudtrail/model/*.h"
)

file(GLOB AWS_CLOUDTRAIL_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDTRAIL_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDTRAIL_UNIFIED_HEADERS
    ${AWS_CLOUDTRAIL_HEADERS}
    ${AWS_CLOUDTRAIL_MODEL_HEADERS}
)

file(GLOB CLOUDTRAIL_UNITY_SRC
    ${AWS_CLOUDTRAIL_SOURCE}
    ${AWS_CLOUDTRAIL_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDTRAIL" CLOUDTRAIL_UNITY_SRC)
endif()

file(GLOB CLOUDTRAIL_SRC
    ${CLOUDTRAIL_UNIFIED_HEADERS}
    ${CLOUDTRAIL_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudtrail" FILES ${AWS_CLOUDTRAIL_HEADERS})
        source_group("Header Files\\aws\\cloudtrail\\model" FILES ${AWS_CLOUDTRAIL_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDTRAIL_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDTRAIL_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDTRAIL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDTRAIL_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDTRAIL_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDTRAIL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudtrail)
install (FILES ${AWS_CLOUDTRAIL_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudtrail/model)

do_packaging()


