/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks-auth/EKSAuthServiceClientModel.h>

namespace Aws
{
namespace EKSAuth
{
  /**
   * <p>The Amazon EKS Auth API and the <code>AssumeRoleForPodIdentity</code> action
   * are only used by the EKS Pod Identity Agent.</p>
   */
  class AWS_EKSAUTH_API EKSAuthClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<EKSAuthClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef EKSAuthClientConfiguration ClientConfigurationType;
      typedef EKSAuthEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSAuthClient(const Aws::EKSAuth::EKSAuthClientConfiguration& clientConfiguration = Aws::EKSAuth::EKSAuthClientConfiguration(),
                      std::shared_ptr<EKSAuthEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSAuthClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<EKSAuthEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::EKSAuth::EKSAuthClientConfiguration& clientConfiguration = Aws::EKSAuth::EKSAuthClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EKSAuthClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<EKSAuthEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::EKSAuth::EKSAuthClientConfiguration& clientConfiguration = Aws::EKSAuth::EKSAuthClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSAuthClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSAuthClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EKSAuthClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EKSAuthClient();

        /**
         * <p>The Amazon EKS Auth API and the <code>AssumeRoleForPodIdentity</code> action
         * are only used by the EKS Pod Identity Agent.</p> <p>We recommend that
         * applications use the Amazon Web Services SDKs to connect to Amazon Web Services
         * services; if credentials from an EKS Pod Identity association are available in
         * the pod, the latest versions of the SDKs use them automatically.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-auth-2023-11-26/AssumeRoleForPodIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeRoleForPodIdentityOutcome AssumeRoleForPodIdentity(const Model::AssumeRoleForPodIdentityRequest& request) const;

        /**
         * A Callable wrapper for AssumeRoleForPodIdentity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssumeRoleForPodIdentityRequestT = Model::AssumeRoleForPodIdentityRequest>
        Model::AssumeRoleForPodIdentityOutcomeCallable AssumeRoleForPodIdentityCallable(const AssumeRoleForPodIdentityRequestT& request) const
        {
            return SubmitCallable(&EKSAuthClient::AssumeRoleForPodIdentity, request);
        }

        /**
         * An Async wrapper for AssumeRoleForPodIdentity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeRoleForPodIdentityRequestT = Model::AssumeRoleForPodIdentityRequest>
        void AssumeRoleForPodIdentityAsync(const AssumeRoleForPodIdentityRequestT& request, const AssumeRoleForPodIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSAuthClient::AssumeRoleForPodIdentity, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EKSAuthEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EKSAuthClient>;
      void init(const EKSAuthClientConfiguration& clientConfiguration);

      EKSAuthClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EKSAuthEndpointProviderBase> m_endpointProvider;
  };

} // namespace EKSAuth
} // namespace Aws
