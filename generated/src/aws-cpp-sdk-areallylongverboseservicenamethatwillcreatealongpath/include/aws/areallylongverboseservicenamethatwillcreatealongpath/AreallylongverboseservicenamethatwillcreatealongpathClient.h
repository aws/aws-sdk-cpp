/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/areallylongverboseservicenamethatwillcreatealongpath/Areallylongverboseservicenamethatwillcreatealongpath_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/areallylongverboseservicenamethatwillcreatealongpath/AreallylongverboseservicenamethatwillcreatealongpathServiceClientModel.h>

namespace Aws
{
namespace areallylongverboseservicenamethatwillcreatealongpath
{
  class AWS_AREALLYLONGVERBOSESERVICENAMETHATWILLCREATEALONGPATH_API AreallylongverboseservicenamethatwillcreatealongpathClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AreallylongverboseservicenamethatwillcreatealongpathClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration ClientConfigurationType;
      typedef AreallylongverboseservicenamethatwillcreatealongpathEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AreallylongverboseservicenamethatwillcreatealongpathClient(const Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration& clientConfiguration = Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration(),
                                                                   std::shared_ptr<AreallylongverboseservicenamethatwillcreatealongpathEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AreallylongverboseservicenamethatwillcreatealongpathClient(const Aws::Auth::AWSCredentials& credentials,
                                                                   std::shared_ptr<AreallylongverboseservicenamethatwillcreatealongpathEndpointProviderBase> endpointProvider = nullptr,
                                                                   const Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration& clientConfiguration = Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AreallylongverboseservicenamethatwillcreatealongpathClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                                   std::shared_ptr<AreallylongverboseservicenamethatwillcreatealongpathEndpointProviderBase> endpointProvider = nullptr,
                                                                   const Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration& clientConfiguration = Aws::areallylongverboseservicenamethatwillcreatealongpath::AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AreallylongverboseservicenamethatwillcreatealongpathClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AreallylongverboseservicenamethatwillcreatealongpathClient(const Aws::Auth::AWSCredentials& credentials,
                                                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AreallylongverboseservicenamethatwillcreatealongpathClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AreallylongverboseservicenamethatwillcreatealongpathClient();


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AreallylongverboseservicenamethatwillcreatealongpathEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AreallylongverboseservicenamethatwillcreatealongpathClient>;
      void init(const AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration& clientConfiguration);

      AreallylongverboseservicenamethatwillcreatealongpathClientConfiguration m_clientConfiguration;
      std::shared_ptr<AreallylongverboseservicenamethatwillcreatealongpathEndpointProviderBase> m_endpointProvider;
  };

} // namespace areallylongverboseservicenamethatwillcreatealongpath
} // namespace Aws
