/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/BedrockAgentCoreClient.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreEndpointProvider.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrorMarshaller.h>
#include <aws/bedrock-agentcore/model/BatchCreateMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/BatchDeleteMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/BatchUpdateMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/CompleteResourceTokenAuthRequest.h>
#include <aws/bedrock-agentcore/model/CreateEventRequest.h>
#include <aws/bedrock-agentcore/model/DeleteEventRequest.h>
#include <aws/bedrock-agentcore/model/DeleteMemoryRecordRequest.h>
#include <aws/bedrock-agentcore/model/EvaluateRequest.h>
#include <aws/bedrock-agentcore/model/GetAgentCardRequest.h>
#include <aws/bedrock-agentcore/model/GetBrowserSessionRequest.h>
#include <aws/bedrock-agentcore/model/GetCodeInterpreterSessionRequest.h>
#include <aws/bedrock-agentcore/model/GetEventRequest.h>
#include <aws/bedrock-agentcore/model/GetMemoryRecordRequest.h>
#include <aws/bedrock-agentcore/model/GetResourceApiKeyRequest.h>
#include <aws/bedrock-agentcore/model/GetResourceOauth2TokenRequest.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForJWTRequest.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForUserIdRequest.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenRequest.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeCommandRequest.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeRequest.h>
#include <aws/bedrock-agentcore/model/InvokeBrowserRequest.h>
#include <aws/bedrock-agentcore/model/InvokeCodeInterpreterRequest.h>
#include <aws/bedrock-agentcore/model/InvokeHarnessRequest.h>
#include <aws/bedrock-agentcore/model/ListActorsRequest.h>
#include <aws/bedrock-agentcore/model/ListBrowserSessionsRequest.h>
#include <aws/bedrock-agentcore/model/ListCodeInterpreterSessionsRequest.h>
#include <aws/bedrock-agentcore/model/ListEventsRequest.h>
#include <aws/bedrock-agentcore/model/ListMemoryExtractionJobsRequest.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/ListSessionsRequest.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/SaveBrowserSessionProfileRequest.h>
#include <aws/bedrock-agentcore/model/SearchRegistryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/StartBrowserSessionRequest.h>
#include <aws/bedrock-agentcore/model/StartCodeInterpreterSessionRequest.h>
#include <aws/bedrock-agentcore/model/StartMemoryExtractionJobRequest.h>
#include <aws/bedrock-agentcore/model/StopBrowserSessionRequest.h>
#include <aws/bedrock-agentcore/model/StopCodeInterpreterSessionRequest.h>
#include <aws/bedrock-agentcore/model/StopRuntimeSessionRequest.h>
#include <aws/bedrock-agentcore/model/UpdateBrowserStreamRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockAgentCore;
using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BedrockAgentCore {
const char SERVICE_NAME[] = "bedrock-agentcore";
const char ALLOCATION_TAG[] = "BedrockAgentCoreClient";
}  // namespace BedrockAgentCore
}  // namespace Aws
const char* BedrockAgentCoreClient::GetServiceName() { return SERVICE_NAME; }
const char* BedrockAgentCoreClient::GetAllocationTag() { return ALLOCATION_TAG; }

