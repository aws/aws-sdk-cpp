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
#include <aws/lookoutequipment/LookoutEquipmentClient.h>
#include <aws/lookoutequipment/LookoutEquipmentEndpointProvider.h>
#include <aws/lookoutequipment/LookoutEquipmentErrorMarshaller.h>
#include <aws/lookoutequipment/model/CreateDatasetRequest.h>
#include <aws/lookoutequipment/model/CreateInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/CreateLabelGroupRequest.h>
#include <aws/lookoutequipment/model/CreateLabelRequest.h>
#include <aws/lookoutequipment/model/CreateModelRequest.h>
#include <aws/lookoutequipment/model/CreateRetrainingSchedulerRequest.h>
#include <aws/lookoutequipment/model/DeleteDatasetRequest.h>
#include <aws/lookoutequipment/model/DeleteInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/DeleteLabelGroupRequest.h>
#include <aws/lookoutequipment/model/DeleteLabelRequest.h>
#include <aws/lookoutequipment/model/DeleteModelRequest.h>
#include <aws/lookoutequipment/model/DeleteResourcePolicyRequest.h>
#include <aws/lookoutequipment/model/DeleteRetrainingSchedulerRequest.h>
#include <aws/lookoutequipment/model/DescribeDataIngestionJobRequest.h>
#include <aws/lookoutequipment/model/DescribeDatasetRequest.h>
#include <aws/lookoutequipment/model/DescribeInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/DescribeLabelGroupRequest.h>
#include <aws/lookoutequipment/model/DescribeLabelRequest.h>
#include <aws/lookoutequipment/model/DescribeModelRequest.h>
#include <aws/lookoutequipment/model/DescribeModelVersionRequest.h>
#include <aws/lookoutequipment/model/DescribeResourcePolicyRequest.h>
#include <aws/lookoutequipment/model/DescribeRetrainingSchedulerRequest.h>
#include <aws/lookoutequipment/model/ImportDatasetRequest.h>
#include <aws/lookoutequipment/model/ImportModelVersionRequest.h>
#include <aws/lookoutequipment/model/ListDataIngestionJobsRequest.h>
#include <aws/lookoutequipment/model/ListDatasetsRequest.h>
#include <aws/lookoutequipment/model/ListInferenceEventsRequest.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsRequest.h>
#include <aws/lookoutequipment/model/ListInferenceSchedulersRequest.h>
#include <aws/lookoutequipment/model/ListLabelGroupsRequest.h>
#include <aws/lookoutequipment/model/ListLabelsRequest.h>
#include <aws/lookoutequipment/model/ListModelVersionsRequest.h>
#include <aws/lookoutequipment/model/ListModelsRequest.h>
#include <aws/lookoutequipment/model/ListRetrainingSchedulersRequest.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsRequest.h>
#include <aws/lookoutequipment/model/ListTagsForResourceRequest.h>
#include <aws/lookoutequipment/model/PutResourcePolicyRequest.h>
#include <aws/lookoutequipment/model/StartDataIngestionJobRequest.h>
#include <aws/lookoutequipment/model/StartInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/StartRetrainingSchedulerRequest.h>
#include <aws/lookoutequipment/model/StopInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/StopRetrainingSchedulerRequest.h>
#include <aws/lookoutequipment/model/TagResourceRequest.h>
#include <aws/lookoutequipment/model/UntagResourceRequest.h>
#include <aws/lookoutequipment/model/UpdateActiveModelVersionRequest.h>
#include <aws/lookoutequipment/model/UpdateInferenceSchedulerRequest.h>
#include <aws/lookoutequipment/model/UpdateLabelGroupRequest.h>
#include <aws/lookoutequipment/model/UpdateModelRequest.h>
#include <aws/lookoutequipment/model/UpdateRetrainingSchedulerRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LookoutEquipment;
using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LookoutEquipment {
const char SERVICE_NAME[] = "lookoutequipment";
const char ALLOCATION_TAG[] = "LookoutEquipmentClient";
}  // namespace LookoutEquipment
}  // namespace Aws
const char* LookoutEquipmentClient::GetServiceName() { return SERVICE_NAME; }
const char* LookoutEquipmentClient::GetAllocationTag() { return ALLOCATION_TAG; }

