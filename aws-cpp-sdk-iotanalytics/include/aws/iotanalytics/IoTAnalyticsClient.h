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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration = Aws::IoTAnalytics::IoTAnalyticsClientConfiguration(),
                           std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTAnalyticsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTAnalyticsEndpointProvider>(ALLOCATION_TAG),
                           const Aws::IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration = Aws::IoTAnalytics::IoTAnalyticsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTAnalyticsEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::BatchPutMessageOutcomeCallable BatchPutMessageCallable(const Model::BatchPutMessageRequest& request) const;

        /**
         * An Async wrapper for BatchPutMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchPutMessageAsync(const Model::BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CancelPipelineReprocessingOutcomeCallable CancelPipelineReprocessingCallable(const Model::CancelPipelineReprocessingRequest& request) const;

        /**
         * An Async wrapper for CancelPipelineReprocessing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelPipelineReprocessingAsync(const Model::CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * An Async wrapper for CreateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDatasetContentOutcomeCallable CreateDatasetContentCallable(const Model::CreateDatasetContentRequest& request) const;

        /**
         * An Async wrapper for CreateDatasetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetContentAsync(const Model::CreateDatasetContentRequest& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDatastoreOutcomeCallable CreateDatastoreCallable(const Model::CreateDatastoreRequest& request) const;

        /**
         * An Async wrapper for CreateDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatastoreAsync(const Model::CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * An Async wrapper for CreatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the content of the specified dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetContentOutcome DeleteDatasetContent(const Model::DeleteDatasetContentRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatasetContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetContentOutcomeCallable DeleteDatasetContentCallable(const Model::DeleteDatasetContentRequest& request) const;

        /**
         * An Async wrapper for DeleteDatasetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetContentAsync(const Model::DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatastoreOutcome DeleteDatastore(const Model::DeleteDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatastoreOutcomeCallable DeleteDatastoreCallable(const Model::DeleteDatastoreRequest& request) const;

        /**
         * An Async wrapper for DeleteDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatastoreAsync(const Model::DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * A Callable wrapper for DeletePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * An Async wrapper for DeletePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * A Callable wrapper for DescribeDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * An Async wrapper for DescribeDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatastoreOutcome DescribeDatastore(const Model::DescribeDatastoreRequest& request) const;

        /**
         * A Callable wrapper for DescribeDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatastoreOutcomeCallable DescribeDatastoreCallable(const Model::DescribeDatastoreRequest& request) const;

        /**
         * An Async wrapper for DescribeDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatastoreAsync(const Model::DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingOptionsAsync(const Model::DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineOutcome DescribePipeline(const Model::DescribePipelineRequest& request) const;

        /**
         * A Callable wrapper for DescribePipeline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePipelineOutcomeCallable DescribePipelineCallable(const Model::DescribePipelineRequest& request) const;

        /**
         * An Async wrapper for DescribePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePipelineAsync(const Model::DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDatasetContentOutcomeCallable GetDatasetContentCallable(const Model::GetDatasetContentRequest& request) const;

        /**
         * An Async wrapper for GetDatasetContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatasetContentAsync(const Model::GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDatasetContentsOutcomeCallable ListDatasetContentsCallable(const Model::ListDatasetContentsRequest& request) const;

        /**
         * An Async wrapper for ListDatasetContents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetContentsAsync(const Model::ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * A Callable wrapper for ListDatasets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * An Async wrapper for ListDatasets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of data stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatastoresOutcome ListDatastores(const Model::ListDatastoresRequest& request) const;

        /**
         * A Callable wrapper for ListDatastores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatastoresOutcomeCallable ListDatastoresCallable(const Model::ListDatastoresRequest& request) const;

        /**
         * An Async wrapper for ListDatastores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatastoresAsync(const Model::ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * A Callable wrapper for ListPipelines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * An Async wrapper for ListPipelines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for PutLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLoggingOptionsAsync(const Model::PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RunPipelineActivityOutcomeCallable RunPipelineActivityCallable(const Model::RunPipelineActivityRequest& request) const;

        /**
         * An Async wrapper for RunPipelineActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunPipelineActivityAsync(const Model::RunPipelineActivityRequest& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SampleChannelDataOutcomeCallable SampleChannelDataCallable(const Model::SampleChannelDataRequest& request) const;

        /**
         * An Async wrapper for SampleChannelData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SampleChannelDataAsync(const Model::SampleChannelDataRequest& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartPipelineReprocessingOutcomeCallable StartPipelineReprocessingCallable(const Model::StartPipelineReprocessingRequest& request) const;

        /**
         * An Async wrapper for StartPipelineReprocessing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPipelineReprocessingAsync(const Model::StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to update the settings of a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings of a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const Model::UpdateDatasetRequest& request) const;

        /**
         * An Async wrapper for UpdateDataset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatasetAsync(const Model::UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Used to update the settings of a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatastoreOutcome UpdateDatastore(const Model::UpdateDatastoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatastore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatastoreOutcomeCallable UpdateDatastoreCallable(const Model::UpdateDatastoreRequest& request) const;

        /**
         * An Async wrapper for UpdateDatastore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatastoreAsync(const Model::UpdateDatastoreRequest& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /**
         * An Async wrapper for UpdatePipeline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
