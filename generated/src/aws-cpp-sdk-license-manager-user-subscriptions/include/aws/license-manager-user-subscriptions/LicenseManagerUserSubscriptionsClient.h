/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsServiceClientModel.h>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
  /**
   * <p>With License Manager, you can create user-based subscriptions to utilize
   * licensed software with a per user subscription fee on Amazon EC2 instances.</p>
   */
  class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseManagerUserSubscriptionsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerUserSubscriptionsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LicenseManagerUserSubscriptionsClientConfiguration ClientConfigurationType;
      typedef LicenseManagerUserSubscriptionsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration(),
                                              std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::Auth::AWSCredentials& credentials,
                                              std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider = nullptr,
                                              const Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerUserSubscriptionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider = nullptr,
                                              const Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::Auth::AWSCredentials& credentials,
                                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerUserSubscriptionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LicenseManagerUserSubscriptionsClient();

        /**
         * <p>Associates the user to an EC2 instance to utilize user-based
         * subscriptions.</p>  <p>Your estimated bill for charges on the number of
         * users and related costs will take 48 hours to appear for billing periods that
         * haven't closed (marked as <b>Pending</b> billing status) in Amazon Web Services
         * Billing. For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/invoice.html">Viewing
         * your monthly charges</a> in the <i>Amazon Web Services Billing User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/AssociateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserOutcome AssociateUser(const Model::AssociateUserRequest& request) const;

        /**
         * A Callable wrapper for AssociateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateUserRequestT = Model::AssociateUserRequest>
        Model::AssociateUserOutcomeCallable AssociateUserCallable(const AssociateUserRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::AssociateUser, request);
        }

        /**
         * An Async wrapper for AssociateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateUserRequestT = Model::AssociateUserRequest>
        void AssociateUserAsync(const AssociateUserRequestT& request, const AssociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::AssociateUser, request, handler, context);
        }

        /**
         * <p>Creates a network endpoint for the Remote Desktop Services (RDS) license
         * server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/CreateLicenseServerEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseServerEndpointOutcome CreateLicenseServerEndpoint(const Model::CreateLicenseServerEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseServerEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLicenseServerEndpointRequestT = Model::CreateLicenseServerEndpointRequest>
        Model::CreateLicenseServerEndpointOutcomeCallable CreateLicenseServerEndpointCallable(const CreateLicenseServerEndpointRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::CreateLicenseServerEndpoint, request);
        }

        /**
         * An Async wrapper for CreateLicenseServerEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLicenseServerEndpointRequestT = Model::CreateLicenseServerEndpointRequest>
        void CreateLicenseServerEndpointAsync(const CreateLicenseServerEndpointRequestT& request, const CreateLicenseServerEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::CreateLicenseServerEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a <code>LicenseServerEndpoint</code> resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/DeleteLicenseServerEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseServerEndpointOutcome DeleteLicenseServerEndpoint(const Model::DeleteLicenseServerEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteLicenseServerEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLicenseServerEndpointRequestT = Model::DeleteLicenseServerEndpointRequest>
        Model::DeleteLicenseServerEndpointOutcomeCallable DeleteLicenseServerEndpointCallable(const DeleteLicenseServerEndpointRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::DeleteLicenseServerEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteLicenseServerEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLicenseServerEndpointRequestT = Model::DeleteLicenseServerEndpointRequest>
        void DeleteLicenseServerEndpointAsync(const DeleteLicenseServerEndpointRequestT& request, const DeleteLicenseServerEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::DeleteLicenseServerEndpoint, request, handler, context);
        }

        /**
         * <p>Deregisters the Active Directory identity provider from License Manager
         * user-based subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/DeregisterIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterIdentityProviderOutcome DeregisterIdentityProvider(const Model::DeregisterIdentityProviderRequest& request = {}) const;

        /**
         * A Callable wrapper for DeregisterIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterIdentityProviderRequestT = Model::DeregisterIdentityProviderRequest>
        Model::DeregisterIdentityProviderOutcomeCallable DeregisterIdentityProviderCallable(const DeregisterIdentityProviderRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::DeregisterIdentityProvider, request);
        }

        /**
         * An Async wrapper for DeregisterIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterIdentityProviderRequestT = Model::DeregisterIdentityProviderRequest>
        void DeregisterIdentityProviderAsync(const DeregisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeregisterIdentityProviderRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::DeregisterIdentityProvider, request, handler, context);
        }

        /**
         * <p>Disassociates the user from an EC2 instance providing user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/DisassociateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserOutcome DisassociateUser(const Model::DisassociateUserRequest& request = {}) const;

        /**
         * A Callable wrapper for DisassociateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateUserRequestT = Model::DisassociateUserRequest>
        Model::DisassociateUserOutcomeCallable DisassociateUserCallable(const DisassociateUserRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::DisassociateUser, request);
        }

        /**
         * An Async wrapper for DisassociateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateUserRequestT = Model::DisassociateUserRequest>
        void DisassociateUserAsync(const DisassociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DisassociateUserRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::DisassociateUser, request, handler, context);
        }

        /**
         * <p>Lists the Active Directory identity providers for user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListIdentityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentityProvidersRequestT = Model::ListIdentityProvidersRequest>
        Model::ListIdentityProvidersOutcomeCallable ListIdentityProvidersCallable(const ListIdentityProvidersRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListIdentityProviders, request);
        }

        /**
         * An Async wrapper for ListIdentityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityProvidersRequestT = Model::ListIdentityProvidersRequest>
        void ListIdentityProvidersAsync(const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListIdentityProvidersRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListIdentityProviders, request, handler, context);
        }

        /**
         * <p>Lists the EC2 instances providing user-based subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        Model::ListInstancesOutcomeCallable ListInstancesCallable(const ListInstancesRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListInstances, request);
        }

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        void ListInstancesAsync(const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListInstancesRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListInstances, request, handler, context);
        }

        /**
         * <p>List the Remote Desktop Services (RDS) License Server endpoints
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListLicenseServerEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseServerEndpointsOutcome ListLicenseServerEndpoints(const Model::ListLicenseServerEndpointsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListLicenseServerEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLicenseServerEndpointsRequestT = Model::ListLicenseServerEndpointsRequest>
        Model::ListLicenseServerEndpointsOutcomeCallable ListLicenseServerEndpointsCallable(const ListLicenseServerEndpointsRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListLicenseServerEndpoints, request);
        }

        /**
         * An Async wrapper for ListLicenseServerEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicenseServerEndpointsRequestT = Model::ListLicenseServerEndpointsRequest>
        void ListLicenseServerEndpointsAsync(const ListLicenseServerEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListLicenseServerEndpointsRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListLicenseServerEndpoints, request, handler, context);
        }

        /**
         * <p>Lists the user-based subscription products available from an identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListProductSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProductSubscriptionsOutcome ListProductSubscriptions(const Model::ListProductSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListProductSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProductSubscriptionsRequestT = Model::ListProductSubscriptionsRequest>
        Model::ListProductSubscriptionsOutcomeCallable ListProductSubscriptionsCallable(const ListProductSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListProductSubscriptions, request);
        }

        /**
         * An Async wrapper for ListProductSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProductSubscriptionsRequestT = Model::ListProductSubscriptionsRequest>
        void ListProductSubscriptionsAsync(const ListProductSubscriptionsRequestT& request, const ListProductSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListProductSubscriptions, request, handler, context);
        }

        /**
         * <p>Returns the list of tags for the specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists user associations for an identity provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListUserAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserAssociationsOutcome ListUserAssociations(const Model::ListUserAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListUserAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserAssociationsRequestT = Model::ListUserAssociationsRequest>
        Model::ListUserAssociationsOutcomeCallable ListUserAssociationsCallable(const ListUserAssociationsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::ListUserAssociations, request);
        }

        /**
         * An Async wrapper for ListUserAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserAssociationsRequestT = Model::ListUserAssociationsRequest>
        void ListUserAssociationsAsync(const ListUserAssociationsRequestT& request, const ListUserAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::ListUserAssociations, request, handler, context);
        }

        /**
         * <p>Registers an identity provider for user-based subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/RegisterIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterIdentityProviderOutcome RegisterIdentityProvider(const Model::RegisterIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for RegisterIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterIdentityProviderRequestT = Model::RegisterIdentityProviderRequest>
        Model::RegisterIdentityProviderOutcomeCallable RegisterIdentityProviderCallable(const RegisterIdentityProviderRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::RegisterIdentityProvider, request);
        }

        /**
         * An Async wrapper for RegisterIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterIdentityProviderRequestT = Model::RegisterIdentityProviderRequest>
        void RegisterIdentityProviderAsync(const RegisterIdentityProviderRequestT& request, const RegisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::RegisterIdentityProvider, request, handler, context);
        }

        /**
         * <p>Starts a product subscription for a user with the specified identity
         * provider.</p>  <p>Your estimated bill for charges on the number of users
         * and related costs will take 48 hours to appear for billing periods that haven't
         * closed (marked as <b>Pending</b> billing status) in Amazon Web Services Billing.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/invoice.html">Viewing
         * your monthly charges</a> in the <i>Amazon Web Services Billing User
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/StartProductSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StartProductSubscriptionOutcome StartProductSubscription(const Model::StartProductSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for StartProductSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartProductSubscriptionRequestT = Model::StartProductSubscriptionRequest>
        Model::StartProductSubscriptionOutcomeCallable StartProductSubscriptionCallable(const StartProductSubscriptionRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::StartProductSubscription, request);
        }

        /**
         * An Async wrapper for StartProductSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartProductSubscriptionRequestT = Model::StartProductSubscriptionRequest>
        void StartProductSubscriptionAsync(const StartProductSubscriptionRequestT& request, const StartProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::StartProductSubscription, request, handler, context);
        }

        /**
         * <p>Stops a product subscription for a user with the specified identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/StopProductSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StopProductSubscriptionOutcome StopProductSubscription(const Model::StopProductSubscriptionRequest& request = {}) const;

        /**
         * A Callable wrapper for StopProductSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopProductSubscriptionRequestT = Model::StopProductSubscriptionRequest>
        Model::StopProductSubscriptionOutcomeCallable StopProductSubscriptionCallable(const StopProductSubscriptionRequestT& request = {}) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::StopProductSubscription, request);
        }

        /**
         * An Async wrapper for StopProductSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopProductSubscriptionRequestT = Model::StopProductSubscriptionRequest>
        void StopProductSubscriptionAsync(const StopProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const StopProductSubscriptionRequestT& request = {}) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::StopProductSubscription, request, handler, context);
        }

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates additional product configuration settings for the registered identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/UpdateIdentityProviderSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentityProviderSettingsOutcome UpdateIdentityProviderSettings(const Model::UpdateIdentityProviderSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentityProviderSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIdentityProviderSettingsRequestT = Model::UpdateIdentityProviderSettingsRequest>
        Model::UpdateIdentityProviderSettingsOutcomeCallable UpdateIdentityProviderSettingsCallable(const UpdateIdentityProviderSettingsRequestT& request) const
        {
            return SubmitCallable(&LicenseManagerUserSubscriptionsClient::UpdateIdentityProviderSettings, request);
        }

        /**
         * An Async wrapper for UpdateIdentityProviderSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIdentityProviderSettingsRequestT = Model::UpdateIdentityProviderSettingsRequest>
        void UpdateIdentityProviderSettingsAsync(const UpdateIdentityProviderSettingsRequestT& request, const UpdateIdentityProviderSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LicenseManagerUserSubscriptionsClient::UpdateIdentityProviderSettings, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerUserSubscriptionsClient>;
      void init(const LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration);

      LicenseManagerUserSubscriptionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
