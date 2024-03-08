/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/freetier/FreeTierServiceClientModel.h>

namespace Aws
{
namespace FreeTier
{
  /**
   * <p>You can use the Amazon Web Services Free Tier API to query programmatically
   * your Free Tier usage data.</p> <p>Free Tier tracks your monthly usage data for
   * all free tier offers that are associated with your Amazon Web Services account.
   * You can use the Free Tier API to filter and show only the data that you
   * want.</p> <p>Service endpoint</p> <p>The Free Tier API provides the following
   * endpoint:</p> <ul> <li> <p>https://freetier.us-east-1.api.aws</p> </li> </ul>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-free-tier.html">Using
   * the Amazon Web Services Free Tier</a> in the <i>Billing User Guide</i>.</p>
   */
  class AWS_FREETIER_API FreeTierClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FreeTierClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FreeTierClientConfiguration ClientConfigurationType;
      typedef FreeTierEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FreeTierClient(const Aws::FreeTier::FreeTierClientConfiguration& clientConfiguration = Aws::FreeTier::FreeTierClientConfiguration(),
                       std::shared_ptr<FreeTierEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FreeTierClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<FreeTierEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::FreeTier::FreeTierClientConfiguration& clientConfiguration = Aws::FreeTier::FreeTierClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FreeTierClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<FreeTierEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::FreeTier::FreeTierClientConfiguration& clientConfiguration = Aws::FreeTier::FreeTierClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FreeTierClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FreeTierClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FreeTierClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FreeTierClient();

        /**
         * <p>Returns a list of all Free Tier usage objects that match your
         * filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/GetFreeTierUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFreeTierUsageOutcome GetFreeTierUsage(const Model::GetFreeTierUsageRequest& request) const;

        /**
         * A Callable wrapper for GetFreeTierUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFreeTierUsageRequestT = Model::GetFreeTierUsageRequest>
        Model::GetFreeTierUsageOutcomeCallable GetFreeTierUsageCallable(const GetFreeTierUsageRequestT& request) const
        {
            return SubmitCallable(&FreeTierClient::GetFreeTierUsage, request);
        }

        /**
         * An Async wrapper for GetFreeTierUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFreeTierUsageRequestT = Model::GetFreeTierUsageRequest>
        void GetFreeTierUsageAsync(const GetFreeTierUsageRequestT& request, const GetFreeTierUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FreeTierClient::GetFreeTierUsage, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FreeTierEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FreeTierClient>;
      void init(const FreeTierClientConfiguration& clientConfiguration);

      FreeTierClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<FreeTierEndpointProviderBase> m_endpointProvider;
  };

} // namespace FreeTier
} // namespace Aws