BedrockAgentCoreClient::BedrockAgentCoreClient(const BedrockAgentCore::BedrockAgentCoreClientConfiguration& clientConfiguration,
                                               std::shared_ptr<BedrockAgentCoreEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BedrockAgentCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreClient::BedrockAgentCoreClient(const AWSCredentials& credentials,
                                               std::shared_ptr<BedrockAgentCoreEndpointProviderBase> endpointProvider,
                                               const BedrockAgentCore::BedrockAgentCoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BedrockAgentCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreClient::BedrockAgentCoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<BedrockAgentCoreEndpointProviderBase> endpointProvider,
                                               const BedrockAgentCore::BedrockAgentCoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BedrockAgentCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BedrockAgentCoreClient::BedrockAgentCoreClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BedrockAgentCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreClient::BedrockAgentCoreClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BedrockAgentCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BedrockAgentCoreClient::BedrockAgentCoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BedrockAgentCoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BedrockAgentCoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BedrockAgentCoreClient::~BedrockAgentCoreClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockAgentCoreEndpointProviderBase>& BedrockAgentCoreClient::accessEndpointProvider() { return m_endpointProvider; }

void BedrockAgentCoreClient::init(const BedrockAgentCore::BedrockAgentCoreClientConfiguration& config) {
  AWSClient::SetServiceClientName("Bedrock AgentCore");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "bedrock-agentcore");
}

void BedrockAgentCoreClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BedrockAgentCoreClient::InvokeOperationOutcome BedrockAgentCoreClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchCreateMemoryRecordsOutcome BedrockAgentCoreClient::BatchCreateMemoryRecords(const BatchCreateMemoryRecordsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateMemoryRecords", "Required field: MemoryId, is not set");
    return BatchCreateMemoryRecordsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memoryRecords/batchCreate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateMemoryRecordsOutcome(result.GetResultWithOwnership())
                            : BatchCreateMemoryRecordsOutcome(std::move(result.GetError()));
}

BatchDeleteMemoryRecordsOutcome BedrockAgentCoreClient::BatchDeleteMemoryRecords(const BatchDeleteMemoryRecordsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteMemoryRecords", "Required field: MemoryId, is not set");
    return BatchDeleteMemoryRecordsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memoryRecords/batchDelete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteMemoryRecordsOutcome(result.GetResultWithOwnership())
                            : BatchDeleteMemoryRecordsOutcome(std::move(result.GetError()));
}

BatchUpdateMemoryRecordsOutcome BedrockAgentCoreClient::BatchUpdateMemoryRecords(const BatchUpdateMemoryRecordsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateMemoryRecords", "Required field: MemoryId, is not set");
    return BatchUpdateMemoryRecordsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memoryRecords/batchUpdate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateMemoryRecordsOutcome(result.GetResultWithOwnership())
                            : BatchUpdateMemoryRecordsOutcome(std::move(result.GetError()));
}

CompleteResourceTokenAuthOutcome BedrockAgentCoreClient::CompleteResourceTokenAuth(const CompleteResourceTokenAuthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/CompleteResourceTokenAuth");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CompleteResourceTokenAuthOutcome(result.GetResultWithOwnership())
                            : CompleteResourceTokenAuthOutcome(std::move(result.GetError()));
}

CreateEventOutcome BedrockAgentCoreClient::CreateEvent(const CreateEventRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateEvent", "Required field: MemoryId, is not set");
    return CreateEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventOutcome(result.GetResultWithOwnership()) : CreateEventOutcome(std::move(result.GetError()));
}

DeleteEventOutcome BedrockAgentCoreClient::DeleteEvent(const DeleteEventRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEvent", "Required field: MemoryId, is not set");
    return DeleteEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MemoryId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEvent", "Required field: SessionId, is not set");
    return DeleteEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SessionId]", false));
  }
  if (!request.EventIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEvent", "Required field: EventId, is not set");
    return DeleteEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EventId]", false));
  }
  if (!request.ActorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEvent", "Required field: ActorId, is not set");
    return DeleteEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ActorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEventOutcome(result.GetResultWithOwnership()) : DeleteEventOutcome(std::move(result.GetError()));
}

DeleteMemoryRecordOutcome BedrockAgentCoreClient::DeleteMemoryRecord(const DeleteMemoryRecordRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMemoryRecord", "Required field: MemoryId, is not set");
    return DeleteMemoryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }
  if (!request.MemoryRecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMemoryRecord", "Required field: MemoryRecordId, is not set");
    return DeleteMemoryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryRecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memoryRecords/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMemoryRecordOutcome(result.GetResultWithOwnership())
                            : DeleteMemoryRecordOutcome(std::move(result.GetError()));
}

