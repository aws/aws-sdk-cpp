cmake_minimum_required(VERSION 2.8.12)
project(aws-cpp-sdk-route53domains)

  file(GLOB AWS_ROUTE53DOMAINS_HEADERS
    "include/aws/route53domains/*.h"
  )

  file(GLOB AWS_ROUTE53DOMAINS_MODEL_HEADERS
    "include/aws/route53domains/model/*.h"
  )

  file(GLOB AWS_ROUTE53DOMAINS_SOURCE
    "source/*.cpp"
  )

  file(GLOB AWS_ROUTE53DOMAINS_MODEL_SOURCE
    "source/model/*.cpp"
  )

  file(GLOB ROUTE53DOMAINS_UNIFIED_HEADERS
    ${AWS_ROUTE53DOMAINS_HEADERS}
    ${AWS_ROUTE53DOMAINS_MODEL_HEADERS}
  )

  file(GLOB ROUTE53DOMAINS_UNITY_SRC
    ${AWS_ROUTE53DOMAINS_SOURCE}
    ${AWS_ROUTE53DOMAINS_MODEL_SOURCE}
  )

  if(ENABLE_UNITY_BUILD)
    enable_unity_build("ROUTE53DOMAINS" ROUTE53DOMAINS_UNITY_SRC)
  endif()

  file(GLOB ROUTE53DOMAINS_SRC
    ${ROUTE53DOMAINS_UNIFIED_HEADERS}
    ${ROUTE53DOMAINS_UNITY_SRC}
  )

  if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
      source_group("Header Files\\aws\\route53domains" FILES ${AWS_ROUTE53DOMAINS_HEADERS})
      source_group("Header Files\\aws\\route53domains\\model" FILES ${AWS_ROUTE53DOMAINS_MODEL_HEADERS})
      source_group("Source Files" FILES ${AWS_ROUTE53DOMAINS_SOURCE})
      source_group("Source Files\\model" FILES ${AWS_ROUTE53DOMAINS_MODEL_SOURCE})
    endif(MSVC)
  endif()

  set(ROUTE53DOMAINS_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    "${CORE_DIR}/include/"
  )

  include_directories(${ROUTE53DOMAINS_INCLUDES})

  if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    add_definitions("-DAWS_ROUTE53DOMAINS_EXPORTS")
  endif()

  add_library(aws-cpp-sdk-route53domains ${LIBTYPE} ${ROUTE53DOMAINS_SRC})

  target_include_directories(aws-cpp-sdk-route53domains PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  
  target_link_libraries(aws-cpp-sdk-route53domains aws-cpp-sdk-core)

  if(SIMPLE_INSTALL)
      install (TARGETS aws-cpp-sdk-route53domains
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
               LIBRARY DESTINATION lib
               RUNTIME DESTINATION bin)
  else()
    if(PLATFORM_CUSTOM)
      install_custom_library(aws-cpp-sdk-route53domains)
    else()
      install (TARGETS aws-cpp-sdk-route53domains
               ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               LIBRARY DESTINATION lib/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
               RUNTIME DESTINATION bin/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
  endif()

  install (FILES ${AWS_ROUTE53DOMAINS_HEADERS} DESTINATION include/aws/route53domains)
  install (FILES ${AWS_ROUTE53DOMAINS_MODEL_HEADERS} DESTINATION include/aws/route53domains/model)

  if(MSVC)
    install (FILES nuget/aws-cpp-sdk-route53domains.autopkg DESTINATION nuget)
  endif()



