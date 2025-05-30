add_project(aws-cpp-sdk-geo-maps "C++ SDK for the AWS geo-maps service" aws-cpp-sdk-core)

file(GLOB AWS_GEO-MAPS_HEADERS
    "include/aws/geo-maps/*.h"
)

file(GLOB AWS_GEO-MAPS_MODEL_HEADERS
    "include/aws/geo-maps/model/*.h"
)

file(GLOB AWS_GEO-MAPS_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GEO-MAPS_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GEO-MAPS_UNIFIED_HEADERS
    ${AWS_GEO-MAPS_HEADERS}
    ${AWS_GEO-MAPS_MODEL_HEADERS}
)

file(GLOB GEO-MAPS_UNITY_SRC
    ${AWS_GEO-MAPS_SOURCE}
    ${AWS_GEO-MAPS_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GEO-MAPS" GEO-MAPS_UNITY_SRC)
endif()

file(GLOB GEO-MAPS_SRC
    ${GEO-MAPS_UNIFIED_HEADERS}
    ${GEO-MAPS_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\geo-maps" FILES ${AWS_GEO-MAPS_HEADERS})
        source_group("Header Files\\aws\\geo-maps\\model" FILES ${AWS_GEO-MAPS_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GEO-MAPS_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GEO-MAPS_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GEO-MAPS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GEO-MAPS_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GEOMAPS_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GEO-MAPS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/geo-maps)
install (FILES ${AWS_GEO-MAPS_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/geo-maps/model)

do_packaging()


