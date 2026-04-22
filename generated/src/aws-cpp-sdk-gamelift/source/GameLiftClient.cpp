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

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/GameLift/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AcceptMatchOutcome GameLiftClient::AcceptMatch(const AcceptMatchRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptMatchOutcome(result.GetResultWithOwnership()) : AcceptMatchOutcome(std::move(result.GetError()));
}

ClaimGameServerOutcome GameLiftClient::ClaimGameServer(const ClaimGameServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ClaimGameServerOutcome(result.GetResultWithOwnership())
                            : ClaimGameServerOutcome(std::move(result.GetError()));
}

CreateAliasOutcome GameLiftClient::CreateAlias(const CreateAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAliasOutcome(result.GetResultWithOwnership()) : CreateAliasOutcome(std::move(result.GetError()));
}

CreateBuildOutcome GameLiftClient::CreateBuild(const CreateBuildRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBuildOutcome(result.GetResultWithOwnership()) : CreateBuildOutcome(std::move(result.GetError()));
}

CreateContainerFleetOutcome GameLiftClient::CreateContainerFleet(const CreateContainerFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContainerFleetOutcome(result.GetResultWithOwnership())
                            : CreateContainerFleetOutcome(std::move(result.GetError()));
}

CreateContainerGroupDefinitionOutcome GameLiftClient::CreateContainerGroupDefinition(
    const CreateContainerGroupDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContainerGroupDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateContainerGroupDefinitionOutcome(std::move(result.GetError()));
}

CreateFleetOutcome GameLiftClient::CreateFleet(const CreateFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFleetOutcome(result.GetResultWithOwnership()) : CreateFleetOutcome(std::move(result.GetError()));
}

CreateFleetLocationsOutcome GameLiftClient::CreateFleetLocations(const CreateFleetLocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFleetLocationsOutcome(result.GetResultWithOwnership())
                            : CreateFleetLocationsOutcome(std::move(result.GetError()));
}

CreateGameServerGroupOutcome GameLiftClient::CreateGameServerGroup(const CreateGameServerGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGameServerGroupOutcome(result.GetResultWithOwnership())
                            : CreateGameServerGroupOutcome(std::move(result.GetError()));
}

CreateGameSessionOutcome GameLiftClient::CreateGameSession(const CreateGameSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGameSessionOutcome(result.GetResultWithOwnership())
                            : CreateGameSessionOutcome(std::move(result.GetError()));
}

CreateGameSessionQueueOutcome GameLiftClient::CreateGameSessionQueue(const CreateGameSessionQueueRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGameSessionQueueOutcome(result.GetResultWithOwnership())
                            : CreateGameSessionQueueOutcome(std::move(result.GetError()));
}

CreateLocationOutcome GameLiftClient::CreateLocation(const CreateLocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLocationOutcome(result.GetResultWithOwnership()) : CreateLocationOutcome(std::move(result.GetError()));
}

CreateMatchmakingConfigurationOutcome GameLiftClient::CreateMatchmakingConfiguration(
    const CreateMatchmakingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMatchmakingConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateMatchmakingConfigurationOutcome(std::move(result.GetError()));
}

CreateMatchmakingRuleSetOutcome GameLiftClient::CreateMatchmakingRuleSet(const CreateMatchmakingRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMatchmakingRuleSetOutcome(result.GetResultWithOwnership())
                            : CreateMatchmakingRuleSetOutcome(std::move(result.GetError()));
}

CreatePlayerSessionOutcome GameLiftClient::CreatePlayerSession(const CreatePlayerSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePlayerSessionOutcome(result.GetResultWithOwnership())
                            : CreatePlayerSessionOutcome(std::move(result.GetError()));
}

CreatePlayerSessionsOutcome GameLiftClient::CreatePlayerSessions(const CreatePlayerSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePlayerSessionsOutcome(result.GetResultWithOwnership())
                            : CreatePlayerSessionsOutcome(std::move(result.GetError()));
}

