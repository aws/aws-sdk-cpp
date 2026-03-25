/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/frauddetector/FraudDetectorClient.h>
#include <aws/frauddetector/FraudDetectorEndpointProvider.h>
#include <aws/frauddetector/FraudDetectorErrorMarshaller.h>
#include <aws/frauddetector/model/BatchCreateVariableRequest.h>
#include <aws/frauddetector/model/BatchGetVariableRequest.h>
#include <aws/frauddetector/model/CancelBatchImportJobRequest.h>
#include <aws/frauddetector/model/CancelBatchPredictionJobRequest.h>
#include <aws/frauddetector/model/CreateBatchImportJobRequest.h>
#include <aws/frauddetector/model/CreateBatchPredictionJobRequest.h>
#include <aws/frauddetector/model/CreateDetectorVersionRequest.h>
#include <aws/frauddetector/model/CreateListRequest.h>
#include <aws/frauddetector/model/CreateModelRequest.h>
#include <aws/frauddetector/model/CreateModelVersionRequest.h>
#include <aws/frauddetector/model/CreateRuleRequest.h>
#include <aws/frauddetector/model/CreateVariableRequest.h>
#include <aws/frauddetector/model/DeleteBatchImportJobRequest.h>
#include <aws/frauddetector/model/DeleteBatchPredictionJobRequest.h>
#include <aws/frauddetector/model/DeleteDetectorRequest.h>
#include <aws/frauddetector/model/DeleteDetectorVersionRequest.h>
#include <aws/frauddetector/model/DeleteEntityTypeRequest.h>
#include <aws/frauddetector/model/DeleteEventRequest.h>
#include <aws/frauddetector/model/DeleteEventTypeRequest.h>
#include <aws/frauddetector/model/DeleteEventsByEventTypeRequest.h>
#include <aws/frauddetector/model/DeleteExternalModelRequest.h>
#include <aws/frauddetector/model/DeleteLabelRequest.h>
#include <aws/frauddetector/model/DeleteListRequest.h>
#include <aws/frauddetector/model/DeleteModelRequest.h>
#include <aws/frauddetector/model/DeleteModelVersionRequest.h>
#include <aws/frauddetector/model/DeleteOutcomeRequest.h>
#include <aws/frauddetector/model/DeleteRuleRequest.h>
#include <aws/frauddetector/model/DeleteVariableRequest.h>
#include <aws/frauddetector/model/DescribeDetectorRequest.h>
#include <aws/frauddetector/model/DescribeModelVersionsRequest.h>
#include <aws/frauddetector/model/GetBatchImportJobsRequest.h>
#include <aws/frauddetector/model/GetBatchPredictionJobsRequest.h>
#include <aws/frauddetector/model/GetDeleteEventsByEventTypeStatusRequest.h>
#include <aws/frauddetector/model/GetDetectorVersionRequest.h>
#include <aws/frauddetector/model/GetDetectorsRequest.h>
#include <aws/frauddetector/model/GetEntityTypesRequest.h>
#include <aws/frauddetector/model/GetEventPredictionMetadataRequest.h>
#include <aws/frauddetector/model/GetEventPredictionRequest.h>
#include <aws/frauddetector/model/GetEventRequest.h>
#include <aws/frauddetector/model/GetEventTypesRequest.h>
#include <aws/frauddetector/model/GetExternalModelsRequest.h>
#include <aws/frauddetector/model/GetKMSEncryptionKeyRequest.h>
#include <aws/frauddetector/model/GetLabelsRequest.h>
#include <aws/frauddetector/model/GetListElementsRequest.h>
#include <aws/frauddetector/model/GetListsMetadataRequest.h>
#include <aws/frauddetector/model/GetModelVersionRequest.h>
#include <aws/frauddetector/model/GetModelsRequest.h>
#include <aws/frauddetector/model/GetOutcomesRequest.h>
#include <aws/frauddetector/model/GetRulesRequest.h>
#include <aws/frauddetector/model/GetVariablesRequest.h>
#include <aws/frauddetector/model/ListEventPredictionsRequest.h>
#include <aws/frauddetector/model/ListTagsForResourceRequest.h>
#include <aws/frauddetector/model/PutDetectorRequest.h>
#include <aws/frauddetector/model/PutEntityTypeRequest.h>
#include <aws/frauddetector/model/PutEventTypeRequest.h>
#include <aws/frauddetector/model/PutExternalModelRequest.h>
#include <aws/frauddetector/model/PutKMSEncryptionKeyRequest.h>
#include <aws/frauddetector/model/PutLabelRequest.h>
#include <aws/frauddetector/model/PutOutcomeRequest.h>
#include <aws/frauddetector/model/SendEventRequest.h>
#include <aws/frauddetector/model/TagResourceRequest.h>
#include <aws/frauddetector/model/UntagResourceRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionMetadataRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionRequest.h>
#include <aws/frauddetector/model/UpdateDetectorVersionStatusRequest.h>
#include <aws/frauddetector/model/UpdateEventLabelRequest.h>
#include <aws/frauddetector/model/UpdateListRequest.h>
#include <aws/frauddetector/model/UpdateModelRequest.h>
#include <aws/frauddetector/model/UpdateModelVersionRequest.h>
#include <aws/frauddetector/model/UpdateModelVersionStatusRequest.h>
#include <aws/frauddetector/model/UpdateRuleMetadataRequest.h>
#include <aws/frauddetector/model/UpdateRuleVersionRequest.h>
#include <aws/frauddetector/model/UpdateVariableRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FraudDetector;
using namespace Aws::FraudDetector::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace FraudDetector {
const char SERVICE_NAME[] = "frauddetector";
const char ALLOCATION_TAG[] = "FraudDetectorClient";
}  // namespace FraudDetector
}  // namespace Aws
const char* FraudDetectorClient::GetServiceName() { return SERVICE_NAME; }
const char* FraudDetectorClient::GetAllocationTag() { return ALLOCATION_TAG; }

