/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iotanalytics/IoTAnalyticsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iotanalytics/IoTAnalyticsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTAnalyticsClient header */
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
/* End of service model headers required in IoTAnalyticsClient header */

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
    using IoTAnalyticsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTAnalyticsEndpointProviderBase = Aws::IoTAnalytics::Endpoint::IoTAnalyticsEndpointProviderBase;
    using IoTAnalyticsEndpointProvider = Aws::IoTAnalytics::Endpoint::IoTAnalyticsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTAnalyticsClient header */
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
      /* End of service model forward declarations required in IoTAnalyticsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchPutMessageResult, IoTAnalyticsError> BatchPutMessageOutcome;
      typedef Aws::Utils::Outcome<CancelPipelineReprocessingResult, IoTAnalyticsError> CancelPipelineReprocessingOutcome;
      typedef Aws::Utils::Outcome<CreateChannelResult, IoTAnalyticsError> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetResult, IoTAnalyticsError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateDatasetContentResult, IoTAnalyticsError> CreateDatasetContentOutcome;
      typedef Aws::Utils::Outcome<CreateDatastoreResult, IoTAnalyticsError> CreateDatastoreOutcome;
      typedef Aws::Utils::Outcome<CreatePipelineResult, IoTAnalyticsError> CreatePipelineOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> DeleteDatasetContentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> DeleteDatastoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> DeletePipelineOutcome;
      typedef Aws::Utils::Outcome<DescribeChannelResult, IoTAnalyticsError> DescribeChannelOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, IoTAnalyticsError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeDatastoreResult, IoTAnalyticsError> DescribeDatastoreOutcome;
      typedef Aws::Utils::Outcome<DescribeLoggingOptionsResult, IoTAnalyticsError> DescribeLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribePipelineResult, IoTAnalyticsError> DescribePipelineOutcome;
      typedef Aws::Utils::Outcome<GetDatasetContentResult, IoTAnalyticsError> GetDatasetContentOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, IoTAnalyticsError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetContentsResult, IoTAnalyticsError> ListDatasetContentsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetsResult, IoTAnalyticsError> ListDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListDatastoresResult, IoTAnalyticsError> ListDatastoresOutcome;
      typedef Aws::Utils::Outcome<ListPipelinesResult, IoTAnalyticsError> ListPipelinesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, IoTAnalyticsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> PutLoggingOptionsOutcome;
      typedef Aws::Utils::Outcome<RunPipelineActivityResult, IoTAnalyticsError> RunPipelineActivityOutcome;
      typedef Aws::Utils::Outcome<SampleChannelDataResult, IoTAnalyticsError> SampleChannelDataOutcome;
      typedef Aws::Utils::Outcome<StartPipelineReprocessingResult, IoTAnalyticsError> StartPipelineReprocessingOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, IoTAnalyticsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, IoTAnalyticsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> UpdateDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> UpdateDatastoreOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTAnalyticsError> UpdatePipelineOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTAnalyticsClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace IoTAnalytics
} // namespace Aws
