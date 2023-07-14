add_project(aws-cpp-sdk-servicecatalog-appregistry "C++ SDK for the AWS servicecatalog-appregistry service" aws-cpp-sdk-core)

file(GLOB AWS_SERVICECATALOG-APPREGISTRY_HEADERS
    "include/aws/servicecatalog-appregistry/*.h"
)

file(GLOB AWS_SERVICECATALOG-APPREGISTRY_MODEL_HEADERS
    "include/aws/servicecatalog-appregistry/model/*.h"
)

file(GLOB AWS_SERVICECATALOG-APPREGISTRY_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_SERVICECATALOG-APPREGISTRY_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB SERVICECATALOG-APPREGISTRY_UNIFIED_HEADERS
    ${AWS_SERVICECATALOG-APPREGISTRY_HEADERS}
    ${AWS_SERVICECATALOG-APPREGISTRY_MODEL_HEADERS}
)

file(GLOB SERVICECATALOG-APPREGISTRY_UNITY_SRC
    ${AWS_SERVICECATALOG-APPREGISTRY_SOURCE}
    ${AWS_SERVICECATALOG-APPREGISTRY_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("SERVICECATALOG-APPREGISTRY" SERVICECATALOG-APPREGISTRY_UNITY_SRC)
endif()

file(GLOB SERVICECATALOG-APPREGISTRY_SRC
    ${SERVICECATALOG-APPREGISTRY_UNIFIED_HEADERS}
    ${SERVICECATALOG-APPREGISTRY_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\servicecatalog-appregistry" FILES ${AWS_SERVICECATALOG-APPREGISTRY_HEADERS})
        source_group("Header Files\\aws\\servicecatalog-appregistry\\model" FILES ${AWS_SERVICECATALOG-APPREGISTRY_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_SERVICECATALOG-APPREGISTRY_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_SERVICECATALOG-APPREGISTRY_MODEL_SOURCE})
    endif(MSVC)
endif()

set(SERVICECATALOG-APPREGISTRY_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${SERVICECATALOG-APPREGISTRY_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPREGISTRY_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_SERVICECATALOG-APPREGISTRY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicecatalog-appregistry)
install (FILES ${AWS_SERVICECATALOG-APPREGISTRY_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/servicecatalog-appregistry/model)

do_packaging()


