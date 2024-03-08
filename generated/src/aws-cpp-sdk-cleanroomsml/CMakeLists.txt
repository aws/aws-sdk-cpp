add_project(aws-cpp-sdk-cleanroomsml "C++ SDK for the AWS cleanroomsml service" aws-cpp-sdk-core)

file(GLOB AWS_CLEANROOMSML_HEADERS
    "include/aws/cleanroomsml/*.h"
)

file(GLOB AWS_CLEANROOMSML_MODEL_HEADERS
    "include/aws/cleanroomsml/model/*.h"
)

file(GLOB AWS_CLEANROOMSML_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_CLEANROOMSML_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB CLEANROOMSML_UNIFIED_HEADERS
    ${AWS_CLEANROOMSML_HEADERS}
    ${AWS_CLEANROOMSML_MODEL_HEADERS}
)

file(GLOB CLEANROOMSML_UNITY_SRC
    ${AWS_CLEANROOMSML_SOURCE}
    ${AWS_CLEANROOMSML_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLEANROOMSML" CLEANROOMSML_UNITY_SRC)
endif()

file(GLOB CLEANROOMSML_SRC
    ${CLEANROOMSML_UNIFIED_HEADERS}
    ${CLEANROOMSML_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\cleanroomsml" FILES ${AWS_CLEANROOMSML_HEADERS})
        source_group("Header Files\\aws\\cleanroomsml\\model" FILES ${AWS_CLEANROOMSML_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_CLEANROOMSML_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_CLEANROOMSML_MODEL_SOURCE})
    endif(MSVC)
endif()

set(CLEANROOMSML_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${CLEANROOMSML_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CLEANROOMSML_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_CLEANROOMSML_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cleanroomsml)
install (FILES ${AWS_CLEANROOMSML_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/cleanroomsml/model)

do_packaging()


