add_project(aws-cpp-sdk-rest-xml-protocol-namespace "C++ SDK for the AWS rest-xml-protocol-namespace service" aws-cpp-sdk-core)

file(GLOB AWS_REST-XML-PROTOCOL-NAMESPACE_HEADERS
    "include/aws/rest-xml-protocol-namespace/*.h"
)

file(GLOB AWS_REST-XML-PROTOCOL-NAMESPACE_MODEL_HEADERS
    "include/aws/rest-xml-protocol-namespace/model/*.h"
)

file(GLOB AWS_REST-XML-PROTOCOL-NAMESPACE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_REST-XML-PROTOCOL-NAMESPACE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB REST-XML-PROTOCOL-NAMESPACE_UNIFIED_HEADERS
    ${AWS_REST-XML-PROTOCOL-NAMESPACE_HEADERS}
    ${AWS_REST-XML-PROTOCOL-NAMESPACE_MODEL_HEADERS}
)

file(GLOB REST-XML-PROTOCOL-NAMESPACE_UNITY_SRC
    ${AWS_REST-XML-PROTOCOL-NAMESPACE_SOURCE}
    ${AWS_REST-XML-PROTOCOL-NAMESPACE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("REST-XML-PROTOCOL-NAMESPACE" REST-XML-PROTOCOL-NAMESPACE_UNITY_SRC)
endif()

file(GLOB REST-XML-PROTOCOL-NAMESPACE_SRC
    ${REST-XML-PROTOCOL-NAMESPACE_UNIFIED_HEADERS}
    ${REST-XML-PROTOCOL-NAMESPACE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\rest-xml-protocol-namespace" FILES ${AWS_REST-XML-PROTOCOL-NAMESPACE_HEADERS})
        source_group("Header Files\\aws\\rest-xml-protocol-namespace\\model" FILES ${AWS_REST-XML-PROTOCOL-NAMESPACE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_REST-XML-PROTOCOL-NAMESPACE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_REST-XML-PROTOCOL-NAMESPACE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(REST-XML-PROTOCOL-NAMESPACE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${REST-XML-PROTOCOL-NAMESPACE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_RESTXMLPROTOCOLNAMESPACE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_REST-XML-PROTOCOL-NAMESPACE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rest-xml-protocol-namespace)
install (FILES ${AWS_REST-XML-PROTOCOL-NAMESPACE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/rest-xml-protocol-namespace/model)

do_packaging()


