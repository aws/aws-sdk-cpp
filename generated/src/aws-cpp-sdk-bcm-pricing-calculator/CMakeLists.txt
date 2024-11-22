add_project(aws-cpp-sdk-bcm-pricing-calculator "C++ SDK for the AWS bcm-pricing-calculator service" aws-cpp-sdk-core)

file(GLOB AWS_BCM-PRICING-CALCULATOR_HEADERS
    "include/aws/bcm-pricing-calculator/*.h"
)

file(GLOB AWS_BCM-PRICING-CALCULATOR_MODEL_HEADERS
    "include/aws/bcm-pricing-calculator/model/*.h"
)

file(GLOB AWS_BCM-PRICING-CALCULATOR_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_BCM-PRICING-CALCULATOR_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB BCM-PRICING-CALCULATOR_UNIFIED_HEADERS
    ${AWS_BCM-PRICING-CALCULATOR_HEADERS}
    ${AWS_BCM-PRICING-CALCULATOR_MODEL_HEADERS}
)

file(GLOB BCM-PRICING-CALCULATOR_UNITY_SRC
    ${AWS_BCM-PRICING-CALCULATOR_SOURCE}
    ${AWS_BCM-PRICING-CALCULATOR_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("BCM-PRICING-CALCULATOR" BCM-PRICING-CALCULATOR_UNITY_SRC)
endif()

file(GLOB BCM-PRICING-CALCULATOR_SRC
    ${BCM-PRICING-CALCULATOR_UNIFIED_HEADERS}
    ${BCM-PRICING-CALCULATOR_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\bcm-pricing-calculator" FILES ${AWS_BCM-PRICING-CALCULATOR_HEADERS})
        source_group("Header Files\\aws\\bcm-pricing-calculator\\model" FILES ${AWS_BCM-PRICING-CALCULATOR_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_BCM-PRICING-CALCULATOR_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_BCM-PRICING-CALCULATOR_MODEL_SOURCE})
    endif(MSVC)
endif()

set(BCM-PRICING-CALCULATOR_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${BCM-PRICING-CALCULATOR_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_BCMPRICINGCALCULATOR_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_BCM-PRICING-CALCULATOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bcm-pricing-calculator)
install (FILES ${AWS_BCM-PRICING-CALCULATOR_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/bcm-pricing-calculator/model)

do_packaging()


