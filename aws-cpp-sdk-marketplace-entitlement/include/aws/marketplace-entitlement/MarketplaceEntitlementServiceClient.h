/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceServiceClientModel.h>

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
        MarketplaceEntitlementServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceEntitlementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MarketplaceEntitlementServiceClient();


        /**
         * <p>GetEntitlements retrieves entitlement values for a given product. The results
         * can be filtered based on customer identifier or product
         * dimensions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/GetEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntitlementsOutcome GetEntitlements(const Model::GetEntitlementsRequest& request) const;

        /**
         * A Callable wrapper for GetEntitlements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEntitlementsOutcomeCallable GetEntitlementsCallable(const Model::GetEntitlementsRequest& request) const;

        /**
         * An Async wrapper for GetEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEntitlementsAsync(const Model::GetEntitlementsRequest& request, const GetEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MarketplaceEntitlementService
} // namespace Aws
