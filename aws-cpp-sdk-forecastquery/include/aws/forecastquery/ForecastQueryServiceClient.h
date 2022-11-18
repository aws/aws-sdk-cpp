/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/forecastquery/ForecastQueryServiceServiceClientModel.h>
#include <aws/forecastquery/ForecastQueryServiceLegacyAsyncMacros.h>

namespace Aws
{
namespace ForecastQueryService
{
  /**
   * <p>Provides APIs for creating and managing Amazon Forecast resources.</p>
   */
  class AWS_FORECASTQUERYSERVICE_API ForecastQueryServiceClient : public Aws::Client::AWSJsonClient
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
         * <p>Retrieves a what-if forecast.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/forecastquery-2018-06-26/QueryWhatIfForecast">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryWhatIfForecastOutcome QueryWhatIfForecast(const Model::QueryWhatIfForecastRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ForecastQueryServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ForecastQueryServiceClientConfiguration& clientConfiguration);

      ForecastQueryServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ForecastQueryServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ForecastQueryService
} // namespace Aws
