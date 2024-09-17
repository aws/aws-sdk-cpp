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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LicenseManagerLinuxSubscriptionsClientConfiguration ClientConfigurationType;
      typedef LicenseManagerLinuxSubscriptionsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerLinuxSubscriptionsClient(const Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration(),
                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerLinuxSubscriptionsClient(const Aws::Auth::AWSCredentials& credentials,
                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider = nullptr,
                                               const Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerLinuxSubscriptionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> endpointProvider = nullptr,
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
         * <p>Remove a third-party subscription provider from the Bring Your Own License
         * (BYOL) subscriptions registered to your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/DeregisterSubscriptionProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterSubscriptionProviderOutcome DeregisterSubscriptionProvider(const Model::DeregisterSubscriptionProviderRequest& request) const;

        /**
         * A Callable wrapper for DeregisterSubscriptionProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterSubscriptionProviderRequestT = Model::DeregisterSubscriptionProviderRequest>
        Model::DeregisterSubscriptionProviderOutcomeCallable DeregisterSubscriptionProviderCallable(const DeregisterSubscriptionProviderRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::DeregisterSubscriptionProvider, request);
        }

        /**
         * An Async wrapper for DeregisterSubscriptionProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterSubscriptionProviderRequestT = Model::DeregisterSubscriptionProviderRequest>
        void DeregisterSubscriptionProviderAsync(const DeregisterSubscriptionProviderRequestT& request, const DeregisterSubscriptionProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::DeregisterSubscriptionProvider, request, handler, context);
        }

        /**
         * <p>Get details for a Bring Your Own License (BYOL) subscription that's
         * registered to your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/GetRegisteredSubscriptionProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegisteredSubscriptionProviderOutcome GetRegisteredSubscriptionProvider(const Model::GetRegisteredSubscriptionProviderRequest& request) const;

        /**
         * A Callable wrapper for GetRegisteredSubscriptionProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegisteredSubscriptionProviderRequestT = Model::GetRegisteredSubscriptionProviderRequest>
        Model::GetRegisteredSubscriptionProviderOutcomeCallable GetRegisteredSubscriptionProviderCallable(const GetRegisteredSubscriptionProviderRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::GetRegisteredSubscriptionProvider, request);
        }

        /**
         * An Async wrapper for GetRegisteredSubscriptionProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegisteredSubscriptionProviderRequestT = Model::GetRegisteredSubscriptionProviderRequest>
        void GetRegisteredSubscriptionProviderAsync(const GetRegisteredSubscriptionProviderRequestT& request, const GetRegisteredSubscriptionProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::GetRegisteredSubscriptionProvider, request, handler, context);
        }

        /**
         * <p>Lists the Linux subscriptions service settings for your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/GetServiceSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceSettingsOutcome GetServiceSettings(const Model::GetServiceSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetServiceSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceSettingsRequestT = Model::GetServiceSettingsRequest>
        Model::GetServiceSettingsOutcomeCallable GetServiceSettingsCallable(const GetServiceSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::GetServiceSettings, request);
        }

        /**
         * An Async wrapper for GetServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceSettingsRequestT = Model::GetServiceSettingsRequest>
        void GetServiceSettingsAsync(const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetServiceSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::GetServiceSettings, request, handler, context);
        }

        /**
         * <p>Lists the running Amazon EC2 instances that were discovered with commercial
         * Linux subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListLinuxSubscriptionInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLinuxSubscriptionInstancesOutcome ListLinuxSubscriptionInstances(const Model::ListLinuxSubscriptionInstancesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListLinuxSubscriptionInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLinuxSubscriptionInstancesRequestT = Model::ListLinuxSubscriptionInstancesRequest>
        Model::ListLinuxSubscriptionInstancesOutcomeCallable ListLinuxSubscriptionInstancesCallable(const ListLinuxSubscriptionInstancesRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionInstances, request);
        }

        /**
         * An Async wrapper for ListLinuxSubscriptionInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLinuxSubscriptionInstancesRequestT = Model::ListLinuxSubscriptionInstancesRequest>
        void ListLinuxSubscriptionInstancesAsync(const ListLinuxSubscriptionInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListLinuxSubscriptionInstancesRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptionInstances, request, handler, context);
        }

        /**
         * <p>Lists the Linux subscriptions that have been discovered. If you have linked
         * your organization, the returned results will include data aggregated across your
         * accounts in Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListLinuxSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLinuxSubscriptionsOutcome ListLinuxSubscriptions(const Model::ListLinuxSubscriptionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListLinuxSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLinuxSubscriptionsRequestT = Model::ListLinuxSubscriptionsRequest>
        Model::ListLinuxSubscriptionsOutcomeCallable ListLinuxSubscriptionsCallable(const ListLinuxSubscriptionsRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptions, request);
        }

        /**
         * An Async wrapper for ListLinuxSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLinuxSubscriptionsRequestT = Model::ListLinuxSubscriptionsRequest>
        void ListLinuxSubscriptionsAsync(const ListLinuxSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListLinuxSubscriptionsRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::ListLinuxSubscriptions, request, handler, context);
        }

        /**
         * <p>List Bring Your Own License (BYOL) subscription registration resources for
         * your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListRegisteredSubscriptionProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegisteredSubscriptionProvidersOutcome ListRegisteredSubscriptionProviders(const Model::ListRegisteredSubscriptionProvidersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRegisteredSubscriptionProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegisteredSubscriptionProvidersRequestT = Model::ListRegisteredSubscriptionProvidersRequest>
        Model::ListRegisteredSubscriptionProvidersOutcomeCallable ListRegisteredSubscriptionProvidersCallable(const ListRegisteredSubscriptionProvidersRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::ListRegisteredSubscriptionProviders, request);
        }

        /**
         * An Async wrapper for ListRegisteredSubscriptionProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegisteredSubscriptionProvidersRequestT = Model::ListRegisteredSubscriptionProvidersRequest>
        void ListRegisteredSubscriptionProvidersAsync(const ListRegisteredSubscriptionProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRegisteredSubscriptionProvidersRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::ListRegisteredSubscriptionProviders, request, handler, context);
        }

        /**
         * <p>List the metadata tags that are assigned to the specified Amazon Web Services
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Register the supported third-party subscription provider for your Bring Your
         * Own License (BYOL) subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/RegisterSubscriptionProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterSubscriptionProviderOutcome RegisterSubscriptionProvider(const Model::RegisterSubscriptionProviderRequest& request) const;

        /**
         * A Callable wrapper for RegisterSubscriptionProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterSubscriptionProviderRequestT = Model::RegisterSubscriptionProviderRequest>
        Model::RegisterSubscriptionProviderOutcomeCallable RegisterSubscriptionProviderCallable(const RegisterSubscriptionProviderRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::RegisterSubscriptionProvider, request);
        }

        /**
         * An Async wrapper for RegisterSubscriptionProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterSubscriptionProviderRequestT = Model::RegisterSubscriptionProviderRequest>
        void RegisterSubscriptionProviderAsync(const RegisterSubscriptionProviderRequestT& request, const RegisterSubscriptionProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::RegisterSubscriptionProvider, request, handler, context);
        }

        /**
         * <p>Add metadata tags to the specified Amazon Web Services
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove one or more metadata tag from the specified Amazon Web Services
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateServiceSettingsRequestT = Model::UpdateServiceSettingsRequest>
        Model::UpdateServiceSettingsOutcomeCallable UpdateServiceSettingsCallable(const UpdateServiceSettingsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerLinuxSubscriptionsClient::UpdateServiceSettings, request);
        }

        /**
         * An Async wrapper for UpdateServiceSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceSettingsRequestT = Model::UpdateServiceSettingsRequest>
        void UpdateServiceSettingsAsync(const UpdateServiceSettingsRequestT& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerLinuxSubscriptionsClient::UpdateServiceSettings, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerLinuxSubscriptionsClient>;
      void init(const LicenseManagerLinuxSubscriptionsClientConfiguration& clientConfiguration);

      LicenseManagerLinuxSubscriptionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<LicenseManagerLinuxSubscriptionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
