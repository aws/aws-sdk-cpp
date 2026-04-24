add_project(aws-cpp-sdk-invoicing "C++ SDK for the AWS invoicing service" aws-cpp-sdk-core)

file(GLOB AWS_INVOICING_HEADERS
    "include/aws/invoicing/*.h"
)

file(GLOB AWS_INVOICING_MODEL_HEADERS
    "include/aws/invoicing/model/*.h"
)

file(GLOB AWS_INVOICING_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_INVOICING_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB INVOICING_UNIFIED_HEADERS
    ${AWS_INVOICING_HEADERS}
    ${AWS_INVOICING_MODEL_HEADERS}
)

file(GLOB INVOICING_UNITY_SRC
    ${AWS_INVOICING_SOURCE}
    ${AWS_INVOICING_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("INVOICING" INVOICING_UNITY_SRC)
endif()

file(GLOB INVOICING_SRC
    ${INVOICING_UNIFIED_HEADERS}
    ${INVOICING_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\invoicing" FILES ${AWS_INVOICING_HEADERS})
        source_group("Header Files\\aws\\invoicing\\model" FILES ${AWS_INVOICING_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_INVOICING_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_INVOICING_MODEL_SOURCE})
    endif(MSVC)
endif()

set(INVOICING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${INVOICING_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_INVOICING_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_INVOICING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/invoicing)
install (FILES ${AWS_INVOICING_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/invoicing/model)

do_packaging()


