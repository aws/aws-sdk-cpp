/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/BedrockAgentAwsBearerTokenIdentityResolver.h>
#include <aws/bedrock-agent/BedrockAgentClient.h>
#include <aws/bedrock-agent/BedrockAgentEndpointProvider.h>
#include <aws/bedrock-agent/BedrockAgentErrorMarshaller.h>
#include <aws/bedrock-agent/model/AssociateAgentCollaboratorRequest.h>
#include <aws/bedrock-agent/model/AssociateAgentKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/CreateAgentActionGroupRequest.h>
#include <aws/bedrock-agent/model/CreateAgentAliasRequest.h>
#include <aws/bedrock-agent/model/CreateAgentRequest.h>
#include <aws/bedrock-agent/model/CreateDataSourceRequest.h>
#include <aws/bedrock-agent/model/CreateFlowAliasRequest.h>
#include <aws/bedrock-agent/model/CreateFlowRequest.h>
#include <aws/bedrock-agent/model/CreateFlowVersionRequest.h>
#include <aws/bedrock-agent/model/CreateKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/CreatePromptRequest.h>
#include <aws/bedrock-agent/model/CreatePromptVersionRequest.h>
#include <aws/bedrock-agent/model/DeleteAgentActionGroupRequest.h>
#include <aws/bedrock-agent/model/DeleteAgentAliasRequest.h>
#include <aws/bedrock-agent/model/DeleteAgentRequest.h>
#include <aws/bedrock-agent/model/DeleteAgentVersionRequest.h>
#include <aws/bedrock-agent/model/DeleteDataSourceRequest.h>
#include <aws/bedrock-agent/model/DeleteFlowAliasRequest.h>
#include <aws/bedrock-agent/model/DeleteFlowRequest.h>
#include <aws/bedrock-agent/model/DeleteFlowVersionRequest.h>
#include <aws/bedrock-agent/model/DeleteKnowledgeBaseDocumentsRequest.h>
#include <aws/bedrock-agent/model/DeleteKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/DeletePromptRequest.h>
#include <aws/bedrock-agent/model/DisassociateAgentCollaboratorRequest.h>
#include <aws/bedrock-agent/model/DisassociateAgentKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/GetAgentActionGroupRequest.h>
#include <aws/bedrock-agent/model/GetAgentAliasRequest.h>
#include <aws/bedrock-agent/model/GetAgentCollaboratorRequest.h>
#include <aws/bedrock-agent/model/GetAgentKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/GetAgentRequest.h>
#include <aws/bedrock-agent/model/GetAgentVersionRequest.h>
#include <aws/bedrock-agent/model/GetDataSourceRequest.h>
#include <aws/bedrock-agent/model/GetFlowAliasRequest.h>
#include <aws/bedrock-agent/model/GetFlowRequest.h>
#include <aws/bedrock-agent/model/GetFlowVersionRequest.h>
#include <aws/bedrock-agent/model/GetIngestionJobRequest.h>
#include <aws/bedrock-agent/model/GetKnowledgeBaseDocumentsRequest.h>
#include <aws/bedrock-agent/model/GetKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/GetPromptRequest.h>
#include <aws/bedrock-agent/model/IngestKnowledgeBaseDocumentsRequest.h>
#include <aws/bedrock-agent/model/ListAgentActionGroupsRequest.h>
#include <aws/bedrock-agent/model/ListAgentAliasesRequest.h>
#include <aws/bedrock-agent/model/ListAgentCollaboratorsRequest.h>
#include <aws/bedrock-agent/model/ListAgentKnowledgeBasesRequest.h>
#include <aws/bedrock-agent/model/ListAgentVersionsRequest.h>
#include <aws/bedrock-agent/model/ListAgentsRequest.h>
#include <aws/bedrock-agent/model/ListDataSourcesRequest.h>
#include <aws/bedrock-agent/model/ListFlowAliasesRequest.h>
#include <aws/bedrock-agent/model/ListFlowVersionsRequest.h>
#include <aws/bedrock-agent/model/ListFlowsRequest.h>
#include <aws/bedrock-agent/model/ListIngestionJobsRequest.h>
#include <aws/bedrock-agent/model/ListKnowledgeBaseDocumentsRequest.h>
#include <aws/bedrock-agent/model/ListKnowledgeBasesRequest.h>
#include <aws/bedrock-agent/model/ListPromptsRequest.h>
#include <aws/bedrock-agent/model/ListTagsForResourceRequest.h>
#include <aws/bedrock-agent/model/PrepareAgentRequest.h>
#include <aws/bedrock-agent/model/PrepareFlowRequest.h>
#include <aws/bedrock-agent/model/StartIngestionJobRequest.h>
#include <aws/bedrock-agent/model/StopIngestionJobRequest.h>
#include <aws/bedrock-agent/model/TagResourceRequest.h>
#include <aws/bedrock-agent/model/UntagResourceRequest.h>
#include <aws/bedrock-agent/model/UpdateAgentActionGroupRequest.h>
#include <aws/bedrock-agent/model/UpdateAgentAliasRequest.h>
#include <aws/bedrock-agent/model/UpdateAgentCollaboratorRequest.h>
#include <aws/bedrock-agent/model/UpdateAgentKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/UpdateAgentRequest.h>
#include <aws/bedrock-agent/model/UpdateDataSourceRequest.h>
#include <aws/bedrock-agent/model/UpdateFlowAliasRequest.h>
#include <aws/bedrock-agent/model/UpdateFlowRequest.h>
#include <aws/bedrock-agent/model/UpdateKnowledgeBaseRequest.h>
#include <aws/bedrock-agent/model/UpdatePromptRequest.h>
#include <aws/bedrock-agent/model/ValidateFlowDefinitionRequest.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::BedrockAgent;
using namespace Aws::BedrockAgent::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BedrockAgent {
const char ALLOCATION_TAG[] = "BedrockAgentClient";
const char SERVICE_NAME[] = "bedrock";
}  // namespace BedrockAgent
}  // namespace Aws
const char* BedrockAgentClient::GetServiceName() { return SERVICE_NAME; }
const char* BedrockAgentClient::GetAllocationTag() { return ALLOCATION_TAG; }

