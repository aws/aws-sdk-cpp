cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-cloudtrail)

  file(GLOB AWS_CLOUDTRAIL_HEADERS
    "include/aws/cloudtrail/*.h"
  )

  file(GLOB AWS_CLOUDTRAIL_MODEL_HEADERS
    "include/aws/cloudtrail/model/*.h"
  )

  file(GLOB AWS_CLOUDTRAIL_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_CLOUDTRAIL_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB CLOUDTRAIL_UNIFIED_HEADERS
    ${AWS_CLOUDTRAIL_HEADERS}
    ${AWS_CLOUDTRAIL_MODEL_HEADERS}
  )

  file(GLOB CLOUDTRAIL_UNITY_SRC
    ${AWS_CLOUDTRAIL_SOURCE}
    ${AWS_CLOUDTRAIL_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("CLOUDTRAIL" CLOUDTRAIL_UNITY_SRC)
  endif()

  file(GLOB CLOUDTRAIL_SRC
    ${CLOUDTRAIL_UNIFIED_HEADERS}
    ${CLOUDTRAIL_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\cloudtrail" FILES ${AWS_CLOUDTRAIL_HEADERS})
      source_group("Header Files\\aws\\cloudtrail\\model" FILES ${AWS_CLOUDTRAIL_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_CLOUDTRAIL_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_CLOUDTRAIL_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(CLOUDTRAIL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${CLOUDTRAIL_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_CLOUDTRAIL_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-cloudtrail ${LIBTYPE} ${CLOUDTRAIL_SRC})

  target_include_directories(aws-cpp-sdk-cloudtrail PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-cloudtrail aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-cloudtrail
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-cloudtrail)
    else()
      install (TARGETS aws-cpp-sdk-cloudtrail
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_CLOUDTRAIL_HEADERS} DESTINATION include/aws/cloudtrail)
  install (FILES ${AWS_CLOUDTRAIL_MODEL_HEADERS} DESTINATION include/aws/cloudtrail/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-cloudtrail.autopkg DESTINATION nuget)
  endif()



