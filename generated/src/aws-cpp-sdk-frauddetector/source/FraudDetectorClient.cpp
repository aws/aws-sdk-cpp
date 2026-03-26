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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateVariableOutcome(result.GetResultWithOwnership())
                            : BatchCreateVariableOutcome(std::move(result.GetError()));
}

BatchGetVariableOutcome FraudDetectorClient::BatchGetVariable(const BatchGetVariableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetVariableOutcome(result.GetResultWithOwnership())
                            : BatchGetVariableOutcome(std::move(result.GetError()));
}

CancelBatchImportJobOutcome FraudDetectorClient::CancelBatchImportJob(const CancelBatchImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelBatchImportJobOutcome(result.GetResultWithOwnership())
                            : CancelBatchImportJobOutcome(std::move(result.GetError()));
}

CancelBatchPredictionJobOutcome FraudDetectorClient::CancelBatchPredictionJob(const CancelBatchPredictionJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelBatchPredictionJobOutcome(result.GetResultWithOwnership())
                            : CancelBatchPredictionJobOutcome(std::move(result.GetError()));
}

CreateBatchImportJobOutcome FraudDetectorClient::CreateBatchImportJob(const CreateBatchImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBatchImportJobOutcome(result.GetResultWithOwnership())
                            : CreateBatchImportJobOutcome(std::move(result.GetError()));
}

CreateBatchPredictionJobOutcome FraudDetectorClient::CreateBatchPredictionJob(const CreateBatchPredictionJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBatchPredictionJobOutcome(result.GetResultWithOwnership())
                            : CreateBatchPredictionJobOutcome(std::move(result.GetError()));
}

CreateDetectorVersionOutcome FraudDetectorClient::CreateDetectorVersion(const CreateDetectorVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDetectorVersionOutcome(result.GetResultWithOwnership())
                            : CreateDetectorVersionOutcome(std::move(result.GetError()));
}

CreateListOutcome FraudDetectorClient::CreateList(const CreateListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateListOutcome(result.GetResultWithOwnership()) : CreateListOutcome(std::move(result.GetError()));
}

CreateModelOutcome FraudDetectorClient::CreateModel(const CreateModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelOutcome(result.GetResultWithOwnership()) : CreateModelOutcome(std::move(result.GetError()));
}

CreateModelVersionOutcome FraudDetectorClient::CreateModelVersion(const CreateModelVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateModelVersionOutcome(result.GetResultWithOwnership())
                            : CreateModelVersionOutcome(std::move(result.GetError()));
}

CreateRuleOutcome FraudDetectorClient::CreateRule(const CreateRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRuleOutcome(result.GetResultWithOwnership()) : CreateRuleOutcome(std::move(result.GetError()));
}

CreateVariableOutcome FraudDetectorClient::CreateVariable(const CreateVariableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVariableOutcome(result.GetResultWithOwnership()) : CreateVariableOutcome(std::move(result.GetError()));
}

DeleteBatchImportJobOutcome FraudDetectorClient::DeleteBatchImportJob(const DeleteBatchImportJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBatchImportJobOutcome(result.GetResultWithOwnership())
                            : DeleteBatchImportJobOutcome(std::move(result.GetError()));
}

DeleteBatchPredictionJobOutcome FraudDetectorClient::DeleteBatchPredictionJob(const DeleteBatchPredictionJobRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBatchPredictionJobOutcome(result.GetResultWithOwnership())
                            : DeleteBatchPredictionJobOutcome(std::move(result.GetError()));
}

DeleteDetectorOutcome FraudDetectorClient::DeleteDetector(const DeleteDetectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDetectorOutcome(result.GetResultWithOwnership()) : DeleteDetectorOutcome(std::move(result.GetError()));
}

DeleteDetectorVersionOutcome FraudDetectorClient::DeleteDetectorVersion(const DeleteDetectorVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDetectorVersionOutcome(result.GetResultWithOwnership())
                            : DeleteDetectorVersionOutcome(std::move(result.GetError()));
}

DeleteEntityTypeOutcome FraudDetectorClient::DeleteEntityType(const DeleteEntityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEntityTypeOutcome(result.GetResultWithOwnership())
                            : DeleteEntityTypeOutcome(std::move(result.GetError()));
}

