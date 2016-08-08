cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-route53)

  file(GLOB AWS_ROUTE53_HEADERS
    "include/aws/route53/*.h"
  )

  file(GLOB AWS_ROUTE53_MODEL_HEADERS
    "include/aws/route53/model/*.h"
  )

  file(GLOB AWS_ROUTE53_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ROUTE53_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ROUTE53_UNIFIED_HEADERS
    ${AWS_ROUTE53_HEADERS}
    ${AWS_ROUTE53_MODEL_HEADERS}
  )

  file(GLOB ROUTE53_UNITY_SRC
    ${AWS_ROUTE53_SOURCE}
    ${AWS_ROUTE53_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROUTE53" ROUTE53_UNITY_SRC)
  endif()

  file(GLOB ROUTE53_SRC
    ${ROUTE53_UNIFIED_HEADERS}
    ${ROUTE53_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\route53" FILES ${AWS_ROUTE53_HEADERS})
      source_group("Header Files\\aws\\route53\\model" FILES ${AWS_ROUTE53_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ROUTE53_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ROUTE53_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ROUTE53_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ROUTE53_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ROUTE53_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-route53 ${LIBTYPE} ${ROUTE53_SRC})

  target_include_directories(aws-cpp-sdk-route53 PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-route53 aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-route53
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-route53)
    else()
      install (TARGETS aws-cpp-sdk-route53
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ROUTE53_HEADERS} DESTINATION include/aws/route53)
  install (FILES ${AWS_ROUTE53_MODEL_HEADERS} DESTINATION include/aws/route53/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-route53.autopkg DESTINATION nuget)
  endif()



