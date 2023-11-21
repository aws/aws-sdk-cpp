add_project(aws-cpp-sdk-cloudfront-keyvaluestore "C++ SDK for the AWS cloudfront-keyvaluestore service" aws-cpp-sdk-core)

file(GLOB AWS_CLOUDFRONT-KEYVALUESTORE_HEADERS
    "include/aws/cloudfront-keyvaluestore/*.h"
)

file(GLOB AWS_CLOUDFRONT-KEYVALUESTORE_MODEL_HEADERS
    "include/aws/cloudfront-keyvaluestore/model/*.h"
)

file(GLOB AWS_CLOUDFRONT-KEYVALUESTORE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLOUDFRONT-KEYVALUESTORE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLOUDFRONT-KEYVALUESTORE_UNIFIED_HEADERS
    ${AWS_CLOUDFRONT-KEYVALUESTORE_HEADERS}
    ${AWS_CLOUDFRONT-KEYVALUESTORE_MODEL_HEADERS}
)

file(GLOB CLOUDFRONT-KEYVALUESTORE_UNITY_SRC
    ${AWS_CLOUDFRONT-KEYVALUESTORE_SOURCE}
    ${AWS_CLOUDFRONT-KEYVALUESTORE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDFRONT-KEYVALUESTORE" CLOUDFRONT-KEYVALUESTORE_UNITY_SRC)
endif()

file(GLOB CLOUDFRONT-KEYVALUESTORE_SRC
    ${CLOUDFRONT-KEYVALUESTORE_UNIFIED_HEADERS}
    ${CLOUDFRONT-KEYVALUESTORE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cloudfront-keyvaluestore" FILES ${AWS_CLOUDFRONT-KEYVALUESTORE_HEADERS})
        source_group("Header Files\\aws\\cloudfront-keyvaluestore\\model" FILES ${AWS_CLOUDFRONT-KEYVALUESTORE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLOUDFRONT-KEYVALUESTORE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLOUDFRONT-KEYVALUESTORE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLOUDFRONT-KEYVALUESTORE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLOUDFRONT-KEYVALUESTORE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLOUDFRONTKEYVALUESTORE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLOUDFRONT-KEYVALUESTORE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudfront-keyvaluestore)
install (FILES ${AWS_CLOUDFRONT-KEYVALUESTORE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cloudfront-keyvaluestore/model)

do_packaging()