EvaluateOutcome BedrockAgentCoreClient::Evaluate(const EvaluateRequest& request) const {
  if (!request.EvaluatorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Evaluate", "Required field: EvaluatorId, is not set");
    return EvaluateOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EvaluatorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/evaluations/evaluate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEvaluatorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EvaluateOutcome(result.GetResultWithOwnership()) : EvaluateOutcome(std::move(result.GetError()));
}

GetAgentCardOutcome BedrockAgentCoreClient::GetAgentCard(const GetAgentCardRequest& request) const {
  if (!request.AgentRuntimeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentCard", "Required field: AgentRuntimeArn, is not set");
    return GetAgentCardOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentRuntimeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invocations/.well-known/agent-card.json");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentCardOutcome(result.GetResultWithOwnership()) : GetAgentCardOutcome(std::move(result.GetError()));
}

GetBrowserSessionOutcome BedrockAgentCoreClient::GetBrowserSession(const GetBrowserSessionRequest& request) const {
  if (!request.BrowserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrowserSession", "Required field: BrowserIdentifier, is not set");
    return GetBrowserSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserIdentifier]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBrowserSession", "Required field: SessionId, is not set");
    return GetBrowserSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBrowserSessionOutcome(result.GetResultWithOwnership())
                            : GetBrowserSessionOutcome(std::move(result.GetError()));
}

GetCodeInterpreterSessionOutcome BedrockAgentCoreClient::GetCodeInterpreterSession(const GetCodeInterpreterSessionRequest& request) const {
  if (!request.CodeInterpreterIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeInterpreterSession", "Required field: CodeInterpreterIdentifier, is not set");
    return GetCodeInterpreterSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeInterpreterIdentifier]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodeInterpreterSession", "Required field: SessionId, is not set");
    return GetCodeInterpreterSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeInterpreterIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCodeInterpreterSessionOutcome(result.GetResultWithOwnership())
                            : GetCodeInterpreterSessionOutcome(std::move(result.GetError()));
}

GetEventOutcome BedrockAgentCoreClient::GetEvent(const GetEventRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvent", "Required field: MemoryId, is not set");
    return GetEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MemoryId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvent", "Required field: SessionId, is not set");
    return GetEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SessionId]", false));
  }
  if (!request.ActorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvent", "Required field: ActorId, is not set");
    return GetEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ActorId]", false));
  }
  if (!request.EventIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEvent", "Required field: EventId, is not set");
    return GetEventOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EventId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEventOutcome(result.GetResultWithOwnership()) : GetEventOutcome(std::move(result.GetError()));
}

GetMemoryRecordOutcome BedrockAgentCoreClient::GetMemoryRecord(const GetMemoryRecordRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMemoryRecord", "Required field: MemoryId, is not set");
    return GetMemoryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }
  if (!request.MemoryRecordIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMemoryRecord", "Required field: MemoryRecordId, is not set");
    return GetMemoryRecordOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryRecordId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memoryRecord/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryRecordId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMemoryRecordOutcome(result.GetResultWithOwnership())
                            : GetMemoryRecordOutcome(std::move(result.GetError()));
}

GetResourceApiKeyOutcome BedrockAgentCoreClient::GetResourceApiKey(const GetResourceApiKeyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/api-key");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceApiKeyOutcome(result.GetResultWithOwnership())
                            : GetResourceApiKeyOutcome(std::move(result.GetError()));
}

GetResourceOauth2TokenOutcome BedrockAgentCoreClient::GetResourceOauth2Token(const GetResourceOauth2TokenRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/oauth2/token");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceOauth2TokenOutcome(result.GetResultWithOwnership())
                            : GetResourceOauth2TokenOutcome(std::move(result.GetError()));
}

GetWorkloadAccessTokenOutcome BedrockAgentCoreClient::GetWorkloadAccessToken(const GetWorkloadAccessTokenRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetWorkloadAccessToken");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkloadAccessTokenOutcome(result.GetResultWithOwnership())
                            : GetWorkloadAccessTokenOutcome(std::move(result.GetError()));
}

GetWorkloadAccessTokenForJWTOutcome BedrockAgentCoreClient::GetWorkloadAccessTokenForJWT(
    const GetWorkloadAccessTokenForJWTRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetWorkloadAccessTokenForJWT");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkloadAccessTokenForJWTOutcome(result.GetResultWithOwnership())
                            : GetWorkloadAccessTokenForJWTOutcome(std::move(result.GetError()));
}

