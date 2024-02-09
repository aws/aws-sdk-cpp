/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotanalytics/IoTAnalyticsServiceClientModel.h>

namespace Aws
{
namespace IoTAnalytics
{
  /**
   * <p>IoT Analytics allows you to collect large amounts of device data, process
   * messages, and store them. You can then query the data and run sophisticated
   * analytics on it. IoT Analytics enables advanced data exploration through
   * integration with Jupyter Notebooks and data visualization through integration
   * with Amazon QuickSight.</p> <p>Traditional analytics and business intelligence
   * tools are designed to process structured data. IoT data often comes from devices
   * that record noisy processes (such as temperature, motion, or sound). As a result
   * the data from these devices can have significant gaps, corrupted messages, and
   * false readings that must be cleaned up before analysis can occur. Also, IoT data
   * is often only meaningful in the context of other data from external sources.
   * </p> <p>IoT Analytics automates the steps required to analyze data from IoT
   * devices. IoT Analytics filters, transforms, and enriches IoT data before storing
   * it in a time-series data store for analysis. You can set up the service to
   * collect only the data you need from your devices, apply mathematical transforms
   * to process the data, and enrich the data with device-specific metadata such as
   * device type and location before storing it. Then, you can analyze your data by
   * running queries using the built-in SQL query engine, or perform more complex
   * analytics and machine learning inference. IoT Analytics includes pre-built
   * models for common IoT use cases so you can answer questions like which devices
   * are about to fail or which customers are at risk of abandoning their wearable
   * devices.</p>
   */
  class AWS_IOTANALYTICS_API IoTAnalyticsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTAnalyticsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTAnalyticsClientConfiguration ClientConfigurationType;
      typedef IoTAnalyticsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration = Aws::IoTAnalytics::IoTAnalyticsClientConfiguration(),
                           std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration = Aws::IoTAnalytics::IoTAnalyticsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration = Aws::IoTAnalytics::IoTAnalyticsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTAnalyticsClient();

