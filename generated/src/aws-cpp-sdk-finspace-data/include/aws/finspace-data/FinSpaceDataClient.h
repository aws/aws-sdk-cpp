/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/finspace-data/FinSpaceDataServiceClientModel.h>

namespace Aws
{
namespace FinSpaceData
{
  /**
   * <p> The FinSpace APIs let you take actions inside the FinSpace.</p>
   */
  class AWS_FINSPACEDATA_API FinSpaceDataClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FinSpaceDataClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FinSpaceDataClientConfiguration ClientConfigurationType;
      typedef FinSpaceDataEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration = Aws::FinSpaceData::FinSpaceDataClientConfiguration(),
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration = Aws::FinSpaceData::FinSpaceDataClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinSpaceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration = Aws::FinSpaceData::FinSpaceDataClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FinSpaceDataClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FinSpaceDataClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FinSpaceDataClient();


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FinSpaceDataEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FinSpaceDataClient>;
      void init(const FinSpaceDataClientConfiguration& clientConfiguration);

      FinSpaceDataClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FinSpaceDataEndpointProviderBase> m_endpointProvider;
  };

} // namespace FinSpaceData
} // namespace Aws
