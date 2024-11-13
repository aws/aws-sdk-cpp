/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/billing/BillingServiceClientModel.h>

namespace Aws
{
namespace Billing
{
  /**
   * <p> You can use the Billing API to programatically list the billing views
   * available to you for a given time period. A billing view represents a set of
   * billing data. </p> <p>The Billing API provides the following endpoint:</p> <p>
   * <code>https://billing.us-east-1.api.aws</code> </p>
   */
  class AWS_BILLING_API BillingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BillingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BillingClientConfiguration ClientConfigurationType;
      typedef BillingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingClient(const Aws::Billing::BillingClientConfiguration& clientConfiguration = Aws::Billing::BillingClientConfiguration(),
                      std::shared_ptr<BillingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<BillingEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Billing::BillingClientConfiguration& clientConfiguration = Aws::Billing::BillingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BillingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<BillingEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Billing::BillingClientConfiguration& clientConfiguration = Aws::Billing::BillingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BillingClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BillingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BillingClient();

        /**
         * <p>Lists the billing views available for a given time period. </p> <p>Every
         * Amazon Web Services account has a unique <code>PRIMARY</code> billing view that
         * represents the billing data available by default. Accounts that use Billing
         * Conductor also have <code>BILLING_GROUP</code> billing views representing pro
         * forma costs associated with each created billing group.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListBillingViews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillingViewsOutcome ListBillingViews(const Model::ListBillingViewsRequest& request) const;

        /**
         * A Callable wrapper for ListBillingViews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBillingViewsRequestT = Model::ListBillingViewsRequest>
        Model::ListBillingViewsOutcomeCallable ListBillingViewsCallable(const ListBillingViewsRequestT& request) const
        {
            return SubmitCallable(&BillingClient::ListBillingViews, request);
        }

        /**
         * An Async wrapper for ListBillingViews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillingViewsRequestT = Model::ListBillingViewsRequest>
        void ListBillingViewsAsync(const ListBillingViewsRequestT& request, const ListBillingViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BillingClient::ListBillingViews, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BillingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BillingClient>;
      void init(const BillingClientConfiguration& clientConfiguration);

      BillingClientConfiguration m_clientConfiguration;
      std::shared_ptr<BillingEndpointProviderBase> m_endpointProvider;
  };

} // namespace Billing
} // namespace Aws
