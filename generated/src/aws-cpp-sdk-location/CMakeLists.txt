add_project(aws-cpp-sdk-location "C++ SDK for the AWS location service" aws-cpp-sdk-core)

file(GLOB AWS_LOCATION_HEADERS
    "include/aws/location/*.h"
)

file(GLOB AWS_LOCATION_MODEL_HEADERS
    "include/aws/location/model/*.h"
)

file(GLOB AWS_LOCATION_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_LOCATION_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB LOCATION_UNIFIED_HEADERS
    ${AWS_LOCATION_HEADERS}
    ${AWS_LOCATION_MODEL_HEADERS}
)

file(GLOB LOCATION_UNITY_SRC
    ${AWS_LOCATION_SOURCE}
    ${AWS_LOCATION_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("LOCATION" LOCATION_UNITY_SRC)
endif()

file(GLOB LOCATION_SRC
    ${LOCATION_UNIFIED_HEADERS}
    ${LOCATION_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\location" FILES ${AWS_LOCATION_HEADERS})
        source_group("Header Files\\aws\\location\\model" FILES ${AWS_LOCATION_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_LOCATION_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_LOCATION_MODEL_SOURCE})
    endif(MSVC)
endif()

set(LOCATION_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LOCATION_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_LOCATIONSERVICE_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_LOCATION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/location)
install (FILES ${AWS_LOCATION_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/location/model)

do_packaging()


