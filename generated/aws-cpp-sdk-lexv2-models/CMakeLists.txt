add_project(aws-cpp-sdk-lexv2-models "C++ SDK for the AWS lexv2-models service" aws-cpp-sdk-core)

file(GLOB AWS_LEXV2-MODELS_HEADERS
    "include/aws/lexv2-models/*.h"
)

file(GLOB AWS_LEXV2-MODELS_MODEL_HEADERS
    "include/aws/lexv2-models/model/*.h"
)

file(GLOB AWS_LEXV2-MODELS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LEXV2-MODELS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LEXV2-MODELS_UNIFIED_HEADERS
    ${AWS_LEXV2-MODELS_HEADERS}
    ${AWS_LEXV2-MODELS_MODEL_HEADERS}
)

file(GLOB LEXV2-MODELS_UNITY_SRC
    ${AWS_LEXV2-MODELS_SOURCE}
    ${AWS_LEXV2-MODELS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LEXV2-MODELS" LEXV2-MODELS_UNITY_SRC)
endif()

file(GLOB LEXV2-MODELS_SRC
    ${LEXV2-MODELS_UNIFIED_HEADERS}
    ${LEXV2-MODELS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\lexv2-models" FILES ${AWS_LEXV2-MODELS_HEADERS})
        source_group("Header Files\\aws\\lexv2-models\\model" FILES ${AWS_LEXV2-MODELS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LEXV2-MODELS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LEXV2-MODELS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LEXV2-MODELS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LEXV2-MODELS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LEXMODELSV2_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LEXV2-MODELS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lexv2-models)
install (FILES ${AWS_LEXV2-MODELS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/lexv2-models/model)

do_packaging()


