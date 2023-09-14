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
#include <aws/lookoutequipment/model/CreateRetrainingSchedulerResult.h>
#include <aws/lookoutequipment/model/DescribeDataIngestionJobResult.h>
#include <aws/lookoutequipment/model/DescribeDatasetResult.h>
#include <aws/lookoutequipment/model/DescribeInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/DescribeLabelResult.h>
#include <aws/lookoutequipment/model/DescribeLabelGroupResult.h>
#include <aws/lookoutequipment/model/DescribeModelResult.h>
#include <aws/lookoutequipment/model/DescribeModelVersionResult.h>
#include <aws/lookoutequipment/model/DescribeResourcePolicyResult.h>
#include <aws/lookoutequipment/model/DescribeRetrainingSchedulerResult.h>
#include <aws/lookoutequipment/model/ImportDatasetResult.h>
#include <aws/lookoutequipment/model/ImportModelVersionResult.h>
#include <aws/lookoutequipment/model/ListDataIngestionJobsResult.h>
#include <aws/lookoutequipment/model/ListDatasetsResult.h>
#include <aws/lookoutequipment/model/ListInferenceEventsResult.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsResult.h>
#include <aws/lookoutequipment/model/ListInferenceSchedulersResult.h>
#include <aws/lookoutequipment/model/ListLabelGroupsResult.h>
#include <aws/lookoutequipment/model/ListLabelsResult.h>
#include <aws/lookoutequipment/model/ListModelVersionsResult.h>
#include <aws/lookoutequipment/model/ListModelsResult.h>
#include <aws/lookoutequipment/model/ListRetrainingSchedulersResult.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsResult.h>
#include <aws/lookoutequipment/model/ListTagsForResourceResult.h>
#include <aws/lookoutequipment/model/PutResourcePolicyResult.h>
#include <aws/lookoutequipment/model/StartDataIngestionJobResult.h>
#include <aws/lookoutequipment/model/StartInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/StartRetrainingSchedulerResult.h>
#include <aws/lookoutequipment/model/StopInferenceSchedulerResult.h>
#include <aws/lookoutequipment/model/StopRetrainingSchedulerResult.h>
#include <aws/lookoutequipment/model/TagResourceResult.h>
#include <aws/lookoutequipment/model/UntagResourceResult.h>
#include <aws/lookoutequipment/model/UpdateActiveModelVersionResult.h>
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
      class CreateRetrainingSchedulerRequest;
      class DeleteDatasetRequest;
      class DeleteInferenceSchedulerRequest;
      class DeleteLabelRequest;
      class DeleteLabelGroupRequest;
      class DeleteModelRequest;
      class DeleteResourcePolicyRequest;
      class DeleteRetrainingSchedulerRequest;
      class DescribeDataIngestionJobRequest;
      class DescribeDatasetRequest;
      class DescribeInferenceSchedulerRequest;
      class DescribeLabelRequest;
      class DescribeLabelGroupRequest;
      class DescribeModelRequest;
      class DescribeModelVersionRequest;
      class DescribeResourcePolicyRequest;
      class DescribeRetrainingSchedulerRequest;
      class ImportDatasetRequest;
      class ImportModelVersionRequest;
      class ListDataIngestionJobsRequest;
      class ListDatasetsRequest;
      class ListInferenceEventsRequest;
      class ListInferenceExecutionsRequest;
      class ListInferenceSchedulersRequest;
      class ListLabelGroupsRequest;
      class ListLabelsRequest;
      class ListModelVersionsRequest;
      class ListModelsRequest;
      class ListRetrainingSchedulersRequest;
      class ListSensorStatisticsRequest;
      class ListTagsForResourceRequest;
      class PutResourcePolicyRequest;
      class StartDataIngestionJobRequest;
      class StartInferenceSchedulerRequest;
      class StartRetrainingSchedulerRequest;
      class StopInferenceSchedulerRequest;
      class StopRetrainingSchedulerRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateActiveModelVersionRequest;
      class UpdateInferenceSchedulerRequest;
      class UpdateLabelGroupRequest;
      class UpdateModelRequest;
      class UpdateRetrainingSchedulerRequest;
      /* End of service model forward declarations required in LookoutEquipmentClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDatasetResult, LookoutEquipmentError> CreateDatasetOutcome;
      typedef Aws::Utils::Outcome<CreateInferenceSchedulerResult, LookoutEquipmentError> CreateInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<CreateLabelResult, LookoutEquipmentError> CreateLabelOutcome;
      typedef Aws::Utils::Outcome<CreateLabelGroupResult, LookoutEquipmentError> CreateLabelGroupOutcome;
      typedef Aws::Utils::Outcome<CreateModelResult, LookoutEquipmentError> CreateModelOutcome;
      typedef Aws::Utils::Outcome<CreateRetrainingSchedulerResult, LookoutEquipmentError> CreateRetrainingSchedulerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteDatasetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteLabelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteLabelGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> DeleteRetrainingSchedulerOutcome;
      typedef Aws::Utils::Outcome<DescribeDataIngestionJobResult, LookoutEquipmentError> DescribeDataIngestionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeDatasetResult, LookoutEquipmentError> DescribeDatasetOutcome;
      typedef Aws::Utils::Outcome<DescribeInferenceSchedulerResult, LookoutEquipmentError> DescribeInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<DescribeLabelResult, LookoutEquipmentError> DescribeLabelOutcome;
      typedef Aws::Utils::Outcome<DescribeLabelGroupResult, LookoutEquipmentError> DescribeLabelGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeModelResult, LookoutEquipmentError> DescribeModelOutcome;
      typedef Aws::Utils::Outcome<DescribeModelVersionResult, LookoutEquipmentError> DescribeModelVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePolicyResult, LookoutEquipmentError> DescribeResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeRetrainingSchedulerResult, LookoutEquipmentError> DescribeRetrainingSchedulerOutcome;
      typedef Aws::Utils::Outcome<ImportDatasetResult, LookoutEquipmentError> ImportDatasetOutcome;
      typedef Aws::Utils::Outcome<ImportModelVersionResult, LookoutEquipmentError> ImportModelVersionOutcome;
      typedef Aws::Utils::Outcome<ListDataIngestionJobsResult, LookoutEquipmentError> ListDataIngestionJobsOutcome;
      typedef Aws::Utils::Outcome<ListDatasetsResult, LookoutEquipmentError> ListDatasetsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceEventsResult, LookoutEquipmentError> ListInferenceEventsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceExecutionsResult, LookoutEquipmentError> ListInferenceExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListInferenceSchedulersResult, LookoutEquipmentError> ListInferenceSchedulersOutcome;
      typedef Aws::Utils::Outcome<ListLabelGroupsResult, LookoutEquipmentError> ListLabelGroupsOutcome;
      typedef Aws::Utils::Outcome<ListLabelsResult, LookoutEquipmentError> ListLabelsOutcome;
      typedef Aws::Utils::Outcome<ListModelVersionsResult, LookoutEquipmentError> ListModelVersionsOutcome;
      typedef Aws::Utils::Outcome<ListModelsResult, LookoutEquipmentError> ListModelsOutcome;
      typedef Aws::Utils::Outcome<ListRetrainingSchedulersResult, LookoutEquipmentError> ListRetrainingSchedulersOutcome;
      typedef Aws::Utils::Outcome<ListSensorStatisticsResult, LookoutEquipmentError> ListSensorStatisticsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, LookoutEquipmentError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, LookoutEquipmentError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<StartDataIngestionJobResult, LookoutEquipmentError> StartDataIngestionJobOutcome;
      typedef Aws::Utils::Outcome<StartInferenceSchedulerResult, LookoutEquipmentError> StartInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<StartRetrainingSchedulerResult, LookoutEquipmentError> StartRetrainingSchedulerOutcome;
      typedef Aws::Utils::Outcome<StopInferenceSchedulerResult, LookoutEquipmentError> StopInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<StopRetrainingSchedulerResult, LookoutEquipmentError> StopRetrainingSchedulerOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, LookoutEquipmentError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, LookoutEquipmentError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateActiveModelVersionResult, LookoutEquipmentError> UpdateActiveModelVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> UpdateInferenceSchedulerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> UpdateLabelGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> UpdateModelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, LookoutEquipmentError> UpdateRetrainingSchedulerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
      typedef std::future<CreateInferenceSchedulerOutcome> CreateInferenceSchedulerOutcomeCallable;
      typedef std::future<CreateLabelOutcome> CreateLabelOutcomeCallable;
      typedef std::future<CreateLabelGroupOutcome> CreateLabelGroupOutcomeCallable;
      typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
      typedef std::future<CreateRetrainingSchedulerOutcome> CreateRetrainingSchedulerOutcomeCallable;
      typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
      typedef std::future<DeleteInferenceSchedulerOutcome> DeleteInferenceSchedulerOutcomeCallable;
      typedef std::future<DeleteLabelOutcome> DeleteLabelOutcomeCallable;
      typedef std::future<DeleteLabelGroupOutcome> DeleteLabelGroupOutcomeCallable;
      typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteRetrainingSchedulerOutcome> DeleteRetrainingSchedulerOutcomeCallable;
      typedef std::future<DescribeDataIngestionJobOutcome> DescribeDataIngestionJobOutcomeCallable;
      typedef std::future<DescribeDatasetOutcome> DescribeDatasetOutcomeCallable;
      typedef std::future<DescribeInferenceSchedulerOutcome> DescribeInferenceSchedulerOutcomeCallable;
      typedef std::future<DescribeLabelOutcome> DescribeLabelOutcomeCallable;
      typedef std::future<DescribeLabelGroupOutcome> DescribeLabelGroupOutcomeCallable;
      typedef std::future<DescribeModelOutcome> DescribeModelOutcomeCallable;
      typedef std::future<DescribeModelVersionOutcome> DescribeModelVersionOutcomeCallable;
      typedef std::future<DescribeResourcePolicyOutcome> DescribeResourcePolicyOutcomeCallable;
      typedef std::future<DescribeRetrainingSchedulerOutcome> DescribeRetrainingSchedulerOutcomeCallable;
      typedef std::future<ImportDatasetOutcome> ImportDatasetOutcomeCallable;
      typedef std::future<ImportModelVersionOutcome> ImportModelVersionOutcomeCallable;
      typedef std::future<ListDataIngestionJobsOutcome> ListDataIngestionJobsOutcomeCallable;
      typedef std::future<ListDatasetsOutcome> ListDatasetsOutcomeCallable;
      typedef std::future<ListInferenceEventsOutcome> ListInferenceEventsOutcomeCallable;
      typedef std::future<ListInferenceExecutionsOutcome> ListInferenceExecutionsOutcomeCallable;
      typedef std::future<ListInferenceSchedulersOutcome> ListInferenceSchedulersOutcomeCallable;
      typedef std::future<ListLabelGroupsOutcome> ListLabelGroupsOutcomeCallable;
      typedef std::future<ListLabelsOutcome> ListLabelsOutcomeCallable;
      typedef std::future<ListModelVersionsOutcome> ListModelVersionsOutcomeCallable;
      typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
      typedef std::future<ListRetrainingSchedulersOutcome> ListRetrainingSchedulersOutcomeCallable;
      typedef std::future<ListSensorStatisticsOutcome> ListSensorStatisticsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<StartDataIngestionJobOutcome> StartDataIngestionJobOutcomeCallable;
      typedef std::future<StartInferenceSchedulerOutcome> StartInferenceSchedulerOutcomeCallable;
      typedef std::future<StartRetrainingSchedulerOutcome> StartRetrainingSchedulerOutcomeCallable;
      typedef std::future<StopInferenceSchedulerOutcome> StopInferenceSchedulerOutcomeCallable;
      typedef std::future<StopRetrainingSchedulerOutcome> StopRetrainingSchedulerOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateActiveModelVersionOutcome> UpdateActiveModelVersionOutcomeCallable;
      typedef std::future<UpdateInferenceSchedulerOutcome> UpdateInferenceSchedulerOutcomeCallable;
      typedef std::future<UpdateLabelGroupOutcome> UpdateLabelGroupOutcomeCallable;
      typedef std::future<UpdateModelOutcome> UpdateModelOutcomeCallable;
      typedef std::future<UpdateRetrainingSchedulerOutcome> UpdateRetrainingSchedulerOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LookoutEquipmentClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateDatasetRequest&, const Model::CreateDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateInferenceSchedulerRequest&, const Model::CreateInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateLabelRequest&, const Model::CreateLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateLabelGroupRequest&, const Model::CreateLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::CreateRetrainingSchedulerRequest&, const Model::CreateRetrainingSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRetrainingSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteDatasetRequest&, const Model::DeleteDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteInferenceSchedulerRequest&, const Model::DeleteInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteLabelRequest&, const Model::DeleteLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLabelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteLabelGroupRequest&, const Model::DeleteLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLabelGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DeleteRetrainingSchedulerRequest&, const Model::DeleteRetrainingSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRetrainingSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeDataIngestionJobRequest&, const Model::DescribeDataIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataIngestionJobResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeDatasetRequest&, const Model::DescribeDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeInferenceSchedulerRequest&, const Model::DescribeInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeLabelRequest&, const Model::DescribeLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLabelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeLabelGroupRequest&, const Model::DescribeLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLabelGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeModelRequest&, const Model::DescribeModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeModelVersionRequest&, const Model::DescribeModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelVersionResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeResourcePolicyRequest&, const Model::DescribeResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::DescribeRetrainingSchedulerRequest&, const Model::DescribeRetrainingSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRetrainingSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ImportDatasetRequest&, const Model::ImportDatasetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportDatasetResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ImportModelVersionRequest&, const Model::ImportModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportModelVersionResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListDataIngestionJobsRequest&, const Model::ListDataIngestionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataIngestionJobsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListDatasetsRequest&, const Model::ListDatasetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatasetsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceEventsRequest&, const Model::ListInferenceEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceEventsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceExecutionsRequest&, const Model::ListInferenceExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceExecutionsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListInferenceSchedulersRequest&, const Model::ListInferenceSchedulersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInferenceSchedulersResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListLabelGroupsRequest&, const Model::ListLabelGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelGroupsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListLabelsRequest&, const Model::ListLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLabelsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListModelVersionsRequest&, const Model::ListModelVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelVersionsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListModelsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListRetrainingSchedulersRequest&, const Model::ListRetrainingSchedulersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRetrainingSchedulersResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListSensorStatisticsRequest&, const Model::ListSensorStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSensorStatisticsResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StartDataIngestionJobRequest&, const Model::StartDataIngestionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataIngestionJobResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StartInferenceSchedulerRequest&, const Model::StartInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StartRetrainingSchedulerRequest&, const Model::StartRetrainingSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRetrainingSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StopInferenceSchedulerRequest&, const Model::StopInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::StopRetrainingSchedulerRequest&, const Model::StopRetrainingSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRetrainingSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateActiveModelVersionRequest&, const Model::UpdateActiveModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateActiveModelVersionResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateInferenceSchedulerRequest&, const Model::UpdateInferenceSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInferenceSchedulerResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateLabelGroupRequest&, const Model::UpdateLabelGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLabelGroupResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateModelRequest&, const Model::UpdateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelResponseReceivedHandler;
    typedef std::function<void(const LookoutEquipmentClient*, const Model::UpdateRetrainingSchedulerRequest&, const Model::UpdateRetrainingSchedulerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRetrainingSchedulerResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LookoutEquipment
} // namespace Aws
