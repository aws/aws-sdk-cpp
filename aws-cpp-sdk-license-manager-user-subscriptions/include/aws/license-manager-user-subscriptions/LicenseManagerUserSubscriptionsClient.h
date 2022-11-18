/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsServiceClientModel.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsLegacyAsyncMacros.h>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
  /**
   * <p>With License Manager, you can create user-based subscriptions to utilize
   * licensed software with a per user subscription fee on Amazon EC2 instances.</p>
   */
  class AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseManagerUserSubscriptionsClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Associates the user to an EC2 instance to utilize user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/AssociateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserOutcome AssociateUser(const Model::AssociateUserRequest& request) const;


        /**
         * <p>Deregisters the identity provider from providing user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/DeregisterIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterIdentityProviderOutcome DeregisterIdentityProvider(const Model::DeregisterIdentityProviderRequest& request) const;


        /**
         * <p>Disassociates the user from an EC2 instance providing user-based
         * subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/DisassociateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserOutcome DisassociateUser(const Model::DisassociateUserRequest& request) const;


        /**
         * <p>Lists the identity providers for user-based subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListIdentityProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProvidersOutcome ListIdentityProviders(const Model::ListIdentityProvidersRequest& request) const;


        /**
         * <p>Lists the EC2 instances providing user-based subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;


        /**
         * <p>Lists the user-based subscription products available from an identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListProductSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProductSubscriptionsOutcome ListProductSubscriptions(const Model::ListProductSubscriptionsRequest& request) const;


        /**
         * <p>Lists user associations for an identity provider.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ListUserAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserAssociationsOutcome ListUserAssociations(const Model::ListUserAssociationsRequest& request) const;


        /**
         * <p>Registers an identity provider for user-based subscriptions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/RegisterIdentityProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterIdentityProviderOutcome RegisterIdentityProvider(const Model::RegisterIdentityProviderRequest& request) const;


        /**
         * <p>Starts a product subscription for a user with the specified identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/StartProductSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StartProductSubscriptionOutcome StartProductSubscription(const Model::StartProductSubscriptionRequest& request) const;


        /**
         * <p>Stops a product subscription for a user with the specified identity
         * provider.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/StopProductSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::StopProductSubscriptionOutcome StopProductSubscription(const Model::StopProductSubscriptionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LicenseManagerUserSubscriptionsClientConfiguration& clientConfiguration);

      LicenseManagerUserSubscriptionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LicenseManagerUserSubscriptionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
