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
#include <aws/gamelift/GameLiftClient.h>
#include <aws/gamelift/GameLiftEndpointProvider.h>
#include <aws/gamelift/GameLiftErrorMarshaller.h>
#include <aws/gamelift/model/AcceptMatchRequest.h>
#include <aws/gamelift/model/ClaimGameServerRequest.h>
#include <aws/gamelift/model/CreateAliasRequest.h>
#include <aws/gamelift/model/CreateBuildRequest.h>
#include <aws/gamelift/model/CreateContainerFleetRequest.h>
#include <aws/gamelift/model/CreateContainerGroupDefinitionRequest.h>
#include <aws/gamelift/model/CreateFleetLocationsRequest.h>
#include <aws/gamelift/model/CreateFleetRequest.h>
#include <aws/gamelift/model/CreateGameServerGroupRequest.h>
#include <aws/gamelift/model/CreateGameSessionQueueRequest.h>
#include <aws/gamelift/model/CreateGameSessionRequest.h>
#include <aws/gamelift/model/CreateLocationRequest.h>
#include <aws/gamelift/model/CreateMatchmakingConfigurationRequest.h>
#include <aws/gamelift/model/CreateMatchmakingRuleSetRequest.h>
#include <aws/gamelift/model/CreatePlayerSessionRequest.h>
#include <aws/gamelift/model/CreatePlayerSessionsRequest.h>
#include <aws/gamelift/model/CreateScriptRequest.h>
#include <aws/gamelift/model/CreateVpcPeeringAuthorizationRequest.h>
#include <aws/gamelift/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/gamelift/model/DeleteAliasRequest.h>
#include <aws/gamelift/model/DeleteBuildRequest.h>
#include <aws/gamelift/model/DeleteContainerFleetRequest.h>
#include <aws/gamelift/model/DeleteContainerGroupDefinitionRequest.h>
#include <aws/gamelift/model/DeleteFleetLocationsRequest.h>
#include <aws/gamelift/model/DeleteFleetRequest.h>
#include <aws/gamelift/model/DeleteGameServerGroupRequest.h>
#include <aws/gamelift/model/DeleteGameSessionQueueRequest.h>
#include <aws/gamelift/model/DeleteLocationRequest.h>
#include <aws/gamelift/model/DeleteMatchmakingConfigurationRequest.h>
#include <aws/gamelift/model/DeleteMatchmakingRuleSetRequest.h>
#include <aws/gamelift/model/DeleteScalingPolicyRequest.h>
#include <aws/gamelift/model/DeleteScriptRequest.h>
#include <aws/gamelift/model/DeleteVpcPeeringAuthorizationRequest.h>
#include <aws/gamelift/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/gamelift/model/DeregisterComputeRequest.h>
#include <aws/gamelift/model/DeregisterGameServerRequest.h>
#include <aws/gamelift/model/DescribeAliasRequest.h>
#include <aws/gamelift/model/DescribeBuildRequest.h>
#include <aws/gamelift/model/DescribeComputeRequest.h>
#include <aws/gamelift/model/DescribeContainerFleetRequest.h>
#include <aws/gamelift/model/DescribeContainerGroupDefinitionRequest.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsRequest.h>
#include <aws/gamelift/model/DescribeFleetAttributesRequest.h>
#include <aws/gamelift/model/DescribeFleetCapacityRequest.h>
#include <aws/gamelift/model/DescribeFleetDeploymentRequest.h>
#include <aws/gamelift/model/DescribeFleetEventsRequest.h>
#include <aws/gamelift/model/DescribeFleetLocationAttributesRequest.h>
#include <aws/gamelift/model/DescribeFleetLocationCapacityRequest.h>
#include <aws/gamelift/model/DescribeFleetLocationUtilizationRequest.h>
#include <aws/gamelift/model/DescribeFleetPortSettingsRequest.h>
#include <aws/gamelift/model/DescribeFleetUtilizationRequest.h>
#include <aws/gamelift/model/DescribeGameServerGroupRequest.h>
#include <aws/gamelift/model/DescribeGameServerInstancesRequest.h>
#include <aws/gamelift/model/DescribeGameServerRequest.h>
#include <aws/gamelift/model/DescribeGameSessionDetailsRequest.h>
#include <aws/gamelift/model/DescribeGameSessionPlacementRequest.h>
#include <aws/gamelift/model/DescribeGameSessionQueuesRequest.h>
#include <aws/gamelift/model/DescribeGameSessionsRequest.h>
#include <aws/gamelift/model/DescribeInstancesRequest.h>
#include <aws/gamelift/model/DescribeMatchmakingConfigurationsRequest.h>
#include <aws/gamelift/model/DescribeMatchmakingRequest.h>
#include <aws/gamelift/model/DescribeMatchmakingRuleSetsRequest.h>
#include <aws/gamelift/model/DescribePlayerSessionsRequest.h>
#include <aws/gamelift/model/DescribeRuntimeConfigurationRequest.h>
#include <aws/gamelift/model/DescribeScalingPoliciesRequest.h>
#include <aws/gamelift/model/DescribeScriptRequest.h>
#include <aws/gamelift/model/DescribeVpcPeeringAuthorizationsRequest.h>
#include <aws/gamelift/model/DescribeVpcPeeringConnectionsRequest.h>
#include <aws/gamelift/model/GetComputeAccessRequest.h>
#include <aws/gamelift/model/GetComputeAuthTokenRequest.h>
#include <aws/gamelift/model/GetGameSessionLogUrlRequest.h>
#include <aws/gamelift/model/GetInstanceAccessRequest.h>
#include <aws/gamelift/model/GetPlayerConnectionDetailsRequest.h>
#include <aws/gamelift/model/ListAliasesRequest.h>
#include <aws/gamelift/model/ListBuildsRequest.h>
#include <aws/gamelift/model/ListComputeRequest.h>
#include <aws/gamelift/model/ListContainerFleetsRequest.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionVersionsRequest.h>
#include <aws/gamelift/model/ListContainerGroupDefinitionsRequest.h>
#include <aws/gamelift/model/ListFleetDeploymentsRequest.h>
#include <aws/gamelift/model/ListFleetsRequest.h>
#include <aws/gamelift/model/ListGameServerGroupsRequest.h>
#include <aws/gamelift/model/ListGameServersRequest.h>
#include <aws/gamelift/model/ListLocationsRequest.h>
#include <aws/gamelift/model/ListScriptsRequest.h>
#include <aws/gamelift/model/ListTagsForResourceRequest.h>
#include <aws/gamelift/model/PutScalingPolicyRequest.h>
#include <aws/gamelift/model/RegisterComputeRequest.h>
#include <aws/gamelift/model/RegisterGameServerRequest.h>
#include <aws/gamelift/model/RequestUploadCredentialsRequest.h>
#include <aws/gamelift/model/ResolveAliasRequest.h>
#include <aws/gamelift/model/ResumeGameServerGroupRequest.h>
#include <aws/gamelift/model/SearchGameSessionsRequest.h>
#include <aws/gamelift/model/StartFleetActionsRequest.h>
#include <aws/gamelift/model/StartGameSessionPlacementRequest.h>
#include <aws/gamelift/model/StartMatchBackfillRequest.h>
#include <aws/gamelift/model/StartMatchmakingRequest.h>
#include <aws/gamelift/model/StopFleetActionsRequest.h>
#include <aws/gamelift/model/StopGameSessionPlacementRequest.h>
#include <aws/gamelift/model/StopMatchmakingRequest.h>
#include <aws/gamelift/model/SuspendGameServerGroupRequest.h>
#include <aws/gamelift/model/TagResourceRequest.h>
#include <aws/gamelift/model/TerminateGameSessionRequest.h>
#include <aws/gamelift/model/UntagResourceRequest.h>
#include <aws/gamelift/model/UpdateAliasRequest.h>
#include <aws/gamelift/model/UpdateBuildRequest.h>
#include <aws/gamelift/model/UpdateContainerFleetRequest.h>
#include <aws/gamelift/model/UpdateContainerGroupDefinitionRequest.h>
#include <aws/gamelift/model/UpdateFleetAttributesRequest.h>
#include <aws/gamelift/model/UpdateFleetCapacityRequest.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsRequest.h>
#include <aws/gamelift/model/UpdateGameServerGroupRequest.h>
#include <aws/gamelift/model/UpdateGameServerRequest.h>
#include <aws/gamelift/model/UpdateGameSessionQueueRequest.h>
#include <aws/gamelift/model/UpdateGameSessionRequest.h>
#include <aws/gamelift/model/UpdateMatchmakingConfigurationRequest.h>
#include <aws/gamelift/model/UpdateRuntimeConfigurationRequest.h>
#include <aws/gamelift/model/UpdateScriptRequest.h>
#include <aws/gamelift/model/ValidateMatchmakingRuleSetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GameLift;
using namespace Aws::GameLift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace GameLift {
const char SERVICE_NAME[] = "gamelift";
const char ALLOCATION_TAG[] = "GameLiftClient";
}  // namespace GameLift
}  // namespace Aws
const char* GameLiftClient::GetServiceName() { return SERVICE_NAME; }
const char* GameLiftClient::GetAllocationTag() { return ALLOCATION_TAG; }

