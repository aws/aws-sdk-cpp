/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-metrics/SageMakerMetrics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-metrics/SageMakerMetricsServiceClientModel.h>

namespace Aws
{
namespace SageMakerMetrics
{
  /**
   * <p>Contains all data plane API operations and data types for Amazon SageMaker
   * Metrics. Use these APIs to put and retrieve (get) features related to your
   * training run.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_metrics_BatchPutMetrics.html">BatchPutMetrics</a>
   * </p> </li> </ul>
   */
  class AWS_SAGEMAKERMETRICS_API SageMakerMetricsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SageMakerMetricsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration& clientConfiguration = Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration(),
                               std::shared_ptr<SageMakerMetricsEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerMetricsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<SageMakerMetricsEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerMetricsEndpointProvider>(ALLOCATION_TAG),
                               const Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration& clientConfiguration = Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerMetricsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<SageMakerMetricsEndpointProviderBase> endpointProvider = Aws::MakeShared<SageMakerMetricsEndpointProvider>(ALLOCATION_TAG),
                               const Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration& clientConfiguration = Aws::SageMakerMetrics::SageMakerMetricsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SageMakerMetricsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SageMakerMetricsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SageMakerMetricsClient();

        /**
         * <p>Used to ingest training metrics into SageMaker. These metrics can be
         * visualized in SageMaker Studio and retrieved with the <code>GetMetrics</code>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-metrics-2022-09-30/BatchPutMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutMetricsOutcome BatchPutMetrics(const Model::BatchPutMetricsRequest& request) const;

        /**
         * A Callable wrapper for BatchPutMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutMetricsOutcomeCallable BatchPutMetricsCallable(const Model::BatchPutMetricsRequest& request) const;

        /**
         * An Async wrapper for BatchPutMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutMetricsAsync(const Model::BatchPutMetricsRequest& request, const BatchPutMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SageMakerMetricsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SageMakerMetricsClient>;
      void init(const SageMakerMetricsClientConfiguration& clientConfiguration);

      SageMakerMetricsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SageMakerMetricsEndpointProviderBase> m_endpointProvider;
  };

} // namespace SageMakerMetrics
} // namespace Aws
