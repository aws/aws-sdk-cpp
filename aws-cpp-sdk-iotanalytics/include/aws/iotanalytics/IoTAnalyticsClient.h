/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotanalytics/model/BatchPutMessageResult.h>
#include <aws/iotanalytics/model/CancelPipelineReprocessingResult.h>
#include <aws/iotanalytics/model/CreateChannelResult.h>
#include <aws/iotanalytics/model/CreateDatasetResult.h>
#include <aws/iotanalytics/model/CreateDatasetContentResult.h>
#include <aws/iotanalytics/model/CreateDatastoreResult.h>
#include <aws/iotanalytics/model/CreatePipelineResult.h>
#include <aws/iotanalytics/model/DescribeChannelResult.h>
#include <aws/iotanalytics/model/DescribeDatasetResult.h>
#include <aws/iotanalytics/model/DescribeDatastoreResult.h>
#include <aws/iotanalytics/model/DescribeLoggingOptionsResult.h>
#include <aws/iotanalytics/model/DescribePipelineResult.h>
#include <aws/iotanalytics/model/GetDatasetContentResult.h>
#include <aws/iotanalytics/model/ListChannelsResult.h>
#include <aws/iotanalytics/model/ListDatasetContentsResult.h>
#include <aws/iotanalytics/model/ListDatasetsResult.h>
#include <aws/iotanalytics/model/ListDatastoresResult.h>
#include <aws/iotanalytics/model/ListPipelinesResult.h>
#include <aws/iotanalytics/model/ListTagsForResourceResult.h>
#include <aws/iotanalytics/model/RunPipelineActivityResult.h>
#include <aws/iotanalytics/model/SampleChannelDataResult.h>
#include <aws/iotanalytics/model/StartPipelineReprocessingResult.h>
#include <aws/iotanalytics/model/TagResourceResult.h>
#include <aws/iotanalytics/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace IoTAnalytics
{

namespace Model
{
        class BatchPutMessageRequest;
        class CancelPipelineReprocessingRequest;
        class CreateChannelRequest;
        class CreateDatasetRequest;
        class CreateDatasetContentRequest;
        class CreateDatastoreRequest;
        class CreatePipelineRequest;
        class DeleteChannelRequest;
        class DeleteDatasetRequest;
        class DeleteDatasetContentRequest;
        class DeleteDatastoreRequest;
        class DeletePipelineRequest;
        class DescribeChannelRequest;
        class DescribeDatasetRequest;
        class DescribeDatastoreRequest;
        class DescribeLoggingOptionsRequest;
        class DescribePipelineRequest;
        class GetDatasetContentRequest;
        class ListChannelsRequest;
        class ListDatasetContentsRequest;
        class ListDatasetsRequest;
        class ListDatastoresRequest;
        class ListPipelinesRequest;
        class ListTagsForResourceRequest;
        class PutLoggingOptionsRequest;
        class RunPipelineActivityRequest;
        class SampleChannelDataRequest;
        class StartPipelineReprocessingRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateChannelRequest;
        class UpdateDatasetRequest;
        class UpdateDatastoreRequest;
        class UpdatePipelineRequest;

        typedef Aws::Utils::Outcome<BatchPutMessageResult, Aws::Client::AWSError<IoTAnalyticsErrors>> BatchPutMessageOutcome;
        typedef Aws::Utils::Outcome<CancelPipelineReprocessingResult, Aws::Client::AWSError<IoTAnalyticsErrors>> CancelPipelineReprocessingOutcome;
        typedef Aws::Utils::Outcome<CreateChannelResult, Aws::Client::AWSError<IoTAnalyticsErrors>> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetResult, Aws::Client::AWSError<IoTAnalyticsErrors>> CreateDatasetOutcome;
        typedef Aws::Utils::Outcome<CreateDatasetContentResult, Aws::Client::AWSError<IoTAnalyticsErrors>> CreateDatasetContentOutcome;
        typedef Aws::Utils::Outcome<CreateDatastoreResult, Aws::Client::AWSError<IoTAnalyticsErrors>> CreateDatastoreOutcome;
        typedef Aws::Utils::Outcome<CreatePipelineResult, Aws::Client::AWSError<IoTAnalyticsErrors>> CreatePipelineOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DeleteDatasetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DeleteDatasetContentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DeleteDatastoreOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DeletePipelineOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DescribeChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeDatasetResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DescribeDatasetOutcome;
        typedef Aws::Utils::Outcome<DescribeDatastoreResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DescribeDatastoreOutcome;
        typedef Aws::Utils::Outcome<DescribeLoggingOptionsResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DescribeLoggingOptionsOutcome;
        typedef Aws::Utils::Outcome<DescribePipelineResult, Aws::Client::AWSError<IoTAnalyticsErrors>> DescribePipelineOutcome;
        typedef Aws::Utils::Outcome<GetDatasetContentResult, Aws::Client::AWSError<IoTAnalyticsErrors>> GetDatasetContentOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, Aws::Client::AWSError<IoTAnalyticsErrors>> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetContentsResult, Aws::Client::AWSError<IoTAnalyticsErrors>> ListDatasetContentsOutcome;
        typedef Aws::Utils::Outcome<ListDatasetsResult, Aws::Client::AWSError<IoTAnalyticsErrors>> ListDatasetsOutcome;
        typedef Aws::Utils::Outcome<ListDatastoresResult, Aws::Client::AWSError<IoTAnalyticsErrors>> ListDatastoresOutcome;
        typedef Aws::Utils::Outcome<ListPipelinesResult, Aws::Client::AWSError<IoTAnalyticsErrors>> ListPipelinesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<IoTAnalyticsErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> PutLoggingOptionsOutcome;
        typedef Aws::Utils::Outcome<RunPipelineActivityResult, Aws::Client::AWSError<IoTAnalyticsErrors>> RunPipelineActivityOutcome;
        typedef Aws::Utils::Outcome<SampleChannelDataResult, Aws::Client::AWSError<IoTAnalyticsErrors>> SampleChannelDataOutcome;
        typedef Aws::Utils::Outcome<StartPipelineReprocessingResult, Aws::Client::AWSError<IoTAnalyticsErrors>> StartPipelineReprocessingOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<IoTAnalyticsErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<IoTAnalyticsErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> UpdateChannelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> UpdateDatasetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> UpdateDatastoreOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<IoTAnalyticsErrors>> UpdatePipelineOutcome;

        typedef std::future<BatchPutMessageOutcome> BatchPutMessageOutcomeCallable;
        typedef std::future<CancelPipelineReprocessingOutcome> CancelPipelineReprocessingOutcomeCallable;
        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
        typedef std::future<CreateDatasetContentOutcome> CreateDatasetContentOutcomeCallable;
        typedef std::future<CreateDatastoreOutcome> CreateDatastoreOutcomeCallable;
        typedef std::future<CreatePipelineOutcome> CreatePipelineOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
        typedef std::future<DeleteDatasetContentOutcome> DeleteDatasetContentOutcomeCallable;
        typedef std::future<DeleteDatastoreOutcome> DeleteDatastoreOutcomeCallable;
        typedef std::future<DeletePipelineOutcome> DeletePipelineOutcomeCallable;
        typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
        typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
        typedef std::future<DescribeDatastoreOutcome> DescribeDatastoreOutcomeCallable;
        typedef std::future<DescribeLoggingOptionsOutcome> DescribeLoggingOptionsOutcomeCallable;
        typedef std::future<DescribePipelineOutcome> DescribePipelineOutcomeCallable;
        typedef std::future<GetDatasetContentOutcome> GetDatasetContentOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListDatasetContentsOutcome> ListDatasetContentsOutcomeCallable;
        typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
        typedef std::future<ListDatastoresOutcome> ListDatastoresOutcomeCallable;
        typedef std::future<ListPipelinesOutcome> ListPipelinesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutLoggingOptionsOutcome> PutLoggingOptionsOutcomeCallable;
        typedef std::future<RunPipelineActivityOutcome> RunPipelineActivityOutcomeCallable;
        typedef std::future<SampleChannelDataOutcome> SampleChannelDataOutcomeCallable;
        typedef std::future<StartPipelineReprocessingOutcome> StartPipelineReprocessingOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
        typedef std::future<UpdateDatasetOutcome> UpdateDatasetOutcomeCallable;
        typedef std::future<UpdateDatastoreOutcome> UpdateDatastoreOutcomeCallable;
        typedef std::future<UpdatePipelineOutcome> UpdatePipelineOutcomeCallable;
} // namespace Model

  class IoTAnalyticsClient;

    typedef std::function<void(const IoTAnalyticsClient*, const Model::BatchPutMessageRequest&, const Model::BatchPutMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutMessageResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::CancelPipelineReprocessingRequest&, const Model::CancelPipelineReprocessingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelPipelineReprocessingResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::CreateDatasetContentRequest&, const Model::CreateDatasetContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetContentResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::CreateDatastoreRequest&, const Model::CreateDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatastoreResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::CreatePipelineRequest&, const Model::CreatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePipelineResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DeleteDatasetContentRequest&, const Model::DeleteDatasetContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetContentResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DeleteDatastoreRequest&, const Model::DeleteDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatastoreResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DeletePipelineRequest&, const Model::DeletePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePipelineResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DescribeDatastoreRequest&, const Model::DescribeDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatastoreResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DescribeLoggingOptionsRequest&, const Model::DescribeLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::DescribePipelineRequest&, const Model::DescribePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePipelineResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::GetDatasetContentRequest&, const Model::GetDatasetContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatasetContentResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::ListDatasetContentsRequest&, const Model::ListDatasetContentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetContentsResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::ListDatastoresRequest&, const Model::ListDatastoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatastoresResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::ListPipelinesRequest&, const Model::ListPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPipelinesResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::PutLoggingOptionsRequest&, const Model::PutLoggingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLoggingOptionsResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::RunPipelineActivityRequest&, const Model::RunPipelineActivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RunPipelineActivityResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::SampleChannelDataRequest&, const Model::SampleChannelDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SampleChannelDataResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::StartPipelineReprocessingRequest&, const Model::StartPipelineReprocessingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPipelineReprocessingResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::UpdateDatasetRequest&, const Model::UpdateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatasetResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::UpdateDatastoreRequest&, const Model::UpdateDatastoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDatastoreResponseReceivedHandler;
    typedef std::function<void(const IoTAnalyticsClient*, const Model::UpdatePipelineRequest&, const Model::UpdatePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePipelineResponseReceivedHandler;

  /**
   * <p>AWS IoT Analytics allows you to collect large amounts of device data, process
   * messages, and store them. You can then query the data and run sophisticated
   * analytics on it. AWS IoT Analytics enables advanced data exploration through
   * integration with Jupyter Notebooks and data visualization through integration
   * with Amazon QuickSight.</p> <p>Traditional analytics and business intelligence
   * tools are designed to process structured data. IoT data often comes from devices
   * that record noisy processes (such as temperature, motion, or sound). As a result
   * the data from these devices can have significant gaps, corrupted messages, and
   * false readings that must be cleaned up before analysis can occur. Also, IoT data
   * is often only meaningful in the context of other data from external sources.
   * </p> <p>AWS IoT Analytics automates the steps required to analyze data from IoT
   * devices. AWS IoT Analytics filters, transforms, and enriches IoT data before
   * storing it in a time-series data store for analysis. You can set up the service
   * to collect only the data you need from your devices, apply mathematical
   * transforms to process the data, and enrich the data with device-specific
   * metadata such as device type and location before storing it. Then, you can
   * analyze your data by running queries using the built-in SQL query engine, or
   * perform more complex analytics and machine learning inference. AWS IoT Analytics
   * includes pre-built models for common IoT use cases so you can answer questions
   * like which devices are about to fail or which customers are at risk of
   * abandoning their wearable devices.</p>
   */
  class AWS_IOTANALYTICS_API IoTAnalyticsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTAnalyticsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTAnalyticsClient();

        inline virtual const char* GetServiceClientName() const override { return "IoTAnalytics"; }


        /**
         * <p>Sends messages to a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/BatchPutMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutMessageOutcome BatchPutMessage(const Model::BatchPutMessageRequest& request) const;

        /**
         * <p>Sends messages to a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/BatchPutMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchPutMessageOutcomeCallable BatchPutMessageCallable(const Model::BatchPutMessageRequest& request) const;

        /**
         * <p>Sends messages to a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/BatchPutMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Cancels the reprocessing of data through the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CancelPipelineReprocessing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelPipelineReprocessingOutcomeCallable CancelPipelineReprocessingCallable(const Model::CancelPipelineReprocessingRequest& request) const;

        /**
         * <p>Cancels the reprocessing of data through the pipeline.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CancelPipelineReprocessing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelPipelineReprocessingAsync(const Model::CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a channel. A channel collects data from an MQTT topic and archives
         * the raw, unprocessed messages before publishing the data to a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel. A channel collects data from an MQTT topic and archives
         * the raw, unprocessed messages before publishing the data to a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel. A channel collects data from an MQTT topic and archives
         * the raw, unprocessed messages before publishing the data to a
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data set. A data set stores data retrieved from a data store by
         * applying a "queryAction" (a SQL query) or a "containerAction" (executing a
         * containerized application). This operation creates the skeleton of a data set.
         * The data set can be populated manually by calling "CreateDatasetContent" or
         * automatically according to a "trigger" you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetOutcome CreateDataset(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates a data set. A data set stores data retrieved from a data store by
         * applying a "queryAction" (a SQL query) or a "containerAction" (executing a
         * containerized application). This operation creates the skeleton of a data set.
         * The data set can be populated manually by calling "CreateDatasetContent" or
         * automatically according to a "trigger" you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetOutcomeCallable CreateDatasetCallable(const Model::CreateDatasetRequest& request) const;

        /**
         * <p>Creates a data set. A data set stores data retrieved from a data store by
         * applying a "queryAction" (a SQL query) or a "containerAction" (executing a
         * containerized application). This operation creates the skeleton of a data set.
         * The data set can be populated manually by calling "CreateDatasetContent" or
         * automatically according to a "trigger" you specify.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the content of a data set by applying a "queryAction" (a SQL query)
         * or a "containerAction" (executing a containerized application).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatasetContentOutcome CreateDatasetContent(const Model::CreateDatasetContentRequest& request) const;

        /**
         * <p>Creates the content of a data set by applying a "queryAction" (a SQL query)
         * or a "containerAction" (executing a containerized application).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatasetContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatasetContentOutcomeCallable CreateDatasetContentCallable(const Model::CreateDatasetContentRequest& request) const;

        /**
         * <p>Creates the content of a data set by applying a "queryAction" (a SQL query)
         * or a "containerAction" (executing a containerized application).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatasetContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a data store, which is a repository for messages.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatastore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatastoreOutcomeCallable CreateDatastoreCallable(const Model::CreateDatastoreRequest& request) const;

        /**
         * <p>Creates a data store, which is a repository for messages.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreateDatastore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatastoreAsync(const Model::CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a pipeline. A pipeline consumes messages from one or more channels
         * and allows you to process the messages before storing them in a data store. You
         * must specify both a <code>channel</code> and a <code>datastore</code> activity
         * and, optionally, as many as 23 additional activities in the
         * <code>pipelineActivities</code> array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreatePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePipelineOutcome CreatePipeline(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a pipeline. A pipeline consumes messages from one or more channels
         * and allows you to process the messages before storing them in a data store. You
         * must specify both a <code>channel</code> and a <code>datastore</code> activity
         * and, optionally, as many as 23 additional activities in the
         * <code>pipelineActivities</code> array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePipelineOutcomeCallable CreatePipelineCallable(const Model::CreatePipelineRequest& request) const;

        /**
         * <p>Creates a pipeline. A pipeline consumes messages from one or more channels
         * and allows you to process the messages before storing them in a data store. You
         * must specify both a <code>channel</code> and a <code>datastore</code> activity
         * and, optionally, as many as 23 additional activities in the
         * <code>pipelineActivities</code> array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/CreatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePipelineAsync(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Deletes the specified channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Deletes the specified channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified data set.</p> <p>You do not have to delete the content
         * of the data set before you perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetOutcome DeleteDataset(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes the specified data set.</p> <p>You do not have to delete the content
         * of the data set before you perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetOutcomeCallable DeleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;

        /**
         * <p>Deletes the specified data set.</p> <p>You do not have to delete the content
         * of the data set before you perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the content of the specified data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatasetContentOutcome DeleteDatasetContent(const Model::DeleteDatasetContentRequest& request) const;

        /**
         * <p>Deletes the content of the specified data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatasetContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatasetContentOutcomeCallable DeleteDatasetContentCallable(const Model::DeleteDatasetContentRequest& request) const;

        /**
         * <p>Deletes the content of the specified data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatasetContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatasetContentAsync(const Model::DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatastoreOutcome DeleteDatastore(const Model::DeleteDatastoreRequest& request) const;

        /**
         * <p>Deletes the specified data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatastore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDatastoreOutcomeCallable DeleteDatastoreCallable(const Model::DeleteDatastoreRequest& request) const;

        /**
         * <p>Deletes the specified data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeleteDatastore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatastoreAsync(const Model::DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeletePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePipelineOutcome DeletePipeline(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePipelineOutcomeCallable DeletePipelineCallable(const Model::DeletePipelineRequest& request) const;

        /**
         * <p>Deletes the specified pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DeletePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePipelineAsync(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Retrieves information about a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Retrieves information about a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatasetOutcome DescribeDataset(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Retrieves information about a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatasetOutcomeCallable DescribeDatasetCallable(const Model::DescribeDatasetRequest& request) const;

        /**
         * <p>Retrieves information about a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatasetAsync(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDatastoreOutcome DescribeDatastore(const Model::DescribeDatastoreRequest& request) const;

        /**
         * <p>Retrieves information about a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDatastore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDatastoreOutcomeCallable DescribeDatastoreCallable(const Model::DescribeDatastoreRequest& request) const;

        /**
         * <p>Retrieves information about a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeDatastore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDatastoreAsync(const Model::DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current settings of the AWS IoT Analytics logging
         * options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingOptionsOutcome DescribeLoggingOptions(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * <p>Retrieves the current settings of the AWS IoT Analytics logging
         * options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoggingOptionsOutcomeCallable DescribeLoggingOptionsCallable(const Model::DescribeLoggingOptionsRequest& request) const;

        /**
         * <p>Retrieves the current settings of the AWS IoT Analytics logging
         * options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribeLoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoggingOptionsAsync(const Model::DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribePipeline">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePipelineOutcome DescribePipeline(const Model::DescribePipelineRequest& request) const;

        /**
         * <p>Retrieves information about a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePipelineOutcomeCallable DescribePipelineCallable(const Model::DescribePipelineRequest& request) const;

        /**
         * <p>Retrieves information about a pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DescribePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePipelineAsync(const Model::DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the contents of a data set as pre-signed URIs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/GetDatasetContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatasetContentOutcome GetDatasetContent(const Model::GetDatasetContentRequest& request) const;

        /**
         * <p>Retrieves the contents of a data set as pre-signed URIs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/GetDatasetContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatasetContentOutcomeCallable GetDatasetContentCallable(const Model::GetDatasetContentRequest& request) const;

        /**
         * <p>Retrieves the contents of a data set as pre-signed URIs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/GetDatasetContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatasetContentAsync(const Model::GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Retrieves a list of channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Retrieves a list of channels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists information about data set contents that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasetContents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetContentsOutcome ListDatasetContents(const Model::ListDatasetContentsRequest& request) const;

        /**
         * <p>Lists information about data set contents that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasetContents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetContentsOutcomeCallable ListDatasetContentsCallable(const Model::ListDatasetContentsRequest& request) const;

        /**
         * <p>Lists information about data set contents that have been
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasetContents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetContentsAsync(const Model::ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about data sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatasetsOutcome ListDatasets(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Retrieves information about data sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatasetsOutcomeCallable ListDatasetsCallable(const Model::ListDatasetsRequest& request) const;

        /**
         * <p>Retrieves information about data sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatasets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatasetsAsync(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of data stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatastoresOutcome ListDatastores(const Model::ListDatastoresRequest& request) const;

        /**
         * <p>Retrieves a list of data stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatastores">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDatastoresOutcomeCallable ListDatastoresCallable(const Model::ListDatastoresRequest& request) const;

        /**
         * <p>Retrieves a list of data stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListDatastores">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDatastoresAsync(const Model::ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListPipelines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPipelinesOutcome ListPipelines(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Retrieves a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListPipelines">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPipelinesOutcomeCallable ListPipelinesCallable(const Model::ListPipelinesRequest& request) const;

        /**
         * <p>Retrieves a list of pipelines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListPipelines">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPipelinesAsync(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags (metadata) which you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags (metadata) which you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags (metadata) which you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets or updates the AWS IoT Analytics logging options.</p> <p>Note that if
         * you update the value of any <code>loggingOptions</code> field, it takes up to
         * one minute for the change to take effect. Also, if you change the policy
         * attached to the role you specified in the roleArn field (for example, to correct
         * an invalid policy) it takes up to 5 minutes for that change to take effect.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/PutLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLoggingOptionsOutcome PutLoggingOptions(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * <p>Sets or updates the AWS IoT Analytics logging options.</p> <p>Note that if
         * you update the value of any <code>loggingOptions</code> field, it takes up to
         * one minute for the change to take effect. Also, if you change the policy
         * attached to the role you specified in the roleArn field (for example, to correct
         * an invalid policy) it takes up to 5 minutes for that change to take effect.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/PutLoggingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLoggingOptionsOutcomeCallable PutLoggingOptionsCallable(const Model::PutLoggingOptionsRequest& request) const;

        /**
         * <p>Sets or updates the AWS IoT Analytics logging options.</p> <p>Note that if
         * you update the value of any <code>loggingOptions</code> field, it takes up to
         * one minute for the change to take effect. Also, if you change the policy
         * attached to the role you specified in the roleArn field (for example, to correct
         * an invalid policy) it takes up to 5 minutes for that change to take effect.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/PutLoggingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Simulates the results of running a pipeline activity on a message
         * payload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/RunPipelineActivity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunPipelineActivityOutcomeCallable RunPipelineActivityCallable(const Model::RunPipelineActivityRequest& request) const;

        /**
         * <p>Simulates the results of running a pipeline activity on a message
         * payload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/RunPipelineActivity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a sample of messages from the specified channel ingested during the
         * specified timeframe. Up to 10 messages can be retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SampleChannelData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SampleChannelDataOutcomeCallable SampleChannelDataCallable(const Model::SampleChannelDataRequest& request) const;

        /**
         * <p>Retrieves a sample of messages from the specified channel ingested during the
         * specified timeframe. Up to 10 messages can be retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SampleChannelData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts the reprocessing of raw message data through the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/StartPipelineReprocessing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPipelineReprocessingOutcomeCallable StartPipelineReprocessingCallable(const Model::StartPipelineReprocessingRequest& request) const;

        /**
         * <p>Starts the reprocessing of raw message data through the
         * pipeline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/StartPipelineReprocessing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPipelineReprocessingAsync(const Model::StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the given tags (metadata) from the resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings of a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Updates the settings of a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Updates the settings of a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings of a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDataset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatasetOutcome UpdateDataset(const Model::UpdateDatasetRequest& request) const;

        /**
         * <p>Updates the settings of a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDataset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatasetOutcomeCallable UpdateDatasetCallable(const Model::UpdateDatasetRequest& request) const;

        /**
         * <p>Updates the settings of a data set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDataset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatasetAsync(const Model::UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings of a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatastoreOutcome UpdateDatastore(const Model::UpdateDatastoreRequest& request) const;

        /**
         * <p>Updates the settings of a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDatastore">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDatastoreOutcomeCallable UpdateDatastoreCallable(const Model::UpdateDatastoreRequest& request) const;

        /**
         * <p>Updates the settings of a data store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdateDatastore">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the settings of a pipeline. You must specify both a
         * <code>channel</code> and a <code>datastore</code> activity and, optionally, as
         * many as 23 additional activities in the <code>pipelineActivities</code>
         * array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdatePipeline">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePipelineOutcomeCallable UpdatePipelineCallable(const Model::UpdatePipelineRequest& request) const;

        /**
         * <p>Updates the settings of a pipeline. You must specify both a
         * <code>channel</code> and a <code>datastore</code> activity and, optionally, as
         * many as 23 additional activities in the <code>pipelineActivities</code>
         * array.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/UpdatePipeline">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePipelineAsync(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchPutMessageAsyncHelper(const Model::BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelPipelineReprocessingAsyncHelper(const Model::CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetAsyncHelper(const Model::CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatasetContentAsyncHelper(const Model::CreateDatasetContentRequest& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDatastoreAsyncHelper(const Model::CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePipelineAsyncHelper(const Model::CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetAsyncHelper(const Model::DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatasetContentAsyncHelper(const Model::DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDatastoreAsyncHelper(const Model::DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePipelineAsyncHelper(const Model::DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelAsyncHelper(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatasetAsyncHelper(const Model::DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDatastoreAsyncHelper(const Model::DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoggingOptionsAsyncHelper(const Model::DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePipelineAsyncHelper(const Model::DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDatasetContentAsyncHelper(const Model::GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetContentsAsyncHelper(const Model::ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatasetsAsyncHelper(const Model::ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDatastoresAsyncHelper(const Model::ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPipelinesAsyncHelper(const Model::ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLoggingOptionsAsyncHelper(const Model::PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RunPipelineActivityAsyncHelper(const Model::RunPipelineActivityRequest& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SampleChannelDataAsyncHelper(const Model::SampleChannelDataRequest& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartPipelineReprocessingAsyncHelper(const Model::StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatasetAsyncHelper(const Model::UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDatastoreAsyncHelper(const Model::UpdateDatastoreRequest& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePipelineAsyncHelper(const Model::UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTAnalytics
} // namespace Aws
