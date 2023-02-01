/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/frauddetector/FraudDetectorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/frauddetector/FraudDetectorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FraudDetectorClient header */
#include <aws/frauddetector/model/BatchCreateVariableResult.h>
#include <aws/frauddetector/model/BatchGetVariableResult.h>
#include <aws/frauddetector/model/CancelBatchImportJobResult.h>
#include <aws/frauddetector/model/CancelBatchPredictionJobResult.h>
#include <aws/frauddetector/model/CreateBatchImportJobResult.h>
#include <aws/frauddetector/model/CreateBatchPredictionJobResult.h>
#include <aws/frauddetector/model/CreateDetectorVersionResult.h>
#include <aws/frauddetector/model/CreateModelResult.h>
#include <aws/frauddetector/model/CreateModelVersionResult.h>
#include <aws/frauddetector/model/CreateRuleResult.h>
#include <aws/frauddetector/model/CreateVariableResult.h>
#include <aws/frauddetector/model/DeleteBatchImportJobResult.h>
#include <aws/frauddetector/model/DeleteBatchPredictionJobResult.h>
#include <aws/frauddetector/model/DeleteDetectorResult.h>
#include <aws/frauddetector/model/DeleteDetectorVersionResult.h>
#include <aws/frauddetector/model/DeleteEntityTypeResult.h>
#include <aws/frauddetector/model/DeleteEventResult.h>
#include <aws/frauddetector/model/DeleteEventTypeResult.h>
#include <aws/frauddetector/model/DeleteEventsByEventTypeResult.h>
#include <aws/frauddetector/model/DeleteExternalModelResult.h>
#include <aws/frauddetector/model/DeleteLabelResult.h>
#include <aws/frauddetector/model/DeleteModelResult.h>
#include <aws/frauddetector/model/DeleteModelVersionResult.h>
#include <aws/frauddetector/model/DeleteOutcomeResult.h>
#include <aws/frauddetector/model/DeleteRuleResult.h>
#include <aws/frauddetector/model/DeleteVariableResult.h>
#include <aws/frauddetector/model/DescribeDetectorResult.h>
#include <aws/frauddetector/model/DescribeModelVersionsResult.h>
#include <aws/frauddetector/model/GetBatchImportJobsResult.h>
#include <aws/frauddetector/model/GetBatchPredictionJobsResult.h>
#include <aws/frauddetector/model/GetDeleteEventsByEventTypeStatusResult.h>
#include <aws/frauddetector/model/GetDetectorVersionResult.h>
#include <aws/frauddetector/model/GetDetectorsResult.h>
#include <aws/frauddetector/model/GetEntityTypesResult.h>
#include <aws/frauddetector/model/GetEventResult.h>
#include <aws/frauddetector/model/GetEventPredictionResult.h>
#include <aws/frauddetector/model/GetEventPredictionMetadataResult.h>
#include <aws/frauddetector/model/GetEventTypesResult.h>
#include <aws/frauddetector/model/GetExternalModelsResult.h>
#include <aws/frauddetector/model/GetKMSEncryptionKeyResult.h>
#include <aws/frauddetector/model/GetLabelsResult.h>
#include <aws/frauddetector/model/GetModelVersionResult.h>
#include <aws/frauddetector/model/GetModelsResult.h>
#include <aws/frauddetector/model/GetOutcomesResult.h>
#include <aws/frauddetector/model/GetRulesResult.h>
#include <aws/frauddetector/model/GetVariablesResult.h>
#include <aws/frauddetector/model/ListEventPredictionsResult.h>
#include <aws/frauddetector/model/ListTagsForResourceResult.h>
#include <aws/frauddetector/model/PutDetectorResult.h>
#include <aws/frauddetector/model/PutEntityTypeResult.h>
#include <aws/frauddetector/model/PutEventTypeResult.h>
#include <aws/frauddetector/model/PutExternalModelResult.h>
#include <aws/frauddetector/model/PutKMSEncryptionKeyResult.h>
#include <aws/frauddetector/model/PutLabelResult.h>
#include <aws/frauddetector/model/PutOutcomeResult.h>
#include <aws/frauddetector/model/SendEventResult.h>
#include <aws/frauddetector/model/TagResourceResult.h>
#include <aws/frauddetector/model/UntagResourceResult.h>
#include <aws/frauddetector/model/UpdateDetectorVersionResult.h>
#include <aws/frauddetector/model/UpdateDetectorVersionMetadataResult.h>
#include <aws/frauddetector/model/UpdateDetectorVersionStatusResult.h>
#include <aws/frauddetector/model/UpdateEventLabelResult.h>
#include <aws/frauddetector/model/UpdateModelResult.h>
#include <aws/frauddetector/model/UpdateModelVersionResult.h>
#include <aws/frauddetector/model/UpdateModelVersionStatusResult.h>
#include <aws/frauddetector/model/UpdateRuleMetadataResult.h>
#include <aws/frauddetector/model/UpdateRuleVersionResult.h>
#include <aws/frauddetector/model/UpdateVariableResult.h>
/* End of service model headers required in FraudDetectorClient header */

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

  namespace FraudDetector
  {
    using FraudDetectorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using FraudDetectorEndpointProviderBase = Aws::FraudDetector::Endpoint::FraudDetectorEndpointProviderBase;
    using FraudDetectorEndpointProvider = Aws::FraudDetector::Endpoint::FraudDetectorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FraudDetectorClient header */
      class BatchCreateVariableRequest;
      class BatchGetVariableRequest;
      class CancelBatchImportJobRequest;
      class CancelBatchPredictionJobRequest;
      class CreateBatchImportJobRequest;
      class CreateBatchPredictionJobRequest;
      class CreateDetectorVersionRequest;
      class CreateModelRequest;
      class CreateModelVersionRequest;
      class CreateRuleRequest;
      class CreateVariableRequest;
      class DeleteBatchImportJobRequest;
      class DeleteBatchPredictionJobRequest;
      class DeleteDetectorRequest;
      class DeleteDetectorVersionRequest;
      class DeleteEntityTypeRequest;
      class DeleteEventRequest;
      class DeleteEventTypeRequest;
      class DeleteEventsByEventTypeRequest;
      class DeleteExternalModelRequest;
      class DeleteLabelRequest;
      class DeleteModelRequest;
      class DeleteModelVersionRequest;
      class DeleteOutcomeRequest;
      class DeleteRuleRequest;
      class DeleteVariableRequest;
      class DescribeDetectorRequest;
      class DescribeModelVersionsRequest;
      class GetBatchImportJobsRequest;
      class GetBatchPredictionJobsRequest;
      class GetDeleteEventsByEventTypeStatusRequest;
      class GetDetectorVersionRequest;
      class GetDetectorsRequest;
      class GetEntityTypesRequest;
      class GetEventRequest;
      class GetEventPredictionRequest;
      class GetEventPredictionMetadataRequest;
      class GetEventTypesRequest;
      class GetExternalModelsRequest;
      class GetLabelsRequest;
      class GetModelVersionRequest;
      class GetModelsRequest;
      class GetOutcomesRequest;
      class GetRulesRequest;
      class GetVariablesRequest;
      class ListEventPredictionsRequest;
      class ListTagsForResourceRequest;
      class PutDetectorRequest;
      class PutEntityTypeRequest;
      class PutEventTypeRequest;
      class PutExternalModelRequest;
      class PutKMSEncryptionKeyRequest;
      class PutLabelRequest;
      class PutOutcomeRequest;
      class SendEventRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDetectorVersionRequest;
      class UpdateDetectorVersionMetadataRequest;
      class UpdateDetectorVersionStatusRequest;
      class UpdateEventLabelRequest;
      class UpdateModelRequest;
      class UpdateModelVersionRequest;
      class UpdateModelVersionStatusRequest;
      class UpdateRuleMetadataRequest;
      class UpdateRuleVersionRequest;
      class UpdateVariableRequest;
      /* End of service model forward declarations required in FraudDetectorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchCreateVariableResult, FraudDetectorError> BatchCreateVariableOutcome;
      typedef Aws::Utils::Outcome<BatchGetVariableResult, FraudDetectorError> BatchGetVariableOutcome;
      typedef Aws::Utils::Outcome<CancelBatchImportJobResult, FraudDetectorError> CancelBatchImportJobOutcome;
      typedef Aws::Utils::Outcome<CancelBatchPredictionJobResult, FraudDetectorError> CancelBatchPredictionJobOutcome;
      typedef Aws::Utils::Outcome<CreateBatchImportJobResult, FraudDetectorError> CreateBatchImportJobOutcome;
      typedef Aws::Utils::Outcome<CreateBatchPredictionJobResult, FraudDetectorError> CreateBatchPredictionJobOutcome;
      typedef Aws::Utils::Outcome<CreateDetectorVersionResult, FraudDetectorError> CreateDetectorVersionOutcome;
      typedef Aws::Utils::Outcome<CreateModelResult, FraudDetectorError> CreateModelOutcome;
      typedef Aws::Utils::Outcome<CreateModelVersionResult, FraudDetectorError> CreateModelVersionOutcome;
      typedef Aws::Utils::Outcome<CreateRuleResult, FraudDetectorError> CreateRuleOutcome;
      typedef Aws::Utils::Outcome<CreateVariableResult, FraudDetectorError> CreateVariableOutcome;
      typedef Aws::Utils::Outcome<DeleteBatchImportJobResult, FraudDetectorError> DeleteBatchImportJobOutcome;
      typedef Aws::Utils::Outcome<DeleteBatchPredictionJobResult, FraudDetectorError> DeleteBatchPredictionJobOutcome;
      typedef Aws::Utils::Outcome<DeleteDetectorResult, FraudDetectorError> DeleteDetectorOutcome;
      typedef Aws::Utils::Outcome<DeleteDetectorVersionResult, FraudDetectorError> DeleteDetectorVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteEntityTypeResult, FraudDetectorError> DeleteEntityTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteEventResult, FraudDetectorError> DeleteEventOutcome;
      typedef Aws::Utils::Outcome<DeleteEventTypeResult, FraudDetectorError> DeleteEventTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteEventsByEventTypeResult, FraudDetectorError> DeleteEventsByEventTypeOutcome;
      typedef Aws::Utils::Outcome<DeleteExternalModelResult, FraudDetectorError> DeleteExternalModelOutcome;
      typedef Aws::Utils::Outcome<DeleteLabelResult, FraudDetectorError> DeleteLabelOutcome;
      typedef Aws::Utils::Outcome<DeleteModelResult, FraudDetectorError> DeleteModelOutcome;
      typedef Aws::Utils::Outcome<DeleteModelVersionResult, FraudDetectorError> DeleteModelVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteOutcomeResult, FraudDetectorError> DeleteOutcomeOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleResult, FraudDetectorError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteVariableResult, FraudDetectorError> DeleteVariableOutcome;
      typedef Aws::Utils::Outcome<DescribeDetectorResult, FraudDetectorError> DescribeDetectorOutcome;
      typedef Aws::Utils::Outcome<DescribeModelVersionsResult, FraudDetectorError> DescribeModelVersionsOutcome;
      typedef Aws::Utils::Outcome<GetBatchImportJobsResult, FraudDetectorError> GetBatchImportJobsOutcome;
      typedef Aws::Utils::Outcome<GetBatchPredictionJobsResult, FraudDetectorError> GetBatchPredictionJobsOutcome;
      typedef Aws::Utils::Outcome<GetDeleteEventsByEventTypeStatusResult, FraudDetectorError> GetDeleteEventsByEventTypeStatusOutcome;
      typedef Aws::Utils::Outcome<GetDetectorVersionResult, FraudDetectorError> GetDetectorVersionOutcome;
      typedef Aws::Utils::Outcome<GetDetectorsResult, FraudDetectorError> GetDetectorsOutcome;
      typedef Aws::Utils::Outcome<GetEntityTypesResult, FraudDetectorError> GetEntityTypesOutcome;
      typedef Aws::Utils::Outcome<GetEventResult, FraudDetectorError> GetEventOutcome;
      typedef Aws::Utils::Outcome<GetEventPredictionResult, FraudDetectorError> GetEventPredictionOutcome;
      typedef Aws::Utils::Outcome<GetEventPredictionMetadataResult, FraudDetectorError> GetEventPredictionMetadataOutcome;
      typedef Aws::Utils::Outcome<GetEventTypesResult, FraudDetectorError> GetEventTypesOutcome;
      typedef Aws::Utils::Outcome<GetExternalModelsResult, FraudDetectorError> GetExternalModelsOutcome;
      typedef Aws::Utils::Outcome<GetKMSEncryptionKeyResult, FraudDetectorError> GetKMSEncryptionKeyOutcome;
      typedef Aws::Utils::Outcome<GetLabelsResult, FraudDetectorError> GetLabelsOutcome;
      typedef Aws::Utils::Outcome<GetModelVersionResult, FraudDetectorError> GetModelVersionOutcome;
      typedef Aws::Utils::Outcome<GetModelsResult, FraudDetectorError> GetModelsOutcome;
      typedef Aws::Utils::Outcome<GetOutcomesResult, FraudDetectorError> GetOutcomesOutcome;
      typedef Aws::Utils::Outcome<GetRulesResult, FraudDetectorError> GetRulesOutcome;
      typedef Aws::Utils::Outcome<GetVariablesResult, FraudDetectorError> GetVariablesOutcome;
      typedef Aws::Utils::Outcome<ListEventPredictionsResult, FraudDetectorError> ListEventPredictionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, FraudDetectorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutDetectorResult, FraudDetectorError> PutDetectorOutcome;
      typedef Aws::Utils::Outcome<PutEntityTypeResult, FraudDetectorError> PutEntityTypeOutcome;
      typedef Aws::Utils::Outcome<PutEventTypeResult, FraudDetectorError> PutEventTypeOutcome;
      typedef Aws::Utils::Outcome<PutExternalModelResult, FraudDetectorError> PutExternalModelOutcome;
      typedef Aws::Utils::Outcome<PutKMSEncryptionKeyResult, FraudDetectorError> PutKMSEncryptionKeyOutcome;
      typedef Aws::Utils::Outcome<PutLabelResult, FraudDetectorError> PutLabelOutcome;
      typedef Aws::Utils::Outcome<PutOutcomeResult, FraudDetectorError> PutOutcomeOutcome;
      typedef Aws::Utils::Outcome<SendEventResult, FraudDetectorError> SendEventOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, FraudDetectorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, FraudDetectorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDetectorVersionResult, FraudDetectorError> UpdateDetectorVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateDetectorVersionMetadataResult, FraudDetectorError> UpdateDetectorVersionMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateDetectorVersionStatusResult, FraudDetectorError> UpdateDetectorVersionStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateEventLabelResult, FraudDetectorError> UpdateEventLabelOutcome;
      typedef Aws::Utils::Outcome<UpdateModelResult, FraudDetectorError> UpdateModelOutcome;
      typedef Aws::Utils::Outcome<UpdateModelVersionResult, FraudDetectorError> UpdateModelVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateModelVersionStatusResult, FraudDetectorError> UpdateModelVersionStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleMetadataResult, FraudDetectorError> UpdateRuleMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleVersionResult, FraudDetectorError> UpdateRuleVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateVariableResult, FraudDetectorError> UpdateVariableOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchCreateVariableOutcome> BatchCreateVariableOutcomeCallable;
      typedef std::future<BatchGetVariableOutcome> BatchGetVariableOutcomeCallable;
      typedef std::future<CancelBatchImportJobOutcome> CancelBatchImportJobOutcomeCallable;
      typedef std::future<CancelBatchPredictionJobOutcome> CancelBatchPredictionJobOutcomeCallable;
      typedef std::future<CreateBatchImportJobOutcome> CreateBatchImportJobOutcomeCallable;
      typedef std::future<CreateBatchPredictionJobOutcome> CreateBatchPredictionJobOutcomeCallable;
      typedef std::future<CreateDetectorVersionOutcome> CreateDetectorVersionOutcomeCallable;
      typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
      typedef std::future<CreateModelVersionOutcome> CreateModelVersionOutcomeCallable;
      typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
      typedef std::future<CreateVariableOutcome> CreateVariableOutcomeCallable;
      typedef std::future<DeleteBatchImportJobOutcome> DeleteBatchImportJobOutcomeCallable;
      typedef std::future<DeleteBatchPredictionJobOutcome> DeleteBatchPredictionJobOutcomeCallable;
      typedef std::future<DeleteDetectorOutcome> DeleteDetectorOutcomeCallable;
      typedef std::future<DeleteDetectorVersionOutcome> DeleteDetectorVersionOutcomeCallable;
      typedef std::future<DeleteEntityTypeOutcome> DeleteEntityTypeOutcomeCallable;
      typedef std::future<DeleteEventOutcome> DeleteEventOutcomeCallable;
      typedef std::future<DeleteEventTypeOutcome> DeleteEventTypeOutcomeCallable;
      typedef std::future<DeleteEventsByEventTypeOutcome> DeleteEventsByEventTypeOutcomeCallable;
      typedef std::future<DeleteExternalModelOutcome> DeleteExternalModelOutcomeCallable;
      typedef std::future<DeleteLabelOutcome> DeleteLabelOutcomeCallable;
      typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
      typedef std::future<DeleteModelVersionOutcome> DeleteModelVersionOutcomeCallable;
      typedef std::future<DeleteOutcomeOutcome> DeleteOutcomeOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DeleteVariableOutcome> DeleteVariableOutcomeCallable;
      typedef std::future<DescribeDetectorOutcome> DescribeDetectorOutcomeCallable;
      typedef std::future<DescribeModelVersionsOutcome> DescribeModelVersionsOutcomeCallable;
      typedef std::future<GetBatchImportJobsOutcome> GetBatchImportJobsOutcomeCallable;
      typedef std::future<GetBatchPredictionJobsOutcome> GetBatchPredictionJobsOutcomeCallable;
      typedef std::future<GetDeleteEventsByEventTypeStatusOutcome> GetDeleteEventsByEventTypeStatusOutcomeCallable;
      typedef std::future<GetDetectorVersionOutcome> GetDetectorVersionOutcomeCallable;
      typedef std::future<GetDetectorsOutcome> GetDetectorsOutcomeCallable;
      typedef std::future<GetEntityTypesOutcome> GetEntityTypesOutcomeCallable;
      typedef std::future<GetEventOutcome> GetEventOutcomeCallable;
      typedef std::future<GetEventPredictionOutcome> GetEventPredictionOutcomeCallable;
      typedef std::future<GetEventPredictionMetadataOutcome> GetEventPredictionMetadataOutcomeCallable;
      typedef std::future<GetEventTypesOutcome> GetEventTypesOutcomeCallable;
      typedef std::future<GetExternalModelsOutcome> GetExternalModelsOutcomeCallable;
      typedef std::future<GetKMSEncryptionKeyOutcome> GetKMSEncryptionKeyOutcomeCallable;
      typedef std::future<GetLabelsOutcome> GetLabelsOutcomeCallable;
      typedef std::future<GetModelVersionOutcome> GetModelVersionOutcomeCallable;
      typedef std::future<GetModelsOutcome> GetModelsOutcomeCallable;
      typedef std::future<GetOutcomesOutcome> GetOutcomesOutcomeCallable;
      typedef std::future<GetRulesOutcome> GetRulesOutcomeCallable;
      typedef std::future<GetVariablesOutcome> GetVariablesOutcomeCallable;
      typedef std::future<ListEventPredictionsOutcome> ListEventPredictionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutDetectorOutcome> PutDetectorOutcomeCallable;
      typedef std::future<PutEntityTypeOutcome> PutEntityTypeOutcomeCallable;
      typedef std::future<PutEventTypeOutcome> PutEventTypeOutcomeCallable;
      typedef std::future<PutExternalModelOutcome> PutExternalModelOutcomeCallable;
      typedef std::future<PutKMSEncryptionKeyOutcome> PutKMSEncryptionKeyOutcomeCallable;
      typedef std::future<PutLabelOutcome> PutLabelOutcomeCallable;
      typedef std::future<PutOutcomeOutcome> PutOutcomeOutcomeCallable;
      typedef std::future<SendEventOutcome> SendEventOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDetectorVersionOutcome> UpdateDetectorVersionOutcomeCallable;
      typedef std::future<UpdateDetectorVersionMetadataOutcome> UpdateDetectorVersionMetadataOutcomeCallable;
      typedef std::future<UpdateDetectorVersionStatusOutcome> UpdateDetectorVersionStatusOutcomeCallable;
      typedef std::future<UpdateEventLabelOutcome> UpdateEventLabelOutcomeCallable;
      typedef std::future<UpdateModelOutcome> UpdateModelOutcomeCallable;
      typedef std::future<UpdateModelVersionOutcome> UpdateModelVersionOutcomeCallable;
      typedef std::future<UpdateModelVersionStatusOutcome> UpdateModelVersionStatusOutcomeCallable;
      typedef std::future<UpdateRuleMetadataOutcome> UpdateRuleMetadataOutcomeCallable;
      typedef std::future<UpdateRuleVersionOutcome> UpdateRuleVersionOutcomeCallable;
      typedef std::future<UpdateVariableOutcome> UpdateVariableOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FraudDetectorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FraudDetectorClient*, const Model::BatchCreateVariableRequest&, const Model::BatchCreateVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateVariableResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::BatchGetVariableRequest&, const Model::BatchGetVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetVariableResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CancelBatchImportJobRequest&, const Model::CancelBatchImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelBatchImportJobResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CancelBatchPredictionJobRequest&, const Model::CancelBatchPredictionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelBatchPredictionJobResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateBatchImportJobRequest&, const Model::CreateBatchImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBatchImportJobResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateBatchPredictionJobRequest&, const Model::CreateBatchPredictionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBatchPredictionJobResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateDetectorVersionRequest&, const Model::CreateDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateModelVersionRequest&, const Model::CreateModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::CreateVariableRequest&, const Model::CreateVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVariableResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteBatchImportJobRequest&, const Model::DeleteBatchImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBatchImportJobResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteBatchPredictionJobRequest&, const Model::DeleteBatchPredictionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBatchPredictionJobResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteDetectorRequest&, const Model::DeleteDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDetectorResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteDetectorVersionRequest&, const Model::DeleteDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteEntityTypeRequest&, const Model::DeleteEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEntityTypeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteEventRequest&, const Model::DeleteEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteEventTypeRequest&, const Model::DeleteEventTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventTypeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteEventsByEventTypeRequest&, const Model::DeleteEventsByEventTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventsByEventTypeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteExternalModelRequest&, const Model::DeleteExternalModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExternalModelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteLabelRequest&, const Model::DeleteLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLabelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteModelVersionRequest&, const Model::DeleteModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteOutcomeRequest&, const Model::DeleteOutcomeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutcomeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DeleteVariableRequest&, const Model::DeleteVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVariableResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DescribeDetectorRequest&, const Model::DescribeDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDetectorResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::DescribeModelVersionsRequest&, const Model::DescribeModelVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeModelVersionsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetBatchImportJobsRequest&, const Model::GetBatchImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBatchImportJobsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetBatchPredictionJobsRequest&, const Model::GetBatchPredictionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBatchPredictionJobsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetDeleteEventsByEventTypeStatusRequest&, const Model::GetDeleteEventsByEventTypeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeleteEventsByEventTypeStatusResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetDetectorVersionRequest&, const Model::GetDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetDetectorsRequest&, const Model::GetDetectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDetectorsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetEntityTypesRequest&, const Model::GetEntityTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEntityTypesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetEventRequest&, const Model::GetEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetEventPredictionRequest&, const Model::GetEventPredictionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventPredictionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetEventPredictionMetadataRequest&, const Model::GetEventPredictionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventPredictionMetadataResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetEventTypesRequest&, const Model::GetEventTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventTypesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetExternalModelsRequest&, const Model::GetExternalModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExternalModelsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetKMSEncryptionKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKMSEncryptionKeyResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetLabelsRequest&, const Model::GetLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLabelsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetModelVersionRequest&, const Model::GetModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetModelsRequest&, const Model::GetModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetOutcomesRequest&, const Model::GetOutcomesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutcomesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetRulesRequest&, const Model::GetRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRulesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::GetVariablesRequest&, const Model::GetVariablesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVariablesResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::ListEventPredictionsRequest&, const Model::ListEventPredictionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventPredictionsResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutDetectorRequest&, const Model::PutDetectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDetectorResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutEntityTypeRequest&, const Model::PutEntityTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEntityTypeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutEventTypeRequest&, const Model::PutEventTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventTypeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutExternalModelRequest&, const Model::PutExternalModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutExternalModelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutKMSEncryptionKeyRequest&, const Model::PutKMSEncryptionKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutKMSEncryptionKeyResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutLabelRequest&, const Model::PutLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLabelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::PutOutcomeRequest&, const Model::PutOutcomeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOutcomeResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::SendEventRequest&, const Model::SendEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEventResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateDetectorVersionRequest&, const Model::UpdateDetectorVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateDetectorVersionMetadataRequest&, const Model::UpdateDetectorVersionMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorVersionMetadataResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateDetectorVersionStatusRequest&, const Model::UpdateDetectorVersionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDetectorVersionStatusResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateEventLabelRequest&, const Model::UpdateEventLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventLabelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateModelRequest&, const Model::UpdateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateModelVersionRequest&, const Model::UpdateModelVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateModelVersionStatusRequest&, const Model::UpdateModelVersionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelVersionStatusResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateRuleMetadataRequest&, const Model::UpdateRuleMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleMetadataResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateRuleVersionRequest&, const Model::UpdateRuleVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleVersionResponseReceivedHandler;
    typedef std::function<void(const FraudDetectorClient*, const Model::UpdateVariableRequest&, const Model::UpdateVariableOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVariableResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace FraudDetector
} // namespace Aws
