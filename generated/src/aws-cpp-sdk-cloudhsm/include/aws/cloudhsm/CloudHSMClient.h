/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cloudhsm/CloudHSMServiceClientModel.h>

namespace Aws
{
namespace CloudHSM
{
  /**
   * <fullname>AWS CloudHSM Service</fullname> <p>This is documentation for <b>AWS
   * CloudHSM Classic</b>. For more information, see <a
   * href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic
   * FAQs</a>, the <a
   * href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM
   * Classic User Guide</a>, and the <a
   * href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM
   * Classic API Reference</a>.</p> <p> <b>For information about the current version
   * of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
   * CloudHSM</a>, the <a
   * href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
   * Guide</a>, and the <a
   * href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM
   * API Reference</a>.</p>
   */
  class AWS_CLOUDHSM_API CloudHSMClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudHSMClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CloudHSMClientConfiguration ClientConfigurationType;
      typedef CloudHSMEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::CloudHSM::CloudHSMClientConfiguration& clientConfiguration = Aws::CloudHSM::CloudHSMClientConfiguration(),
                       std::shared_ptr<CloudHSMEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<CloudHSMEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::CloudHSM::CloudHSMClientConfiguration& clientConfiguration = Aws::CloudHSM::CloudHSMClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<CloudHSMEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::CloudHSM::CloudHSMClientConfiguration& clientConfiguration = Aws::CloudHSM::CloudHSMClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudHSMClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudHSMClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudHSMClient();


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudHSMEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudHSMClient>;
      void init(const CloudHSMClientConfiguration& clientConfiguration);

      CloudHSMClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudHSMEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudHSM
} // namespace Aws
