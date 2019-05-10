add_project(aws-cpp-sdk-resourcegroupstaggingapi "C++ SDK for the AWS resourcegroupstaggingapi service" aws-cpp-sdk-core)

file(GLOB AWS_RESOURCEGROUPSTAGGINGAPI_HEADERS
    "include/aws/resourcegroupstaggingapi/*.h"
)

file(GLOB AWS_RESOURCEGROUPSTAGGINGAPI_MODEL_HEADERS
    "include/aws/resourcegroupstaggingapi/model/*.h"
)

file(GLOB AWS_RESOURCEGROUPSTAGGINGAPI_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_RESOURCEGROUPSTAGGINGAPI_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB RESOURCEGROUPSTAGGINGAPI_UNIFIED_HEADERS
    ${AWS_RESOURCEGROUPSTAGGINGAPI_HEADERS}
    ${AWS_RESOURCEGROUPSTAGGINGAPI_MODEL_HEADERS}
)

file(GLOB RESOURCEGROUPSTAGGINGAPI_UNITY_SRC
    ${AWS_RESOURCEGROUPSTAGGINGAPI_SOURCE}
    ${AWS_RESOURCEGROUPSTAGGINGAPI_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("RESOURCEGROUPSTAGGINGAPI" RESOURCEGROUPSTAGGINGAPI_UNITY_SRC)
endif()

file(GLOB RESOURCEGROUPSTAGGINGAPI_SRC
    ${RESOURCEGROUPSTAGGINGAPI_UNIFIED_HEADERS}
    ${RESOURCEGROUPSTAGGINGAPI_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\resourcegroupstaggingapi" FILES ${AWS_RESOURCEGROUPSTAGGINGAPI_HEADERS})
        source_group("Header Files\\aws\\resourcegroupstaggingapi\\model" FILES ${AWS_RESOURCEGROUPSTAGGINGAPI_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_RESOURCEGROUPSTAGGINGAPI_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_RESOURCEGROUPSTAGGINGAPI_MODEL_SOURCE})
    endif(MSVC)
endif()

set(RESOURCEGROUPSTAGGINGAPI_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${RESOURCEGROUPSTAGGINGAPI_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_RESOURCEGROUPSTAGGINGAPI_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_RESOURCEGROUPSTAGGINGAPI_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/resourcegroupstaggingapi)
install (FILES ${AWS_RESOURCEGROUPSTAGGINGAPI_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/resourcegroupstaggingapi/model)

do_packaging()


