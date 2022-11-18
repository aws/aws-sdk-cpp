/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceServiceClientModel.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceLegacyAsyncMacros.h>

namespace Aws
{
namespace MarketplaceEntitlementService
{
  /**
   * <fullname>AWS Marketplace Entitlement Service</fullname> <p>This reference
   * provides descriptions of the AWS Marketplace Entitlement Service API.</p> <p>AWS
   * Marketplace Entitlement Service is used to determine the entitlement of a
   * customer to a given product. An entitlement represents capacity in a product
   * owned by the customer. For example, a customer might own some number of users or
   * seats in an SaaS application or some amount of data capacity in a multi-tenant
   * database.</p> <p> <b>Getting Entitlement Records</b> </p> <ul> <li> <p>
   * <i>GetEntitlements</i>- Gets the entitlements for a Marketplace product.</p>
   * </li> </ul>
   */
  class AWS_MARKETPLACEENTITLEMENTSERVICE_API MarketplaceEntitlementServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration = Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration(),
                                            std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                            std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
                                            const Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration = Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceEntitlementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                            std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<MarketplaceEntitlementServiceEndpointProvider>(ALLOCATION_TAG),
                                            const Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration = Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceEntitlementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceEntitlementServiceClient();


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
         * <p>GetEntitlements retrieves entitlement values for a given product. The results
         * can be filtered based on customer identifier or product
         * dimensions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/GetEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntitlementsOutcome GetEntitlements(const Model::GetEntitlementsRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MarketplaceEntitlementServiceClientConfiguration& clientConfiguration);

      MarketplaceEntitlementServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace MarketplaceEntitlementService
} // namespace Aws