GameLiftClient::GameLiftClient(const GameLift::GameLiftClientConfiguration& clientConfiguration,
                               std::shared_ptr<GameLiftEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftClient::GameLiftClient(const AWSCredentials& credentials, std::shared_ptr<GameLiftEndpointProviderBase> endpointProvider,
                               const GameLift::GameLiftClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftClient::GameLiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<GameLiftEndpointProviderBase> endpointProvider,
                               const GameLift::GameLiftClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GameLiftClient::GameLiftClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftClient::GameLiftClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GameLiftClient::GameLiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GameLiftClient::~GameLiftClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GameLiftEndpointProviderBase>& GameLiftClient::accessEndpointProvider() { return m_endpointProvider; }

void GameLiftClient::init(const GameLift::GameLiftClientConfiguration& config) {
  AWSClient::SetServiceClientName("GameLift");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "gamelift");
}

void GameLiftClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GameLiftClient::InvokeOperationOutcome GameLiftClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptMatchOutcome GameLiftClient::AcceptMatch(const AcceptMatchRequest& request) const {
  return AcceptMatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ClaimGameServerOutcome GameLiftClient::ClaimGameServer(const ClaimGameServerRequest& request) const {
  return ClaimGameServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAliasOutcome GameLiftClient::CreateAlias(const CreateAliasRequest& request) const {
  return CreateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBuildOutcome GameLiftClient::CreateBuild(const CreateBuildRequest& request) const {
  return CreateBuildOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContainerFleetOutcome GameLiftClient::CreateContainerFleet(const CreateContainerFleetRequest& request) const {
  return CreateContainerFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContainerGroupDefinitionOutcome GameLiftClient::CreateContainerGroupDefinition(
    const CreateContainerGroupDefinitionRequest& request) const {
  return CreateContainerGroupDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFleetOutcome GameLiftClient::CreateFleet(const CreateFleetRequest& request) const {
  return CreateFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFleetLocationsOutcome GameLiftClient::CreateFleetLocations(const CreateFleetLocationsRequest& request) const {
  return CreateFleetLocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGameServerGroupOutcome GameLiftClient::CreateGameServerGroup(const CreateGameServerGroupRequest& request) const {
  return CreateGameServerGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGameSessionOutcome GameLiftClient::CreateGameSession(const CreateGameSessionRequest& request) const {
  return CreateGameSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGameSessionQueueOutcome GameLiftClient::CreateGameSessionQueue(const CreateGameSessionQueueRequest& request) const {
  return CreateGameSessionQueueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationOutcome GameLiftClient::CreateLocation(const CreateLocationRequest& request) const {
  return CreateLocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMatchmakingConfigurationOutcome GameLiftClient::CreateMatchmakingConfiguration(
    const CreateMatchmakingConfigurationRequest& request) const {
  return CreateMatchmakingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMatchmakingRuleSetOutcome GameLiftClient::CreateMatchmakingRuleSet(const CreateMatchmakingRuleSetRequest& request) const {
  return CreateMatchmakingRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePlayerSessionOutcome GameLiftClient::CreatePlayerSession(const CreatePlayerSessionRequest& request) const {
  return CreatePlayerSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePlayerSessionsOutcome GameLiftClient::CreatePlayerSessions(const CreatePlayerSessionsRequest& request) const {
  return CreatePlayerSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateScriptOutcome GameLiftClient::CreateScript(const CreateScriptRequest& request) const {
  return CreateScriptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcPeeringAuthorizationOutcome GameLiftClient::CreateVpcPeeringAuthorization(
    const CreateVpcPeeringAuthorizationRequest& request) const {
  return CreateVpcPeeringAuthorizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcPeeringConnectionOutcome GameLiftClient::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const {
  return CreateVpcPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAliasOutcome GameLiftClient::DeleteAlias(const DeleteAliasRequest& request) const {
  return DeleteAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBuildOutcome GameLiftClient::DeleteBuild(const DeleteBuildRequest& request) const {
  return DeleteBuildOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContainerFleetOutcome GameLiftClient::DeleteContainerFleet(const DeleteContainerFleetRequest& request) const {
  return DeleteContainerFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContainerGroupDefinitionOutcome GameLiftClient::DeleteContainerGroupDefinition(
    const DeleteContainerGroupDefinitionRequest& request) const {
  return DeleteContainerGroupDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFleetOutcome GameLiftClient::DeleteFleet(const DeleteFleetRequest& request) const {
  return DeleteFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFleetLocationsOutcome GameLiftClient::DeleteFleetLocations(const DeleteFleetLocationsRequest& request) const {
  return DeleteFleetLocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGameServerGroupOutcome GameLiftClient::DeleteGameServerGroup(const DeleteGameServerGroupRequest& request) const {
  return DeleteGameServerGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGameSessionQueueOutcome GameLiftClient::DeleteGameSessionQueue(const DeleteGameSessionQueueRequest& request) const {
  return DeleteGameSessionQueueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLocationOutcome GameLiftClient::DeleteLocation(const DeleteLocationRequest& request) const {
  return DeleteLocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMatchmakingConfigurationOutcome GameLiftClient::DeleteMatchmakingConfiguration(
    const DeleteMatchmakingConfigurationRequest& request) const {
  return DeleteMatchmakingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMatchmakingRuleSetOutcome GameLiftClient::DeleteMatchmakingRuleSet(const DeleteMatchmakingRuleSetRequest& request) const {
  return DeleteMatchmakingRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteScalingPolicyOutcome GameLiftClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest& request) const {
  return DeleteScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteScriptOutcome GameLiftClient::DeleteScript(const DeleteScriptRequest& request) const {
  return DeleteScriptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVpcPeeringAuthorizationOutcome GameLiftClient::DeleteVpcPeeringAuthorization(
    const DeleteVpcPeeringAuthorizationRequest& request) const {
  return DeleteVpcPeeringAuthorizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVpcPeeringConnectionOutcome GameLiftClient::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const {
  return DeleteVpcPeeringConnectionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterComputeOutcome GameLiftClient::DeregisterCompute(const DeregisterComputeRequest& request) const {
  return DeregisterComputeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterGameServerOutcome GameLiftClient::DeregisterGameServer(const DeregisterGameServerRequest& request) const {
  return DeregisterGameServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAliasOutcome GameLiftClient::DescribeAlias(const DescribeAliasRequest& request) const {
  return DescribeAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBuildOutcome GameLiftClient::DescribeBuild(const DescribeBuildRequest& request) const {
  return DescribeBuildOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeComputeOutcome GameLiftClient::DescribeCompute(const DescribeComputeRequest& request) const {
  return DescribeComputeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeContainerFleetOutcome GameLiftClient::DescribeContainerFleet(const DescribeContainerFleetRequest& request) const {
  return DescribeContainerFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeContainerGroupDefinitionOutcome GameLiftClient::DescribeContainerGroupDefinition(
    const DescribeContainerGroupDefinitionRequest& request) const {
  return DescribeContainerGroupDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEC2InstanceLimitsOutcome GameLiftClient::DescribeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest& request) const {
  return DescribeEC2InstanceLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetAttributesOutcome GameLiftClient::DescribeFleetAttributes(const DescribeFleetAttributesRequest& request) const {
  return DescribeFleetAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetCapacityOutcome GameLiftClient::DescribeFleetCapacity(const DescribeFleetCapacityRequest& request) const {
  return DescribeFleetCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetDeploymentOutcome GameLiftClient::DescribeFleetDeployment(const DescribeFleetDeploymentRequest& request) const {
  return DescribeFleetDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetEventsOutcome GameLiftClient::DescribeFleetEvents(const DescribeFleetEventsRequest& request) const {
  return DescribeFleetEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetLocationAttributesOutcome GameLiftClient::DescribeFleetLocationAttributes(
    const DescribeFleetLocationAttributesRequest& request) const {
  return DescribeFleetLocationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetLocationCapacityOutcome GameLiftClient::DescribeFleetLocationCapacity(
    const DescribeFleetLocationCapacityRequest& request) const {
  return DescribeFleetLocationCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetLocationUtilizationOutcome GameLiftClient::DescribeFleetLocationUtilization(
    const DescribeFleetLocationUtilizationRequest& request) const {
  return DescribeFleetLocationUtilizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetPortSettingsOutcome GameLiftClient::DescribeFleetPortSettings(const DescribeFleetPortSettingsRequest& request) const {
  return DescribeFleetPortSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFleetUtilizationOutcome GameLiftClient::DescribeFleetUtilization(const DescribeFleetUtilizationRequest& request) const {
  return DescribeFleetUtilizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGameServerOutcome GameLiftClient::DescribeGameServer(const DescribeGameServerRequest& request) const {
  return DescribeGameServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGameServerGroupOutcome GameLiftClient::DescribeGameServerGroup(const DescribeGameServerGroupRequest& request) const {
  return DescribeGameServerGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGameServerInstancesOutcome GameLiftClient::DescribeGameServerInstances(const DescribeGameServerInstancesRequest& request) const {
  return DescribeGameServerInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGameSessionDetailsOutcome GameLiftClient::DescribeGameSessionDetails(const DescribeGameSessionDetailsRequest& request) const {
  return DescribeGameSessionDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGameSessionPlacementOutcome GameLiftClient::DescribeGameSessionPlacement(const DescribeGameSessionPlacementRequest& request) const {
  return DescribeGameSessionPlacementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGameSessionQueuesOutcome GameLiftClient::DescribeGameSessionQueues(const DescribeGameSessionQueuesRequest& request) const {
  return DescribeGameSessionQueuesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGameSessionsOutcome GameLiftClient::DescribeGameSessions(const DescribeGameSessionsRequest& request) const {
  return DescribeGameSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstancesOutcome GameLiftClient::DescribeInstances(const DescribeInstancesRequest& request) const {
  return DescribeInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMatchmakingOutcome GameLiftClient::DescribeMatchmaking(const DescribeMatchmakingRequest& request) const {
  return DescribeMatchmakingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMatchmakingConfigurationsOutcome GameLiftClient::DescribeMatchmakingConfigurations(
    const DescribeMatchmakingConfigurationsRequest& request) const {
  return DescribeMatchmakingConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMatchmakingRuleSetsOutcome GameLiftClient::DescribeMatchmakingRuleSets(const DescribeMatchmakingRuleSetsRequest& request) const {
  return DescribeMatchmakingRuleSetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePlayerSessionsOutcome GameLiftClient::DescribePlayerSessions(const DescribePlayerSessionsRequest& request) const {
  return DescribePlayerSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRuntimeConfigurationOutcome GameLiftClient::DescribeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest& request) const {
  return DescribeRuntimeConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScalingPoliciesOutcome GameLiftClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const {
  return DescribeScalingPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeScriptOutcome GameLiftClient::DescribeScript(const DescribeScriptRequest& request) const {
  return DescribeScriptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcPeeringAuthorizationsOutcome GameLiftClient::DescribeVpcPeeringAuthorizations(
    const DescribeVpcPeeringAuthorizationsRequest& request) const {
  return DescribeVpcPeeringAuthorizationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeVpcPeeringConnectionsOutcome GameLiftClient::DescribeVpcPeeringConnections(
    const DescribeVpcPeeringConnectionsRequest& request) const {
  return DescribeVpcPeeringConnectionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComputeAccessOutcome GameLiftClient::GetComputeAccess(const GetComputeAccessRequest& request) const {
  return GetComputeAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetComputeAuthTokenOutcome GameLiftClient::GetComputeAuthToken(const GetComputeAuthTokenRequest& request) const {
  return GetComputeAuthTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGameSessionLogUrlOutcome GameLiftClient::GetGameSessionLogUrl(const GetGameSessionLogUrlRequest& request) const {
  return GetGameSessionLogUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceAccessOutcome GameLiftClient::GetInstanceAccess(const GetInstanceAccessRequest& request) const {
  return GetInstanceAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPlayerConnectionDetailsOutcome GameLiftClient::GetPlayerConnectionDetails(const GetPlayerConnectionDetailsRequest& request) const {
  return GetPlayerConnectionDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAliasesOutcome GameLiftClient::ListAliases(const ListAliasesRequest& request) const {
  return ListAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBuildsOutcome GameLiftClient::ListBuilds(const ListBuildsRequest& request) const {
  return ListBuildsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComputeOutcome GameLiftClient::ListCompute(const ListComputeRequest& request) const {
  return ListComputeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContainerFleetsOutcome GameLiftClient::ListContainerFleets(const ListContainerFleetsRequest& request) const {
  return ListContainerFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContainerGroupDefinitionVersionsOutcome GameLiftClient::ListContainerGroupDefinitionVersions(
    const ListContainerGroupDefinitionVersionsRequest& request) const {
  return ListContainerGroupDefinitionVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListContainerGroupDefinitionsOutcome GameLiftClient::ListContainerGroupDefinitions(
    const ListContainerGroupDefinitionsRequest& request) const {
  return ListContainerGroupDefinitionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFleetDeploymentsOutcome GameLiftClient::ListFleetDeployments(const ListFleetDeploymentsRequest& request) const {
  return ListFleetDeploymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFleetsOutcome GameLiftClient::ListFleets(const ListFleetsRequest& request) const {
  return ListFleetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGameServerGroupsOutcome GameLiftClient::ListGameServerGroups(const ListGameServerGroupsRequest& request) const {
  return ListGameServerGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGameServersOutcome GameLiftClient::ListGameServers(const ListGameServersRequest& request) const {
  return ListGameServersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLocationsOutcome GameLiftClient::ListLocations(const ListLocationsRequest& request) const {
  return ListLocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListScriptsOutcome GameLiftClient::ListScripts(const ListScriptsRequest& request) const {
  return ListScriptsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome GameLiftClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutScalingPolicyOutcome GameLiftClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const {
  return PutScalingPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterComputeOutcome GameLiftClient::RegisterCompute(const RegisterComputeRequest& request) const {
  return RegisterComputeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterGameServerOutcome GameLiftClient::RegisterGameServer(const RegisterGameServerRequest& request) const {
  return RegisterGameServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RequestUploadCredentialsOutcome GameLiftClient::RequestUploadCredentials(const RequestUploadCredentialsRequest& request) const {
  return RequestUploadCredentialsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResolveAliasOutcome GameLiftClient::ResolveAlias(const ResolveAliasRequest& request) const {
  return ResolveAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeGameServerGroupOutcome GameLiftClient::ResumeGameServerGroup(const ResumeGameServerGroupRequest& request) const {
  return ResumeGameServerGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchGameSessionsOutcome GameLiftClient::SearchGameSessions(const SearchGameSessionsRequest& request) const {
  return SearchGameSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFleetActionsOutcome GameLiftClient::StartFleetActions(const StartFleetActionsRequest& request) const {
  return StartFleetActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartGameSessionPlacementOutcome GameLiftClient::StartGameSessionPlacement(const StartGameSessionPlacementRequest& request) const {
  return StartGameSessionPlacementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMatchBackfillOutcome GameLiftClient::StartMatchBackfill(const StartMatchBackfillRequest& request) const {
  return StartMatchBackfillOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMatchmakingOutcome GameLiftClient::StartMatchmaking(const StartMatchmakingRequest& request) const {
  return StartMatchmakingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopFleetActionsOutcome GameLiftClient::StopFleetActions(const StopFleetActionsRequest& request) const {
  return StopFleetActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopGameSessionPlacementOutcome GameLiftClient::StopGameSessionPlacement(const StopGameSessionPlacementRequest& request) const {
  return StopGameSessionPlacementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopMatchmakingOutcome GameLiftClient::StopMatchmaking(const StopMatchmakingRequest& request) const {
  return StopMatchmakingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SuspendGameServerGroupOutcome GameLiftClient::SuspendGameServerGroup(const SuspendGameServerGroupRequest& request) const {
  return SuspendGameServerGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome GameLiftClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateGameSessionOutcome GameLiftClient::TerminateGameSession(const TerminateGameSessionRequest& request) const {
  return TerminateGameSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome GameLiftClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAliasOutcome GameLiftClient::UpdateAlias(const UpdateAliasRequest& request) const {
  return UpdateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBuildOutcome GameLiftClient::UpdateBuild(const UpdateBuildRequest& request) const {
  return UpdateBuildOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContainerFleetOutcome GameLiftClient::UpdateContainerFleet(const UpdateContainerFleetRequest& request) const {
  return UpdateContainerFleetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContainerGroupDefinitionOutcome GameLiftClient::UpdateContainerGroupDefinition(
    const UpdateContainerGroupDefinitionRequest& request) const {
  return UpdateContainerGroupDefinitionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFleetAttributesOutcome GameLiftClient::UpdateFleetAttributes(const UpdateFleetAttributesRequest& request) const {
  return UpdateFleetAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFleetCapacityOutcome GameLiftClient::UpdateFleetCapacity(const UpdateFleetCapacityRequest& request) const {
  return UpdateFleetCapacityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFleetPortSettingsOutcome GameLiftClient::UpdateFleetPortSettings(const UpdateFleetPortSettingsRequest& request) const {
  return UpdateFleetPortSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGameServerOutcome GameLiftClient::UpdateGameServer(const UpdateGameServerRequest& request) const {
  return UpdateGameServerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGameServerGroupOutcome GameLiftClient::UpdateGameServerGroup(const UpdateGameServerGroupRequest& request) const {
  return UpdateGameServerGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGameSessionOutcome GameLiftClient::UpdateGameSession(const UpdateGameSessionRequest& request) const {
  return UpdateGameSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGameSessionQueueOutcome GameLiftClient::UpdateGameSessionQueue(const UpdateGameSessionQueueRequest& request) const {
  return UpdateGameSessionQueueOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMatchmakingConfigurationOutcome GameLiftClient::UpdateMatchmakingConfiguration(
    const UpdateMatchmakingConfigurationRequest& request) const {
  return UpdateMatchmakingConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRuntimeConfigurationOutcome GameLiftClient::UpdateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest& request) const {
  return UpdateRuntimeConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateScriptOutcome GameLiftClient::UpdateScript(const UpdateScriptRequest& request) const {
  return UpdateScriptOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ValidateMatchmakingRuleSetOutcome GameLiftClient::ValidateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest& request) const {
  return ValidateMatchmakingRuleSetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
