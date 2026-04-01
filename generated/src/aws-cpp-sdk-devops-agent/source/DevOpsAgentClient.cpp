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
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/devops-agent/DevOpsAgentClient.h>
#include <aws/devops-agent/DevOpsAgentEndpointProvider.h>
#include <aws/devops-agent/DevOpsAgentErrorMarshaller.h>
#include <aws/devops-agent/model/AllowVendedLogDeliveryForResourceRequest.h>
#include <aws/devops-agent/model/AssociateServiceRequest.h>
#include <aws/devops-agent/model/CreateAgentSpaceRequest.h>
#include <aws/devops-agent/model/CreateBacklogTaskRequest.h>
#include <aws/devops-agent/model/CreateChatRequest.h>
#include <aws/devops-agent/model/CreatePrivateConnectionRequest.h>
#include <aws/devops-agent/model/DeleteAgentSpaceRequest.h>
#include <aws/devops-agent/model/DeletePrivateConnectionRequest.h>
#include <aws/devops-agent/model/DeregisterServiceRequest.h>
#include <aws/devops-agent/model/DescribePrivateConnectionRequest.h>
#include <aws/devops-agent/model/DisableOperatorAppRequest.h>
#include <aws/devops-agent/model/DisassociateServiceRequest.h>
#include <aws/devops-agent/model/EnableOperatorAppRequest.h>
#include <aws/devops-agent/model/GetAccountUsageRequest.h>
#include <aws/devops-agent/model/GetAgentSpaceRequest.h>
#include <aws/devops-agent/model/GetAssociationRequest.h>
#include <aws/devops-agent/model/GetBacklogTaskRequest.h>
#include <aws/devops-agent/model/GetOperatorAppRequest.h>
#include <aws/devops-agent/model/GetRecommendationRequest.h>
#include <aws/devops-agent/model/GetServiceRequest.h>
#include <aws/devops-agent/model/ListAgentSpacesRequest.h>
#include <aws/devops-agent/model/ListAssociationsRequest.h>
#include <aws/devops-agent/model/ListBacklogTasksRequest.h>
#include <aws/devops-agent/model/ListChatsRequest.h>
#include <aws/devops-agent/model/ListExecutionsRequest.h>
#include <aws/devops-agent/model/ListGoalsRequest.h>
#include <aws/devops-agent/model/ListJournalRecordsRequest.h>
#include <aws/devops-agent/model/ListPendingMessagesRequest.h>
#include <aws/devops-agent/model/ListPrivateConnectionsRequest.h>
#include <aws/devops-agent/model/ListRecommendationsRequest.h>
#include <aws/devops-agent/model/ListServicesRequest.h>
#include <aws/devops-agent/model/ListTagsForResourceRequest.h>
#include <aws/devops-agent/model/ListWebhooksRequest.h>
#include <aws/devops-agent/model/RegisterServiceRequest.h>
#include <aws/devops-agent/model/SendMessageRequest.h>
#include <aws/devops-agent/model/TagResourceRequest.h>
#include <aws/devops-agent/model/UntagResourceRequest.h>
#include <aws/devops-agent/model/UpdateAgentSpaceRequest.h>
#include <aws/devops-agent/model/UpdateAssociationRequest.h>
#include <aws/devops-agent/model/UpdateBacklogTaskRequest.h>
#include <aws/devops-agent/model/UpdateGoalRequest.h>
#include <aws/devops-agent/model/UpdateOperatorAppIdpConfigRequest.h>
#include <aws/devops-agent/model/UpdatePrivateConnectionCertificateRequest.h>
#include <aws/devops-agent/model/UpdateRecommendationRequest.h>
#include <aws/devops-agent/model/ValidateAwsAssociationsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DevOpsAgent;
using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DevOpsAgent {
const char SERVICE_NAME[] = "aidevops";
const char ALLOCATION_TAG[] = "DevOpsAgentClient";
}  // namespace DevOpsAgent
}  // namespace Aws
const char* DevOpsAgentClient::GetServiceName() { return SERVICE_NAME; }
const char* DevOpsAgentClient::GetAllocationTag() { return ALLOCATION_TAG; }

