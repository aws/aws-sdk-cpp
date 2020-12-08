add_project(aws-cpp-sdk-auditmanager "C++ SDK for the AWS auditmanager service" aws-cpp-sdk-core)

file(GLOB AWS_AUDITMANAGER_HEADERS
    "include/aws/auditmanager/*.h"
)

file(GLOB AWS_AUDITMANAGER_MODEL_HEADERS
    "include/aws/auditmanager/model/*.h"
)

file(GLOB AWS_AUDITMANAGER_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_AUDITMANAGER_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB AUDITMANAGER_UNIFIED_HEADERS
    ${AWS_AUDITMANAGER_HEADERS}
    ${AWS_AUDITMANAGER_MODEL_HEADERS}
)

file(GLOB AUDITMANAGER_UNITY_SRC
    ${AWS_AUDITMANAGER_SOURCE}
    ${AWS_AUDITMANAGER_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("AUDITMANAGER" AUDITMANAGER_UNITY_SRC)
endif()

file(GLOB AUDITMANAGER_SRC
    ${AUDITMANAGER_UNIFIED_HEADERS}
    ${AUDITMANAGER_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\auditmanager" FILES ${AWS_AUDITMANAGER_HEADERS})
        source_group("Header Files\\aws\\auditmanager\\model" FILES ${AWS_AUDITMANAGER_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_AUDITMANAGER_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_AUDITMANAGER_MODEL_SOURCE})
    endif(MSVC)
endif()

set(AUDITMANAGER_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${AUDITMANAGER_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_AUDITMANAGER_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_AUDITMANAGER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/auditmanager)
install (FILES ${AWS_AUDITMANAGER_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/auditmanager/model)

do_packaging()


