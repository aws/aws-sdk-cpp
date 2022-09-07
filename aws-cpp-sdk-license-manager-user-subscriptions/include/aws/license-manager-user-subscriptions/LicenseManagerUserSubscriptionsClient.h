/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager-user-subscriptions/model/AssociateUserResult.h>
#include <aws/license-manager-user-subscriptions/model/DeregisterIdentityProviderResult.h>
#include <aws/license-manager-user-subscriptions/model/DisassociateUserResult.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersResult.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesResult.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsResult.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsResult.h>
#include <aws/license-manager-user-subscriptions/model/RegisterIdentityProviderResult.h>
#include <aws/license-manager-user-subscriptions/model/StartProductSubscriptionResult.h>
#include <aws/license-manager-user-subscriptions/model/StopProductSubscriptionResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace LicenseManagerUserSubscriptions
{

namespace Model
{
        class AssociateUserRequest;
        class DeregisterIdentityProviderRequest;
        class DisassociateUserRequest;
        class ListIdentityProvidersRequest;
        class ListInstancesRequest;
        class ListProductSubscriptionsRequest;
        class ListUserAssociationsRequest;
        class RegisterIdentityProviderRequest;
        class StartProductSubscriptionRequest;
        class StopProductSubscriptionRequest;

        typedef Aws::Utils::Outcome<AssociateUserResult, LicenseManagerUserSubscriptionsError> AssociateUserOutcome;
        typedef Aws::Utils::Outcome<DeregisterIdentityProviderResult, LicenseManagerUserSubscriptionsError> DeregisterIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<DisassociateUserResult, LicenseManagerUserSubscriptionsError> DisassociateUserOutcome;
        typedef Aws::Utils::Outcome<ListIdentityProvidersResult, LicenseManagerUserSubscriptionsError> ListIdentityProvidersOutcome;
        typedef Aws::Utils::Outcome<ListInstancesResult, LicenseManagerUserSubscriptionsError> ListInstancesOutcome;
        typedef Aws::Utils::Outcome<ListProductSubscriptionsResult, LicenseManagerUserSubscriptionsError> ListProductSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<ListUserAssociationsResult, LicenseManagerUserSubscriptionsError> ListUserAssociationsOutcome;
        typedef Aws::Utils::Outcome<RegisterIdentityProviderResult, LicenseManagerUserSubscriptionsError> RegisterIdentityProviderOutcome;
        typedef Aws::Utils::Outcome<StartProductSubscriptionResult, LicenseManagerUserSubscriptionsError> StartProductSubscriptionOutcome;
        typedef Aws::Utils::Outcome<StopProductSubscriptionResult, LicenseManagerUserSubscriptionsError> StopProductSubscriptionOutcome;

        typedef std::future<AssociateUserOutcome> AssociateUserOutcomeCallable;
        typedef std::future<DeregisterIdentityProviderOutcome> DeregisterIdentityProviderOutcomeCallable;
        typedef std::future<DisassociateUserOutcome> DisassociateUserOutcomeCallable;
        typedef std::future<ListIdentityProvidersOutcome> ListIdentityProvidersOutcomeCallable;
        typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
        typedef std::future<ListProductSubscriptionsOutcome> ListProductSubscriptionsOutcomeCallable;
        typedef std::future<ListUserAssociationsOutcome> ListUserAssociationsOutcomeCallable;
        typedef std::future<RegisterIdentityProviderOutcome> RegisterIdentityProviderOutcomeCallable;
        typedef std::future<StartProductSubscriptionOutcome> StartProductSubscriptionOutcomeCallable;
        typedef std::future<StopProductSubscriptionOutcome> StopProductSubscriptionOutcomeCallable;
} // namespace Model

  class LicenseManagerUserSubscriptionsClient;

    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::AssociateUserRequest&, const Model::AssociateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateUserResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::DeregisterIdentityProviderRequest&, const Model::DeregisterIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::DisassociateUserRequest&, const Model::DisassociateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateUserResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListIdentityProvidersRequest&, const Model::ListIdentityProvidersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityProvidersResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListProductSubscriptionsRequest&, const Model::ListProductSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProductSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::ListUserAssociationsRequest&, const Model::ListUserAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUserAssociationsResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::RegisterIdentityProviderRequest&, const Model::RegisterIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::StartProductSubscriptionRequest&, const Model::StartProductSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartProductSubscriptionResponseReceivedHandler;
    typedef std::function<void(const LicenseManagerUserSubscriptionsClient*, const Model::StopProductSubscriptionRequest&, const Model::StopProductSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopProductSubscriptionResponseReceivedHandler;

  /**
   * <p>With License Manager, you can create user-based subscriptions to utilize
   * licensed software with a per user subscription fee on Amazon EC2 instances.</p>
   */
  class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseManagerUserSubscriptionsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LicenseManagerUserSubscriptionsClient(const Aws::Auth::AWSCredentials& credentials,
                                              const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LicenseManagerUserSubscriptionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LicenseManagerUserSubscriptionsClient();


        /**
         * <p>Associates the user to an EC2 instance to utilize user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
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
         * provider.</p><p><h3>See Also:</h3>   <a
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
