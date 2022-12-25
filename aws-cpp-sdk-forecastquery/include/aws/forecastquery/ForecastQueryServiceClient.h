/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/forecastquery/ForecastQueryServiceServiceClientModel.h>

namespace Aws
{
namespace ForecastQueryService
{
  /**
   * <p>Provides APIs for creating and managing Amazon Forecast resources.</p>
   */
  class AWS_FORECASTQUERYSERVICE_API ForecastQueryServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ForecastQueryServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration = Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration(),
                                   std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ForecastQueryServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ForecastQueryServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration = Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ForecastQueryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ForecastQueryServiceEndpointProvider>(ALLOCATION_TAG),
                                   const Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration = Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ForecastQueryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ForecastQueryServiceClient();

        /**
         * <p>Retrieves a forecast for a single item, filtered by the supplied
         * criteria.</p> <p>The criteria is a key-value pair. The key is either
         * <code>item_id</code> (or the equivalent non-timestamp, non-target field) from
         * the <code>TARGET_TIME_SERIES</code> dataset, or one of the forecast dimensions
         * specified as part of the <code>FeaturizationConfig</code> object.</p> <p>By
         * default, <code>QueryForecast</code> returns the complete date range for the
         * filtered forecast. You can request a specific date range.</p> <p>To get the full
         * forecast, use the <a
         * href="https://docs.aws.amazon.com/en_us/forecast/latest/dg/API_CreateForecastExportJob.html">CreateForecastExportJob</a>
         * operation.</p>  <p>The forecasts generated by Amazon Forecast are in the
         * same timezone as the dataset that was used to create the predictor.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/QueryForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryForecastOutcome QueryForecast(const Model::QueryForecastRequest& request) const;

        /**
         * A Callable wrapper for QueryForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryForecastOutcomeCallable QueryForecastCallable(const Model::QueryForecastRequest& request) const;

        /**
         * An Async wrapper for QueryForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryForecastAsync(const Model::QueryForecastRequest& request, const QueryForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a what-if forecast.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/QueryWhatIfForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryWhatIfForecastOutcome QueryWhatIfForecast(const Model::QueryWhatIfForecastRequest& request) const;

        /**
         * A Callable wrapper for QueryWhatIfForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryWhatIfForecastOutcomeCallable QueryWhatIfForecastCallable(const Model::QueryWhatIfForecastRequest& request) const;

        /**
         * An Async wrapper for QueryWhatIfForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryWhatIfForecastAsync(const Model::QueryWhatIfForecastRequest& request, const QueryWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ForecastQueryServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ForecastQueryServiceClient>;
      void init(const ForecastQueryServiceClientConfiguration& clientConfiguration);

      ForecastQueryServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ForecastQueryServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ForecastQueryService
} // namespace Aws
