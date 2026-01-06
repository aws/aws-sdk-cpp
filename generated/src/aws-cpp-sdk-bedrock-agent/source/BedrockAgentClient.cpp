/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
BedrockAgentClient::BedrockAgentClient(const Client::ClientConfiguration& clientConfiguration)
    : AwsSmithyClientT(
          clientConfiguration, GetServiceName(), "Bedrock Agent", Aws::Http::CreateHttpClient(clientConfiguration),
          Aws::MakeShared<BedrockAgentErrorMarshaller>(ALLOCATION_TAG), Aws::MakeShared<BedrockAgentEndpointProvider>(ALLOCATION_TAG),
          Aws::MakeShared<smithy::GenericAuthSchemeResolver<>>(
              ALLOCATION_TAG, Aws::Vector<smithy::AuthSchemeOption>({smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption})),
          {
              {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId,
               smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region, clientConfiguration.credentialProviderConfig}},
          }) {}

BedrockAgentClient::BedrockAgentClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration)
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
                                       const Client::ClientConfiguration& clientConfiguration)
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
AssociateAgentCollaboratorOutcome BedrockAgentClient::AssociateAgentCollaborator(const AssociateAgentCollaboratorRequest& request) const {
  AWS_OPERATION_GUARD(AssociateAgentCollaborator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAgentCollaborator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateAgentCollaborator",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateAgentCollaboratorOutcome>(
      [&]() -> AssociateAgentCollaboratorOutcome {
        return AssociateAgentCollaboratorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                        Aws::Http::HttpMethod::HTTP_PUT,
                                                                        [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                          resolvedEndpoint.AddPathSegments("/agents/");
                                                                          resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                          resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                          resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                          resolvedEndpoint.AddPathSegments("/agentcollaborators/");
                                                                        }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateAgentKnowledgeBaseOutcome BedrockAgentClient::AssociateAgentKnowledgeBase(
    const AssociateAgentKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(AssociateAgentKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAgentKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateAgentKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateAgentKnowledgeBaseOutcome>(
      [&]() -> AssociateAgentKnowledgeBaseOutcome {
        return AssociateAgentKnowledgeBaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                         Aws::Http::HttpMethod::HTTP_PUT,
                                                                         [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                           resolvedEndpoint.AddPathSegments("/agents/");
                                                                           resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                           resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                           resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                           resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                         }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAgentOutcome BedrockAgentClient::CreateAgent(const CreateAgentRequest& request) const {
  AWS_OPERATION_GUARD(CreateAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAgent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAgentOutcome>(
      [&]() -> CreateAgentOutcome {
        return CreateAgentOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/agents/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAgentActionGroupOutcome BedrockAgentClient::CreateAgentActionGroup(const CreateAgentActionGroupRequest& request) const {
  AWS_OPERATION_GUARD(CreateAgentActionGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAgentActionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAgentActionGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAgentActionGroupOutcome>(
      [&]() -> CreateAgentActionGroupOutcome {
        return CreateAgentActionGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                    Aws::Http::HttpMethod::HTTP_PUT,
                                                                    [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                      resolvedEndpoint.AddPathSegments("/agents/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                      resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                      resolvedEndpoint.AddPathSegments("/actiongroups/");
                                                                    }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateAgentAliasOutcome BedrockAgentClient::CreateAgentAlias(const CreateAgentAliasRequest& request) const {
  AWS_OPERATION_GUARD(CreateAgentAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAgentAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAgentAlias", "Required field: AgentId, is not set");
    return CreateAgentAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAgentAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateAgentAliasOutcome>(
      [&]() -> CreateAgentAliasOutcome {
        return CreateAgentAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/agents/");
                                                                resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                resolvedEndpoint.AddPathSegments("/agentaliases/");
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDataSourceOutcome BedrockAgentClient::CreateDataSource(const CreateDataSourceRequest& request) const {
  AWS_OPERATION_GUARD(CreateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: KnowledgeBaseId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDataSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDataSourceOutcome>(
      [&]() -> CreateDataSourceOutcome {
        return CreateDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                resolvedEndpoint.AddPathSegments("/datasources/");
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFlowOutcome BedrockAgentClient::CreateFlow(const CreateFlowRequest& request) const {
  AWS_OPERATION_GUARD(CreateFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFlowOutcome>(
      [&]() -> CreateFlowOutcome {
        return CreateFlowOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/flows/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFlowAliasOutcome BedrockAgentClient::CreateFlowAlias(const CreateFlowAliasRequest& request) const {
  AWS_OPERATION_GUARD(CreateFlowAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlowAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFlowAlias", "Required field: FlowIdentifier, is not set");
    return CreateFlowAliasOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFlowAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFlowAliasOutcome>(
      [&]() -> CreateFlowAliasOutcome {
        return CreateFlowAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/flows/");
                                                               resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                               resolvedEndpoint.AddPathSegments("/aliases");
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFlowVersionOutcome BedrockAgentClient::CreateFlowVersion(const CreateFlowVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreateFlowVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlowVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFlowVersion", "Required field: FlowIdentifier, is not set");
    return CreateFlowVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFlowVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFlowVersionOutcome>(
      [&]() -> CreateFlowVersionOutcome {
        return CreateFlowVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/flows/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                                 resolvedEndpoint.AddPathSegments("/versions");
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateKnowledgeBaseOutcome BedrockAgentClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(CreateKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateKnowledgeBaseOutcome>(
      [&]() -> CreateKnowledgeBaseOutcome {
        return CreateKnowledgeBaseOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/knowledgebases/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePromptOutcome BedrockAgentClient::CreatePrompt(const CreatePromptRequest& request) const {
  AWS_OPERATION_GUARD(CreatePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePrompt",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePromptOutcome>(
      [&]() -> CreatePromptOutcome {
        return CreatePromptOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/prompts/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePromptVersionOutcome BedrockAgentClient::CreatePromptVersion(const CreatePromptVersionRequest& request) const {
  AWS_OPERATION_GUARD(CreatePromptVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePromptVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePromptVersion", "Required field: PromptIdentifier, is not set");
    return CreatePromptVersionOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [PromptIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePromptVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePromptVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePromptVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePromptVersionOutcome>(
      [&]() -> CreatePromptVersionOutcome {
        return CreatePromptVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                 Aws::Http::HttpMethod::HTTP_POST,
                                                                 [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                   resolvedEndpoint.AddPathSegments("/prompts/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
                                                                   resolvedEndpoint.AddPathSegments("/versions");
                                                                 }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAgentOutcome BedrockAgentClient::DeleteAgent(const DeleteAgentRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAgent", "Required field: AgentId, is not set");
    return DeleteAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAgent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAgentOutcome>(
      [&]() -> DeleteAgentOutcome {
        return DeleteAgentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                         [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                           resolvedEndpoint.AddPathSegments("/agents/");
                                                           resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                         }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAgentActionGroupOutcome BedrockAgentClient::DeleteAgentActionGroup(const DeleteAgentActionGroupRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAgentActionGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAgentActionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAgentActionGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAgentActionGroupOutcome>(
      [&]() -> DeleteAgentActionGroupOutcome {
        return DeleteAgentActionGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                    Aws::Http::HttpMethod::HTTP_DELETE,
                                                                    [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                      resolvedEndpoint.AddPathSegments("/agents/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                      resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                      resolvedEndpoint.AddPathSegments("/actiongroups/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetActionGroupId());
                                                                    }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAgentAliasOutcome BedrockAgentClient::DeleteAgentAlias(const DeleteAgentAliasRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAgentAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAgentAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAgentAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAgentAliasOutcome>(
      [&]() -> DeleteAgentAliasOutcome {
        return DeleteAgentAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/agents/");
                                                                resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                resolvedEndpoint.AddPathSegments("/agentaliases/");
                                                                resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteAgentVersionOutcome BedrockAgentClient::DeleteAgentVersion(const DeleteAgentVersionRequest& request) const {
  AWS_OPERATION_GUARD(DeleteAgentVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAgentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteAgentVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteAgentVersionOutcome>(
      [&]() -> DeleteAgentVersionOutcome {
        return DeleteAgentVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                Aws::Http::HttpMethod::HTTP_DELETE,
                                                                [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                  resolvedEndpoint.AddPathSegments("/agents/");
                                                                  resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                  resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                  resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDataSourceOutcome BedrockAgentClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  AWS_OPERATION_GUARD(DeleteDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDataSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDataSourceOutcome>(
      [&]() -> DeleteDataSourceOutcome {
        return DeleteDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                resolvedEndpoint.AddPathSegments("/datasources/");
                                                                resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFlowOutcome BedrockAgentClient::DeleteFlow(const DeleteFlowRequest& request) const {
  AWS_OPERATION_GUARD(DeleteFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFlow", "Required field: FlowIdentifier, is not set");
    return DeleteFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFlowOutcome>(
      [&]() -> DeleteFlowOutcome {
        return DeleteFlowOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                        [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                          resolvedEndpoint.AddPathSegments("/flows/");
                                                          resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                        }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFlowAliasOutcome BedrockAgentClient::DeleteFlowAlias(const DeleteFlowAliasRequest& request) const {
  AWS_OPERATION_GUARD(DeleteFlowAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlowAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFlowAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFlowAliasOutcome>(
      [&]() -> DeleteFlowAliasOutcome {
        return DeleteFlowAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/flows/");
                                                               resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                               resolvedEndpoint.AddPathSegments("/aliases/");
                                                               resolvedEndpoint.AddPathSegment(request.GetAliasIdentifier());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFlowVersionOutcome BedrockAgentClient::DeleteFlowVersion(const DeleteFlowVersionRequest& request) const {
  AWS_OPERATION_GUARD(DeleteFlowVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlowVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFlowVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFlowVersionOutcome>(
      [&]() -> DeleteFlowVersionOutcome {
        return DeleteFlowVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                               Aws::Http::HttpMethod::HTTP_DELETE,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/flows/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                                 resolvedEndpoint.AddPathSegments("/versions/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetFlowVersion());
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKnowledgeBaseOutcome BedrockAgentClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(DeleteKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return DeleteKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKnowledgeBaseOutcome>(
      [&]() -> DeleteKnowledgeBaseOutcome {
        return DeleteKnowledgeBaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                 Aws::Http::HttpMethod::HTTP_DELETE,
                                                                 [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                   resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                 }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteKnowledgeBaseDocumentsOutcome BedrockAgentClient::DeleteKnowledgeBaseDocuments(
    const DeleteKnowledgeBaseDocumentsRequest& request) const {
  AWS_OPERATION_GUARD(DeleteKnowledgeBaseDocuments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKnowledgeBaseDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteKnowledgeBaseDocuments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteKnowledgeBaseDocumentsOutcome>(
      [&]() -> DeleteKnowledgeBaseDocumentsOutcome {
        return DeleteKnowledgeBaseDocumentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                          Aws::Http::HttpMethod::HTTP_POST,
                                                                          [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                            resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                            resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                            resolvedEndpoint.AddPathSegments("/datasources/");
                                                                            resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                                            resolvedEndpoint.AddPathSegments("/documents/deleteDocuments");
                                                                          }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePromptOutcome BedrockAgentClient::DeletePrompt(const DeletePromptRequest& request) const {
  AWS_OPERATION_GUARD(DeletePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePrompt", "Required field: PromptIdentifier, is not set");
    return DeletePromptOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PromptIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeletePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeletePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeletePrompt",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeletePromptOutcome>(
      [&]() -> DeletePromptOutcome {
        return DeletePromptOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                          [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                            resolvedEndpoint.AddPathSegments("/prompts/");
                                                            resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
                                                          }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateAgentCollaboratorOutcome BedrockAgentClient::DisassociateAgentCollaborator(
    const DisassociateAgentCollaboratorRequest& request) const {
  AWS_OPERATION_GUARD(DisassociateAgentCollaborator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAgentCollaborator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateAgentCollaborator",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateAgentCollaboratorOutcome>(
      [&]() -> DisassociateAgentCollaboratorOutcome {
        return DisassociateAgentCollaboratorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                           Aws::Http::HttpMethod::HTTP_DELETE,
                                                                           [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                             resolvedEndpoint.AddPathSegments("/agents/");
                                                                             resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                             resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                             resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                             resolvedEndpoint.AddPathSegments("/agentcollaborators/");
                                                                             resolvedEndpoint.AddPathSegment(request.GetCollaboratorId());
                                                                           }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateAgentKnowledgeBaseOutcome BedrockAgentClient::DisassociateAgentKnowledgeBase(
    const DisassociateAgentKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(DisassociateAgentKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAgentKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateAgentKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateAgentKnowledgeBaseOutcome>(
      [&]() -> DisassociateAgentKnowledgeBaseOutcome {
        return DisassociateAgentKnowledgeBaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                            Aws::Http::HttpMethod::HTTP_DELETE,
                                                                            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                              resolvedEndpoint.AddPathSegments("/agents/");
                                                                              resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                              resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                              resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                              resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                              resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                            }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAgentOutcome BedrockAgentClient::GetAgent(const GetAgentRequest& request) const {
  AWS_OPERATION_GUARD(GetAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgent", "Required field: AgentId, is not set");
    return GetAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentOutcome>(
      [&]() -> GetAgentOutcome {
        return GetAgentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                        resolvedEndpoint.AddPathSegments("/agents/");
                                                        resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                      }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAgentActionGroupOutcome BedrockAgentClient::GetAgentActionGroup(const GetAgentActionGroupRequest& request) const {
  AWS_OPERATION_GUARD(GetAgentActionGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAgentActionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgentActionGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentActionGroupOutcome>(
      [&]() -> GetAgentActionGroupOutcome {
        return GetAgentActionGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                                 [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                   resolvedEndpoint.AddPathSegments("/agents/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                   resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                   resolvedEndpoint.AddPathSegments("/actiongroups/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetActionGroupId());
                                                                 }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAgentAliasOutcome BedrockAgentClient::GetAgentAlias(const GetAgentAliasRequest& request) const {
  AWS_OPERATION_GUARD(GetAgentAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAgentAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgentAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentAliasOutcome>(
      [&]() -> GetAgentAliasOutcome {
        return GetAgentAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                           [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                             resolvedEndpoint.AddPathSegments("/agents/");
                                                             resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                             resolvedEndpoint.AddPathSegments("/agentaliases/");
                                                             resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
                                                           }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAgentCollaboratorOutcome BedrockAgentClient::GetAgentCollaborator(const GetAgentCollaboratorRequest& request) const {
  AWS_OPERATION_GUARD(GetAgentCollaborator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAgentCollaborator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgentCollaborator",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentCollaboratorOutcome>(
      [&]() -> GetAgentCollaboratorOutcome {
        return GetAgentCollaboratorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                  Aws::Http::HttpMethod::HTTP_GET,
                                                                  [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                    resolvedEndpoint.AddPathSegments("/agents/");
                                                                    resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                    resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                    resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                    resolvedEndpoint.AddPathSegments("/agentcollaborators/");
                                                                    resolvedEndpoint.AddPathSegment(request.GetCollaboratorId());
                                                                  }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAgentKnowledgeBaseOutcome BedrockAgentClient::GetAgentKnowledgeBase(const GetAgentKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(GetAgentKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAgentKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgentKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentKnowledgeBaseOutcome>(
      [&]() -> GetAgentKnowledgeBaseOutcome {
        return GetAgentKnowledgeBaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                   Aws::Http::HttpMethod::HTTP_GET,
                                                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                     resolvedEndpoint.AddPathSegments("/agents/");
                                                                     resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                     resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                     resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                     resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                     resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetAgentVersionOutcome BedrockAgentClient::GetAgentVersion(const GetAgentVersionRequest& request) const {
  AWS_OPERATION_GUARD(GetAgentVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAgentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetAgentVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetAgentVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetAgentVersionOutcome>(
      [&]() -> GetAgentVersionOutcome {
        return GetAgentVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/agents/");
                                                               resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                               resolvedEndpoint.AddPathSegments("/agentversions/");
                                                               resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataSourceOutcome BedrockAgentClient::GetDataSource(const GetDataSourceRequest& request) const {
  AWS_OPERATION_GUARD(GetDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDataSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDataSourceOutcome>(
      [&]() -> GetDataSourceOutcome {
        return GetDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                           [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                             resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                             resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                             resolvedEndpoint.AddPathSegments("/datasources/");
                                                             resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                           }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFlowOutcome BedrockAgentClient::GetFlow(const GetFlowRequest& request) const {
  AWS_OPERATION_GUARD(GetFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFlow", "Required field: FlowIdentifier, is not set");
    return GetFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFlowOutcome>(
      [&]() -> GetFlowOutcome {
        return GetFlowOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                     [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                       resolvedEndpoint.AddPathSegments("/flows/");
                                                       resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                     }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFlowAliasOutcome BedrockAgentClient::GetFlowAlias(const GetFlowAliasRequest& request) const {
  AWS_OPERATION_GUARD(GetFlowAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFlowAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFlowAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFlowAliasOutcome>(
      [&]() -> GetFlowAliasOutcome {
        return GetFlowAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                          [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                            resolvedEndpoint.AddPathSegments("/flows/");
                                                            resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                            resolvedEndpoint.AddPathSegments("/aliases/");
                                                            resolvedEndpoint.AddPathSegment(request.GetAliasIdentifier());
                                                          }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetFlowVersionOutcome BedrockAgentClient::GetFlowVersion(const GetFlowVersionRequest& request) const {
  AWS_OPERATION_GUARD(GetFlowVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFlowVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetFlowVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetFlowVersion",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetFlowVersionOutcome>(
      [&]() -> GetFlowVersionOutcome {
        return GetFlowVersionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                              resolvedEndpoint.AddPathSegments("/flows/");
                                                              resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                              resolvedEndpoint.AddPathSegments("/versions/");
                                                              resolvedEndpoint.AddPathSegment(request.GetFlowVersion());
                                                            }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetIngestionJobOutcome BedrockAgentClient::GetIngestionJob(const GetIngestionJobRequest& request) const {
  AWS_OPERATION_GUARD(GetIngestionJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIngestionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetIngestionJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetIngestionJobOutcome>(
      [&]() -> GetIngestionJobOutcome {
        return GetIngestionJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                               resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                               resolvedEndpoint.AddPathSegments("/datasources/");
                                                               resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                               resolvedEndpoint.AddPathSegments("/ingestionjobs/");
                                                               resolvedEndpoint.AddPathSegment(request.GetIngestionJobId());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKnowledgeBaseOutcome BedrockAgentClient::GetKnowledgeBase(const GetKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(GetKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return GetKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKnowledgeBaseOutcome>(
      [&]() -> GetKnowledgeBaseOutcome {
        return GetKnowledgeBaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetKnowledgeBaseDocumentsOutcome BedrockAgentClient::GetKnowledgeBaseDocuments(const GetKnowledgeBaseDocumentsRequest& request) const {
  AWS_OPERATION_GUARD(GetKnowledgeBaseDocuments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKnowledgeBaseDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetKnowledgeBaseDocuments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetKnowledgeBaseDocumentsOutcome>(
      [&]() -> GetKnowledgeBaseDocumentsOutcome {
        return GetKnowledgeBaseDocumentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                       Aws::Http::HttpMethod::HTTP_POST,
                                                                       [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                         resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                         resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                         resolvedEndpoint.AddPathSegments("/datasources/");
                                                                         resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                                         resolvedEndpoint.AddPathSegments("/documents/getDocuments");
                                                                       }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPromptOutcome BedrockAgentClient::GetPrompt(const GetPromptRequest& request) const {
  AWS_OPERATION_GUARD(GetPrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetPrompt", "Required field: PromptIdentifier, is not set");
    return GetPromptOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [PromptIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetPrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetPrompt",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetPromptOutcome>(
      [&]() -> GetPromptOutcome {
        return GetPromptOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                       [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                         resolvedEndpoint.AddPathSegments("/prompts/");
                                                         resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
                                                       }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

IngestKnowledgeBaseDocumentsOutcome BedrockAgentClient::IngestKnowledgeBaseDocuments(
    const IngestKnowledgeBaseDocumentsRequest& request) const {
  AWS_OPERATION_GUARD(IngestKnowledgeBaseDocuments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IngestKnowledgeBaseDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, IngestKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, IngestKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".IngestKnowledgeBaseDocuments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<IngestKnowledgeBaseDocumentsOutcome>(
      [&]() -> IngestKnowledgeBaseDocumentsOutcome {
        return IngestKnowledgeBaseDocumentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                          Aws::Http::HttpMethod::HTTP_PUT,
                                                                          [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                            resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                            resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                            resolvedEndpoint.AddPathSegments("/datasources/");
                                                                            resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                                            resolvedEndpoint.AddPathSegments("/documents");
                                                                          }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAgentActionGroupsOutcome BedrockAgentClient::ListAgentActionGroups(const ListAgentActionGroupsRequest& request) const {
  AWS_OPERATION_GUARD(ListAgentActionGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgentActionGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAgentActionGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAgentActionGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAgentActionGroups",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAgentActionGroupsOutcome>(
      [&]() -> ListAgentActionGroupsOutcome {
        return ListAgentActionGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                   Aws::Http::HttpMethod::HTTP_POST,
                                                                   [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                     resolvedEndpoint.AddPathSegments("/agents/");
                                                                     resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                     resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                     resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                     resolvedEndpoint.AddPathSegments("/actiongroups/");
                                                                   }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAgentAliasesOutcome BedrockAgentClient::ListAgentAliases(const ListAgentAliasesRequest& request) const {
  AWS_OPERATION_GUARD(ListAgentAliases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgentAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentAliases", "Required field: AgentId, is not set");
    return ListAgentAliasesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAgentAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAgentAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAgentAliases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAgentAliasesOutcome>(
      [&]() -> ListAgentAliasesOutcome {
        return ListAgentAliasesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/agents/");
                                                                resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                resolvedEndpoint.AddPathSegments("/agentaliases/");
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAgentCollaboratorsOutcome BedrockAgentClient::ListAgentCollaborators(const ListAgentCollaboratorsRequest& request) const {
  AWS_OPERATION_GUARD(ListAgentCollaborators);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgentCollaborators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAgentCollaborators, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAgentCollaborators, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAgentCollaborators",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAgentCollaboratorsOutcome>(
      [&]() -> ListAgentCollaboratorsOutcome {
        return ListAgentCollaboratorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                    Aws::Http::HttpMethod::HTTP_POST,
                                                                    [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                      resolvedEndpoint.AddPathSegments("/agents/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                      resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                      resolvedEndpoint.AddPathSegments("/agentcollaborators/");
                                                                    }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAgentKnowledgeBasesOutcome BedrockAgentClient::ListAgentKnowledgeBases(const ListAgentKnowledgeBasesRequest& request) const {
  AWS_OPERATION_GUARD(ListAgentKnowledgeBases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgentKnowledgeBases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAgentKnowledgeBases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAgentKnowledgeBases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAgentKnowledgeBases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAgentKnowledgeBasesOutcome>(
      [&]() -> ListAgentKnowledgeBasesOutcome {
        return ListAgentKnowledgeBasesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                     Aws::Http::HttpMethod::HTTP_POST,
                                                                     [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                       resolvedEndpoint.AddPathSegments("/agents/");
                                                                       resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                       resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                       resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                       resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                     }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAgentVersionsOutcome BedrockAgentClient::ListAgentVersions(const ListAgentVersionsRequest& request) const {
  AWS_OPERATION_GUARD(ListAgentVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAgentVersions", "Required field: AgentId, is not set");
    return ListAgentVersionsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAgentVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAgentVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAgentVersions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAgentVersionsOutcome>(
      [&]() -> ListAgentVersionsOutcome {
        return ListAgentVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/agents/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                 resolvedEndpoint.AddPathSegments("/agentversions/");
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAgentsOutcome BedrockAgentClient::ListAgents(const ListAgentsRequest& request) const {
  AWS_OPERATION_GUARD(ListAgents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListAgents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAgents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAgents",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAgentsOutcome>(
      [&]() -> ListAgentsOutcome {
        return ListAgentsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/agents/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourcesOutcome BedrockAgentClient::ListDataSources(const ListDataSourcesRequest& request) const {
  AWS_OPERATION_GUARD(ListDataSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: KnowledgeBaseId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSources",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourcesOutcome>(
      [&]() -> ListDataSourcesOutcome {
        return ListDataSourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                               resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                               resolvedEndpoint.AddPathSegments("/datasources/");
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFlowAliasesOutcome BedrockAgentClient::ListFlowAliases(const ListFlowAliasesRequest& request) const {
  AWS_OPERATION_GUARD(ListFlowAliases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlowAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowAliases", "Required field: FlowIdentifier, is not set");
    return ListFlowAliasesOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFlowAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFlowAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFlowAliases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFlowAliasesOutcome>(
      [&]() -> ListFlowAliasesOutcome {
        return ListFlowAliasesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/flows/");
                                                               resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                               resolvedEndpoint.AddPathSegments("/aliases");
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFlowVersionsOutcome BedrockAgentClient::ListFlowVersions(const ListFlowVersionsRequest& request) const {
  AWS_OPERATION_GUARD(ListFlowVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlowVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFlowVersions", "Required field: FlowIdentifier, is not set");
    return ListFlowVersionsOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFlowVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFlowVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFlowVersions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFlowVersionsOutcome>(
      [&]() -> ListFlowVersionsOutcome {
        return ListFlowVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/flows/");
                                                                resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                                resolvedEndpoint.AddPathSegments("/versions");
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFlowsOutcome BedrockAgentClient::ListFlows(const ListFlowsRequest& request) const {
  AWS_OPERATION_GUARD(ListFlows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFlows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFlows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFlows",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFlowsOutcome>(
      [&]() -> ListFlowsOutcome {
        return ListFlowsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/flows/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIngestionJobsOutcome BedrockAgentClient::ListIngestionJobs(const ListIngestionJobsRequest& request) const {
  AWS_OPERATION_GUARD(ListIngestionJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIngestionJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIngestionJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIngestionJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIngestionJobs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIngestionJobsOutcome>(
      [&]() -> ListIngestionJobsOutcome {
        return ListIngestionJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                 resolvedEndpoint.AddPathSegments("/datasources/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                                 resolvedEndpoint.AddPathSegments("/ingestionjobs/");
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKnowledgeBaseDocumentsOutcome BedrockAgentClient::ListKnowledgeBaseDocuments(const ListKnowledgeBaseDocumentsRequest& request) const {
  AWS_OPERATION_GUARD(ListKnowledgeBaseDocuments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKnowledgeBaseDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKnowledgeBaseDocuments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKnowledgeBaseDocuments",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKnowledgeBaseDocumentsOutcome>(
      [&]() -> ListKnowledgeBaseDocumentsOutcome {
        return ListKnowledgeBaseDocumentsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                        Aws::Http::HttpMethod::HTTP_POST,
                                                                        [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                          resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                          resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                          resolvedEndpoint.AddPathSegments("/datasources/");
                                                                          resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                                          resolvedEndpoint.AddPathSegments("/documents");
                                                                        }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListKnowledgeBasesOutcome BedrockAgentClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const {
  AWS_OPERATION_GUARD(ListKnowledgeBases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKnowledgeBases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListKnowledgeBases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListKnowledgeBases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListKnowledgeBases",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListKnowledgeBasesOutcome>(
      [&]() -> ListKnowledgeBasesOutcome {
        return ListKnowledgeBasesOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/knowledgebases/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPromptsOutcome BedrockAgentClient::ListPrompts(const ListPromptsRequest& request) const {
  AWS_OPERATION_GUARD(ListPrompts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPrompts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListPrompts, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListPrompts",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListPromptsOutcome>(
      [&]() -> ListPromptsOutcome {
        return ListPromptsOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/prompts/"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome BedrockAgentClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
      [&]() -> ListTagsForResourceOutcome {
        return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET,
                                                                 [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                   resolvedEndpoint.AddPathSegments("/tags/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetResourceArn());
                                                                 }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PrepareAgentOutcome BedrockAgentClient::PrepareAgent(const PrepareAgentRequest& request) const {
  AWS_OPERATION_GUARD(PrepareAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PrepareAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PrepareAgent", "Required field: AgentId, is not set");
    return PrepareAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PrepareAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PrepareAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PrepareAgent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PrepareAgentOutcome>(
      [&]() -> PrepareAgentOutcome {
        return PrepareAgentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                          [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                            resolvedEndpoint.AddPathSegments("/agents/");
                                                            resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                          }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PrepareFlowOutcome BedrockAgentClient::PrepareFlow(const PrepareFlowRequest& request) const {
  AWS_OPERATION_GUARD(PrepareFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PrepareFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PrepareFlow", "Required field: FlowIdentifier, is not set");
    return PrepareFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PrepareFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PrepareFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PrepareFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PrepareFlowOutcome>(
      [&]() -> PrepareFlowOutcome {
        return PrepareFlowOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                         [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                           resolvedEndpoint.AddPathSegments("/flows/");
                                                           resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                         }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartIngestionJobOutcome BedrockAgentClient::StartIngestionJob(const StartIngestionJobRequest& request) const {
  AWS_OPERATION_GUARD(StartIngestionJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartIngestionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartIngestionJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartIngestionJobOutcome>(
      [&]() -> StartIngestionJobOutcome {
        return StartIngestionJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                               [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                 resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                 resolvedEndpoint.AddPathSegments("/datasources/");
                                                                 resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                                 resolvedEndpoint.AddPathSegments("/ingestionjobs/");
                                                               }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopIngestionJobOutcome BedrockAgentClient::StopIngestionJob(const StopIngestionJobRequest& request) const {
  AWS_OPERATION_GUARD(StopIngestionJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopIngestionJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopIngestionJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopIngestionJob",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopIngestionJobOutcome>(
      [&]() -> StopIngestionJobOutcome {
        return StopIngestionJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                resolvedEndpoint.AddPathSegments("/datasources/");
                                                                resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                                resolvedEndpoint.AddPathSegments("/ingestionjobs/");
                                                                resolvedEndpoint.AddPathSegment(request.GetIngestionJobId());
                                                                resolvedEndpoint.AddPathSegments("/stop");
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome BedrockAgentClient::TagResource(const TagResourceRequest& request) const {
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
      [&]() -> TagResourceOutcome {
        return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
                                                         [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                           resolvedEndpoint.AddPathSegments("/tags/");
                                                           resolvedEndpoint.AddPathSegment(request.GetResourceArn());
                                                         }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome BedrockAgentClient::UntagResource(const UntagResourceRequest& request) const {
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
      [&]() -> UntagResourceOutcome {
        return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE,
                                                           [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                             resolvedEndpoint.AddPathSegments("/tags/");
                                                             resolvedEndpoint.AddPathSegment(request.GetResourceArn());
                                                           }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAgentOutcome BedrockAgentClient::UpdateAgent(const UpdateAgentRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAgent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgent", "Required field: AgentId, is not set");
    return UpdateAgentOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AgentId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAgent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAgent",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAgentOutcome>(
      [&]() -> UpdateAgentOutcome {
        return UpdateAgentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                         [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                           resolvedEndpoint.AddPathSegments("/agents/");
                                                           resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                         }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAgentActionGroupOutcome BedrockAgentClient::UpdateAgentActionGroup(const UpdateAgentActionGroupRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAgentActionGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgentActionGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAgentActionGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAgentActionGroup",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAgentActionGroupOutcome>(
      [&]() -> UpdateAgentActionGroupOutcome {
        return UpdateAgentActionGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                    Aws::Http::HttpMethod::HTTP_PUT,
                                                                    [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                      resolvedEndpoint.AddPathSegments("/agents/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                      resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                      resolvedEndpoint.AddPathSegments("/actiongroups/");
                                                                      resolvedEndpoint.AddPathSegment(request.GetActionGroupId());
                                                                    }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAgentAliasOutcome BedrockAgentClient::UpdateAgentAlias(const UpdateAgentAliasRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAgentAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgentAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAgentAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAgentAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAgentAliasOutcome>(
      [&]() -> UpdateAgentAliasOutcome {
        return UpdateAgentAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/agents/");
                                                                resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                resolvedEndpoint.AddPathSegments("/agentaliases/");
                                                                resolvedEndpoint.AddPathSegment(request.GetAgentAliasId());
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAgentCollaboratorOutcome BedrockAgentClient::UpdateAgentCollaborator(const UpdateAgentCollaboratorRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAgentCollaborator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgentCollaborator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAgentCollaborator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAgentCollaborator",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAgentCollaboratorOutcome>(
      [&]() -> UpdateAgentCollaboratorOutcome {
        return UpdateAgentCollaboratorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                     Aws::Http::HttpMethod::HTTP_PUT,
                                                                     [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                       resolvedEndpoint.AddPathSegments("/agents/");
                                                                       resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                       resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                       resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                       resolvedEndpoint.AddPathSegments("/agentcollaborators/");
                                                                       resolvedEndpoint.AddPathSegment(request.GetCollaboratorId());
                                                                     }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAgentKnowledgeBaseOutcome BedrockAgentClient::UpdateAgentKnowledgeBase(const UpdateAgentKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(UpdateAgentKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgentKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAgentKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAgentKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAgentKnowledgeBaseOutcome>(
      [&]() -> UpdateAgentKnowledgeBaseOutcome {
        return UpdateAgentKnowledgeBaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(),
                                                                      Aws::Http::HttpMethod::HTTP_PUT,
                                                                      [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                        resolvedEndpoint.AddPathSegments("/agents/");
                                                                        resolvedEndpoint.AddPathSegment(request.GetAgentId());
                                                                        resolvedEndpoint.AddPathSegments("/agentversions/");
                                                                        resolvedEndpoint.AddPathSegment(request.GetAgentVersion());
                                                                        resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                        resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                      }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSourceOutcome BedrockAgentClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  AWS_OPERATION_GUARD(UpdateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSource",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSourceOutcome>(
      [&]() -> UpdateDataSourceOutcome {
        return UpdateDataSourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                              [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                resolvedEndpoint.AddPathSegments("/datasources/");
                                                                resolvedEndpoint.AddPathSegment(request.GetDataSourceId());
                                                              }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFlowOutcome BedrockAgentClient::UpdateFlow(const UpdateFlowRequest& request) const {
  AWS_OPERATION_GUARD(UpdateFlow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: FlowIdentifier, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FlowIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFlow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFlow",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFlowOutcome>(
      [&]() -> UpdateFlowOutcome {
        return UpdateFlowOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                        [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                          resolvedEndpoint.AddPathSegments("/flows/");
                                                          resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                        }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFlowAliasOutcome BedrockAgentClient::UpdateFlowAlias(const UpdateFlowAliasRequest& request) const {
  AWS_OPERATION_GUARD(UpdateFlowAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFlowAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFlowAlias",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFlowAliasOutcome>(
      [&]() -> UpdateFlowAliasOutcome {
        return UpdateFlowAliasOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                             [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                               resolvedEndpoint.AddPathSegments("/flows/");
                                                               resolvedEndpoint.AddPathSegment(request.GetFlowIdentifier());
                                                               resolvedEndpoint.AddPathSegments("/aliases/");
                                                               resolvedEndpoint.AddPathSegment(request.GetAliasIdentifier());
                                                             }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKnowledgeBaseOutcome BedrockAgentClient::UpdateKnowledgeBase(const UpdateKnowledgeBaseRequest& request) const {
  AWS_OPERATION_GUARD(UpdateKnowledgeBase);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKnowledgeBase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [KnowledgeBaseId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKnowledgeBase, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKnowledgeBase",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKnowledgeBaseOutcome>(
      [&]() -> UpdateKnowledgeBaseOutcome {
        return UpdateKnowledgeBaseOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                                 [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                                   resolvedEndpoint.AddPathSegments("/knowledgebases/");
                                                                   resolvedEndpoint.AddPathSegment(request.GetKnowledgeBaseId());
                                                                 }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePromptOutcome BedrockAgentClient::UpdatePrompt(const UpdatePromptRequest& request) const {
  AWS_OPERATION_GUARD(UpdatePrompt);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePrompt, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PromptIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePrompt", "Required field: PromptIdentifier, is not set");
    return UpdatePromptOutcome(Aws::Client::AWSError<BedrockAgentErrors>(BedrockAgentErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [PromptIdentifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdatePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePrompt, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePrompt",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePromptOutcome>(
      [&]() -> UpdatePromptOutcome {
        return UpdatePromptOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT,
                                                          [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void {
                                                            resolvedEndpoint.AddPathSegments("/prompts/");
                                                            resolvedEndpoint.AddPathSegment(request.GetPromptIdentifier());
                                                          }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ValidateFlowDefinitionOutcome BedrockAgentClient::ValidateFlowDefinition(const ValidateFlowDefinitionRequest& request) const {
  AWS_OPERATION_GUARD(ValidateFlowDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateFlowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ValidateFlowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ValidateFlowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ValidateFlowDefinition",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ValidateFlowDefinitionOutcome>(
      [&]() -> ValidateFlowDefinitionOutcome {
        return ValidateFlowDefinitionOutcome(MakeRequestDeserialize(
            &request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST,
            [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) -> void { resolvedEndpoint.AddPathSegments("/flows/validate-definition"); }));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