BedrockAgentClient::BedrockAgentClient(const BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration,
                                       std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockAgentClient::BedrockAgentClient(const AWSCredentials& credentials,
                                       std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider,
                                       const BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockAgentClient::BedrockAgentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider,
                                       const BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentErrorMarshaller>(ALLOCATION_TAG),
          endpointProvider ? endpointProvider : Aws::MakeShared<BedrockAgentEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

/* Legacy constructors due deprecation */
BedrockAgentClient::BedrockAgentClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockAgentEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockAgentClient::BedrockAgentClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockAgentEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}

BedrockAgentClient::BedrockAgentClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockAgentEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider),
                                       GetServiceName(), clientConfiguration.region}},
          }) {}
/* End of legacy constructors due deprecation */

BedrockAgentClient::~BedrockAgentClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BedrockAgentEndpointProviderBase>& BedrockAgentClient::accessEndpointProvider() { return m_endpointProvider; }

void BedrockAgentClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BedrockAgentClient::InvokeOperationOutcome BedrockAgentClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::AWSEndpoint&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_clientConfiguration.telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(serviceName, {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto result = MakeRequestDeserialize(&request, operationName, httpMethod,
                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolveUri(resolvedEndpoint); });
        return result.IsSuccess() ? InvokeOperationOutcome(result.GetResultWithOwnership())
                                  : InvokeOperationOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AssociateAgentCollaboratorOutcome BedrockAgentClient::AssociateAgentCollaborator(const AssociateAgentCollaboratorRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAgentCollaborator", "Required field: AgentId, is not set");
    return AssociateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAgentCollaborator", "Required field: AgentVersion, is not set");
    return AssociateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/agentcollaborators/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateAgentCollaboratorOutcome(result.GetResultWithOwnership())
                            : AssociateAgentCollaboratorOutcome(std::move(result.GetError()));
}
AssociateAgentKnowledgeBaseOutcome BedrockAgentClient::AssociateAgentKnowledgeBase(
    const AssociateAgentKnowledgeBaseRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAgentKnowledgeBase", "Required field: AgentId, is not set");
    return AssociateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAgentKnowledgeBase", "Required field: AgentVersion, is not set");
    return AssociateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateAgentKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : AssociateAgentKnowledgeBaseOutcome(std::move(result.GetError()));
}
CreateAgentOutcome BedrockAgentClient::CreateAgent(const CreateAgentRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/agents/"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAgentOutcome(result.GetResultWithOwnership()) : CreateAgentOutcome(std::move(result.GetError()));
}
CreateAgentActionGroupOutcome BedrockAgentClient::CreateAgentActionGroup(const CreateAgentActionGroupRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAgentActionGroup", "Required field: AgentId, is not set");
    return CreateAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAgentActionGroup", "Required field: AgentVersion, is not set");
    return CreateAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/actiongroups/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAgentActionGroupOutcome(result.GetResultWithOwnership())
                            : CreateAgentActionGroupOutcome(std::move(result.GetError()));
}
CreateAgentAliasOutcome BedrockAgentClient::CreateAgentAlias(const CreateAgentAliasRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAgentAlias", "Required field: AgentId, is not set");
    return CreateAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentaliases/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateAgentAliasOutcome(result.GetResultWithOwnership())
                            : CreateAgentAliasOutcome(std::move(result.GetError()));
}
CreateDataSourceOutcome BedrockAgentClient::CreateDataSource(const CreateDataSourceRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: KnowledgeBaseId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateDataSourceOutcome(result.GetResultWithOwnership())
                            : CreateDataSourceOutcome(std::move(result.GetError()));
}
CreateFlowOutcome BedrockAgentClient::CreateFlow(const CreateFlowRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/flows/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFlowOutcome(result.GetResultWithOwnership()) : CreateFlowOutcome(std::move(result.GetError()));
}
CreateFlowAliasOutcome BedrockAgentClient::CreateFlowAlias(const CreateFlowAliasRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFlowAlias", "Required field: FlowIdentifier, is not set");
    return CreateFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFlowAliasOutcome(result.GetResultWithOwnership())
                            : CreateFlowAliasOutcome(std::move(result.GetError()));
}
CreateFlowVersionOutcome BedrockAgentClient::CreateFlowVersion(const CreateFlowVersionRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFlowVersion", "Required field: FlowIdentifier, is not set");
    return CreateFlowVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/versions");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFlowVersionOutcome(result.GetResultWithOwnership())
                            : CreateFlowVersionOutcome(std::move(result.GetError()));
}
CreateKnowledgeBaseOutcome BedrockAgentClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/knowledgebases/"); },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : CreateKnowledgeBaseOutcome(std::move(result.GetError()));
}
CreatePromptOutcome BedrockAgentClient::CreatePrompt(const CreatePromptRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/prompts/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePromptOutcome(result.GetResultWithOwnership()) : CreatePromptOutcome(std::move(result.GetError()));
}
CreatePromptVersionOutcome BedrockAgentClient::CreatePromptVersion(const CreatePromptVersionRequest& request) const {
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePromptVersion", "Required field: PromptIdentifier, is not set");
    return CreatePromptVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PromptIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/prompts/");
        resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
        resolvedEndpoint.AddPathSegments("/versions");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePromptVersionOutcome(result.GetResultWithOwnership())
                            : CreatePromptVersionOutcome(std::move(result.GetError()));
}
DeleteAgentOutcome BedrockAgentClient::DeleteAgent(const DeleteAgentRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgent", "Required field: AgentId, is not set");
    return DeleteAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentOutcome(result.GetResultWithOwnership()) : DeleteAgentOutcome(std::move(result.GetError()));
}
DeleteAgentActionGroupOutcome BedrockAgentClient::DeleteAgentActionGroup(const DeleteAgentActionGroupRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentActionGroup", "Required field: AgentId, is not set");
    return DeleteAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentActionGroup", "Required field: AgentVersion, is not set");
    return DeleteAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }
  if (!request.ActionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentActionGroup", "Required field: ActionGroupId, is not set");
    return DeleteAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionGroupId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/actiongroups/");
        resolvedEndpoint.AddPathSegment(request.GetActionGroupId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentActionGroupOutcome(result.GetResultWithOwnership())
                            : DeleteAgentActionGroupOutcome(std::move(result.GetError()));
}
DeleteAgentAliasOutcome BedrockAgentClient::DeleteAgentAlias(const DeleteAgentAliasRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentAlias", "Required field: AgentId, is not set");
    return DeleteAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentId]", false));
  }
  if (!request.AgentAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentAlias", "Required field: AgentAliasId, is not set");
    return DeleteAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentAliasId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentaliases/");
        resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentAliasOutcome(result.GetResultWithOwnership())
                            : DeleteAgentAliasOutcome(std::move(result.GetError()));
}
DeleteAgentVersionOutcome BedrockAgentClient::DeleteAgentVersion(const DeleteAgentVersionRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentVersion", "Required field: AgentId, is not set");
    return DeleteAgentVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgentVersion", "Required field: AgentVersion, is not set");
    return DeleteAgentVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAgentVersionOutcome(result.GetResultWithOwnership())
                            : DeleteAgentVersionOutcome(std::move(result.GetError()));
}
DeleteDataSourceOutcome BedrockAgentClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: KnowledgeBaseId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DataSourceId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataSourceOutcome(result.GetResultWithOwnership())
                            : DeleteDataSourceOutcome(std::move(result.GetError()));
}
DeleteFlowOutcome BedrockAgentClient::DeleteFlow(const DeleteFlowRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlow", "Required field: FlowIdentifier, is not set");
    return DeleteFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFlowOutcome(result.GetResultWithOwnership()) : DeleteFlowOutcome(std::move(result.GetError()));
}
DeleteFlowAliasOutcome BedrockAgentClient::DeleteFlowAlias(const DeleteFlowAliasRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlowAlias", "Required field: FlowIdentifier, is not set");
    return DeleteFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FlowIdentifier]", false));
  }
  if (!request.AliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlowAlias", "Required field: AliasIdentifier, is not set");
    return DeleteFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AliasIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetAliasIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFlowAliasOutcome(result.GetResultWithOwnership())
                            : DeleteFlowAliasOutcome(std::move(result.GetError()));
}
DeleteFlowVersionOutcome BedrockAgentClient::DeleteFlowVersion(const DeleteFlowVersionRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlowVersion", "Required field: FlowIdentifier, is not set");
    return DeleteFlowVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FlowIdentifier]", false));
  }
  if (!request.FlowVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlowVersion", "Required field: FlowVersion, is not set");
    return DeleteFlowVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FlowVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/versions/");
        resolvedEndpoint.AddPathSegment(request.GetFlowVersion());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFlowVersionOutcome(result.GetResultWithOwnership())
                            : DeleteFlowVersionOutcome(std::move(result.GetError()));
}
DeleteKnowledgeBaseOutcome BedrockAgentClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : DeleteKnowledgeBaseOutcome(std::move(result.GetError()));
}
DeleteKnowledgeBaseDocumentsOutcome BedrockAgentClient::DeleteKnowledgeBaseDocuments(
    const DeleteKnowledgeBaseDocumentsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBaseDocuments", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBaseDocuments", "Required field: DataSourceId, is not set");
    return DeleteKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/documents/deleteDocuments");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteKnowledgeBaseDocumentsOutcome(result.GetResultWithOwnership())
                            : DeleteKnowledgeBaseDocumentsOutcome(std::move(result.GetError()));
}
DeletePromptOutcome BedrockAgentClient::DeletePrompt(const DeletePromptRequest& request) const {
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrompt", "Required field: PromptIdentifier, is not set");
    return DeletePromptOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PromptIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/prompts/");
        resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePromptOutcome(result.GetResultWithOwnership()) : DeletePromptOutcome(std::move(result.GetError()));
}
DisassociateAgentCollaboratorOutcome BedrockAgentClient::DisassociateAgentCollaborator(
    const DisassociateAgentCollaboratorRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAgentCollaborator", "Required field: AgentId, is not set");
    return DisassociateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAgentCollaborator", "Required field: AgentVersion, is not set");
    return DisassociateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }
  if (!request.CollaboratorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAgentCollaborator", "Required field: CollaboratorId, is not set");
    return DisassociateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaboratorId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/agentcollaborators/");
        resolvedEndpoint.AddPathSegment(request.GetCollaboratorId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateAgentCollaboratorOutcome(result.GetResultWithOwnership())
                            : DisassociateAgentCollaboratorOutcome(std::move(result.GetError()));
}
DisassociateAgentKnowledgeBaseOutcome BedrockAgentClient::DisassociateAgentKnowledgeBase(
    const DisassociateAgentKnowledgeBaseRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAgentKnowledgeBase", "Required field: AgentId, is not set");
    return DisassociateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAgentKnowledgeBase", "Required field: AgentVersion, is not set");
    return DisassociateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAgentKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DisassociateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateAgentKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : DisassociateAgentKnowledgeBaseOutcome(std::move(result.GetError()));
}
GetAgentOutcome BedrockAgentClient::GetAgent(const GetAgentRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgent", "Required field: AgentId, is not set");
    return GetAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentOutcome(result.GetResultWithOwnership()) : GetAgentOutcome(std::move(result.GetError()));
}
GetAgentActionGroupOutcome BedrockAgentClient::GetAgentActionGroup(const GetAgentActionGroupRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentActionGroup", "Required field: AgentId, is not set");
    return GetAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentActionGroup", "Required field: AgentVersion, is not set");
    return GetAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AgentVersion]", false));
  }
  if (!request.ActionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentActionGroup", "Required field: ActionGroupId, is not set");
    return GetAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ActionGroupId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/actiongroups/");
        resolvedEndpoint.AddPathSegment(request.GetActionGroupId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentActionGroupOutcome(result.GetResultWithOwnership())
                            : GetAgentActionGroupOutcome(std::move(result.GetError()));
}
GetAgentAliasOutcome BedrockAgentClient::GetAgentAlias(const GetAgentAliasRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentAlias", "Required field: AgentId, is not set");
    return GetAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AgentId]", false));
  }
  if (!request.AgentAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentAlias", "Required field: AgentAliasId, is not set");
    return GetAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AgentAliasId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentaliases/");
        resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentAliasOutcome(result.GetResultWithOwnership()) : GetAgentAliasOutcome(std::move(result.GetError()));
}
GetAgentCollaboratorOutcome BedrockAgentClient::GetAgentCollaborator(const GetAgentCollaboratorRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentCollaborator", "Required field: AgentId, is not set");
    return GetAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentCollaborator", "Required field: AgentVersion, is not set");
    return GetAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AgentVersion]", false));
  }
  if (!request.CollaboratorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentCollaborator", "Required field: CollaboratorId, is not set");
    return GetAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [CollaboratorId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/agentcollaborators/");
        resolvedEndpoint.AddPathSegment(request.GetCollaboratorId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentCollaboratorOutcome(result.GetResultWithOwnership())
                            : GetAgentCollaboratorOutcome(std::move(result.GetError()));
}
GetAgentKnowledgeBaseOutcome BedrockAgentClient::GetAgentKnowledgeBase(const GetAgentKnowledgeBaseRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentKnowledgeBase", "Required field: AgentId, is not set");
    return GetAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentKnowledgeBase", "Required field: AgentVersion, is not set");
    return GetAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : GetAgentKnowledgeBaseOutcome(std::move(result.GetError()));
}
GetAgentVersionOutcome BedrockAgentClient::GetAgentVersion(const GetAgentVersionRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentVersion", "Required field: AgentId, is not set");
    return GetAgentVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentVersion", "Required field: AgentVersion, is not set");
    return GetAgentVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentVersionOutcome(result.GetResultWithOwnership())
                            : GetAgentVersionOutcome(std::move(result.GetError()));
}
GetDataSourceOutcome BedrockAgentClient::GetDataSource(const GetDataSourceRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: KnowledgeBaseId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: DataSourceId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSourceOutcome(result.GetResultWithOwnership()) : GetDataSourceOutcome(std::move(result.GetError()));
}
GetFlowOutcome BedrockAgentClient::GetFlow(const GetFlowRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlow", "Required field: FlowIdentifier, is not set");
    return GetFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFlowOutcome(result.GetResultWithOwnership()) : GetFlowOutcome(std::move(result.GetError()));
}
GetFlowAliasOutcome BedrockAgentClient::GetFlowAlias(const GetFlowAliasRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowAlias", "Required field: FlowIdentifier, is not set");
    return GetFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FlowIdentifier]", false));
  }
  if (!request.AliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowAlias", "Required field: AliasIdentifier, is not set");
    return GetFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AliasIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetAliasIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFlowAliasOutcome(result.GetResultWithOwnership()) : GetFlowAliasOutcome(std::move(result.GetError()));
}
GetFlowVersionOutcome BedrockAgentClient::GetFlowVersion(const GetFlowVersionRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowVersion", "Required field: FlowIdentifier, is not set");
    return GetFlowVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FlowIdentifier]", false));
  }
  if (!request.FlowVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlowVersion", "Required field: FlowVersion, is not set");
    return GetFlowVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [FlowVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/versions/");
        resolvedEndpoint.AddPathSegment(request.GetFlowVersion());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetFlowVersionOutcome(result.GetResultWithOwnership()) : GetFlowVersionOutcome(std::move(result.GetError()));
}
GetIngestionJobOutcome BedrockAgentClient::GetIngestionJob(const GetIngestionJobRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestionJob", "Required field: KnowledgeBaseId, is not set");
    return GetIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestionJob", "Required field: DataSourceId, is not set");
    return GetIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DataSourceId]", false));
  }
  if (!request.IngestionJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIngestionJob", "Required field: IngestionJobId, is not set");
    return GetIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IngestionJobId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/ingestionjobs/");
        resolvedEndpoint.AddPathSegment(request.GetIngestionJobId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetIngestionJobOutcome(result.GetResultWithOwnership())
                            : GetIngestionJobOutcome(std::move(result.GetError()));
}
GetKnowledgeBaseOutcome BedrockAgentClient::GetKnowledgeBase(const GetKnowledgeBaseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : GetKnowledgeBaseOutcome(std::move(result.GetError()));
}
GetKnowledgeBaseDocumentsOutcome BedrockAgentClient::GetKnowledgeBaseDocuments(const GetKnowledgeBaseDocumentsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBaseDocuments", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBaseDocuments", "Required field: DataSourceId, is not set");
    return GetKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/documents/getDocuments");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetKnowledgeBaseDocumentsOutcome(result.GetResultWithOwnership())
                            : GetKnowledgeBaseDocumentsOutcome(std::move(result.GetError()));
}
GetPromptOutcome BedrockAgentClient::GetPrompt(const GetPromptRequest& request) const {
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrompt", "Required field: PromptIdentifier, is not set");
    return GetPromptOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PromptIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/prompts/");
        resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetPromptOutcome(result.GetResultWithOwnership()) : GetPromptOutcome(std::move(result.GetError()));
}
IngestKnowledgeBaseDocumentsOutcome BedrockAgentClient::IngestKnowledgeBaseDocuments(
    const IngestKnowledgeBaseDocumentsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("IngestKnowledgeBaseDocuments", "Required field: KnowledgeBaseId, is not set");
    return IngestKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("IngestKnowledgeBaseDocuments", "Required field: DataSourceId, is not set");
    return IngestKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/documents");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? IngestKnowledgeBaseDocumentsOutcome(result.GetResultWithOwnership())
                            : IngestKnowledgeBaseDocumentsOutcome(std::move(result.GetError()));
}
ListAgentActionGroupsOutcome BedrockAgentClient::ListAgentActionGroups(const ListAgentActionGroupsRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentActionGroups", "Required field: AgentId, is not set");
    return ListAgentActionGroupsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentActionGroups", "Required field: AgentVersion, is not set");
    return ListAgentActionGroupsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/actiongroups/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentActionGroupsOutcome(result.GetResultWithOwnership())
                            : ListAgentActionGroupsOutcome(std::move(result.GetError()));
}
ListAgentAliasesOutcome BedrockAgentClient::ListAgentAliases(const ListAgentAliasesRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentAliases", "Required field: AgentId, is not set");
    return ListAgentAliasesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentaliases/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentAliasesOutcome(result.GetResultWithOwnership())
                            : ListAgentAliasesOutcome(std::move(result.GetError()));
}
ListAgentCollaboratorsOutcome BedrockAgentClient::ListAgentCollaborators(const ListAgentCollaboratorsRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentCollaborators", "Required field: AgentId, is not set");
    return ListAgentCollaboratorsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentCollaborators", "Required field: AgentVersion, is not set");
    return ListAgentCollaboratorsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/agentcollaborators/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentCollaboratorsOutcome(result.GetResultWithOwnership())
                            : ListAgentCollaboratorsOutcome(std::move(result.GetError()));
}
ListAgentKnowledgeBasesOutcome BedrockAgentClient::ListAgentKnowledgeBases(const ListAgentKnowledgeBasesRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentKnowledgeBases", "Required field: AgentId, is not set");
    return ListAgentKnowledgeBasesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentKnowledgeBases", "Required field: AgentVersion, is not set");
    return ListAgentKnowledgeBasesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentKnowledgeBasesOutcome(result.GetResultWithOwnership())
                            : ListAgentKnowledgeBasesOutcome(std::move(result.GetError()));
}
ListAgentVersionsOutcome BedrockAgentClient::ListAgentVersions(const ListAgentVersionsRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentVersions", "Required field: AgentId, is not set");
    return ListAgentVersionsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentVersionsOutcome(result.GetResultWithOwnership())
                            : ListAgentVersionsOutcome(std::move(result.GetError()));
}
ListAgentsOutcome BedrockAgentClient::ListAgents(const ListAgentsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/agents/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAgentsOutcome(result.GetResultWithOwnership()) : ListAgentsOutcome(std::move(result.GetError()));
}
ListDataSourcesOutcome BedrockAgentClient::ListDataSources(const ListDataSourcesRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: KnowledgeBaseId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDataSourcesOutcome(result.GetResultWithOwnership())
                            : ListDataSourcesOutcome(std::move(result.GetError()));
}
ListFlowAliasesOutcome BedrockAgentClient::ListFlowAliases(const ListFlowAliasesRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowAliases", "Required field: FlowIdentifier, is not set");
    return ListFlowAliasesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFlowAliasesOutcome(result.GetResultWithOwnership())
                            : ListFlowAliasesOutcome(std::move(result.GetError()));
}
ListFlowVersionsOutcome BedrockAgentClient::ListFlowVersions(const ListFlowVersionsRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowVersions", "Required field: FlowIdentifier, is not set");
    return ListFlowVersionsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/versions");
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFlowVersionsOutcome(result.GetResultWithOwnership())
                            : ListFlowVersionsOutcome(std::move(result.GetError()));
}
ListFlowsOutcome BedrockAgentClient::ListFlows(const ListFlowsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/flows/"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFlowsOutcome(result.GetResultWithOwnership()) : ListFlowsOutcome(std::move(result.GetError()));
}
ListIngestionJobsOutcome BedrockAgentClient::ListIngestionJobs(const ListIngestionJobsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestionJobs", "Required field: KnowledgeBaseId, is not set");
    return ListIngestionJobsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestionJobs", "Required field: DataSourceId, is not set");
    return ListIngestionJobsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/ingestionjobs/");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIngestionJobsOutcome(result.GetResultWithOwnership())
                            : ListIngestionJobsOutcome(std::move(result.GetError()));
}
ListKnowledgeBaseDocumentsOutcome BedrockAgentClient::ListKnowledgeBaseDocuments(const ListKnowledgeBaseDocumentsRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKnowledgeBaseDocuments", "Required field: KnowledgeBaseId, is not set");
    return ListKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKnowledgeBaseDocuments", "Required field: DataSourceId, is not set");
    return ListKnowledgeBaseDocumentsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/documents");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListKnowledgeBaseDocumentsOutcome(result.GetResultWithOwnership())
                            : ListKnowledgeBaseDocumentsOutcome(std::move(result.GetError()));
}
ListKnowledgeBasesOutcome BedrockAgentClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/knowledgebases/"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListKnowledgeBasesOutcome(result.GetResultWithOwnership())
                            : ListKnowledgeBasesOutcome(std::move(result.GetError()));
}
ListPromptsOutcome BedrockAgentClient::ListPrompts(const ListPromptsRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/prompts/"); },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPromptsOutcome(result.GetResultWithOwnership()) : ListPromptsOutcome(std::move(result.GetError()));
}
ListTagsForResourceOutcome BedrockAgentClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/tags/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}
PrepareAgentOutcome BedrockAgentClient::PrepareAgent(const PrepareAgentRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PrepareAgent", "Required field: AgentId, is not set");
    return PrepareAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PrepareAgentOutcome(result.GetResultWithOwnership()) : PrepareAgentOutcome(std::move(result.GetError()));
}
PrepareFlowOutcome BedrockAgentClient::PrepareFlow(const PrepareFlowRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PrepareFlow", "Required field: FlowIdentifier, is not set");
    return PrepareFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PrepareFlowOutcome(result.GetResultWithOwnership()) : PrepareFlowOutcome(std::move(result.GetError()));
}
StartIngestionJobOutcome BedrockAgentClient::StartIngestionJob(const StartIngestionJobRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartIngestionJob", "Required field: KnowledgeBaseId, is not set");
    return StartIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartIngestionJob", "Required field: DataSourceId, is not set");
    return StartIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/ingestionjobs/");
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartIngestionJobOutcome(result.GetResultWithOwnership())
                            : StartIngestionJobOutcome(std::move(result.GetError()));
}
StopIngestionJobOutcome BedrockAgentClient::StopIngestionJob(const StopIngestionJobRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopIngestionJob", "Required field: KnowledgeBaseId, is not set");
    return StopIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopIngestionJob", "Required field: DataSourceId, is not set");
    return StopIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DataSourceId]", false));
  }
  if (!request.IngestionJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopIngestionJob", "Required field: IngestionJobId, is not set");
    return StopIngestionJobOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [IngestionJobId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
        resolvedEndpoint.AddPathSegments("/ingestionjobs/");
        resolvedEndpoint.AddPathSegment(request.GetIngestionJobId());
        resolvedEndpoint.AddPathSegments("/stop");
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopIngestionJobOutcome(result.GetResultWithOwnership())
                            : StopIngestionJobOutcome(std::move(result.GetError()));
}
TagResourceOutcome BedrockAgentClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/tags/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}
UntagResourceOutcome BedrockAgentClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/tags/");
        resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      },
      Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}
