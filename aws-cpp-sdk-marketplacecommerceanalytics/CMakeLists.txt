cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-marketplacecommerceanalytics)

  file(GLOB AWS_MARKETPLACECOMMERCEANALYTICS_HEADERS
    "include/aws/marketplacecommerceanalytics/*.h"
  )

  file(GLOB AWS_MARKETPLACECOMMERCEANALYTICS_MODEL_HEADERS
    "include/aws/marketplacecommerceanalytics/model/*.h"
  )

  file(GLOB AWS_MARKETPLACECOMMERCEANALYTICS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_MARKETPLACECOMMERCEANALYTICS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB MARKETPLACECOMMERCEANALYTICS_UNIFIED_HEADERS
    ${AWS_MARKETPLACECOMMERCEANALYTICS_HEADERS}
    ${AWS_MARKETPLACECOMMERCEANALYTICS_MODEL_HEADERS}
  )

  file(GLOB MARKETPLACECOMMERCEANALYTICS_UNITY_SRC
    ${AWS_MARKETPLACECOMMERCEANALYTICS_SOURCE}
    ${AWS_MARKETPLACECOMMERCEANALYTICS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("MARKETPLACECOMMERCEANALYTICS" MARKETPLACECOMMERCEANALYTICS_UNITY_SRC)
  endif()

  file(GLOB MARKETPLACECOMMERCEANALYTICS_SRC
    ${MARKETPLACECOMMERCEANALYTICS_UNIFIED_HEADERS}
    ${MARKETPLACECOMMERCEANALYTICS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\marketplacecommerceanalytics" FILES ${AWS_MARKETPLACECOMMERCEANALYTICS_HEADERS})
      source_group("Header Files\\aws\\marketplacecommerceanalytics\\model" FILES ${AWS_MARKETPLACECOMMERCEANALYTICS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_MARKETPLACECOMMERCEANALYTICS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_MARKETPLACECOMMERCEANALYTICS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(MARKETPLACECOMMERCEANALYTICS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${MARKETPLACECOMMERCEANALYTICS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_MARKETPLACECOMMERCEANALYTICS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-marketplacecommerceanalytics ${LIBTYPE} ${MARKETPLACECOMMERCEANALYTICS_SRC})

  target_include_directories(aws-cpp-sdk-marketplacecommerceanalytics PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-marketplacecommerceanalytics aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-marketplacecommerceanalytics
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-marketplacecommerceanalytics)
    else()
      install (TARGETS aws-cpp-sdk-marketplacecommerceanalytics
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_MARKETPLACECOMMERCEANALYTICS_HEADERS} DESTINATION include/aws/marketplacecommerceanalytics)
  install (FILES ${AWS_MARKETPLACECOMMERCEANALYTICS_MODEL_HEADERS} DESTINATION include/aws/marketplacecommerceanalytics/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-marketplacecommerceanalytics.autopkg DESTINATION nuget)
  endif()