CreateScriptOutcome GameLiftClient::CreateScript(const CreateScriptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScriptOutcome(result.GetResultWithOwnership()) : CreateScriptOutcome(std::move(result.GetError()));
}

CreateVpcPeeringAuthorizationOutcome GameLiftClient::CreateVpcPeeringAuthorization(
    const CreateVpcPeeringAuthorizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcPeeringAuthorizationOutcome(result.GetResultWithOwnership())
                            : CreateVpcPeeringAuthorizationOutcome(std::move(result.GetError()));
}

CreateVpcPeeringConnectionOutcome GameLiftClient::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVpcPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : CreateVpcPeeringConnectionOutcome(std::move(result.GetError()));
}

DeleteAliasOutcome GameLiftClient::DeleteAlias(const DeleteAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAliasOutcome(result.GetResultWithOwnership()) : DeleteAliasOutcome(std::move(result.GetError()));
}

DeleteBuildOutcome GameLiftClient::DeleteBuild(const DeleteBuildRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBuildOutcome(result.GetResultWithOwnership()) : DeleteBuildOutcome(std::move(result.GetError()));
}

DeleteContainerFleetOutcome GameLiftClient::DeleteContainerFleet(const DeleteContainerFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContainerFleetOutcome(result.GetResultWithOwnership())
                            : DeleteContainerFleetOutcome(std::move(result.GetError()));
}

DeleteContainerGroupDefinitionOutcome GameLiftClient::DeleteContainerGroupDefinition(
    const DeleteContainerGroupDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContainerGroupDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteContainerGroupDefinitionOutcome(std::move(result.GetError()));
}

DeleteFleetOutcome GameLiftClient::DeleteFleet(const DeleteFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFleetOutcome(result.GetResultWithOwnership()) : DeleteFleetOutcome(std::move(result.GetError()));
}

DeleteFleetLocationsOutcome GameLiftClient::DeleteFleetLocations(const DeleteFleetLocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteFleetLocationsOutcome(result.GetResultWithOwnership())
                            : DeleteFleetLocationsOutcome(std::move(result.GetError()));
}

DeleteGameServerGroupOutcome GameLiftClient::DeleteGameServerGroup(const DeleteGameServerGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGameServerGroupOutcome(result.GetResultWithOwnership())
                            : DeleteGameServerGroupOutcome(std::move(result.GetError()));
}

DeleteGameSessionQueueOutcome GameLiftClient::DeleteGameSessionQueue(const DeleteGameSessionQueueRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGameSessionQueueOutcome(result.GetResultWithOwnership())
                            : DeleteGameSessionQueueOutcome(std::move(result.GetError()));
}

DeleteLocationOutcome GameLiftClient::DeleteLocation(const DeleteLocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLocationOutcome(result.GetResultWithOwnership()) : DeleteLocationOutcome(std::move(result.GetError()));
}

DeleteMatchmakingConfigurationOutcome GameLiftClient::DeleteMatchmakingConfiguration(
    const DeleteMatchmakingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMatchmakingConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteMatchmakingConfigurationOutcome(std::move(result.GetError()));
}

DeleteMatchmakingRuleSetOutcome GameLiftClient::DeleteMatchmakingRuleSet(const DeleteMatchmakingRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMatchmakingRuleSetOutcome(result.GetResultWithOwnership())
                            : DeleteMatchmakingRuleSetOutcome(std::move(result.GetError()));
}

DeleteScalingPolicyOutcome GameLiftClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteScalingPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteScalingPolicyOutcome(std::move(result.GetError()));
}

DeleteScriptOutcome GameLiftClient::DeleteScript(const DeleteScriptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteScriptOutcome(result.GetResultWithOwnership()) : DeleteScriptOutcome(std::move(result.GetError()));
}

DeleteVpcPeeringAuthorizationOutcome GameLiftClient::DeleteVpcPeeringAuthorization(
    const DeleteVpcPeeringAuthorizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcPeeringAuthorizationOutcome(result.GetResultWithOwnership())
                            : DeleteVpcPeeringAuthorizationOutcome(std::move(result.GetError()));
}