GetWorkloadAccessTokenForUserIdOutcome BedrockAgentCoreClient::GetWorkloadAccessTokenForUserId(
    const GetWorkloadAccessTokenForUserIdRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/GetWorkloadAccessTokenForUserId");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkloadAccessTokenForUserIdOutcome(result.GetResultWithOwnership())
                            : GetWorkloadAccessTokenForUserIdOutcome(std::move(result.GetError()));
}

InvokeAgentRuntimeOutcome BedrockAgentCoreClient::InvokeAgentRuntime(const InvokeAgentRuntimeRequest& request) const {
  AWS_OPERATION_GUARD(InvokeAgentRuntime);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeAgentRuntime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentRuntimeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeAgentRuntime", "Required field: AgentRuntimeArn, is not set");
    return InvokeAgentRuntimeOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeAgentRuntime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeAgentRuntime, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeAgentRuntime",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeAgentRuntimeOutcome>(
      [&]() -> InvokeAgentRuntimeOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeAgentRuntime, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/invocations");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? InvokeAgentRuntimeOutcome(result.GetResultWithOwnership())
                                  : InvokeAgentRuntimeOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeAgentRuntimeCommandOutcome BedrockAgentCoreClient::InvokeAgentRuntimeCommand(InvokeAgentRuntimeCommandRequest& request) const {
  AWS_OPERATION_GUARD(InvokeAgentRuntimeCommand);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeAgentRuntimeCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentRuntimeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeAgentRuntimeCommand", "Required field: AgentRuntimeArn, is not set");
    return InvokeAgentRuntimeCommandOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeAgentRuntimeCommand, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeAgentRuntimeCommand, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeAgentRuntimeCommand",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeAgentRuntimeCommandOutcome>(
      [&]() -> InvokeAgentRuntimeCommandOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeAgentRuntimeCommand, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeArn());
        endpointResolutionOutcome.GetResult().AddPathSegments("/commands");
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeAgentRuntimeCommand", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? InvokeAgentRuntimeCommandOutcome(result.GetResultWithOwnership())
                                  : InvokeAgentRuntimeCommandOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeBrowserOutcome BedrockAgentCoreClient::InvokeBrowser(const InvokeBrowserRequest& request) const {
  if (!request.BrowserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeBrowser", "Required field: BrowserIdentifier, is not set");
    return InvokeBrowserOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserIdentifier]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeBrowser", "Required field: SessionId, is not set");
    return InvokeBrowserOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/invoke");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InvokeBrowserOutcome(result.GetResultWithOwnership()) : InvokeBrowserOutcome(std::move(result.GetError()));
}

InvokeCodeInterpreterOutcome BedrockAgentCoreClient::InvokeCodeInterpreter(InvokeCodeInterpreterRequest& request) const {
  AWS_OPERATION_GUARD(InvokeCodeInterpreter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeCodeInterpreter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CodeInterpreterIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeCodeInterpreter", "Required field: CodeInterpreterIdentifier, is not set");
    return InvokeCodeInterpreterOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeInterpreterIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeCodeInterpreter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeCodeInterpreter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeCodeInterpreter",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeCodeInterpreterOutcome>(
      [&]() -> InvokeCodeInterpreterOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeCodeInterpreter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeInterpreterIdentifier());
        endpointResolutionOutcome.GetResult().AddPathSegments("/tools/invoke");
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeCodeInterpreter", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? InvokeCodeInterpreterOutcome(result.GetResultWithOwnership())
                                  : InvokeCodeInterpreterOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeHarnessOutcome BedrockAgentCoreClient::InvokeHarness(InvokeHarnessRequest& request) const {
  AWS_OPERATION_GUARD(InvokeHarness);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeHarness, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HarnessArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeHarness", "Required field: HarnessArn, is not set");
    return InvokeHarnessOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HarnessArn]", false));
  }
  if (!request.RuntimeSessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeHarness", "Required field: RuntimeSessionId, is not set");
    return InvokeHarnessOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuntimeSessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeHarness, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeHarness, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeHarness",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeHarnessOutcome>(
      [&]() -> InvokeHarnessOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeHarness, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/harnesses/invoke");
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeHarness", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? InvokeHarnessOutcome(result.GetResultWithOwnership())
                                  : InvokeHarnessOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListActorsOutcome BedrockAgentCoreClient::ListActors(const ListActorsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListActors", "Required field: MemoryId, is not set");
    return ListActorsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListActorsOutcome(result.GetResultWithOwnership()) : ListActorsOutcome(std::move(result.GetError()));
}

ListBrowserSessionsOutcome BedrockAgentCoreClient::ListBrowserSessions(const ListBrowserSessionsRequest& request) const {
  if (!request.BrowserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBrowserSessions", "Required field: BrowserIdentifier, is not set");
    return ListBrowserSessionsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBrowserSessionsOutcome(result.GetResultWithOwnership())
                            : ListBrowserSessionsOutcome(std::move(result.GetError()));
}

ListCodeInterpreterSessionsOutcome BedrockAgentCoreClient::ListCodeInterpreterSessions(
    const ListCodeInterpreterSessionsRequest& request) const {
  if (!request.CodeInterpreterIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodeInterpreterSessions", "Required field: CodeInterpreterIdentifier, is not set");
    return ListCodeInterpreterSessionsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeInterpreterIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeInterpreterIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCodeInterpreterSessionsOutcome(result.GetResultWithOwnership())
                            : ListCodeInterpreterSessionsOutcome(std::move(result.GetError()));
}

ListEventsOutcome BedrockAgentCoreClient::ListEvents(const ListEventsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEvents", "Required field: MemoryId, is not set");
    return ListEventsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MemoryId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEvents", "Required field: SessionId, is not set");
    return ListEventsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SessionId]", false));
  }
  if (!request.ActorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEvents", "Required field: ActorId, is not set");
    return ListEventsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ActorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventsOutcome(result.GetResultWithOwnership()) : ListEventsOutcome(std::move(result.GetError()));
}

ListMemoryExtractionJobsOutcome BedrockAgentCoreClient::ListMemoryExtractionJobs(const ListMemoryExtractionJobsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMemoryExtractionJobs", "Required field: MemoryId, is not set");
    return ListMemoryExtractionJobsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/extractionJobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMemoryExtractionJobsOutcome(result.GetResultWithOwnership())
                            : ListMemoryExtractionJobsOutcome(std::move(result.GetError()));
}

ListMemoryRecordsOutcome BedrockAgentCoreClient::ListMemoryRecords(const ListMemoryRecordsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMemoryRecords", "Required field: MemoryId, is not set");
    return ListMemoryRecordsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/memoryRecords");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMemoryRecordsOutcome(result.GetResultWithOwnership())
                            : ListMemoryRecordsOutcome(std::move(result.GetError()));
}

ListSessionsOutcome BedrockAgentCoreClient::ListSessions(const ListSessionsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: MemoryId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MemoryId]", false));
  }
  if (!request.ActorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: ActorId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ActorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSessionsOutcome(result.GetResultWithOwnership()) : ListSessionsOutcome(std::move(result.GetError()));
}

RetrieveMemoryRecordsOutcome BedrockAgentCoreClient::RetrieveMemoryRecords(const RetrieveMemoryRecordsRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RetrieveMemoryRecords", "Required field: MemoryId, is not set");
    return RetrieveMemoryRecordsOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/retrieve");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RetrieveMemoryRecordsOutcome(result.GetResultWithOwnership())
                            : RetrieveMemoryRecordsOutcome(std::move(result.GetError()));
}

SaveBrowserSessionProfileOutcome BedrockAgentCoreClient::SaveBrowserSessionProfile(const SaveBrowserSessionProfileRequest& request) const {
  if (!request.ProfileIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SaveBrowserSessionProfile", "Required field: ProfileIdentifier, is not set");
    return SaveBrowserSessionProfileOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browser-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/save");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? SaveBrowserSessionProfileOutcome(result.GetResultWithOwnership())
                            : SaveBrowserSessionProfileOutcome(std::move(result.GetError()));
}

SearchRegistryRecordsOutcome BedrockAgentCoreClient::SearchRegistryRecords(const SearchRegistryRecordsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registry-records/search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchRegistryRecordsOutcome(result.GetResultWithOwnership())
                            : SearchRegistryRecordsOutcome(std::move(result.GetError()));
}

StartBrowserSessionOutcome BedrockAgentCoreClient::StartBrowserSession(const StartBrowserSessionRequest& request) const {
  if (!request.BrowserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartBrowserSession", "Required field: BrowserIdentifier, is not set");
    return StartBrowserSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartBrowserSessionOutcome(result.GetResultWithOwnership())
                            : StartBrowserSessionOutcome(std::move(result.GetError()));
}

StartCodeInterpreterSessionOutcome BedrockAgentCoreClient::StartCodeInterpreterSession(
    const StartCodeInterpreterSessionRequest& request) const {
  if (!request.CodeInterpreterIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCodeInterpreterSession", "Required field: CodeInterpreterIdentifier, is not set");
    return StartCodeInterpreterSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeInterpreterIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeInterpreterIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartCodeInterpreterSessionOutcome(result.GetResultWithOwnership())
                            : StartCodeInterpreterSessionOutcome(std::move(result.GetError()));
}

StartMemoryExtractionJobOutcome BedrockAgentCoreClient::StartMemoryExtractionJob(const StartMemoryExtractionJobRequest& request) const {
  if (!request.MemoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMemoryExtractionJob", "Required field: MemoryId, is not set");
    return StartMemoryExtractionJobOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/memories/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemoryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/extractionJobs/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMemoryExtractionJobOutcome(result.GetResultWithOwnership())
                            : StartMemoryExtractionJobOutcome(std::move(result.GetError()));
}

StopBrowserSessionOutcome BedrockAgentCoreClient::StopBrowserSession(const StopBrowserSessionRequest& request) const {
  if (!request.BrowserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBrowserSession", "Required field: BrowserIdentifier, is not set");
    return StopBrowserSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserIdentifier]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBrowserSession", "Required field: SessionId, is not set");
    return StopBrowserSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StopBrowserSessionOutcome(result.GetResultWithOwnership())
                            : StopBrowserSessionOutcome(std::move(result.GetError()));
}

StopCodeInterpreterSessionOutcome BedrockAgentCoreClient::StopCodeInterpreterSession(
    const StopCodeInterpreterSessionRequest& request) const {
  if (!request.CodeInterpreterIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopCodeInterpreterSession", "Required field: CodeInterpreterIdentifier, is not set");
    return StopCodeInterpreterSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeInterpreterIdentifier]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopCodeInterpreterSession", "Required field: SessionId, is not set");
    return StopCodeInterpreterSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/code-interpreters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeInterpreterIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StopCodeInterpreterSessionOutcome(result.GetResultWithOwnership())
                            : StopCodeInterpreterSessionOutcome(std::move(result.GetError()));
}

StopRuntimeSessionOutcome BedrockAgentCoreClient::StopRuntimeSession(const StopRuntimeSessionRequest& request) const {
  if (!request.RuntimeSessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRuntimeSession", "Required field: RuntimeSessionId, is not set");
    return StopRuntimeSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuntimeSessionId]", false));
  }
  if (!request.AgentRuntimeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopRuntimeSession", "Required field: AgentRuntimeArn, is not set");
    return StopRuntimeSessionOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentRuntimeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtimes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentRuntimeArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stopruntimesession");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopRuntimeSessionOutcome(result.GetResultWithOwnership())
                            : StopRuntimeSessionOutcome(std::move(result.GetError()));
}

UpdateBrowserStreamOutcome BedrockAgentCoreClient::UpdateBrowserStream(const UpdateBrowserStreamRequest& request) const {
  if (!request.BrowserIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrowserStream", "Required field: BrowserIdentifier, is not set");
    return UpdateBrowserStreamOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserIdentifier]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrowserStream", "Required field: SessionId, is not set");
    return UpdateBrowserStreamOutcome(Aws::Client::AWSError<BedrockAgentCoreErrors>(
        BedrockAgentCoreErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/browsers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrowserIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/streams/update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBrowserStreamOutcome(result.GetResultWithOwnership())
                            : UpdateBrowserStreamOutcome(std::move(result.GetError()));
}