        /**
         * <p>Sends messages to a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/BatchPutMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutMessageOutcome BatchPutMessage(const Model::BatchPutMessageRequest& request) const;

        /**
         * A Callable wrapper for BatchPutMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutMessageRequestT = Model::BatchPutMessageRequest>
        Model::BatchPutMessageOutcomeCallable BatchPutMessageCallable(const BatchPutMessageRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::BatchPutMessage, request);
        }

        /**
         * An Async wrapper for BatchPutMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutMessageRequestT = Model::BatchPutMessageRequest>
        void BatchPutMessageAsync(const BatchPutMessageRequestT& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::BatchPutMessage, request, handler, context);
        }

        /**
         * <p>Cancels the reprocessing of data through the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CancelPipelineReprocessing">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelPipelineReprocessingOutcome CancelPipelineReprocessing(const Model::CancelPipelineReprocessingRequest& request) const;

        /**
         * A Callable wrapper for CancelPipelineReprocessing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelPipelineReprocessingRequestT = Model::CancelPipelineReprocessingRequest>
        Model::CancelPipelineReprocessingOutcomeCallable CancelPipelineReprocessingCallable(const CancelPipelineReprocessingRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::CancelPipelineReprocessing, request);
        }

        /**
         * An Async wrapper for CancelPipelineReprocessing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelPipelineReprocessingRequestT = Model::CancelPipelineReprocessingRequest>
        void CancelPipelineReprocessingAsync(const CancelPipelineReprocessingRequestT& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::CancelPipelineReprocessing, request, handler, context);
        }

        /**
         * <p>Used to create a channel. A channel collects data from an MQTT topic and
         * archives the raw, unprocessed messages before publishing the data to a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::CreateChannel, request, handler, context);
        }

        /**
         * <p>Used to create a dataset. A dataset stores data retrieved from a data store
         * by applying a <code>queryAction</code> (a SQL query) or a
         * <code>containerAction</code> (executing a containerized application). This
         * operation creates the skeleton of a dataset. The dataset can be populated
         * manually by calling <code>CreateDatasetContent</code> or automatically according
         * to a trigger you specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const CreateDatasetRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::CreateDataset, request);
        }

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetRequestT = Model::CreateDatasetRequest>
        void CreateDatasetAsync(const CreateDatasetRequestT& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::CreateDataset, request, handler, context);
        }

        /**
         * <p>Creates the content of a dataset by applying a <code>queryAction</code> (a
         * SQL query) or a <code>containerAction</code> (executing a containerized
         * application).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetContentOutcome CreateDatasetContent(const Model::CreateDatasetContentRequest& request) const;

        /**
         * A Callable wrapper for CreateDatasetContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatasetContentRequestT = Model::CreateDatasetContentRequest>
        Model::CreateDatasetContentOutcomeCallable CreateDatasetContentCallable(const CreateDatasetContentRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::CreateDatasetContent, request);
        }

        /**
         * An Async wrapper for CreateDatasetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatasetContentRequestT = Model::CreateDatasetContentRequest>
        void CreateDatasetContentAsync(const CreateDatasetContentRequestT& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::CreateDatasetContent, request, handler, context);
        }

        /**
         * <p>Creates a data store, which is a repository for messages.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatastoreOutcome CreateDatastore(const Model::CreateDatastoreRequest& request) const;

        /**
         * A Callable wrapper for CreateDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatastoreRequestT = Model::CreateDatastoreRequest>
        Model::CreateDatastoreOutcomeCallable CreateDatastoreCallable(const CreateDatastoreRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::CreateDatastore, request);
        }

        /**
         * An Async wrapper for CreateDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatastoreRequestT = Model::CreateDatastoreRequest>
        void CreateDatastoreAsync(const CreateDatastoreRequestT& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::CreateDatastore, request, handler, context);
        }

        /**
         * <p>Creates a pipeline. A pipeline consumes messages from a channel and allows
         * you to process the messages before storing them in a data store. You must
         * specify both a <code>channel</code> and a <code>datastore</code> activity and,
         * optionally, as many as 23 additional activities in the
         * <code>pipelineActivities</code> array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * A Callable wrapper for CreatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const CreatePipelineRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::CreatePipeline, request);
        }

        /**
         * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePipelineRequestT = Model::CreatePipelineRequest>
        void CreatePipelineAsync(const CreatePipelineRequestT& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::CreatePipeline, request, handler, context);
        }

        /**
         * <p>Deletes the specified channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DeleteChannel, request, handler, context);
        }

        /**
         * <p>Deletes the specified dataset.</p> <p>You do not have to delete the content
         * of the dataset before you perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const DeleteDatasetRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DeleteDataset, request);
        }

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetRequestT = Model::DeleteDatasetRequest>
        void DeleteDatasetAsync(const DeleteDatasetRequestT& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DeleteDataset, request, handler, context);
        }

        /**
         * <p>Deletes the content of the specified dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetContentOutcome DeleteDatasetContent(const Model::DeleteDatasetContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatasetContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatasetContentRequestT = Model::DeleteDatasetContentRequest>
        Model::DeleteDatasetContentOutcomeCallable DeleteDatasetContentCallable(const DeleteDatasetContentRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DeleteDatasetContent, request);
        }

        /**
         * An Async wrapper for DeleteDatasetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatasetContentRequestT = Model::DeleteDatasetContentRequest>
        void DeleteDatasetContentAsync(const DeleteDatasetContentRequestT& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DeleteDatasetContent, request, handler, context);
        }

        /**
         * <p>Deletes the specified data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatastoreOutcome DeleteDatastore(const Model::DeleteDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatastoreRequestT = Model::DeleteDatastoreRequest>
        Model::DeleteDatastoreOutcomeCallable DeleteDatastoreCallable(const DeleteDatastoreRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DeleteDatastore, request);
        }

        /**
         * An Async wrapper for DeleteDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatastoreRequestT = Model::DeleteDatastoreRequest>
        void DeleteDatastoreAsync(const DeleteDatastoreRequestT& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DeleteDatastore, request, handler, context);
        }

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const DeletePipelineRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DeletePipeline, request);
        }

        /**
         * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePipelineRequestT = Model::DeletePipelineRequest>
        void DeletePipelineAsync(const DeletePipelineRequestT& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DeletePipeline, request, handler, context);
        }

        /**
         * <p>Retrieves information about a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const DescribeChannelRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DescribeChannel, request);
        }

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        void DescribeChannelAsync(const DescribeChannelRequestT& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DescribeChannel, request, handler, context);
        }

        /**
         * <p>Retrieves information about a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const DescribeDatasetRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DescribeDataset, request);
        }

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatasetRequestT = Model::DescribeDatasetRequest>
        void DescribeDatasetAsync(const DescribeDatasetRequestT& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DescribeDataset, request, handler, context);
        }

        /**
         * <p>Retrieves information about a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatastoreOutcome DescribeDatastore(const Model::DescribeDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDatastoreRequestT = Model::DescribeDatastoreRequest>
        Model::DescribeDatastoreOutcomeCallable DescribeDatastoreCallable(const DescribeDatastoreRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DescribeDatastore, request);
        }

        /**
         * An Async wrapper for DescribeDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDatastoreRequestT = Model::DescribeDatastoreRequest>
        void DescribeDatastoreAsync(const DescribeDatastoreRequestT& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DescribeDatastore, request, handler, context);
        }

        /**
         * <p>Retrieves the current settings of the IoT Analytics logging
         * options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLoggingOptionsRequestT = Model::DescribeLoggingOptionsRequest>
        Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DescribeLoggingOptions, request);
        }

        /**
         * An Async wrapper for DescribeLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoggingOptionsRequestT = Model::DescribeLoggingOptionsRequest>
        void DescribeLoggingOptionsAsync(const DescribeLoggingOptionsRequestT& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DescribeLoggingOptions, request, handler, context);
        }

        /**
         * <p>Retrieves information about a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineOutcome DescribePipeline(const Model::DescribePipelineRequest& request) const;

        /**
         * A Callable wrapper for DescribePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePipelineRequestT = Model::DescribePipelineRequest>
        Model::DescribePipelineOutcomeCallable DescribePipelineCallable(const DescribePipelineRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::DescribePipeline, request);
        }

        /**
         * An Async wrapper for DescribePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePipelineRequestT = Model::DescribePipelineRequest>
        void DescribePipelineAsync(const DescribePipelineRequestT& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::DescribePipeline, request, handler, context);
        }

        /**
         * <p>Retrieves the contents of a dataset as presigned URIs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/GetDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatasetContentOutcome GetDatasetContent(const Model::GetDatasetContentRequest& request) const;

        /**
         * A Callable wrapper for GetDatasetContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDatasetContentRequestT = Model::GetDatasetContentRequest>
        Model::GetDatasetContentOutcomeCallable GetDatasetContentCallable(const GetDatasetContentRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::GetDatasetContent, request);
        }

        /**
         * An Async wrapper for GetDatasetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDatasetContentRequestT = Model::GetDatasetContentRequest>
        void GetDatasetContentAsync(const GetDatasetContentRequestT& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::GetDatasetContent, request, handler, context);
        }

        /**
         * <p>Retrieves a list of channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::ListChannels, request, handler, context);
        }

        /**
         * <p>Lists information about dataset contents that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasetContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetContentsOutcome ListDatasetContents(const Model::ListDatasetContentsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasetContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetContentsRequestT = Model::ListDatasetContentsRequest>
        Model::ListDatasetContentsOutcomeCallable ListDatasetContentsCallable(const ListDatasetContentsRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::ListDatasetContents, request);
        }

        /**
         * An Async wrapper for ListDatasetContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetContentsRequestT = Model::ListDatasetContentsRequest>
        void ListDatasetContentsAsync(const ListDatasetContentsRequestT& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::ListDatasetContents, request, handler, context);
        }

        /**
         * <p>Retrieves information about datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const ListDatasetsRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::ListDatasets, request);
        }

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatasetsRequestT = Model::ListDatasetsRequest>
        void ListDatasetsAsync(const ListDatasetsRequestT& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::ListDatasets, request, handler, context);
        }

        /**
         * <p>Retrieves a list of data stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatastoresOutcome ListDatastores(const Model::ListDatastoresRequest& request) const;

        /**
         * A Callable wrapper for ListDatastores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatastoresRequestT = Model::ListDatastoresRequest>
        Model::ListDatastoresOutcomeCallable ListDatastoresCallable(const ListDatastoresRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::ListDatastores, request);
        }

        /**
         * An Async wrapper for ListDatastores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatastoresRequestT = Model::ListDatastoresRequest>
        void ListDatastoresAsync(const ListDatastoresRequestT& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::ListDatastores, request, handler, context);
        }

        /**
         * <p>Retrieves a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const ListPipelinesRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::ListPipelines, request);
        }

        /**
         * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPipelinesRequestT = Model::ListPipelinesRequest>
        void ListPipelinesAsync(const ListPipelinesRequestT& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::ListPipelines, request, handler, context);
        }

        /**
         * <p>Lists the tags (metadata) that you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sets or updates the IoT Analytics logging options.</p> <p>If you update the
         * value of any <code>loggingOptions</code> field, it takes up to one minute for
         * the change to take effect. Also, if you change the policy attached to the role
         * you specified in the <code>roleArn</code> field (for example, to correct an
         * invalid policy), it takes up to five minutes for that change to take effect.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for PutLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
        Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const PutLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::PutLoggingOptions, request);
        }

        /**
         * An Async wrapper for PutLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLoggingOptionsRequestT = Model::PutLoggingOptionsRequest>
        void PutLoggingOptionsAsync(const PutLoggingOptionsRequestT& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::PutLoggingOptions, request, handler, context);
        }

        /**
         * <p>Simulates the results of running a pipeline activity on a message
         * payload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/RunPipelineActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::RunPipelineActivityOutcome RunPipelineActivity(const Model::RunPipelineActivityRequest& request) const;

        /**
         * A Callable wrapper for RunPipelineActivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RunPipelineActivityRequestT = Model::RunPipelineActivityRequest>
        Model::RunPipelineActivityOutcomeCallable RunPipelineActivityCallable(const RunPipelineActivityRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::RunPipelineActivity, request);
        }

        /**
         * An Async wrapper for RunPipelineActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RunPipelineActivityRequestT = Model::RunPipelineActivityRequest>
        void RunPipelineActivityAsync(const RunPipelineActivityRequestT& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::RunPipelineActivity, request, handler, context);
        }

        /**
         * <p>Retrieves a sample of messages from the specified channel ingested during the
         * specified timeframe. Up to 10 messages can be retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SampleChannelData">AWS
         * API Reference</a></p>
         */
        virtual Model::SampleChannelDataOutcome SampleChannelData(const Model::SampleChannelDataRequest& request) const;

