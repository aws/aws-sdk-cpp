/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActionsServiceClientModel.h>

namespace Aws
{
namespace BCMRecommendedActions
{
  /**
   * <p>You can use the Billing and Cost Management Recommended Actions API to
   * programmatically query your best practices and recommendations to optimize your
   * costs.</p> <p>The Billing and Cost Management Recommended Actions API provides
   * the following endpoint:</p> <ul> <li> <p>
   * https://bcm-recommended-actions.us-east-1.api.aws</p> </li> </ul>
   */
  class AWS_BCMRECOMMENDEDACTIONS_API BCMRecommendedActionsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BCMRecommendedActionsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BCMRecommendedActionsClientConfiguration ClientConfigurationType;
      typedef BCMRecommendedActionsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMRecommendedActionsClient(const Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration& clientConfiguration = Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration(),
                                    std::shared_ptr<BCMRecommendedActionsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMRecommendedActionsClient(const Aws::Auth::AWSCredentials& credentials,
                                    std::shared_ptr<BCMRecommendedActionsEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration& clientConfiguration = Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BCMRecommendedActionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    std::shared_ptr<BCMRecommendedActionsEndpointProviderBase> endpointProvider = nullptr,
                                    const Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration& clientConfiguration = Aws::BCMRecommendedActions::BCMRecommendedActionsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMRecommendedActionsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BCMRecommendedActionsClient(const Aws::Auth::AWSCredentials& credentials,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BCMRecommendedActionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BCMRecommendedActionsClient();

        /**
         * <p>Returns a list of recommended actions that match the filter
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-recommended-actions-2024-11-14/ListRecommendedActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendedActionsOutcome ListRecommendedActions(const Model::ListRecommendedActionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRecommendedActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendedActionsRequestT = Model::ListRecommendedActionsRequest>
        Model::ListRecommendedActionsOutcomeCallable ListRecommendedActionsCallable(const ListRecommendedActionsRequestT& request = {}) const
        {
            return SubmitCallable(&BCMRecommendedActionsClient::ListRecommendedActions, request);
        }

        /**
         * An Async wrapper for ListRecommendedActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendedActionsRequestT = Model::ListRecommendedActionsRequest>
        void ListRecommendedActionsAsync(const ListRecommendedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRecommendedActionsRequestT& request = {}) const
        {
            return SubmitAsync(&BCMRecommendedActionsClient::ListRecommendedActions, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BCMRecommendedActionsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BCMRecommendedActionsClient>;
      void init(const BCMRecommendedActionsClientConfiguration& clientConfiguration);

      BCMRecommendedActionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<BCMRecommendedActionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace BCMRecommendedActions
} // namespace Aws
