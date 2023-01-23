add_project(aws-cpp-sdk-dataexchange "C++ SDK for the AWS dataexchange service" aws-cpp-sdk-core)

file(GLOB AWS_DATAEXCHANGE_HEADERS
    "include/aws/dataexchange/*.h"
)

file(GLOB AWS_DATAEXCHANGE_MODEL_HEADERS
    "include/aws/dataexchange/model/*.h"
)

file(GLOB AWS_DATAEXCHANGE_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_DATAEXCHANGE_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB DATAEXCHANGE_UNIFIED_HEADERS
    ${AWS_DATAEXCHANGE_HEADERS}
    ${AWS_DATAEXCHANGE_MODEL_HEADERS}
)

file(GLOB DATAEXCHANGE_UNITY_SRC
    ${AWS_DATAEXCHANGE_SOURCE}
    ${AWS_DATAEXCHANGE_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("DATAEXCHANGE" DATAEXCHANGE_UNITY_SRC)
endif()

file(GLOB DATAEXCHANGE_SRC
    ${DATAEXCHANGE_UNIFIED_HEADERS}
    ${DATAEXCHANGE_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\dataexchange" FILES ${AWS_DATAEXCHANGE_HEADERS})
        source_group("Header Files\\aws\\dataexchange\\model" FILES ${AWS_DATAEXCHANGE_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_DATAEXCHANGE_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_DATAEXCHANGE_MODEL_SOURCE})
    endif(MSVC)
endif()

set(DATAEXCHANGE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${DATAEXCHANGE_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_DATAEXCHANGE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_DATAEXCHANGE_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dataexchange)
install (FILES ${AWS_DATAEXCHANGE_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/dataexchange/model)

do_packaging()


