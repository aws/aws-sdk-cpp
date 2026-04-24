add_project(aws-cpp-sdk-geo-places "C++ SDK for the AWS geo-places service" aws-cpp-sdk-core)

file(GLOB AWS_GEO-PLACES_HEADERS
    "include/aws/geo-places/*.h"
)

file(GLOB AWS_GEO-PLACES_MODEL_HEADERS
    "include/aws/geo-places/model/*.h"
)

file(GLOB AWS_GEO-PLACES_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_GEO-PLACES_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB GEO-PLACES_UNIFIED_HEADERS
    ${AWS_GEO-PLACES_HEADERS}
    ${AWS_GEO-PLACES_MODEL_HEADERS}
)

file(GLOB GEO-PLACES_UNITY_SRC
    ${AWS_GEO-PLACES_SOURCE}
    ${AWS_GEO-PLACES_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("GEO-PLACES" GEO-PLACES_UNITY_SRC)
endif()

file(GLOB GEO-PLACES_SRC
    ${GEO-PLACES_UNIFIED_HEADERS}
    ${GEO-PLACES_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\geo-places" FILES ${AWS_GEO-PLACES_HEADERS})
        source_group("Header Files\\aws\\geo-places\\model" FILES ${AWS_GEO-PLACES_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_GEO-PLACES_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_GEO-PLACES_MODEL_SOURCE})
    endif(MSVC)
endif()

set(GEO-PLACES_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${GEO-PLACES_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_GEOPLACES_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_GEO-PLACES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/geo-places)
install (FILES ${AWS_GEO-PLACES_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/geo-places/model)

do_packaging()