DeleteVpcPeeringConnectionOutcome GameLiftClient::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVpcPeeringConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteVpcPeeringConnectionOutcome(std::move(result.GetError()));
}

DeregisterComputeOutcome GameLiftClient::DeregisterCompute(const DeregisterComputeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterComputeOutcome(result.GetResultWithOwnership())
                            : DeregisterComputeOutcome(std::move(result.GetError()));
}

DeregisterGameServerOutcome GameLiftClient::DeregisterGameServer(const DeregisterGameServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterGameServerOutcome(result.GetResultWithOwnership())
                            : DeregisterGameServerOutcome(std::move(result.GetError()));
}

DescribeAliasOutcome GameLiftClient::DescribeAlias(const DescribeAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAliasOutcome(result.GetResultWithOwnership()) : DescribeAliasOutcome(std::move(result.GetError()));
}

DescribeBuildOutcome GameLiftClient::DescribeBuild(const DescribeBuildRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBuildOutcome(result.GetResultWithOwnership()) : DescribeBuildOutcome(std::move(result.GetError()));
}

DescribeComputeOutcome GameLiftClient::DescribeCompute(const DescribeComputeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeComputeOutcome(result.GetResultWithOwnership())
                            : DescribeComputeOutcome(std::move(result.GetError()));
}

DescribeContainerFleetOutcome GameLiftClient::DescribeContainerFleet(const DescribeContainerFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeContainerFleetOutcome(result.GetResultWithOwnership())
                            : DescribeContainerFleetOutcome(std::move(result.GetError()));
}

DescribeContainerGroupDefinitionOutcome GameLiftClient::DescribeContainerGroupDefinition(
    const DescribeContainerGroupDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeContainerGroupDefinitionOutcome(result.GetResultWithOwnership())
                            : DescribeContainerGroupDefinitionOutcome(std::move(result.GetError()));
}

DescribeEC2InstanceLimitsOutcome GameLiftClient::DescribeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEC2InstanceLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeEC2InstanceLimitsOutcome(std::move(result.GetError()));
}

DescribeFleetAttributesOutcome GameLiftClient::DescribeFleetAttributes(const DescribeFleetAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeFleetAttributesOutcome(std::move(result.GetError()));
}

DescribeFleetCapacityOutcome GameLiftClient::DescribeFleetCapacity(const DescribeFleetCapacityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetCapacityOutcome(result.GetResultWithOwnership())
                            : DescribeFleetCapacityOutcome(std::move(result.GetError()));
}

DescribeFleetDeploymentOutcome GameLiftClient::DescribeFleetDeployment(const DescribeFleetDeploymentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetDeploymentOutcome(result.GetResultWithOwnership())
                            : DescribeFleetDeploymentOutcome(std::move(result.GetError()));
}

DescribeFleetEventsOutcome GameLiftClient::DescribeFleetEvents(const DescribeFleetEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetEventsOutcome(result.GetResultWithOwnership())
                            : DescribeFleetEventsOutcome(std::move(result.GetError()));
}

DescribeFleetLocationAttributesOutcome GameLiftClient::DescribeFleetLocationAttributes(
    const DescribeFleetLocationAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetLocationAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeFleetLocationAttributesOutcome(std::move(result.GetError()));
}

DescribeFleetLocationCapacityOutcome GameLiftClient::DescribeFleetLocationCapacity(
    const DescribeFleetLocationCapacityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetLocationCapacityOutcome(result.GetResultWithOwnership())
                            : DescribeFleetLocationCapacityOutcome(std::move(result.GetError()));
}

DescribeFleetLocationUtilizationOutcome GameLiftClient::DescribeFleetLocationUtilization(
    const DescribeFleetLocationUtilizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetLocationUtilizationOutcome(result.GetResultWithOwnership())
                            : DescribeFleetLocationUtilizationOutcome(std::move(result.GetError()));
}

DescribeFleetPortSettingsOutcome GameLiftClient::DescribeFleetPortSettings(const DescribeFleetPortSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetPortSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeFleetPortSettingsOutcome(std::move(result.GetError()));
}

