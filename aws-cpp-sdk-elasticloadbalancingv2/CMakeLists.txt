cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-elasticloadbalancingv2)

  file(GLOB AWS_ELASTICLOADBALANCINGV2_HEADERS
    "include/aws/elasticloadbalancingv2/*.h"
  )

  file(GLOB AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS
    "include/aws/elasticloadbalancingv2/model/*.h"
  )

  file(GLOB AWS_ELASTICLOADBALANCINGV2_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICLOADBALANCINGV2_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICLOADBALANCINGV2_UNIFIED_HEADERS
    ${AWS_ELASTICLOADBALANCINGV2_HEADERS}
    ${AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS}
  )

  file(GLOB ELASTICLOADBALANCINGV2_UNITY_SRC
    ${AWS_ELASTICLOADBALANCINGV2_SOURCE}
    ${AWS_ELASTICLOADBALANCINGV2_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICLOADBALANCINGV2" ELASTICLOADBALANCINGV2_UNITY_SRC)
  endif()

  file(GLOB ELASTICLOADBALANCINGV2_SRC
    ${ELASTICLOADBALANCINGV2_UNIFIED_HEADERS}
    ${ELASTICLOADBALANCINGV2_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elasticloadbalancingv2" FILES ${AWS_ELASTICLOADBALANCINGV2_HEADERS})
      source_group("Header Files\\aws\\elasticloadbalancingv2\\model" FILES ${AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICLOADBALANCINGV2_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICLOADBALANCINGV2_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICLOADBALANCINGV2_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICLOADBALANCINGV2_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICLOADBALANCINGV2_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elasticloadbalancingv2 ${LIBTYPE} ${ELASTICLOADBALANCINGV2_SRC})

  target_include_directories(aws-cpp-sdk-elasticloadbalancingv2 PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-elasticloadbalancingv2 aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-elasticloadbalancingv2
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-elasticloadbalancingv2)
    else()
      install (TARGETS aws-cpp-sdk-elasticloadbalancingv2
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ELASTICLOADBALANCINGV2_HEADERS} DESTINATION include/aws/elasticloadbalancingv2)
  install (FILES ${AWS_ELASTICLOADBALANCINGV2_MODEL_HEADERS} DESTINATION include/aws/elasticloadbalancingv2/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-elasticloadbalancingv2.autopkg DESTINATION nuget)
  endif()



