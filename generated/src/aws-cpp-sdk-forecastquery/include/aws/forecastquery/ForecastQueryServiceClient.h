﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/forecastquery/ForecastQueryServiceServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/forecastquery/ForecastQueryServiceErrorMarshaller.h>

namespace Aws
{
namespace ForecastQueryService
{
  AWS_FORECASTQUERYSERVICE_API extern const char SERVICE_NAME[];
  /**
   * <p>Provides APIs for creating and managing Amazon Forecast resources.</p>
   */
  class AWS_FORECASTQUERYSERVICE_API ForecastQueryServiceClient : smithy::client::AwsSmithyClientT<Aws::ForecastQueryService::SERVICE_NAME,
      Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      ForecastQueryServiceEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::ForecastQueryServiceErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<ForecastQueryServiceClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "forecastquery"; }

      typedef ForecastQueryServiceClientConfiguration ClientConfigurationType;
      typedef ForecastQueryServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration = Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration(),
                                   std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ForecastQueryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration = Aws::ForecastQueryService::ForecastQueryServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ForecastQueryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename QueryForecastRequestT = Model::QueryForecastRequest>
        Model::QueryForecastOutcomeCallable QueryForecastCallable(const QueryForecastRequestT& request) const
        {
            return SubmitCallable(&ForecastQueryServiceClient::QueryForecast, request);
        }

        /**
         * An Async wrapper for QueryForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryForecastRequestT = Model::QueryForecastRequest>
        void QueryForecastAsync(const QueryForecastRequestT& request, const QueryForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ForecastQueryServiceClient::QueryForecast, request, handler, context);
        }

        /**
         * <p>Retrieves a what-if forecast.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/QueryWhatIfForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryWhatIfForecastOutcome QueryWhatIfForecast(const Model::QueryWhatIfForecastRequest& request) const;

        /**
         * A Callable wrapper for QueryWhatIfForecast that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QueryWhatIfForecastRequestT = Model::QueryWhatIfForecastRequest>
        Model::QueryWhatIfForecastOutcomeCallable QueryWhatIfForecastCallable(const QueryWhatIfForecastRequestT& request) const
        {
            return SubmitCallable(&ForecastQueryServiceClient::QueryWhatIfForecast, request);
        }

        /**
         * An Async wrapper for QueryWhatIfForecast that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QueryWhatIfForecastRequestT = Model::QueryWhatIfForecastRequest>
        void QueryWhatIfForecastAsync(const QueryWhatIfForecastRequestT& request, const QueryWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ForecastQueryServiceClient::QueryWhatIfForecast, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ForecastQueryServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ForecastQueryServiceClient>;

  };

} // namespace ForecastQueryService
} // namespace Aws