LookoutEquipmentClient::LookoutEquipmentClient(const LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration,
                                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LookoutEquipmentClient::LookoutEquipmentClient(const AWSCredentials& credentials,
                                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider,
                                               const LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LookoutEquipmentClient::LookoutEquipmentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<LookoutEquipmentEndpointProviderBase> endpointProvider,
                                               const LookoutEquipment::LookoutEquipmentClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LookoutEquipmentClient::LookoutEquipmentClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LookoutEquipmentClient::LookoutEquipmentClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LookoutEquipmentClient::LookoutEquipmentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LookoutEquipmentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LookoutEquipmentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LookoutEquipmentClient::~LookoutEquipmentClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LookoutEquipmentEndpointProviderBase>& LookoutEquipmentClient::accessEndpointProvider() { return m_endpointProvider; }

void LookoutEquipmentClient::init(const LookoutEquipment::LookoutEquipmentClientConfiguration& config) {
  AWSClient::SetServiceClientName("LookoutEquipment");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lookoutequipment");
}

void LookoutEquipmentClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LookoutEquipmentClient::InvokeOperationOutcome LookoutEquipmentClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateDatasetOutcome LookoutEquipmentClient::CreateDataset(const CreateDatasetRequest& request) const {
  return CreateDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInferenceSchedulerOutcome LookoutEquipmentClient::CreateInferenceScheduler(const CreateInferenceSchedulerRequest& request) const {
  return CreateInferenceSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLabelOutcome LookoutEquipmentClient::CreateLabel(const CreateLabelRequest& request) const {
  return CreateLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLabelGroupOutcome LookoutEquipmentClient::CreateLabelGroup(const CreateLabelGroupRequest& request) const {
  return CreateLabelGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateModelOutcome LookoutEquipmentClient::CreateModel(const CreateModelRequest& request) const {
  return CreateModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRetrainingSchedulerOutcome LookoutEquipmentClient::CreateRetrainingScheduler(const CreateRetrainingSchedulerRequest& request) const {
  return CreateRetrainingSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetOutcome LookoutEquipmentClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  return DeleteDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInferenceSchedulerOutcome LookoutEquipmentClient::DeleteInferenceScheduler(const DeleteInferenceSchedulerRequest& request) const {
  return DeleteInferenceSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLabelOutcome LookoutEquipmentClient::DeleteLabel(const DeleteLabelRequest& request) const {
  return DeleteLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLabelGroupOutcome LookoutEquipmentClient::DeleteLabelGroup(const DeleteLabelGroupRequest& request) const {
  return DeleteLabelGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteModelOutcome LookoutEquipmentClient::DeleteModel(const DeleteModelRequest& request) const {
  return DeleteModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome LookoutEquipmentClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRetrainingSchedulerOutcome LookoutEquipmentClient::DeleteRetrainingScheduler(const DeleteRetrainingSchedulerRequest& request) const {
  return DeleteRetrainingSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDataIngestionJobOutcome LookoutEquipmentClient::DescribeDataIngestionJob(const DescribeDataIngestionJobRequest& request) const {
  return DescribeDataIngestionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDatasetOutcome LookoutEquipmentClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  return DescribeDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInferenceSchedulerOutcome LookoutEquipmentClient::DescribeInferenceScheduler(
    const DescribeInferenceSchedulerRequest& request) const {
  return DescribeInferenceSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLabelOutcome LookoutEquipmentClient::DescribeLabel(const DescribeLabelRequest& request) const {
  return DescribeLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLabelGroupOutcome LookoutEquipmentClient::DescribeLabelGroup(const DescribeLabelGroupRequest& request) const {
  return DescribeLabelGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelOutcome LookoutEquipmentClient::DescribeModel(const DescribeModelRequest& request) const {
  return DescribeModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeModelVersionOutcome LookoutEquipmentClient::DescribeModelVersion(const DescribeModelVersionRequest& request) const {
  return DescribeModelVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourcePolicyOutcome LookoutEquipmentClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const {
  return DescribeResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRetrainingSchedulerOutcome LookoutEquipmentClient::DescribeRetrainingScheduler(
    const DescribeRetrainingSchedulerRequest& request) const {
  return DescribeRetrainingSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportDatasetOutcome LookoutEquipmentClient::ImportDataset(const ImportDatasetRequest& request) const {
  return ImportDatasetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportModelVersionOutcome LookoutEquipmentClient::ImportModelVersion(const ImportModelVersionRequest& request) const {
  return ImportModelVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataIngestionJobsOutcome LookoutEquipmentClient::ListDataIngestionJobs(const ListDataIngestionJobsRequest& request) const {
  return ListDataIngestionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatasetsOutcome LookoutEquipmentClient::ListDatasets(const ListDatasetsRequest& request) const {
  return ListDatasetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInferenceEventsOutcome LookoutEquipmentClient::ListInferenceEvents(const ListInferenceEventsRequest& request) const {
  return ListInferenceEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInferenceExecutionsOutcome LookoutEquipmentClient::ListInferenceExecutions(const ListInferenceExecutionsRequest& request) const {
  return ListInferenceExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInferenceSchedulersOutcome LookoutEquipmentClient::ListInferenceSchedulers(const ListInferenceSchedulersRequest& request) const {
  return ListInferenceSchedulersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLabelGroupsOutcome LookoutEquipmentClient::ListLabelGroups(const ListLabelGroupsRequest& request) const {
  return ListLabelGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLabelsOutcome LookoutEquipmentClient::ListLabels(const ListLabelsRequest& request) const {
  return ListLabelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelVersionsOutcome LookoutEquipmentClient::ListModelVersions(const ListModelVersionsRequest& request) const {
  return ListModelVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListModelsOutcome LookoutEquipmentClient::ListModels(const ListModelsRequest& request) const {
  return ListModelsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRetrainingSchedulersOutcome LookoutEquipmentClient::ListRetrainingSchedulers(const ListRetrainingSchedulersRequest& request) const {
  return ListRetrainingSchedulersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSensorStatisticsOutcome LookoutEquipmentClient::ListSensorStatistics(const ListSensorStatisticsRequest& request) const {
  return ListSensorStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome LookoutEquipmentClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome LookoutEquipmentClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDataIngestionJobOutcome LookoutEquipmentClient::StartDataIngestionJob(const StartDataIngestionJobRequest& request) const {
  return StartDataIngestionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartInferenceSchedulerOutcome LookoutEquipmentClient::StartInferenceScheduler(const StartInferenceSchedulerRequest& request) const {
  return StartInferenceSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRetrainingSchedulerOutcome LookoutEquipmentClient::StartRetrainingScheduler(const StartRetrainingSchedulerRequest& request) const {
  return StartRetrainingSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopInferenceSchedulerOutcome LookoutEquipmentClient::StopInferenceScheduler(const StopInferenceSchedulerRequest& request) const {
  return StopInferenceSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRetrainingSchedulerOutcome LookoutEquipmentClient::StopRetrainingScheduler(const StopRetrainingSchedulerRequest& request) const {
  return StopRetrainingSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LookoutEquipmentClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome LookoutEquipmentClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateActiveModelVersionOutcome LookoutEquipmentClient::UpdateActiveModelVersion(const UpdateActiveModelVersionRequest& request) const {
  return UpdateActiveModelVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInferenceSchedulerOutcome LookoutEquipmentClient::UpdateInferenceScheduler(const UpdateInferenceSchedulerRequest& request) const {
  return UpdateInferenceSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLabelGroupOutcome LookoutEquipmentClient::UpdateLabelGroup(const UpdateLabelGroupRequest& request) const {
  return UpdateLabelGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateModelOutcome LookoutEquipmentClient::UpdateModel(const UpdateModelRequest& request) const {
  return UpdateModelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRetrainingSchedulerOutcome LookoutEquipmentClient::UpdateRetrainingScheduler(const UpdateRetrainingSchedulerRequest& request) const {
  return UpdateRetrainingSchedulerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