DeleteEventOutcome FraudDetectorClient::DeleteEvent(const DeleteEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventOutcome(result.GetResultWithOwnership()) : DeleteEventOutcome(std::move(result.GetError()));
}

DeleteEventTypeOutcome FraudDetectorClient::DeleteEventType(const DeleteEventTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventTypeOutcome(result.GetResultWithOwnership())
                            : DeleteEventTypeOutcome(std::move(result.GetError()));
}

DeleteEventsByEventTypeOutcome FraudDetectorClient::DeleteEventsByEventType(const DeleteEventsByEventTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventsByEventTypeOutcome(result.GetResultWithOwnership())
                            : DeleteEventsByEventTypeOutcome(std::move(result.GetError()));
}

DeleteExternalModelOutcome FraudDetectorClient::DeleteExternalModel(const DeleteExternalModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteExternalModelOutcome(result.GetResultWithOwnership())
                            : DeleteExternalModelOutcome(std::move(result.GetError()));
}

DeleteLabelOutcome FraudDetectorClient::DeleteLabel(const DeleteLabelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLabelOutcome(result.GetResultWithOwnership()) : DeleteLabelOutcome(std::move(result.GetError()));
}

DeleteListOutcome FraudDetectorClient::DeleteList(const DeleteListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteListOutcome(result.GetResultWithOwnership()) : DeleteListOutcome(std::move(result.GetError()));
}

DeleteModelOutcome FraudDetectorClient::DeleteModel(const DeleteModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelOutcome(result.GetResultWithOwnership()) : DeleteModelOutcome(std::move(result.GetError()));
}

DeleteModelVersionOutcome FraudDetectorClient::DeleteModelVersion(const DeleteModelVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteModelVersionOutcome(result.GetResultWithOwnership())
                            : DeleteModelVersionOutcome(std::move(result.GetError()));
}

DeleteOutcomeOutcome FraudDetectorClient::DeleteOutcome(const DeleteOutcomeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOutcomeOutcome(result.GetResultWithOwnership()) : DeleteOutcomeOutcome(std::move(result.GetError()));
}

DeleteRuleOutcome FraudDetectorClient::DeleteRule(const DeleteRuleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRuleOutcome(result.GetResultWithOwnership()) : DeleteRuleOutcome(std::move(result.GetError()));
}

DeleteVariableOutcome FraudDetectorClient::DeleteVariable(const DeleteVariableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVariableOutcome(result.GetResultWithOwnership()) : DeleteVariableOutcome(std::move(result.GetError()));
}

DescribeDetectorOutcome FraudDetectorClient::DescribeDetector(const DescribeDetectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDetectorOutcome(result.GetResultWithOwnership())
                            : DescribeDetectorOutcome(std::move(result.GetError()));
}

DescribeModelVersionsOutcome FraudDetectorClient::DescribeModelVersions(const DescribeModelVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeModelVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeModelVersionsOutcome(std::move(result.GetError()));
}

GetBatchImportJobsOutcome FraudDetectorClient::GetBatchImportJobs(const GetBatchImportJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBatchImportJobsOutcome(result.GetResultWithOwnership())
                            : GetBatchImportJobsOutcome(std::move(result.GetError()));
}

GetBatchPredictionJobsOutcome FraudDetectorClient::GetBatchPredictionJobs(const GetBatchPredictionJobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBatchPredictionJobsOutcome(result.GetResultWithOwnership())
                            : GetBatchPredictionJobsOutcome(std::move(result.GetError()));
}

GetDeleteEventsByEventTypeStatusOutcome FraudDetectorClient::GetDeleteEventsByEventTypeStatus(
    const GetDeleteEventsByEventTypeStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeleteEventsByEventTypeStatusOutcome(result.GetResultWithOwnership())
                            : GetDeleteEventsByEventTypeStatusOutcome(std::move(result.GetError()));
}

GetDetectorVersionOutcome FraudDetectorClient::GetDetectorVersion(const GetDetectorVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDetectorVersionOutcome(result.GetResultWithOwnership())
                            : GetDetectorVersionOutcome(std::move(result.GetError()));
}

