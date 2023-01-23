add_project(aws-cpp-sdk-billingconductor "C++ SDK for the AWS billingconductor service" aws-cpp-sdk-core)

file(GLOB AWS_BILLINGCONDUCTOR_HEADERS
    "include/aws/billingconductor/*.h"
)

file(GLOB AWS_BILLINGCONDUCTOR_MODEL_HEADERS
    "include/aws/billingconductor/model/*.h"
)

file(GLOB AWS_BILLINGCONDUCTOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BILLINGCONDUCTOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BILLINGCONDUCTOR_UNIFIED_HEADERS
    ${AWS_BILLINGCONDUCTOR_HEADERS}
    ${AWS_BILLINGCONDUCTOR_MODEL_HEADERS}
)

file(GLOB BILLINGCONDUCTOR_UNITY_SRC
    ${AWS_BILLINGCONDUCTOR_SOURCE}
    ${AWS_BILLINGCONDUCTOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BILLINGCONDUCTOR" BILLINGCONDUCTOR_UNITY_SRC)
endif()

file(GLOB BILLINGCONDUCTOR_SRC
    ${BILLINGCONDUCTOR_UNIFIED_HEADERS}
    ${BILLINGCONDUCTOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\billingconductor" FILES ${AWS_BILLINGCONDUCTOR_HEADERS})
        source_group("Header Files\\aws\\billingconductor\\model" FILES ${AWS_BILLINGCONDUCTOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BILLINGCONDUCTOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BILLINGCONDUCTOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BILLINGCONDUCTOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BILLINGCONDUCTOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BILLINGCONDUCTOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BILLINGCONDUCTOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/billingconductor)
install (FILES ${AWS_BILLINGCONDUCTOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/billingconductor/model)

do_packaging()