DescribeFleetUtilizationOutcome GameLiftClient::DescribeFleetUtilization(const DescribeFleetUtilizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFleetUtilizationOutcome(result.GetResultWithOwnership())
                            : DescribeFleetUtilizationOutcome(std::move(result.GetError()));
}

DescribeGameServerOutcome GameLiftClient::DescribeGameServer(const DescribeGameServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGameServerOutcome(result.GetResultWithOwnership())
                            : DescribeGameServerOutcome(std::move(result.GetError()));
}

DescribeGameServerGroupOutcome GameLiftClient::DescribeGameServerGroup(const DescribeGameServerGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGameServerGroupOutcome(result.GetResultWithOwnership())
                            : DescribeGameServerGroupOutcome(std::move(result.GetError()));
}

DescribeGameServerInstancesOutcome GameLiftClient::DescribeGameServerInstances(const DescribeGameServerInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGameServerInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeGameServerInstancesOutcome(std::move(result.GetError()));
}

DescribeGameSessionDetailsOutcome GameLiftClient::DescribeGameSessionDetails(const DescribeGameSessionDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGameSessionDetailsOutcome(result.GetResultWithOwnership())
                            : DescribeGameSessionDetailsOutcome(std::move(result.GetError()));
}

DescribeGameSessionPlacementOutcome GameLiftClient::DescribeGameSessionPlacement(const DescribeGameSessionPlacementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGameSessionPlacementOutcome(result.GetResultWithOwnership())
                            : DescribeGameSessionPlacementOutcome(std::move(result.GetError()));
}

DescribeGameSessionQueuesOutcome GameLiftClient::DescribeGameSessionQueues(const DescribeGameSessionQueuesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGameSessionQueuesOutcome(result.GetResultWithOwnership())
                            : DescribeGameSessionQueuesOutcome(std::move(result.GetError()));
}

DescribeGameSessionsOutcome GameLiftClient::DescribeGameSessions(const DescribeGameSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeGameSessionsOutcome(result.GetResultWithOwnership())
                            : DescribeGameSessionsOutcome(std::move(result.GetError()));
}

DescribeInstancesOutcome GameLiftClient::DescribeInstances(const DescribeInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeInstancesOutcome(std::move(result.GetError()));
}

DescribeMatchmakingOutcome GameLiftClient::DescribeMatchmaking(const DescribeMatchmakingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMatchmakingOutcome(result.GetResultWithOwnership())
                            : DescribeMatchmakingOutcome(std::move(result.GetError()));
}

DescribeMatchmakingConfigurationsOutcome GameLiftClient::DescribeMatchmakingConfigurations(
    const DescribeMatchmakingConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMatchmakingConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeMatchmakingConfigurationsOutcome(std::move(result.GetError()));
}

DescribeMatchmakingRuleSetsOutcome GameLiftClient::DescribeMatchmakingRuleSets(const DescribeMatchmakingRuleSetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMatchmakingRuleSetsOutcome(result.GetResultWithOwnership())
                            : DescribeMatchmakingRuleSetsOutcome(std::move(result.GetError()));
}

DescribePlayerSessionsOutcome GameLiftClient::DescribePlayerSessions(const DescribePlayerSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePlayerSessionsOutcome(result.GetResultWithOwnership())
                            : DescribePlayerSessionsOutcome(std::move(result.GetError()));
}

DescribeRuntimeConfigurationOutcome GameLiftClient::DescribeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRuntimeConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeRuntimeConfigurationOutcome(std::move(result.GetError()));
}

DescribeScalingPoliciesOutcome GameLiftClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScalingPoliciesOutcome(result.GetResultWithOwnership())
                            : DescribeScalingPoliciesOutcome(std::move(result.GetError()));
}

DescribeScriptOutcome GameLiftClient::DescribeScript(const DescribeScriptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScriptOutcome(result.GetResultWithOwnership()) : DescribeScriptOutcome(std::move(result.GetError()));
}

DescribeVpcPeeringAuthorizationsOutcome GameLiftClient::DescribeVpcPeeringAuthorizations(
    const DescribeVpcPeeringAuthorizationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcPeeringAuthorizationsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcPeeringAuthorizationsOutcome(std::move(result.GetError()));
}