FraudDetectorClient::FraudDetectorClient(const FraudDetector::FraudDetectorClientConfiguration& clientConfiguration,
                                         std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const AWSCredentials& credentials,
                                         std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider,
                                         const FraudDetector::FraudDetectorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<FraudDetectorEndpointProviderBase> endpointProvider,
                                         const FraudDetector::FraudDetectorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
FraudDetectorClient::FraudDetectorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

FraudDetectorClient::FraudDetectorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<FraudDetectorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<FraudDetectorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
FraudDetectorClient::~FraudDetectorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<FraudDetectorEndpointProviderBase>& FraudDetectorClient::accessEndpointProvider() { return m_endpointProvider; }

void FraudDetectorClient::init(const FraudDetector::FraudDetectorClientConfiguration& config) {
  AWSClient::SetServiceClientName("FraudDetector");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "frauddetector");
}

void FraudDetectorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
FraudDetectorClient::InvokeOperationOutcome FraudDetectorClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                        Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchCreateVariableOutcome FraudDetectorClient::BatchCreateVariable(const BatchCreateVariableRequest& request) const {
  return BatchCreateVariableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetVariableOutcome FraudDetectorClient::BatchGetVariable(const BatchGetVariableRequest& request) const {
  return BatchGetVariableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelBatchImportJobOutcome FraudDetectorClient::CancelBatchImportJob(const CancelBatchImportJobRequest& request) const {
  return CancelBatchImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelBatchPredictionJobOutcome FraudDetectorClient::CancelBatchPredictionJob(const CancelBatchPredictionJobRequest& request) const {
  return CancelBatchPredictionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBatchImportJobOutcome FraudDetectorClient::CreateBatchImportJob(const CreateBatchImportJobRequest& request) const {
  return CreateBatchImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBatchPredictionJobOutcome FraudDetectorClient::CreateBatchPredictionJob(const CreateBatchPredictionJobRequest& request) const {
  return CreateBatchPredictionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDetectorVersionOutcome FraudDetectorClient::CreateDetectorVersion(const CreateDetectorVersionRequest& request) const {
  return CreateDetectorVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateListOutcome FraudDetectorClient::CreateList(const CreateListRequest& request) const {
  return CreateListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelOutcome FraudDetectorClient::CreateModel(const CreateModelRequest& request) const {
  return CreateModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelVersionOutcome FraudDetectorClient::CreateModelVersion(const CreateModelVersionRequest& request) const {
  return CreateModelVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRuleOutcome FraudDetectorClient::CreateRule(const CreateRuleRequest& request) const {
  return CreateRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVariableOutcome FraudDetectorClient::CreateVariable(const CreateVariableRequest& request) const {
  return CreateVariableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBatchImportJobOutcome FraudDetectorClient::DeleteBatchImportJob(const DeleteBatchImportJobRequest& request) const {
  return DeleteBatchImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBatchPredictionJobOutcome FraudDetectorClient::DeleteBatchPredictionJob(const DeleteBatchPredictionJobRequest& request) const {
  return DeleteBatchPredictionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDetectorOutcome FraudDetectorClient::DeleteDetector(const DeleteDetectorRequest& request) const {
  return DeleteDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDetectorVersionOutcome FraudDetectorClient::DeleteDetectorVersion(const DeleteDetectorVersionRequest& request) const {
  return DeleteDetectorVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEntityTypeOutcome FraudDetectorClient::DeleteEntityType(const DeleteEntityTypeRequest& request) const {
  return DeleteEntityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventOutcome FraudDetectorClient::DeleteEvent(const DeleteEventRequest& request) const {
  return DeleteEventOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventTypeOutcome FraudDetectorClient::DeleteEventType(const DeleteEventTypeRequest& request) const {
  return DeleteEventTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventsByEventTypeOutcome FraudDetectorClient::DeleteEventsByEventType(const DeleteEventsByEventTypeRequest& request) const {
  return DeleteEventsByEventTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteExternalModelOutcome FraudDetectorClient::DeleteExternalModel(const DeleteExternalModelRequest& request) const {
  return DeleteExternalModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLabelOutcome FraudDetectorClient::DeleteLabel(const DeleteLabelRequest& request) const {
  return DeleteLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteListOutcome FraudDetectorClient::DeleteList(const DeleteListRequest& request) const {
  return DeleteListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelOutcome FraudDetectorClient::DeleteModel(const DeleteModelRequest& request) const {
  return DeleteModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelVersionOutcome FraudDetectorClient::DeleteModelVersion(const DeleteModelVersionRequest& request) const {
  return DeleteModelVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOutcomeOutcome FraudDetectorClient::DeleteOutcome(const DeleteOutcomeRequest& request) const {
  return DeleteOutcomeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRuleOutcome FraudDetectorClient::DeleteRule(const DeleteRuleRequest& request) const {
  return DeleteRuleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVariableOutcome FraudDetectorClient::DeleteVariable(const DeleteVariableRequest& request) const {
  return DeleteVariableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDetectorOutcome FraudDetectorClient::DescribeDetector(const DescribeDetectorRequest& request) const {
  return DescribeDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelVersionsOutcome FraudDetectorClient::DescribeModelVersions(const DescribeModelVersionsRequest& request) const {
  return DescribeModelVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBatchImportJobsOutcome FraudDetectorClient::GetBatchImportJobs(const GetBatchImportJobsRequest& request) const {
  return GetBatchImportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBatchPredictionJobsOutcome FraudDetectorClient::GetBatchPredictionJobs(const GetBatchPredictionJobsRequest& request) const {
  return GetBatchPredictionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeleteEventsByEventTypeStatusOutcome FraudDetectorClient::GetDeleteEventsByEventTypeStatus(
    const GetDeleteEventsByEventTypeStatusRequest& request) const {
  return GetDeleteEventsByEventTypeStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDetectorVersionOutcome FraudDetectorClient::GetDetectorVersion(const GetDetectorVersionRequest& request) const {
  return GetDetectorVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDetectorsOutcome FraudDetectorClient::GetDetectors(const GetDetectorsRequest& request) const {
  return GetDetectorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEntityTypesOutcome FraudDetectorClient::GetEntityTypes(const GetEntityTypesRequest& request) const {
  return GetEntityTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEventOutcome FraudDetectorClient::GetEvent(const GetEventRequest& request) const {
  return GetEventOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEventPredictionOutcome FraudDetectorClient::GetEventPrediction(const GetEventPredictionRequest& request) const {
  return GetEventPredictionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEventPredictionMetadataOutcome FraudDetectorClient::GetEventPredictionMetadata(const GetEventPredictionMetadataRequest& request) const {
  return GetEventPredictionMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEventTypesOutcome FraudDetectorClient::GetEventTypes(const GetEventTypesRequest& request) const {
  return GetEventTypesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExternalModelsOutcome FraudDetectorClient::GetExternalModels(const GetExternalModelsRequest& request) const {
  return GetExternalModelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetKMSEncryptionKeyOutcome FraudDetectorClient::GetKMSEncryptionKey(const GetKMSEncryptionKeyRequest& request) const {
  return GetKMSEncryptionKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLabelsOutcome FraudDetectorClient::GetLabels(const GetLabelsRequest& request) const {
  return GetLabelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetListElementsOutcome FraudDetectorClient::GetListElements(const GetListElementsRequest& request) const {
  return GetListElementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetListsMetadataOutcome FraudDetectorClient::GetListsMetadata(const GetListsMetadataRequest& request) const {
  return GetListsMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetModelVersionOutcome FraudDetectorClient::GetModelVersion(const GetModelVersionRequest& request) const {
  return GetModelVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetModelsOutcome FraudDetectorClient::GetModels(const GetModelsRequest& request) const {
  return GetModelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOutcomesOutcome FraudDetectorClient::GetOutcomes(const GetOutcomesRequest& request) const {
  return GetOutcomesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRulesOutcome FraudDetectorClient::GetRules(const GetRulesRequest& request) const {
  return GetRulesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVariablesOutcome FraudDetectorClient::GetVariables(const GetVariablesRequest& request) const {
  return GetVariablesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventPredictionsOutcome FraudDetectorClient::ListEventPredictions(const ListEventPredictionsRequest& request) const {
  return ListEventPredictionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome FraudDetectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDetectorOutcome FraudDetectorClient::PutDetector(const PutDetectorRequest& request) const {
  return PutDetectorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEntityTypeOutcome FraudDetectorClient::PutEntityType(const PutEntityTypeRequest& request) const {
  return PutEntityTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutEventTypeOutcome FraudDetectorClient::PutEventType(const PutEventTypeRequest& request) const {
  return PutEventTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutExternalModelOutcome FraudDetectorClient::PutExternalModel(const PutExternalModelRequest& request) const {
  return PutExternalModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutKMSEncryptionKeyOutcome FraudDetectorClient::PutKMSEncryptionKey(const PutKMSEncryptionKeyRequest& request) const {
  return PutKMSEncryptionKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLabelOutcome FraudDetectorClient::PutLabel(const PutLabelRequest& request) const {
  return PutLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutOutcomeOutcome FraudDetectorClient::PutOutcome(const PutOutcomeRequest& request) const {
  return PutOutcomeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendEventOutcome FraudDetectorClient::SendEvent(const SendEventRequest& request) const {
  return SendEventOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome FraudDetectorClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome FraudDetectorClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDetectorVersionOutcome FraudDetectorClient::UpdateDetectorVersion(const UpdateDetectorVersionRequest& request) const {
  return UpdateDetectorVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDetectorVersionMetadataOutcome FraudDetectorClient::UpdateDetectorVersionMetadata(
    const UpdateDetectorVersionMetadataRequest& request) const {
  return UpdateDetectorVersionMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDetectorVersionStatusOutcome FraudDetectorClient::UpdateDetectorVersionStatus(
    const UpdateDetectorVersionStatusRequest& request) const {
  return UpdateDetectorVersionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEventLabelOutcome FraudDetectorClient::UpdateEventLabel(const UpdateEventLabelRequest& request) const {
  return UpdateEventLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateListOutcome FraudDetectorClient::UpdateList(const UpdateListRequest& request) const {
  return UpdateListOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateModelOutcome FraudDetectorClient::UpdateModel(const UpdateModelRequest& request) const {
  return UpdateModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateModelVersionOutcome FraudDetectorClient::UpdateModelVersion(const UpdateModelVersionRequest& request) const {
  return UpdateModelVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateModelVersionStatusOutcome FraudDetectorClient::UpdateModelVersionStatus(const UpdateModelVersionStatusRequest& request) const {
  return UpdateModelVersionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleMetadataOutcome FraudDetectorClient::UpdateRuleMetadata(const UpdateRuleMetadataRequest& request) const {
  return UpdateRuleMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuleVersionOutcome FraudDetectorClient::UpdateRuleVersion(const UpdateRuleVersionRequest& request) const {
  return UpdateRuleVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVariableOutcome FraudDetectorClient::UpdateVariable(const UpdateVariableRequest& request) const {
  return UpdateVariableOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