DevOpsAgentClient::DevOpsAgentClient(const DevOpsAgent::DevOpsAgentClientConfiguration& clientConfiguration,
                                     std::shared_ptr<DevOpsAgentEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DevOpsAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsAgentClient::DevOpsAgentClient(const AWSCredentials& credentials, std::shared_ptr<DevOpsAgentEndpointProviderBase> endpointProvider,
                                     const DevOpsAgent::DevOpsAgentClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DevOpsAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsAgentClient::DevOpsAgentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<DevOpsAgentEndpointProviderBase> endpointProvider,
                                     const DevOpsAgent::DevOpsAgentClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DevOpsAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DevOpsAgentClient::DevOpsAgentClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DevOpsAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsAgentClient::DevOpsAgentClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DevOpsAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsAgentClient::DevOpsAgentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsAgentErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DevOpsAgentEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DevOpsAgentClient::~DevOpsAgentClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DevOpsAgentEndpointProviderBase>& DevOpsAgentClient::accessEndpointProvider() { return m_endpointProvider; }

void DevOpsAgentClient::init(const DevOpsAgent::DevOpsAgentClientConfiguration& config) {
  AWSClient::SetServiceClientName("DevOps Agent");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "aidevops");
}

void DevOpsAgentClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DevOpsAgentClient::InvokeOperationOutcome DevOpsAgentClient::InvokeServiceOperation(
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

AllowVendedLogDeliveryForResourceOutcome DevOpsAgentClient::AllowVendedLogDeliveryForResource(
    const AllowVendedLogDeliveryForResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/allow-vended-log-delivery-for-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AllowVendedLogDeliveryForResourceOutcome(result.GetResultWithOwnership())
                            : AllowVendedLogDeliveryForResourceOutcome(std::move(result.GetError()));
}

AssociateServiceOutcome DevOpsAgentClient::AssociateService(const AssociateServiceRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateService", "Required field: AgentSpaceId, is not set");
    return AssociateServiceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateServiceOutcome(result.GetResultWithOwnership())
                            : AssociateServiceOutcome(std::move(result.GetError()));
}

CreateAgentSpaceOutcome DevOpsAgentClient::CreateAgentSpace(const CreateAgentSpaceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAgentSpaceOutcome(result.GetResultWithOwnership())
                            : CreateAgentSpaceOutcome(std::move(result.GetError()));
}

CreateBacklogTaskOutcome DevOpsAgentClient::CreateBacklogTask(const CreateBacklogTaskRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBacklogTask", "Required field: AgentSpaceId, is not set");
    return CreateBacklogTaskOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBacklogTaskOutcome(result.GetResultWithOwnership())
                            : CreateBacklogTaskOutcome(std::move(result.GetError()));
}

CreateChatOutcome DevOpsAgentClient::CreateChat(const CreateChatRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChat", "Required field: AgentSpaceId, is not set");
    return CreateChatOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AgentSpaceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChat", "Required field: UserId, is not set");
    return CreateChatOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agents/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chat/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChatOutcome(result.GetResultWithOwnership()) : CreateChatOutcome(std::move(result.GetError()));
}

CreatePrivateConnectionOutcome DevOpsAgentClient::CreatePrivateConnection(const CreatePrivateConnectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/private-connections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePrivateConnectionOutcome(result.GetResultWithOwnership())
                            : CreatePrivateConnectionOutcome(std::move(result.GetError()));
}

DeleteAgentSpaceOutcome DevOpsAgentClient::DeleteAgentSpace(const DeleteAgentSpaceRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentSpace", "Required field: AgentSpaceId, is not set");
    return DeleteAgentSpaceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentSpaceOutcome(result.GetResultWithOwnership())
                            : DeleteAgentSpaceOutcome(std::move(result.GetError()));
}

DeletePrivateConnectionOutcome DevOpsAgentClient::DeletePrivateConnection(const DeletePrivateConnectionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrivateConnection", "Required field: Name, is not set");
    return DeletePrivateConnectionOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(
        DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/private-connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePrivateConnectionOutcome(result.GetResultWithOwnership())
                            : DeletePrivateConnectionOutcome(std::move(result.GetError()));
}

DeregisterServiceOutcome DevOpsAgentClient::DeregisterService(const DeregisterServiceRequest& request) const {
  if (!request.ServiceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeregisterService", "Required field: ServiceId, is not set");
    return DeregisterServiceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ServiceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeregisterServiceOutcome(result.GetResultWithOwnership())
                            : DeregisterServiceOutcome(std::move(result.GetError()));
}

DescribePrivateConnectionOutcome DevOpsAgentClient::DescribePrivateConnection(const DescribePrivateConnectionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePrivateConnection", "Required field: Name, is not set");
    return DescribePrivateConnectionOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(
        DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/private-connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribePrivateConnectionOutcome(result.GetResultWithOwnership())
                            : DescribePrivateConnectionOutcome(std::move(result.GetError()));
}

DisableOperatorAppOutcome DevOpsAgentClient::DisableOperatorApp(const DisableOperatorAppRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableOperatorApp", "Required field: AgentSpaceId, is not set");
    return DisableOperatorAppOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operator");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisableOperatorAppOutcome(result.GetResultWithOwnership())
                            : DisableOperatorAppOutcome(std::move(result.GetError()));
}

DisassociateServiceOutcome DevOpsAgentClient::DisassociateService(const DisassociateServiceRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateService", "Required field: AgentSpaceId, is not set");
    return DisassociateServiceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AgentSpaceId]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateService", "Required field: AssociationId, is not set");
    return DisassociateServiceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateServiceOutcome(result.GetResultWithOwnership())
                            : DisassociateServiceOutcome(std::move(result.GetError()));
}

EnableOperatorAppOutcome DevOpsAgentClient::EnableOperatorApp(const EnableOperatorAppRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("EnableOperatorApp", "Required field: AgentSpaceId, is not set");
    return EnableOperatorAppOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operator");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableOperatorAppOutcome(result.GetResultWithOwnership())
                            : EnableOperatorAppOutcome(std::move(result.GetError()));
}

GetAccountUsageOutcome DevOpsAgentClient::GetAccountUsage(const GetAccountUsageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage/account");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAccountUsageOutcome(result.GetResultWithOwnership())
                            : GetAccountUsageOutcome(std::move(result.GetError()));
}

GetAgentSpaceOutcome DevOpsAgentClient::GetAgentSpace(const GetAgentSpaceRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentSpace", "Required field: AgentSpaceId, is not set");
    return GetAgentSpaceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentSpaceOutcome(result.GetResultWithOwnership()) : GetAgentSpaceOutcome(std::move(result.GetError()));
}

GetAssociationOutcome DevOpsAgentClient::GetAssociation(const GetAssociationRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociation", "Required field: AgentSpaceId, is not set");
    return GetAssociationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AgentSpaceId]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssociation", "Required field: AssociationId, is not set");
    return GetAssociationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssociationOutcome(result.GetResultWithOwnership()) : GetAssociationOutcome(std::move(result.GetError()));
}

GetBacklogTaskOutcome DevOpsAgentClient::GetBacklogTask(const GetBacklogTaskRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBacklogTask", "Required field: AgentSpaceId, is not set");
    return GetBacklogTaskOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AgentSpaceId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBacklogTask", "Required field: TaskId, is not set");
    return GetBacklogTaskOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBacklogTaskOutcome(result.GetResultWithOwnership()) : GetBacklogTaskOutcome(std::move(result.GetError()));
}

GetOperatorAppOutcome DevOpsAgentClient::GetOperatorApp(const GetOperatorAppRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetOperatorApp", "Required field: AgentSpaceId, is not set");
    return GetOperatorAppOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operator");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetOperatorAppOutcome(result.GetResultWithOwnership()) : GetOperatorAppOutcome(std::move(result.GetError()));
}

GetRecommendationOutcome DevOpsAgentClient::GetRecommendation(const GetRecommendationRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommendation", "Required field: AgentSpaceId, is not set");
    return GetRecommendationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentSpaceId]", false));
  }
  if (!request.RecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecommendation", "Required field: RecommendationId, is not set");
    return GetRecommendationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [RecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommendationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRecommendationOutcome(result.GetResultWithOwnership())
                            : GetRecommendationOutcome(std::move(result.GetError()));
}

GetServiceOutcome DevOpsAgentClient::GetService(const GetServiceRequest& request) const {
  if (!request.ServiceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: ServiceId, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ServiceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/services/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetServiceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetServiceOutcome(result.GetResultWithOwnership()) : GetServiceOutcome(std::move(result.GetError()));
}

ListAgentSpacesOutcome DevOpsAgentClient::ListAgentSpaces(const ListAgentSpacesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentSpacesOutcome(result.GetResultWithOwnership())
                            : ListAgentSpacesOutcome(std::move(result.GetError()));
}

ListAssociationsOutcome DevOpsAgentClient::ListAssociations(const ListAssociationsRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociations", "Required field: AgentSpaceId, is not set");
    return ListAssociationsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociationsOutcome(result.GetResultWithOwnership())
                            : ListAssociationsOutcome(std::move(result.GetError()));
}

ListBacklogTasksOutcome DevOpsAgentClient::ListBacklogTasks(const ListBacklogTasksRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBacklogTasks", "Required field: AgentSpaceId, is not set");
    return ListBacklogTasksOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBacklogTasksOutcome(result.GetResultWithOwnership())
                            : ListBacklogTasksOutcome(std::move(result.GetError()));
}

ListChatsOutcome DevOpsAgentClient::ListChats(const ListChatsRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChats", "Required field: AgentSpaceId, is not set");
    return ListChatsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AgentSpaceId]", false));
  }
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChats", "Required field: UserId, is not set");
    return ListChatsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agents/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/chat/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChatsOutcome(result.GetResultWithOwnership()) : ListChatsOutcome(std::move(result.GetError()));
}

ListExecutionsOutcome DevOpsAgentClient::ListExecutions(const ListExecutionsRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListExecutions", "Required field: AgentSpaceId, is not set");
    return ListExecutionsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/journal/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/executions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExecutionsOutcome(result.GetResultWithOwnership()) : ListExecutionsOutcome(std::move(result.GetError()));
}

ListGoalsOutcome DevOpsAgentClient::ListGoals(const ListGoalsRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGoals", "Required field: AgentSpaceId, is not set");
    return ListGoalsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/goals/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGoalsOutcome(result.GetResultWithOwnership()) : ListGoalsOutcome(std::move(result.GetError()));
}

ListJournalRecordsOutcome DevOpsAgentClient::ListJournalRecords(const ListJournalRecordsRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJournalRecords", "Required field: AgentSpaceId, is not set");
    return ListJournalRecordsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/journal/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/journalRecords");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListJournalRecordsOutcome(result.GetResultWithOwnership())
                            : ListJournalRecordsOutcome(std::move(result.GetError()));
}

ListPendingMessagesOutcome DevOpsAgentClient::ListPendingMessages(const ListPendingMessagesRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPendingMessages", "Required field: AgentSpaceId, is not set");
    return ListPendingMessagesOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agents/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pendingMessages");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPendingMessagesOutcome(result.GetResultWithOwnership())
                            : ListPendingMessagesOutcome(std::move(result.GetError()));
}

ListPrivateConnectionsOutcome DevOpsAgentClient::ListPrivateConnections(const ListPrivateConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/private-connections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPrivateConnectionsOutcome(result.GetResultWithOwnership())
                            : ListPrivateConnectionsOutcome(std::move(result.GetError()));
}

ListRecommendationsOutcome DevOpsAgentClient::ListRecommendations(const ListRecommendationsRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecommendations", "Required field: AgentSpaceId, is not set");
    return ListRecommendationsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRecommendationsOutcome(result.GetResultWithOwnership())
                            : ListRecommendationsOutcome(std::move(result.GetError()));
}

ListServicesOutcome DevOpsAgentClient::ListServices(const ListServicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/services/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServicesOutcome(result.GetResultWithOwnership()) : ListServicesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome DevOpsAgentClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListWebhooksOutcome DevOpsAgentClient::ListWebhooks(const ListWebhooksRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWebhooks", "Required field: AgentSpaceId, is not set");
    return ListWebhooksOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AgentSpaceId]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWebhooks", "Required field: AssociationId, is not set");
    return ListWebhooksOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWebhooksOutcome(result.GetResultWithOwnership()) : ListWebhooksOutcome(std::move(result.GetError()));
}

RegisterServiceOutcome DevOpsAgentClient::RegisterService(const RegisterServiceRequest& request) const {
  if (!request.ServiceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterService", "Required field: Service, is not set");
    return RegisterServiceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Service]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/register/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        PostRegisterServiceSupportedServiceMapper::GetNameForPostRegisterServiceSupportedService(request.GetService()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterServiceOutcome(result.GetResultWithOwnership())
                            : RegisterServiceOutcome(std::move(result.GetError()));
}

SendMessageOutcome DevOpsAgentClient::SendMessage(SendMessageRequest& request) const {
  AWS_OPERATION_GUARD(SendMessage);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendMessage", "Required field: AgentSpaceId, is not set");
    return SendMessageOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AgentSpaceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SendMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendMessage, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendMessage",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendMessageOutcome>(
      [&]() -> SendMessageOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("dp.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SendMessageOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/agents/agent-space/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/chat/sendMessage");
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("SendMessage", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? SendMessageOutcome(result.GetResultWithOwnership()) : SendMessageOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome DevOpsAgentClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome DevOpsAgentClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAgentSpaceOutcome DevOpsAgentClient::UpdateAgentSpace(const UpdateAgentSpaceRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentSpace", "Required field: AgentSpaceId, is not set");
    return UpdateAgentSpaceOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAgentSpaceOutcome(result.GetResultWithOwnership())
                            : UpdateAgentSpaceOutcome(std::move(result.GetError()));
}

UpdateAssociationOutcome DevOpsAgentClient::UpdateAssociation(const UpdateAssociationRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssociation", "Required field: AgentSpaceId, is not set");
    return UpdateAssociationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentSpaceId]", false));
  }
  if (!request.AssociationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssociation", "Required field: AssociationId, is not set");
    return UpdateAssociationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AssociationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateAssociationOutcome(std::move(result.GetError()));
}

UpdateBacklogTaskOutcome DevOpsAgentClient::UpdateBacklogTask(const UpdateBacklogTaskRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBacklogTask", "Required field: AgentSpaceId, is not set");
    return UpdateBacklogTaskOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentSpaceId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBacklogTask", "Required field: TaskId, is not set");
    return UpdateBacklogTaskOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateBacklogTaskOutcome(result.GetResultWithOwnership())
                            : UpdateBacklogTaskOutcome(std::move(result.GetError()));
}

UpdateGoalOutcome DevOpsAgentClient::UpdateGoal(const UpdateGoalRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGoal", "Required field: AgentSpaceId, is not set");
    return UpdateGoalOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AgentSpaceId]", false));
  }
  if (!request.GoalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGoal", "Required field: GoalId, is not set");
    return UpdateGoalOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [GoalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/goals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGoalId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateGoalOutcome(result.GetResultWithOwnership()) : UpdateGoalOutcome(std::move(result.GetError()));
}

UpdateOperatorAppIdpConfigOutcome DevOpsAgentClient::UpdateOperatorAppIdpConfig(const UpdateOperatorAppIdpConfigRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOperatorAppIdpConfig", "Required field: AgentSpaceId, is not set");
    return UpdateOperatorAppIdpConfigOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(
        DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operator/idp");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateOperatorAppIdpConfigOutcome(result.GetResultWithOwnership())
                            : UpdateOperatorAppIdpConfigOutcome(std::move(result.GetError()));
}

UpdatePrivateConnectionCertificateOutcome DevOpsAgentClient::UpdatePrivateConnectionCertificate(
    const UpdatePrivateConnectionCertificateRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePrivateConnectionCertificate", "Required field: Name, is not set");
    return UpdatePrivateConnectionCertificateOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(
        DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/private-connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePrivateConnectionCertificateOutcome(result.GetResultWithOwnership())
                            : UpdatePrivateConnectionCertificateOutcome(std::move(result.GetError()));
}

UpdateRecommendationOutcome DevOpsAgentClient::UpdateRecommendation(const UpdateRecommendationRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecommendation", "Required field: AgentSpaceId, is not set");
    return UpdateRecommendationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AgentSpaceId]", false));
  }
  if (!request.RecommendationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecommendation", "Required field: RecommendationId, is not set");
    return UpdateRecommendationOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RecommendationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backlog/agent-space/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecommendationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRecommendationOutcome(result.GetResultWithOwnership())
                            : UpdateRecommendationOutcome(std::move(result.GetError()));
}

ValidateAwsAssociationsOutcome DevOpsAgentClient::ValidateAwsAssociations(const ValidateAwsAssociationsRequest& request) const {
  if (!request.AgentSpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ValidateAwsAssociations", "Required field: AgentSpaceId, is not set");
    return ValidateAwsAssociationsOutcome(Aws::Client::AWSError<DevOpsAgentErrors>(
        DevOpsAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentSpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/agentspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/validate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateAwsAssociationsOutcome(result.GetResultWithOwnership())
                            : ValidateAwsAssociationsOutcome(std::move(result.GetError()));
}