DescribeVpcPeeringConnectionsOutcome GameLiftClient::DescribeVpcPeeringConnections(
    const DescribeVpcPeeringConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeVpcPeeringConnectionsOutcome(result.GetResultWithOwnership())
                            : DescribeVpcPeeringConnectionsOutcome(std::move(result.GetError()));
}

GetComputeAccessOutcome GameLiftClient::GetComputeAccess(const GetComputeAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetComputeAccessOutcome(result.GetResultWithOwnership())
                            : GetComputeAccessOutcome(std::move(result.GetError()));
}

GetComputeAuthTokenOutcome GameLiftClient::GetComputeAuthToken(const GetComputeAuthTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetComputeAuthTokenOutcome(result.GetResultWithOwnership())
                            : GetComputeAuthTokenOutcome(std::move(result.GetError()));
}

GetGameSessionLogUrlOutcome GameLiftClient::GetGameSessionLogUrl(const GetGameSessionLogUrlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGameSessionLogUrlOutcome(result.GetResultWithOwnership())
                            : GetGameSessionLogUrlOutcome(std::move(result.GetError()));
}

GetInstanceAccessOutcome GameLiftClient::GetInstanceAccess(const GetInstanceAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceAccessOutcome(result.GetResultWithOwnership())
                            : GetInstanceAccessOutcome(std::move(result.GetError()));
}

GetPlayerConnectionDetailsOutcome GameLiftClient::GetPlayerConnectionDetails(const GetPlayerConnectionDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPlayerConnectionDetailsOutcome(result.GetResultWithOwnership())
                            : GetPlayerConnectionDetailsOutcome(std::move(result.GetError()));
}

ListAliasesOutcome GameLiftClient::ListAliases(const ListAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAliasesOutcome(result.GetResultWithOwnership()) : ListAliasesOutcome(std::move(result.GetError()));
}

ListBuildsOutcome GameLiftClient::ListBuilds(const ListBuildsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBuildsOutcome(result.GetResultWithOwnership()) : ListBuildsOutcome(std::move(result.GetError()));
}

ListComputeOutcome GameLiftClient::ListCompute(const ListComputeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListComputeOutcome(result.GetResultWithOwnership()) : ListComputeOutcome(std::move(result.GetError()));
}

ListContainerFleetsOutcome GameLiftClient::ListContainerFleets(const ListContainerFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContainerFleetsOutcome(result.GetResultWithOwnership())
                            : ListContainerFleetsOutcome(std::move(result.GetError()));
}

ListContainerGroupDefinitionVersionsOutcome GameLiftClient::ListContainerGroupDefinitionVersions(
    const ListContainerGroupDefinitionVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContainerGroupDefinitionVersionsOutcome(result.GetResultWithOwnership())
                            : ListContainerGroupDefinitionVersionsOutcome(std::move(result.GetError()));
}

ListContainerGroupDefinitionsOutcome GameLiftClient::ListContainerGroupDefinitions(
    const ListContainerGroupDefinitionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContainerGroupDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListContainerGroupDefinitionsOutcome(std::move(result.GetError()));
}

ListFleetDeploymentsOutcome GameLiftClient::ListFleetDeployments(const ListFleetDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFleetDeploymentsOutcome(result.GetResultWithOwnership())
                            : ListFleetDeploymentsOutcome(std::move(result.GetError()));
}

ListFleetsOutcome GameLiftClient::ListFleets(const ListFleetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFleetsOutcome(result.GetResultWithOwnership()) : ListFleetsOutcome(std::move(result.GetError()));
}

ListGameServerGroupsOutcome GameLiftClient::ListGameServerGroups(const ListGameServerGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGameServerGroupsOutcome(result.GetResultWithOwnership())
                            : ListGameServerGroupsOutcome(std::move(result.GetError()));
}

ListGameServersOutcome GameLiftClient::ListGameServers(const ListGameServersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGameServersOutcome(result.GetResultWithOwnership())
                            : ListGameServersOutcome(std::move(result.GetError()));
}

