cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-elasticloadbalancing)

  file(GLOB AWS_ELASTICLOADBALANCING_HEADERS
    "include/aws/elasticloadbalancing/*.h"
  )

  file(GLOB AWS_ELASTICLOADBALANCING_MODEL_HEADERS
    "include/aws/elasticloadbalancing/model/*.h"
  )

  file(GLOB AWS_ELASTICLOADBALANCING_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ELASTICLOADBALANCING_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ELASTICLOADBALANCING_UNIFIED_HEADERS
    ${AWS_ELASTICLOADBALANCING_HEADERS}
    ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS}
  )

  file(GLOB ELASTICLOADBALANCING_UNITY_SRC
    ${AWS_ELASTICLOADBALANCING_SOURCE}
    ${AWS_ELASTICLOADBALANCING_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ELASTICLOADBALANCING" ELASTICLOADBALANCING_UNITY_SRC)
  endif()

  file(GLOB ELASTICLOADBALANCING_SRC
    ${ELASTICLOADBALANCING_UNIFIED_HEADERS}
    ${ELASTICLOADBALANCING_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\elasticloadbalancing" FILES ${AWS_ELASTICLOADBALANCING_HEADERS})
      source_group("Header Files\\aws\\elasticloadbalancing\\model" FILES ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ELASTICLOADBALANCING_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ELASTICLOADBALANCING_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ELASTICLOADBALANCING_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ELASTICLOADBALANCING_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ELASTICLOADBALANCING_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-elasticloadbalancing ${LIBTYPE} ${ELASTICLOADBALANCING_SRC})

  target_include_directories(aws-cpp-sdk-elasticloadbalancing PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-elasticloadbalancing aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-elasticloadbalancing
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-elasticloadbalancing)
    else()
      install (TARGETS aws-cpp-sdk-elasticloadbalancing
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ELASTICLOADBALANCING_HEADERS} DESTINATION include/aws/elasticloadbalancing)
  install (FILES ${AWS_ELASTICLOADBALANCING_MODEL_HEADERS} DESTINATION include/aws/elasticloadbalancing/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-elasticloadbalancing.autopkg DESTINATION nuget)
  endif()



