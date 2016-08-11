cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-snowball)

  file(GLOB AWS_SNOWBALL_HEADERS
    "include/aws/snowball/*.h"
  )

  file(GLOB AWS_SNOWBALL_MODEL_HEADERS
    "include/aws/snowball/model/*.h"
  )

  file(GLOB AWS_SNOWBALL_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_SNOWBALL_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB SNOWBALL_UNIFIED_HEADERS
    ${AWS_SNOWBALL_HEADERS}
    ${AWS_SNOWBALL_MODEL_HEADERS}
  )

  file(GLOB SNOWBALL_UNITY_SRC
    ${AWS_SNOWBALL_SOURCE}
    ${AWS_SNOWBALL_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("SNOWBALL" SNOWBALL_UNITY_SRC)
  endif()

  file(GLOB SNOWBALL_SRC
    ${SNOWBALL_UNIFIED_HEADERS}
    ${SNOWBALL_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\snowball" FILES ${AWS_SNOWBALL_HEADERS})
      source_group("Header Files\\aws\\snowball\\model" FILES ${AWS_SNOWBALL_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_SNOWBALL_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_SNOWBALL_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(SNOWBALL_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${SNOWBALL_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_SNOWBALL_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-snowball ${LIBTYPE} ${SNOWBALL_SRC})

  target_include_directories(aws-cpp-sdk-snowball PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-snowball aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-snowball
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-snowball)
    else()
      install (TARGETS aws-cpp-sdk-snowball
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_SNOWBALL_HEADERS} DESTINATION include/aws/snowball)
  install (FILES ${AWS_SNOWBALL_MODEL_HEADERS} DESTINATION include/aws/snowball/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-snowball.autopkg DESTINATION nuget)
  endif()



