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
#include <aws/datapipeline/DataPipelineClient.h>
#include <aws/datapipeline/DataPipelineEndpointProvider.h>
#include <aws/datapipeline/DataPipelineErrorMarshaller.h>
#include <aws/datapipeline/model/ActivatePipelineRequest.h>
#include <aws/datapipeline/model/AddTagsRequest.h>
#include <aws/datapipeline/model/CreatePipelineRequest.h>
#include <aws/datapipeline/model/DeactivatePipelineRequest.h>
#include <aws/datapipeline/model/DeletePipelineRequest.h>
#include <aws/datapipeline/model/DescribeObjectsRequest.h>
#include <aws/datapipeline/model/DescribePipelinesRequest.h>
#include <aws/datapipeline/model/EvaluateExpressionRequest.h>
#include <aws/datapipeline/model/GetPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/ListPipelinesRequest.h>
#include <aws/datapipeline/model/PollForTaskRequest.h>
#include <aws/datapipeline/model/PutPipelineDefinitionRequest.h>
#include <aws/datapipeline/model/QueryObjectsRequest.h>
#include <aws/datapipeline/model/RemoveTagsRequest.h>
#include <aws/datapipeline/model/ReportTaskProgressRequest.h>
#include <aws/datapipeline/model/ReportTaskRunnerHeartbeatRequest.h>
#include <aws/datapipeline/model/SetStatusRequest.h>
#include <aws/datapipeline/model/SetTaskStatusRequest.h>
#include <aws/datapipeline/model/ValidatePipelineDefinitionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataPipeline;
using namespace Aws::DataPipeline::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DataPipeline {
const char SERVICE_NAME[] = "datapipeline";
const char ALLOCATION_TAG[] = "DataPipelineClient";
}  // namespace DataPipeline
}  // namespace Aws
const char* DataPipelineClient::GetServiceName() { return SERVICE_NAME; }
const char* DataPipelineClient::GetAllocationTag() { return ALLOCATION_TAG; }

DataPipelineClient::DataPipelineClient(const DataPipeline::DataPipelineClientConfiguration& clientConfiguration,
                                       std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const AWSCredentials& credentials,
                                       std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider,
                                       const DataPipeline::DataPipelineClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<DataPipelineEndpointProviderBase> endpointProvider,
                                       const DataPipeline::DataPipelineClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DataPipelineClient::DataPipelineClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataPipelineClient::DataPipelineClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataPipelineErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataPipelineEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DataPipelineClient::~DataPipelineClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DataPipelineEndpointProviderBase>& DataPipelineClient::accessEndpointProvider() { return m_endpointProvider; }

void DataPipelineClient::init(const DataPipeline::DataPipelineClientConfiguration& config) {
  AWSClient::SetServiceClientName("Data Pipeline");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "datapipeline");
}

void DataPipelineClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DataPipelineClient::InvokeOperationOutcome DataPipelineClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

ActivatePipelineOutcome DataPipelineClient::ActivatePipeline(const ActivatePipelineRequest& request) const {
  return ActivatePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsOutcome DataPipelineClient::AddTags(const AddTagsRequest& request) const {
  return AddTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePipelineOutcome DataPipelineClient::CreatePipeline(const CreatePipelineRequest& request) const {
  return CreatePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivatePipelineOutcome DataPipelineClient::DeactivatePipeline(const DeactivatePipelineRequest& request) const {
  return DeactivatePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePipelineOutcome DataPipelineClient::DeletePipeline(const DeletePipelineRequest& request) const {
  return DeletePipelineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeObjectsOutcome DataPipelineClient::DescribeObjects(const DescribeObjectsRequest& request) const {
  return DescribeObjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePipelinesOutcome DataPipelineClient::DescribePipelines(const DescribePipelinesRequest& request) const {
  return DescribePipelinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EvaluateExpressionOutcome DataPipelineClient::EvaluateExpression(const EvaluateExpressionRequest& request) const {
  return EvaluateExpressionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPipelineDefinitionOutcome DataPipelineClient::GetPipelineDefinition(const GetPipelineDefinitionRequest& request) const {
  return GetPipelineDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPipelinesOutcome DataPipelineClient::ListPipelines(const ListPipelinesRequest& request) const {
  return ListPipelinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PollForTaskOutcome DataPipelineClient::PollForTask(const PollForTaskRequest& request) const {
  return PollForTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutPipelineDefinitionOutcome DataPipelineClient::PutPipelineDefinition(const PutPipelineDefinitionRequest& request) const {
  return PutPipelineDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

QueryObjectsOutcome DataPipelineClient::QueryObjects(const QueryObjectsRequest& request) const {
  return QueryObjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsOutcome DataPipelineClient::RemoveTags(const RemoveTagsRequest& request) const {
  return RemoveTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReportTaskProgressOutcome DataPipelineClient::ReportTaskProgress(const ReportTaskProgressRequest& request) const {
  return ReportTaskProgressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReportTaskRunnerHeartbeatOutcome DataPipelineClient::ReportTaskRunnerHeartbeat(const ReportTaskRunnerHeartbeatRequest& request) const {
  return ReportTaskRunnerHeartbeatOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetStatusOutcome DataPipelineClient::SetStatus(const SetStatusRequest& request) const {
  return SetStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetTaskStatusOutcome DataPipelineClient::SetTaskStatus(const SetTaskStatusRequest& request) const {
  return SetTaskStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ValidatePipelineDefinitionOutcome DataPipelineClient::ValidatePipelineDefinition(const ValidatePipelineDefinitionRequest& request) const {
  return ValidatePipelineDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