GetDetectorsOutcome FraudDetectorClient::GetDetectors(const GetDetectorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDetectorsOutcome(result.GetResultWithOwnership()) : GetDetectorsOutcome(std::move(result.GetError()));
}

GetEntityTypesOutcome FraudDetectorClient::GetEntityTypes(const GetEntityTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEntityTypesOutcome(result.GetResultWithOwnership()) : GetEntityTypesOutcome(std::move(result.GetError()));
}

GetEventOutcome FraudDetectorClient::GetEvent(const GetEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventOutcome(result.GetResultWithOwnership()) : GetEventOutcome(std::move(result.GetError()));
}

GetEventPredictionOutcome FraudDetectorClient::GetEventPrediction(const GetEventPredictionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventPredictionOutcome(result.GetResultWithOwnership())
                            : GetEventPredictionOutcome(std::move(result.GetError()));
}

GetEventPredictionMetadataOutcome FraudDetectorClient::GetEventPredictionMetadata(const GetEventPredictionMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventPredictionMetadataOutcome(result.GetResultWithOwnership())
                            : GetEventPredictionMetadataOutcome(std::move(result.GetError()));
}

GetEventTypesOutcome FraudDetectorClient::GetEventTypes(const GetEventTypesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetEventTypesOutcome(result.GetResultWithOwnership()) : GetEventTypesOutcome(std::move(result.GetError()));
}

GetExternalModelsOutcome FraudDetectorClient::GetExternalModels(const GetExternalModelsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetExternalModelsOutcome(result.GetResultWithOwnership())
                            : GetExternalModelsOutcome(std::move(result.GetError()));
}

GetKMSEncryptionKeyOutcome FraudDetectorClient::GetKMSEncryptionKey(const GetKMSEncryptionKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetKMSEncryptionKeyOutcome(result.GetResultWithOwnership())
                            : GetKMSEncryptionKeyOutcome(std::move(result.GetError()));
}

GetLabelsOutcome FraudDetectorClient::GetLabels(const GetLabelsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLabelsOutcome(result.GetResultWithOwnership()) : GetLabelsOutcome(std::move(result.GetError()));
}

GetListElementsOutcome FraudDetectorClient::GetListElements(const GetListElementsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetListElementsOutcome(result.GetResultWithOwnership())
                            : GetListElementsOutcome(std::move(result.GetError()));
}

GetListsMetadataOutcome FraudDetectorClient::GetListsMetadata(const GetListsMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetListsMetadataOutcome(result.GetResultWithOwnership())
                            : GetListsMetadataOutcome(std::move(result.GetError()));
}

GetModelVersionOutcome FraudDetectorClient::GetModelVersion(const GetModelVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetModelVersionOutcome(result.GetResultWithOwnership())
                            : GetModelVersionOutcome(std::move(result.GetError()));
}

GetModelsOutcome FraudDetectorClient::GetModels(const GetModelsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetModelsOutcome(result.GetResultWithOwnership()) : GetModelsOutcome(std::move(result.GetError()));
}

GetOutcomesOutcome FraudDetectorClient::GetOutcomes(const GetOutcomesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOutcomesOutcome(result.GetResultWithOwnership()) : GetOutcomesOutcome(std::move(result.GetError()));
}

GetRulesOutcome FraudDetectorClient::GetRules(const GetRulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRulesOutcome(result.GetResultWithOwnership()) : GetRulesOutcome(std::move(result.GetError()));
}

GetVariablesOutcome FraudDetectorClient::GetVariables(const GetVariablesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetVariablesOutcome(result.GetResultWithOwnership()) : GetVariablesOutcome(std::move(result.GetError()));
}

