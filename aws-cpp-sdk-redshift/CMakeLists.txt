cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-redshift)

  file(GLOB AWS_REDSHIFT_HEADERS
    "include/aws/redshift/*.h"
  )

  file(GLOB AWS_REDSHIFT_MODEL_HEADERS
    "include/aws/redshift/model/*.h"
  )

  file(GLOB AWS_REDSHIFT_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_REDSHIFT_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB REDSHIFT_UNIFIED_HEADERS
    ${AWS_REDSHIFT_HEADERS}
    ${AWS_REDSHIFT_MODEL_HEADERS}
  )

  file(GLOB REDSHIFT_UNITY_SRC
    ${AWS_REDSHIFT_SOURCE}
    ${AWS_REDSHIFT_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("REDSHIFT" REDSHIFT_UNITY_SRC)
  endif()

  file(GLOB REDSHIFT_SRC
    ${REDSHIFT_UNIFIED_HEADERS}
    ${REDSHIFT_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\redshift" FILES ${AWS_REDSHIFT_HEADERS})
      source_group("Header Files\\aws\\redshift\\model" FILES ${AWS_REDSHIFT_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_REDSHIFT_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_REDSHIFT_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(REDSHIFT_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${REDSHIFT_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_REDSHIFT_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-redshift ${LIBTYPE} ${REDSHIFT_SRC})

  target_include_directories(aws-cpp-sdk-redshift PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-redshift aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-redshift
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-redshift)
    else()
      install (TARGETS aws-cpp-sdk-redshift
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_REDSHIFT_HEADERS} DESTINATION include/aws/redshift)
  install (FILES ${AWS_REDSHIFT_MODEL_HEADERS} DESTINATION include/aws/redshift/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-redshift.autopkg DESTINATION nuget)
  endif()



