/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lookoutequipment/LookoutEquipmentErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lookoutequipment/LookoutEquipmentEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LookoutEquipmentClient header */
#include <aws/lookoutequipment/model/CreateDatasetResult.h>
#include <aws/lookoutequipment/model/CreateInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/CreateLabelResult.h>
#include <aws/lookoutequipment/model/CreateLabelGroupResult.h>
#include <aws/lookoutequipment/model/CreateModelResult.h>
#include <aws/lookoutequipment/model/DescribeDataIngestionJobResult.h>
#include <aws/lookoutequipment/model/DescribeDatasetResult.h>
#include <aws/lookoutequipment/model/DescribeInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/DescribeLabelResult.h>
#include <aws/lookoutequipment/model/DescribeLabelGroupResult.h>
#include <aws/lookoutequipment/model/DescribeModelResult.h>
#include <aws/lookoutequipment/model/ListDataIngestionJobsResult.h>
#include <aws/lookoutequipment/model/ListDatasetsResult.h>
#include <aws/lookoutequipment/model/ListInferenceEventsResult.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsResult.h>
#include <aws/lookoutequipment/model/ListInferenceSchedulersResult.h>
#include <aws/lookoutequipment/model/ListLabelGroupsResult.h>
#include <aws/lookoutequipment/model/ListLabelsResult.h>
#include <aws/lookoutequipment/model/ListModelsResult.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsResult.h>
#include <aws/lookoutequipment/model/ListTagsForResourceResult.h>
#include <aws/lookoutequipment/model/StartDataIngestionJobResult.h>
#include <aws/lookoutequipment/model/StartInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/StopInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/TagResourceResult.h>
#include <aws/lookoutequipment/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in LookoutEquipmentClient header */

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

  namespace LookoutEquipment
  {
    using LookoutEquipmentClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LookoutEquipmentEndpointProviderBase = Aws::LookoutEquipment::Endpoint::LookoutEquipmentEndpointProviderBase;
    using LookoutEquipmentEndpointProvider = Aws::LookoutEquipment::Endpoint::LookoutEquipmentEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LookoutEquipmentClient header */
      class CreateDatasetRequest;
      class CreateInferenceSchedulerRequest;
      class CreateLabelRequest;
      class CreateLabelGroupRequest;
      class CreateModelRequest;
      class DeleteDatasetRequest;
      class DeleteInferenceSchedulerRequest;
      class DeleteLabelRequest;
      class DeleteLabelGroupRequest;
      class DeleteModelRequest;
      class DescribeDataIngestionJobRequest;
      class DescribeDatasetRequest;
      class DescribeInferenceSchedulerRequest;
      class DescribeLabelRequest;
      class DescribeLabelGroupRequest;
      class DescribeModelRequest;
      class ListDataIngestionJobsRequest;
      class ListDatasetsRequest;
      class ListInferenceEventsRequest;
      class ListInferenceExecutionsRequest;
      class ListInferenceSchedulersRequest;
      class ListLabelGroupsRequest;
      class ListLabelsRequest;
      class ListModelsRequest;
      class ListSensorStatisticsRequest;
      class ListTagsForResourceRequest;
      class StartDataIngestionJobRequest;
      class StartInferenceSchedulerRequest;
      class StopInferenceSchedulerRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateInferenceSchedulerRequest;
      class UpdateLabelGroupRequest;
      /* End of service model forward declarations required in LookoutEquipmentClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDatasetResult, LookoutEquipmentError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateInferenceSchedulerResult, LookoutEquipmentError> CreateInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<CreateLabelResult, LookoutEquipmentError> CreateLabelOutcome;
      typedef Aws::Utils::Outcome<CreateLabelGroupResult, LookoutEquipmentError> CreateLabelGroupOutcome;
      typedef Aws::Utils::Outcome<CreateModelResult, LookoutEquipmentError> CreateModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteLabelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteLabelGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteModelOutcome;
      typedef Aws::Utils::Outcome<DescribeDataIngestionJobResult, LookoutEquipmentError> DescribeDataIngestionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, LookoutEquipmentError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeInferenceSchedulerResult, LookoutEquipmentError> DescribeInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<DescribeLabelResult, LookoutEquipmentError> DescribeLabelOutcome;
      typedef Aws::Utils::Outcome<DescribeLabelGroupResult, LookoutEquipmentError> DescribeLabelGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeModelResult, LookoutEquipmentError> DescribeModelOutcome;
      typedef Aws::Utils::Outcome<ListDataIngestionJobsResult, LookoutEquipmentError> ListDataIngestionJobsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetsResult, LookoutEquipmentError> ListDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceEventsResult, LookoutEquipmentError> ListInferenceEventsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceExecutionsResult, LookoutEquipmentError> ListInferenceExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceSchedulersResult, LookoutEquipmentError> ListInferenceSchedulersOutcome;
      typedef Aws::Utils::Outcome<ListLabelGroupsResult, LookoutEquipmentError> ListLabelGroupsOutcome;
      typedef Aws::Utils::Outcome<ListLabelsResult, LookoutEquipmentError> ListLabelsOutcome;
      typedef Aws::Utils::Outcome<ListModelsResult, LookoutEquipmentError> ListModelsOutcome;
      typedef Aws::Utils::Outcome<ListSensorStatisticsResult, LookoutEquipmentError> ListSensorStatisticsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutEquipmentError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartDataIngestionJobResult, LookoutEquipmentError> StartDataIngestionJobOutcome;
      typedef Aws::Utils::Outcome<StartInferenceSchedulerResult, LookoutEquipmentError> StartInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<StopInferenceSchedulerResult, LookoutEquipmentError> StopInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, LookoutEquipmentError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, LookoutEquipmentError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> UpdateInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> UpdateLabelGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
      typedef std::future<CreateInferenceSchedulerOutcome> CreateInferenceSchedulerOutcomeCallable;
      typedef std::future<CreateLabelOutcome> CreateLabelOutcomeCallable;
      typedef std::future<CreateLabelGroupOutcome> CreateLabelGroupOutcomeCallable;
      typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DeleteInferenceSchedulerOutcome> DeleteInferenceSchedulerOutcomeCallable;
      typedef std::future<DeleteLabelOutcome> DeleteLabelOutcomeCallable;
      typedef std::future<DeleteLabelGroupOutcome> DeleteLabelGroupOutcomeCallable;
      typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
      typedef std::future<DescribeDataIngestionJobOutcome> DescribeDataIngestionJobOutcomeCallable;
      typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
      typedef std::future<DescribeInferenceSchedulerOutcome> DescribeInferenceSchedulerOutcomeCallable;
      typedef std::future<DescribeLabelOutcome> DescribeLabelOutcomeCallable;
      typedef std::future<DescribeLabelGroupOutcome> DescribeLabelGroupOutcomeCallable;
      typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
      typedef std::future<ListDataIngestionJobsOutcome> ListDataIngestionJobsOutcomeCallable;
      typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
      typedef std::future<ListInferenceEventsOutcome> ListInferenceEventsOutcomeCallable;
      typedef std::future<ListInferenceExecutionsOutcome> ListInferenceExecutionsOutcomeCallable;
      typedef std::future<ListInferenceSchedulersOutcome> ListInferenceSchedulersOutcomeCallable;
      typedef std::future<ListLabelGroupsOutcome> ListLabelGroupsOutcomeCallable;
      typedef std::future<ListLabelsOutcome> ListLabelsOutcomeCallable;
      typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
      typedef std::future<ListSensorStatisticsOutcome> ListSensorStatisticsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartDataIngestionJobOutcome> StartDataIngestionJobOutcomeCallable;
      typedef std::future<StartInferenceSchedulerOutcome> StartInferenceSchedulerOutcomeCallable;
      typedef std::future<StopInferenceSchedulerOutcome> StopInferenceSchedulerOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateInferenceSchedulerOutcome> UpdateInferenceSchedulerOutcomeCallable;
      typedef std::future<UpdateLabelGroupOutcome> UpdateLabelGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LookoutEquipmentClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateInferenceSchedulerRequest&, const Model::CreateInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateLabelRequest&, const Model::CreateLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateLabelGroupRequest&, const Model::CreateLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteInferenceSchedulerRequest&, const Model::DeleteInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteLabelRequest&, const Model::DeleteLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLabelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteLabelGroupRequest&, const Model::DeleteLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLabelGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeDataIngestionJobRequest&, const Model::DescribeDataIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataIngestionJobResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeInferenceSchedulerRequest&, const Model::DescribeInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeLabelRequest&, const Model::DescribeLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLabelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeLabelGroupRequest&, const Model::DescribeLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLabelGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListDataIngestionJobsRequest&, const Model::ListDataIngestionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIngestionJobsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceEventsRequest&, const Model::ListInferenceEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceEventsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceExecutionsRequest&, const Model::ListInferenceExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceExecutionsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceSchedulersRequest&, const Model::ListInferenceSchedulersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceSchedulersResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListLabelGroupsRequest&, const Model::ListLabelGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelGroupsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListLabelsRequest&, const Model::ListLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListSensorStatisticsRequest&, const Model::ListSensorStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSensorStatisticsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StartDataIngestionJobRequest&, const Model::StartDataIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataIngestionJobResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StartInferenceSchedulerRequest&, const Model::StartInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StopInferenceSchedulerRequest&, const Model::StopInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateInferenceSchedulerRequest&, const Model::UpdateInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateLabelGroupRequest&, const Model::UpdateLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLabelGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LookoutEquipment
} // namespace Aws