        /**
         * A Callable wrapper for SampleChannelData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SampleChannelDataRequestT = Model::SampleChannelDataRequest>
        Model::SampleChannelDataOutcomeCallable SampleChannelDataCallable(const SampleChannelDataRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::SampleChannelData, request);
        }

        /**
         * An Async wrapper for SampleChannelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SampleChannelDataRequestT = Model::SampleChannelDataRequest>
        void SampleChannelDataAsync(const SampleChannelDataRequestT& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::SampleChannelData, request, handler, context);
        }

        /**
         * <p>Starts the reprocessing of raw message data through the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/StartPipelineReprocessing">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPipelineReprocessingOutcome StartPipelineReprocessing(const Model::StartPipelineReprocessingRequest& request) const;

        /**
         * A Callable wrapper for StartPipelineReprocessing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPipelineReprocessingRequestT = Model::StartPipelineReprocessingRequest>
        Model::StartPipelineReprocessingOutcomeCallable StartPipelineReprocessingCallable(const StartPipelineReprocessingRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::StartPipelineReprocessing, request);
        }

        /**
         * An Async wrapper for StartPipelineReprocessing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPipelineReprocessingRequestT = Model::StartPipelineReprocessingRequest>
        void StartPipelineReprocessingAsync(const StartPipelineReprocessingRequestT& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::StartPipelineReprocessing, request, handler, context);
        }

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Used to update the settings of a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::UpdateChannel, request, handler, context);
        }

        /**
         * <p>Updates the settings of a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
        Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const UpdateDatasetRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::UpdateDataset, request);
        }

        /**
         * An Async wrapper for UpdateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatasetRequestT = Model::UpdateDatasetRequest>
        void UpdateDatasetAsync(const UpdateDatasetRequestT& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::UpdateDataset, request, handler, context);
        }

        /**
         * <p>Used to update the settings of a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatastoreOutcome UpdateDatastore(const Model::UpdateDatastoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatastoreRequestT = Model::UpdateDatastoreRequest>
        Model::UpdateDatastoreOutcomeCallable UpdateDatastoreCallable(const UpdateDatastoreRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::UpdateDatastore, request);
        }

        /**
         * An Async wrapper for UpdateDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatastoreRequestT = Model::UpdateDatastoreRequest>
        void UpdateDatastoreAsync(const UpdateDatastoreRequestT& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::UpdateDatastore, request, handler, context);
        }

        /**
         * <p>Updates the settings of a pipeline. You must specify both a
         * <code>channel</code> and a <code>datastore</code> activity and, optionally, as
         * many as 23 additional activities in the <code>pipelineActivities</code>
         * array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;

        /**
         * A Callable wrapper for UpdatePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const UpdatePipelineRequestT& request) const
        {
            return SubmitCallable(&IoTAnalyticsClient::UpdatePipeline, request);
        }

        /**
         * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePipelineRequestT = Model::UpdatePipelineRequest>
        void UpdatePipelineAsync(const UpdatePipelineRequestT& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTAnalyticsClient::UpdatePipeline, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTAnalyticsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTAnalyticsClient>;
      void init(const IoTAnalyticsClientConfiguration& clientConfiguration);

      IoTAnalyticsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTAnalyticsEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTAnalytics
} // namespace Aws
