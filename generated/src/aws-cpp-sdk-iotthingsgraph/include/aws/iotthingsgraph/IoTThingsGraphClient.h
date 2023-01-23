/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotthingsgraph/IoTThingsGraphServiceClientModel.h>

namespace Aws
{
namespace IoTThingsGraph
{
  /**
   * <fullname>AWS IoT Things Graph</fullname> <p>AWS IoT Things Graph provides an
   * integrated set of tools that enable developers to connect devices and services
   * that use different standards, such as units of measure and communication
   * protocols. AWS IoT Things Graph makes it possible to build IoT applications with
   * little to no code by connecting devices and services and defining how they
   * interact at an abstract level.</p> <p>For more information about how AWS IoT
   * Things Graph works, see the <a
   * href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
   * Guide</a>.</p> <p>The AWS IoT Things Graph service is discontinued.</p>
   */
  class AWS_IOTTHINGSGRAPH_API IoTThingsGraphClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTThingsGraphClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration = Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration(),
                             std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
                             const Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration = Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTThingsGraphClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
                             const Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration = Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTThingsGraphClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTThingsGraphClient();


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTThingsGraphEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTThingsGraphClient>;
      void init(const IoTThingsGraphClientConfiguration& clientConfiguration);

      IoTThingsGraphClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTThingsGraphEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTThingsGraph
} // namespace Aws