UpdateAgentOutcome BedrockAgentClient::UpdateAgent(const UpdateAgentRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgent", "Required field: AgentId, is not set");
    return UpdateAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AgentId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentOutcome(result.GetResultWithOwnership()) : UpdateAgentOutcome(std::move(result.GetError()));
}
UpdateAgentActionGroupOutcome BedrockAgentClient::UpdateAgentActionGroup(const UpdateAgentActionGroupRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentActionGroup", "Required field: AgentId, is not set");
    return UpdateAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentActionGroup", "Required field: AgentVersion, is not set");
    return UpdateAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }
  if (!request.ActionGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentActionGroup", "Required field: ActionGroupId, is not set");
    return UpdateAgentActionGroupOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionGroupId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/actiongroups/");
        resolvedEndpoint.AddPathSegment(request.GetActionGroupId());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentActionGroupOutcome(result.GetResultWithOwnership())
                            : UpdateAgentActionGroupOutcome(std::move(result.GetError()));
}
UpdateAgentAliasOutcome BedrockAgentClient::UpdateAgentAlias(const UpdateAgentAliasRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentAlias", "Required field: AgentId, is not set");
    return UpdateAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentId]", false));
  }
  if (!request.AgentAliasIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentAlias", "Required field: AgentAliasId, is not set");
    return UpdateAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentAliasId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentaliases/");
        resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentAliasOutcome(result.GetResultWithOwnership())
                            : UpdateAgentAliasOutcome(std::move(result.GetError()));
}
UpdateAgentCollaboratorOutcome BedrockAgentClient::UpdateAgentCollaborator(const UpdateAgentCollaboratorRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentCollaborator", "Required field: AgentId, is not set");
    return UpdateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentCollaborator", "Required field: AgentVersion, is not set");
    return UpdateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }
  if (!request.CollaboratorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentCollaborator", "Required field: CollaboratorId, is not set");
    return UpdateAgentCollaboratorOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CollaboratorId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/agentcollaborators/");
        resolvedEndpoint.AddPathSegment(request.GetCollaboratorId());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentCollaboratorOutcome(result.GetResultWithOwnership())
                            : UpdateAgentCollaboratorOutcome(std::move(result.GetError()));
}
UpdateAgentKnowledgeBaseOutcome BedrockAgentClient::UpdateAgentKnowledgeBase(const UpdateAgentKnowledgeBaseRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentKnowledgeBase", "Required field: AgentId, is not set");
    return UpdateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.AgentVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentKnowledgeBase", "Required field: AgentVersion, is not set");
    return UpdateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentVersion]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return UpdateAgentKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(
        BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/agents/");
        resolvedEndpoint.AddPathSegment(request.GetAgentId());
        resolvedEndpoint.AddPathSegments("/agentversions/");
        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : UpdateAgentKnowledgeBaseOutcome(std::move(result.GetError()));
}
UpdateDataSourceOutcome BedrockAgentClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: KnowledgeBaseId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DataSourceId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DataSourceId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
        resolvedEndpoint.AddPathSegments("/datasources/");
        resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDataSourceOutcome(result.GetResultWithOwnership())
                            : UpdateDataSourceOutcome(std::move(result.GetError()));
}
UpdateFlowOutcome BedrockAgentClient::UpdateFlow(const UpdateFlowRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: FlowIdentifier, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowOutcome(result.GetResultWithOwnership()) : UpdateFlowOutcome(std::move(result.GetError()));
}
UpdateFlowAliasOutcome BedrockAgentClient::UpdateFlowAlias(const UpdateFlowAliasRequest& request) const {
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowAlias", "Required field: FlowIdentifier, is not set");
    return UpdateFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FlowIdentifier]", false));
  }
  if (!request.AliasIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowAlias", "Required field: AliasIdentifier, is not set");
    return UpdateFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AliasIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/flows/");
        resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
        resolvedEndpoint.AddPathSegments("/aliases/");
        resolvedEndpoint.AddPathSegment(request.GetAliasIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowAliasOutcome(result.GetResultWithOwnership())
                            : UpdateFlowAliasOutcome(std::move(result.GetError()));
}
UpdateKnowledgeBaseOutcome BedrockAgentClient::UpdateKnowledgeBase(const UpdateKnowledgeBaseRequest& request) const {
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [KnowledgeBaseId]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/knowledgebases/");
        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : UpdateKnowledgeBaseOutcome(std::move(result.GetError()));
}
UpdatePromptOutcome BedrockAgentClient::UpdatePrompt(const UpdatePromptRequest& request) const {
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePrompt", "Required field: PromptIdentifier, is not set");
    return UpdatePromptOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PromptIdentifier]", false));
  }

  auto result = InvokeServiceOperation(
      request,
      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) {
        resolvedEndpoint.AddPathSegments("/prompts/");
        resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
      },
      Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdatePromptOutcome(result.GetResultWithOwnership()) : UpdatePromptOutcome(std::move(result.GetError()));
}
ValidateFlowDefinitionOutcome BedrockAgentClient::ValidateFlowDefinition(const ValidateFlowDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(
      request, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) { resolvedEndpoint.AddPathSegments("/flows/validate-definition"); },
      Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateFlowDefinitionOutcome(result.GetResultWithOwnership())
                            : ValidateFlowDefinitionOutcome(std::move(result.GetError()));
}