ListEventPredictionsOutcome FraudDetectorClient::ListEventPredictions(const ListEventPredictionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventPredictionsOutcome(result.GetResultWithOwnership())
                            : ListEventPredictionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome FraudDetectorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutDetectorOutcome FraudDetectorClient::PutDetector(const PutDetectorRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutDetectorOutcome(result.GetResultWithOwnership()) : PutDetectorOutcome(std::move(result.GetError()));
}

PutEntityTypeOutcome FraudDetectorClient::PutEntityType(const PutEntityTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEntityTypeOutcome(result.GetResultWithOwnership()) : PutEntityTypeOutcome(std::move(result.GetError()));
}

PutEventTypeOutcome FraudDetectorClient::PutEventType(const PutEventTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutEventTypeOutcome(result.GetResultWithOwnership()) : PutEventTypeOutcome(std::move(result.GetError()));
}

PutExternalModelOutcome FraudDetectorClient::PutExternalModel(const PutExternalModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutExternalModelOutcome(result.GetResultWithOwnership())
                            : PutExternalModelOutcome(std::move(result.GetError()));
}

PutKMSEncryptionKeyOutcome FraudDetectorClient::PutKMSEncryptionKey(const PutKMSEncryptionKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutKMSEncryptionKeyOutcome(result.GetResultWithOwnership())
                            : PutKMSEncryptionKeyOutcome(std::move(result.GetError()));
}

PutLabelOutcome FraudDetectorClient::PutLabel(const PutLabelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutLabelOutcome(result.GetResultWithOwnership()) : PutLabelOutcome(std::move(result.GetError()));
}

PutOutcomeOutcome FraudDetectorClient::PutOutcome(const PutOutcomeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutOutcomeOutcome(result.GetResultWithOwnership()) : PutOutcomeOutcome(std::move(result.GetError()));
}

SendEventOutcome FraudDetectorClient::SendEvent(const SendEventRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendEventOutcome(result.GetResultWithOwnership()) : SendEventOutcome(std::move(result.GetError()));
}

TagResourceOutcome FraudDetectorClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome FraudDetectorClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateDetectorVersionOutcome FraudDetectorClient::UpdateDetectorVersion(const UpdateDetectorVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDetectorVersionOutcome(result.GetResultWithOwnership())
                            : UpdateDetectorVersionOutcome(std::move(result.GetError()));
}

UpdateDetectorVersionMetadataOutcome FraudDetectorClient::UpdateDetectorVersionMetadata(
    const UpdateDetectorVersionMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDetectorVersionMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateDetectorVersionMetadataOutcome(std::move(result.GetError()));
}

UpdateDetectorVersionStatusOutcome FraudDetectorClient::UpdateDetectorVersionStatus(
    const UpdateDetectorVersionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDetectorVersionStatusOutcome(result.GetResultWithOwnership())
                            : UpdateDetectorVersionStatusOutcome(std::move(result.GetError()));
}

UpdateEventLabelOutcome FraudDetectorClient::UpdateEventLabel(const UpdateEventLabelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateEventLabelOutcome(result.GetResultWithOwnership())
                            : UpdateEventLabelOutcome(std::move(result.GetError()));
}

UpdateListOutcome FraudDetectorClient::UpdateList(const UpdateListRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateListOutcome(result.GetResultWithOwnership()) : UpdateListOutcome(std::move(result.GetError()));
}

UpdateModelOutcome FraudDetectorClient::UpdateModel(const UpdateModelRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateModelOutcome(result.GetResultWithOwnership()) : UpdateModelOutcome(std::move(result.GetError()));
}

UpdateModelVersionOutcome FraudDetectorClient::UpdateModelVersion(const UpdateModelVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateModelVersionOutcome(result.GetResultWithOwnership())
                            : UpdateModelVersionOutcome(std::move(result.GetError()));
}

UpdateModelVersionStatusOutcome FraudDetectorClient::UpdateModelVersionStatus(const UpdateModelVersionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateModelVersionStatusOutcome(result.GetResultWithOwnership())
                            : UpdateModelVersionStatusOutcome(std::move(result.GetError()));
}

UpdateRuleMetadataOutcome FraudDetectorClient::UpdateRuleMetadata(const UpdateRuleMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRuleMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateRuleMetadataOutcome(std::move(result.GetError()));
}

UpdateRuleVersionOutcome FraudDetectorClient::UpdateRuleVersion(const UpdateRuleVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRuleVersionOutcome(result.GetResultWithOwnership())
                            : UpdateRuleVersionOutcome(std::move(result.GetError()));
}

UpdateVariableOutcome FraudDetectorClient::UpdateVariable(const UpdateVariableRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateVariableOutcome(result.GetResultWithOwnership()) : UpdateVariableOutcome(std::move(result.GetError()));
}
