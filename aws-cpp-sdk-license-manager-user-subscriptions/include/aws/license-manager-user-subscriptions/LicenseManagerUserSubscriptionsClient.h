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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration(),
                                              std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::Auth::AWSCredentials& credentials,
                                              std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG),
                                              const Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration = Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerUserSubscriptionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> endpointProvider = Aws::MakeShared<LicenseManagerUserSubscriptionsEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AssociateUserOutcomeCallable AssociateUserCallable(const Model::AssociateUserRequest& request) const;

        /**
         * An Async wrapper for AssociateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateUserAsync(const Model::AssociateUserRequest& request, const AssociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the identity provider from providing user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/DeregisterIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterIdentityProviderOutcome DeregisterIdentityProvider(const Model::DeregisterIdentityProviderRequest& request) const;

        /**
         * A Callable wrapper for DeregisterIdentityProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterIdentityProviderOutcomeCallable DeregisterIdentityProviderCallable(const Model::DeregisterIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for DeregisterIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterIdentityProviderAsync(const Model::DeregisterIdentityProviderRequest& request, const DeregisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the user from an EC2 instance providing user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/DisassociateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserOutcome DisassociateUser(const Model::DisassociateUserRequest& request) const;

        /**
         * A Callable wrapper for DisassociateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateUserOutcomeCallable DisassociateUserCallable(const Model::DisassociateUserRequest& request) const;

        /**
         * An Async wrapper for DisassociateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateUserAsync(const Model::DisassociateUserRequest& request, const DisassociateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the identity providers for user-based subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityProvidersOutcomeCallable ListIdentityProvidersCallable(const Model::ListIdentityProvidersRequest& request) const;

        /**
         * An Async wrapper for ListIdentityProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityProvidersAsync(const Model::ListIdentityProvidersRequest& request, const ListIdentityProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the EC2 instances providing user-based subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListProductSubscriptionsOutcomeCallable ListProductSubscriptionsCallable(const Model::ListProductSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for ListProductSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProductSubscriptionsAsync(const Model::ListProductSubscriptionsRequest& request, const ListProductSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListUserAssociationsOutcomeCallable ListUserAssociationsCallable(const Model::ListUserAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListUserAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUserAssociationsAsync(const Model::ListUserAssociationsRequest& request, const ListUserAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RegisterIdentityProviderOutcomeCallable RegisterIdentityProviderCallable(const Model::RegisterIdentityProviderRequest& request) const;

        /**
         * An Async wrapper for RegisterIdentityProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterIdentityProviderAsync(const Model::RegisterIdentityProviderRequest& request, const RegisterIdentityProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartProductSubscriptionOutcomeCallable StartProductSubscriptionCallable(const Model::StartProductSubscriptionRequest& request) const;

        /**
         * An Async wrapper for StartProductSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartProductSubscriptionAsync(const Model::StartProductSubscriptionRequest& request, const StartProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a product subscription for a user with the specified identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/StopProductSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StopProductSubscriptionOutcome StopProductSubscription(const Model::StopProductSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for StopProductSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopProductSubscriptionOutcomeCallable StopProductSubscriptionCallable(const Model::StopProductSubscriptionRequest& request) const;

        /**
         * An Async wrapper for StopProductSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopProductSubscriptionAsync(const Model::StopProductSubscriptionRequest& request, const StopProductSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateIdentityProviderSettingsOutcomeCallable UpdateIdentityProviderSettingsCallable(const Model::UpdateIdentityProviderSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateIdentityProviderSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIdentityProviderSettingsAsync(const Model::UpdateIdentityProviderSettingsRequest& request, const UpdateIdentityProviderSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LicenseManagerUserSubscriptionsClient>;
      void init(const LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration);

      LicenseManagerUserSubscriptionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
