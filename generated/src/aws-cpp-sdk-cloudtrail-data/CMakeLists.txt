add_project(aws-cpp-sdk-cloudtrail-data "C++ SDK for the AWS cloudtrail-data service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDTRAIL-DATA_HEADERS
    "include/aws/cloudtrail-data/*.h"
)

file(GLOB AWS_CLOUDTRAIL-DATA_MODEL_HEADERS
    "include/aws/cloudtrail-data/model/*.h"
)

file(GLOB AWS_CLOUDTRAIL-DATA_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDTRAIL-DATA_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDTRAIL-DATA_UNIFIED_HEADERS
    ${AWS_CLOUDTRAIL-DATA_HEADERS}
    ${AWS_CLOUDTRAIL-DATA_MODEL_HEADERS}
)

file(GLOB CLOUDTRAIL-DATA_UNITY_SRC
    ${AWS_CLOUDTRAIL-DATA_SOURCE}
    ${AWS_CLOUDTRAIL-DATA_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDTRAIL-DATA" CLOUDTRAIL-DATA_UNITY_SRC)
endif()

file(GLOB CLOUDTRAIL-DATA_SRC
    ${CLOUDTRAIL-DATA_UNIFIED_HEADERS}
    ${CLOUDTRAIL-DATA_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudtrail-data" FILES ${AWS_CLOUDTRAIL-DATA_HEADERS})
        source_group("Header Files\\aws\\cloudtrail-data\\model" FILES ${AWS_CLOUDTRAIL-DATA_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDTRAIL-DATA_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDTRAIL-DATA_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDTRAIL-DATA_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDTRAIL-DATA_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDTRAILDATA_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDTRAIL-DATA_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudtrail-data)
install (FILES ${AWS_CLOUDTRAIL-DATA_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudtrail-data/model)

do_packaging()