ListLocationsOutcome GameLiftClient::ListLocations(const ListLocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLocationsOutcome(result.GetResultWithOwnership()) : ListLocationsOutcome(std::move(result.GetError()));
}

ListScriptsOutcome GameLiftClient::ListScripts(const ListScriptsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListScriptsOutcome(result.GetResultWithOwnership()) : ListScriptsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome GameLiftClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutScalingPolicyOutcome GameLiftClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutScalingPolicyOutcome(result.GetResultWithOwnership())
                            : PutScalingPolicyOutcome(std::move(result.GetError()));
}

RegisterComputeOutcome GameLiftClient::RegisterCompute(const RegisterComputeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterComputeOutcome(result.GetResultWithOwnership())
                            : RegisterComputeOutcome(std::move(result.GetError()));
}

RegisterGameServerOutcome GameLiftClient::RegisterGameServer(const RegisterGameServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterGameServerOutcome(result.GetResultWithOwnership())
                            : RegisterGameServerOutcome(std::move(result.GetError()));
}

RequestUploadCredentialsOutcome GameLiftClient::RequestUploadCredentials(const RequestUploadCredentialsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RequestUploadCredentialsOutcome(result.GetResultWithOwnership())
                            : RequestUploadCredentialsOutcome(std::move(result.GetError()));
}

ResolveAliasOutcome GameLiftClient::ResolveAlias(const ResolveAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResolveAliasOutcome(result.GetResultWithOwnership()) : ResolveAliasOutcome(std::move(result.GetError()));
}

ResumeGameServerGroupOutcome GameLiftClient::ResumeGameServerGroup(const ResumeGameServerGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeGameServerGroupOutcome(result.GetResultWithOwnership())
                            : ResumeGameServerGroupOutcome(std::move(result.GetError()));
}

SearchGameSessionsOutcome GameLiftClient::SearchGameSessions(const SearchGameSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchGameSessionsOutcome(result.GetResultWithOwnership())
                            : SearchGameSessionsOutcome(std::move(result.GetError()));
}

StartFleetActionsOutcome GameLiftClient::StartFleetActions(const StartFleetActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFleetActionsOutcome(result.GetResultWithOwnership())
                            : StartFleetActionsOutcome(std::move(result.GetError()));
}

StartGameSessionPlacementOutcome GameLiftClient::StartGameSessionPlacement(const StartGameSessionPlacementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartGameSessionPlacementOutcome(result.GetResultWithOwnership())
                            : StartGameSessionPlacementOutcome(std::move(result.GetError()));
}

StartMatchBackfillOutcome GameLiftClient::StartMatchBackfill(const StartMatchBackfillRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMatchBackfillOutcome(result.GetResultWithOwnership())
                            : StartMatchBackfillOutcome(std::move(result.GetError()));
}

StartMatchmakingOutcome GameLiftClient::StartMatchmaking(const StartMatchmakingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMatchmakingOutcome(result.GetResultWithOwnership())
                            : StartMatchmakingOutcome(std::move(result.GetError()));
}

StopFleetActionsOutcome GameLiftClient::StopFleetActions(const StopFleetActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopFleetActionsOutcome(result.GetResultWithOwnership())
                            : StopFleetActionsOutcome(std::move(result.GetError()));
}

StopGameSessionPlacementOutcome GameLiftClient::StopGameSessionPlacement(const StopGameSessionPlacementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopGameSessionPlacementOutcome(result.GetResultWithOwnership())
                            : StopGameSessionPlacementOutcome(std::move(result.GetError()));
}

StopMatchmakingOutcome GameLiftClient::StopMatchmaking(const StopMatchmakingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopMatchmakingOutcome(result.GetResultWithOwnership())
                            : StopMatchmakingOutcome(std::move(result.GetError()));
}

SuspendGameServerGroupOutcome GameLiftClient::SuspendGameServerGroup(const SuspendGameServerGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SuspendGameServerGroupOutcome(result.GetResultWithOwnership())
                            : SuspendGameServerGroupOutcome(std::move(result.GetError()));
}

