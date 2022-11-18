/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotanalytics/IoTAnalyticsServiceClientModel.h>
#include <aws/iotanalytics/IoTAnalyticsLegacyAsyncMacros.h>

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
  class AWS_IOTANALYTICS_API IoTAnalyticsClient : public Aws::Client::AWSJsonClient
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
         * <p>Sends messages to a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/BatchPutMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutMessageOutcome BatchPutMessage(const Model::BatchPutMessageRequest& request) const;


        /**
         * <p>Cancels the reprocessing of data through the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CancelPipelineReprocessing">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelPipelineReprocessingOutcome CancelPipelineReprocessing(const Model::CancelPipelineReprocessingRequest& request) const;


        /**
         * <p>Used to create a channel. A channel collects data from an MQTT topic and
         * archives the raw, unprocessed messages before publishing the data to a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;


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
         * <p>Creates the content of a dataset by applying a <code>queryAction</code> (a
         * SQL query) or a <code>containerAction</code> (executing a containerized
         * application).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetContentOutcome CreateDatasetContent(const Model::CreateDatasetContentRequest& request) const;


        /**
         * <p>Creates a data store, which is a repository for messages.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatastoreOutcome CreateDatastore(const Model::CreateDatastoreRequest& request) const;


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
         * <p>Deletes the specified channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;


        /**
         * <p>Deletes the specified dataset.</p> <p>You do not have to delete the content
         * of the dataset before you perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;


        /**
         * <p>Deletes the content of the specified dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetContentOutcome DeleteDatasetContent(const Model::DeleteDatasetContentRequest& request) const;


        /**
         * <p>Deletes the specified data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatastoreOutcome DeleteDatastore(const Model::DeleteDatastoreRequest& request) const;


        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;


        /**
         * <p>Retrieves information about a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;


        /**
         * <p>Retrieves information about a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;


        /**
         * <p>Retrieves information about a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatastoreOutcome DescribeDatastore(const Model::DescribeDatastoreRequest& request) const;


        /**
         * <p>Retrieves the current settings of the IoT Analytics logging
         * options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;


        /**
         * <p>Retrieves information about a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineOutcome DescribePipeline(const Model::DescribePipelineRequest& request) const;


        /**
         * <p>Retrieves the contents of a dataset as presigned URIs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/GetDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatasetContentOutcome GetDatasetContent(const Model::GetDatasetContentRequest& request) const;


        /**
         * <p>Retrieves a list of channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;


        /**
         * <p>Lists information about dataset contents that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasetContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetContentsOutcome ListDatasetContents(const Model::ListDatasetContentsRequest& request) const;


        /**
         * <p>Retrieves information about datasets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;


        /**
         * <p>Retrieves a list of data stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatastoresOutcome ListDatastores(const Model::ListDatastoresRequest& request) const;


        /**
         * <p>Retrieves a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;


        /**
         * <p>Lists the tags (metadata) that you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Simulates the results of running a pipeline activity on a message
         * payload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/RunPipelineActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::RunPipelineActivityOutcome RunPipelineActivity(const Model::RunPipelineActivityRequest& request) const;


        /**
         * <p>Retrieves a sample of messages from the specified channel ingested during the
         * specified timeframe. Up to 10 messages can be retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SampleChannelData">AWS
         * API Reference</a></p>
         */
        virtual Model::SampleChannelDataOutcome SampleChannelData(const Model::SampleChannelDataRequest& request) const;


        /**
         * <p>Starts the reprocessing of raw message data through the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/StartPipelineReprocessing">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPipelineReprocessingOutcome StartPipelineReprocessing(const Model::StartPipelineReprocessingRequest& request) const;


        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Used to update the settings of a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;


        /**
         * <p>Updates the settings of a dataset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;


        /**
         * <p>Used to update the settings of a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatastoreOutcome UpdateDatastore(const Model::UpdateDatastoreRequest& request) const;


        /**
         * <p>Updates the settings of a pipeline. You must specify both a
         * <code>channel</code> and a <code>datastore</code> activity and, optionally, as
         * many as 23 additional activities in the <code>pipelineActivities</code>
         * array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePipelineOutcome UpdatePipeline(const Model::UpdatePipelineRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTAnalyticsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoTAnalyticsClientConfiguration& clientConfiguration);

      IoTAnalyticsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTAnalyticsEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTAnalytics
} // namespace Aws
