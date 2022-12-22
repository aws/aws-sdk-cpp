/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsServiceClientModel.h>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
  /**
   * <p>With License Manager, you can discover and track your commercial Linux
   * subscriptions on running Amazon EC2 instances.</p>
   */
  class AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API LicenseManagerLinuxSubscriptionsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerLinuxSubscriptionsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerLinuxSubscriptionsClient(const Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration(),
                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerLinuxSubscriptionsClient(const Aws::Auth::AWSCredentials& credentials,
                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG),
                                               const Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerLinuxSubscriptionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerLinuxSubscriptionsEndpointProvider>(ALLOCATION_TAG),
                                               const Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerLinuxSubscriptionsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerLinuxSubscriptionsClient(const Aws::Auth::AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerLinuxSubscriptionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LicenseManagerLinuxSubscriptionsClient();

        /**
         * <p>Lists the Linux subscriptions service settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/GetServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingsOutcome GetServiceSettings(const Model::GetServiceSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetServiceSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceSettingsOutcomeCallable GetServiceSettingsCallable(const Model::GetServiceSettingsRequest& request) const;

        /**
         * An Async wrapper for GetServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceSettingsAsync(const Model::GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the running Amazon EC2 instances that were discovered with commercial
         * Linux subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListLinuxSubscriptionInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLinuxSubscriptionInstancesOutcome ListLinuxSubscriptionInstances(const Model::ListLinuxSubscriptionInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListLinuxSubscriptionInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLinuxSubscriptionInstancesOutcomeCallable ListLinuxSubscriptionInstancesCallable(const Model::ListLinuxSubscriptionInstancesRequest& request) const;

        /**
         * An Async wrapper for ListLinuxSubscriptionInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLinuxSubscriptionInstancesAsync(const Model::ListLinuxSubscriptionInstancesRequest& request, const ListLinuxSubscriptionInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Linux subscriptions that have been discovered. If you have linked
         * your organization, the returned results will include data aggregated across your
         * accounts in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListLinuxSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLinuxSubscriptionsOutcome ListLinuxSubscriptions(const Model::ListLinuxSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListLinuxSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLinuxSubscriptionsOutcomeCallable ListLinuxSubscriptionsCallable(const Model::ListLinuxSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for ListLinuxSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLinuxSubscriptionsAsync(const Model::ListLinuxSubscriptionsRequest& request, const ListLinuxSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the service settings for Linux subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/UpdateServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceSettingsOutcome UpdateServiceSettings(const Model::UpdateServiceSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceSettingsOutcomeCallable UpdateServiceSettingsCallable(const Model::UpdateServiceSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceSettingsAsync(const Model::UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerLinuxSubscriptionsClient>;
      void init(const LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration);

      LicenseManagerLinuxSubscriptionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