TagResourceOutcome GameLiftClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TerminateGameSessionOutcome GameLiftClient::TerminateGameSession(const TerminateGameSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateGameSessionOutcome(result.GetResultWithOwnership())
                            : TerminateGameSessionOutcome(std::move(result.GetError()));
}

UntagResourceOutcome GameLiftClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAliasOutcome GameLiftClient::UpdateAlias(const UpdateAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAliasOutcome(result.GetResultWithOwnership()) : UpdateAliasOutcome(std::move(result.GetError()));
}

UpdateBuildOutcome GameLiftClient::UpdateBuild(const UpdateBuildRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBuildOutcome(result.GetResultWithOwnership()) : UpdateBuildOutcome(std::move(result.GetError()));
}

UpdateContainerFleetOutcome GameLiftClient::UpdateContainerFleet(const UpdateContainerFleetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContainerFleetOutcome(result.GetResultWithOwnership())
                            : UpdateContainerFleetOutcome(std::move(result.GetError()));
}

UpdateContainerGroupDefinitionOutcome GameLiftClient::UpdateContainerGroupDefinition(
    const UpdateContainerGroupDefinitionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContainerGroupDefinitionOutcome(result.GetResultWithOwnership())
                            : UpdateContainerGroupDefinitionOutcome(std::move(result.GetError()));
}

UpdateFleetAttributesOutcome GameLiftClient::UpdateFleetAttributes(const UpdateFleetAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFleetAttributesOutcome(result.GetResultWithOwnership())
                            : UpdateFleetAttributesOutcome(std::move(result.GetError()));
}

UpdateFleetCapacityOutcome GameLiftClient::UpdateFleetCapacity(const UpdateFleetCapacityRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFleetCapacityOutcome(result.GetResultWithOwnership())
                            : UpdateFleetCapacityOutcome(std::move(result.GetError()));
}

UpdateFleetPortSettingsOutcome GameLiftClient::UpdateFleetPortSettings(const UpdateFleetPortSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFleetPortSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateFleetPortSettingsOutcome(std::move(result.GetError()));
}

UpdateGameServerOutcome GameLiftClient::UpdateGameServer(const UpdateGameServerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGameServerOutcome(result.GetResultWithOwnership())
                            : UpdateGameServerOutcome(std::move(result.GetError()));
}

UpdateGameServerGroupOutcome GameLiftClient::UpdateGameServerGroup(const UpdateGameServerGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGameServerGroupOutcome(result.GetResultWithOwnership())
                            : UpdateGameServerGroupOutcome(std::move(result.GetError()));
}

UpdateGameSessionOutcome GameLiftClient::UpdateGameSession(const UpdateGameSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGameSessionOutcome(result.GetResultWithOwnership())
                            : UpdateGameSessionOutcome(std::move(result.GetError()));
}

UpdateGameSessionQueueOutcome GameLiftClient::UpdateGameSessionQueue(const UpdateGameSessionQueueRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGameSessionQueueOutcome(result.GetResultWithOwnership())
                            : UpdateGameSessionQueueOutcome(std::move(result.GetError()));
}

UpdateMatchmakingConfigurationOutcome GameLiftClient::UpdateMatchmakingConfiguration(
    const UpdateMatchmakingConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMatchmakingConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateMatchmakingConfigurationOutcome(std::move(result.GetError()));
}

UpdateRuntimeConfigurationOutcome GameLiftClient::UpdateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRuntimeConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateRuntimeConfigurationOutcome(std::move(result.GetError()));
}

UpdateScriptOutcome GameLiftClient::UpdateScript(const UpdateScriptRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateScriptOutcome(result.GetResultWithOwnership()) : UpdateScriptOutcome(std::move(result.GetError()));
}

ValidateMatchmakingRuleSetOutcome GameLiftClient::ValidateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ValidateMatchmakingRuleSetOutcome(result.GetResultWithOwnership())
                            : ValidateMatchmakingRuleSetOutcome(std::move(result.GetError()));
}
