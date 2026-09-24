add_project(aws-cpp-sdk-eventbridgev2 "C++ SDK for the AWS eventbridgev2 service" aws-cpp-sdk-core)

file(GLOB AWS_EVENTBRIDGEV2_HEADERS
    "include/aws/eventbridgev2/*.h"
)

file(GLOB AWS_EVENTBRIDGEV2_MODEL_HEADERS
    "include/aws/eventbridgev2/model/*.h"
)

file(GLOB AWS_EVENTBRIDGEV2_INTERNAL_HEADERS
    "include/aws/eventbridgev2/internal/*.h"
)

file(GLOB AWS_EVENTBRIDGEV2_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_EVENTBRIDGEV2_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB EVENTBRIDGEV2_UNIFIED_HEADERS
    ${AWS_EVENTBRIDGEV2_HEADERS}
    ${AWS_EVENTBRIDGEV2_INTERNAL_HEADERS}
    ${AWS_EVENTBRIDGEV2_MODEL_HEADERS}
)

file(GLOB EVENTBRIDGEV2_UNITY_SRC
    ${AWS_EVENTBRIDGEV2_SOURCE}
    ${AWS_EVENTBRIDGEV2_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("EVENTBRIDGEV2" EVENTBRIDGEV2_UNITY_SRC)
endif()

file(GLOB EVENTBRIDGEV2_SRC
    ${EVENTBRIDGEV2_UNIFIED_HEADERS}
    ${EVENTBRIDGEV2_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\eventbridgev2" FILES ${AWS_EVENTBRIDGEV2_HEADERS})
        source_group("Header Files\\aws\\eventbridgev2\\internal" FILES ${AWS_EVENTBRIDGEV2_INTERNAL_HEADERS})
        source_group("Header Files\\aws\\eventbridgev2\\model" FILES ${AWS_EVENTBRIDGEV2_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_EVENTBRIDGEV2_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_EVENTBRIDGEV2_MODEL_SOURCE})
    endif(MSVC)
endif()

set(EVENTBRIDGEV2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${EVENTBRIDGEV2_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_EVENTBRIDGEV2_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_EVENTBRIDGEV2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/eventbridgev2)
install (FILES ${AWS_EVENTBRIDGEV2_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/eventbridgev2/model)

do_packaging()


