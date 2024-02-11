add_project(aws-cpp-sdk-freetier "C++ SDK for the AWS freetier service" aws-cpp-sdk-core)

file(GLOB AWS_FREETIER_HEADERS
    "include/aws/freetier/*.h"
)

file(GLOB AWS_FREETIER_MODEL_HEADERS
    "include/aws/freetier/model/*.h"
)

file(GLOB AWS_FREETIER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_FREETIER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB FREETIER_UNIFIED_HEADERS
    ${AWS_FREETIER_HEADERS}
    ${AWS_FREETIER_MODEL_HEADERS}
)

file(GLOB FREETIER_UNITY_SRC
    ${AWS_FREETIER_SOURCE}
    ${AWS_FREETIER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("FREETIER" FREETIER_UNITY_SRC)
endif()

file(GLOB FREETIER_SRC
    ${FREETIER_UNIFIED_HEADERS}
    ${FREETIER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\freetier" FILES ${AWS_FREETIER_HEADERS})
        source_group("Header Files\\aws\\freetier\\model" FILES ${AWS_FREETIER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_FREETIER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_FREETIER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(FREETIER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${FREETIER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_FREETIER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_FREETIER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/freetier)
install (FILES ${AWS_FREETIER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/freetier/model)

do_packaging()


