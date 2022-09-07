/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/gamelift/GameLiftClient.h>
#include <aws/gamelift/GameLiftEndpoint.h>
#include <aws/gamelift/GameLiftErrorMarshaller.h>
#include <aws/gamelift/model/AcceptMatchRequest.h>
#include <aws/gamelift/model/ClaimGameServerRequest.h>
#include <aws/gamelift/model/CreateAliasRequest.h>
#include <aws/gamelift/model/CreateBuildRequest.h>
#include <aws/gamelift/model/CreateFleetRequest.h>
#include <aws/gamelift/model/CreateFleetLocationsRequest.h>
#include <aws/gamelift/model/CreateGameServerGroupRequest.h>
#include <aws/gamelift/model/CreateGameSessionRequest.h>
#include <aws/gamelift/model/CreateGameSessionQueueRequest.h>
#include <aws/gamelift/model/CreateMatchmakingConfigurationRequest.h>
#include <aws/gamelift/model/CreateMatchmakingRuleSetRequest.h>
#include <aws/gamelift/model/CreatePlayerSessionRequest.h>
#include <aws/gamelift/model/CreatePlayerSessionsRequest.h>
#include <aws/gamelift/model/CreateScriptRequest.h>
#include <aws/gamelift/model/CreateVpcPeeringAuthorizationRequest.h>
#include <aws/gamelift/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/gamelift/model/DeleteAliasRequest.h>
#include <aws/gamelift/model/DeleteBuildRequest.h>
#include <aws/gamelift/model/DeleteFleetRequest.h>
#include <aws/gamelift/model/DeleteFleetLocationsRequest.h>
#include <aws/gamelift/model/DeleteGameServerGroupRequest.h>
#include <aws/gamelift/model/DeleteGameSessionQueueRequest.h>
#include <aws/gamelift/model/DeleteMatchmakingConfigurationRequest.h>
#include <aws/gamelift/model/DeleteMatchmakingRuleSetRequest.h>
#include <aws/gamelift/model/DeleteScalingPolicyRequest.h>
#include <aws/gamelift/model/DeleteScriptRequest.h>
#include <aws/gamelift/model/DeleteVpcPeeringAuthorizationRequest.h>
#include <aws/gamelift/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/gamelift/model/DeregisterGameServerRequest.h>
#include <aws/gamelift/model/DescribeAliasRequest.h>
#include <aws/gamelift/model/DescribeBuildRequest.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsRequest.h>
#include <aws/gamelift/model/DescribeFleetAttributesRequest.h>
#include <aws/gamelift/model/DescribeFleetCapacityRequest.h>
#include <aws/gamelift/model/DescribeFleetEventsRequest.h>
#include <aws/gamelift/model/DescribeFleetLocationAttributesRequest.h>
#include <aws/gamelift/model/DescribeFleetLocationCapacityRequest.h>
#include <aws/gamelift/model/DescribeFleetLocationUtilizationRequest.h>
#include <aws/gamelift/model/DescribeFleetPortSettingsRequest.h>
#include <aws/gamelift/model/DescribeFleetUtilizationRequest.h>
#include <aws/gamelift/model/DescribeGameServerRequest.h>
#include <aws/gamelift/model/DescribeGameServerGroupRequest.h>
#include <aws/gamelift/model/DescribeGameServerInstancesRequest.h>
#include <aws/gamelift/model/DescribeGameSessionDetailsRequest.h>
#include <aws/gamelift/model/DescribeGameSessionPlacementRequest.h>
#include <aws/gamelift/model/DescribeGameSessionQueuesRequest.h>
#include <aws/gamelift/model/DescribeGameSessionsRequest.h>
#include <aws/gamelift/model/DescribeInstancesRequest.h>
#include <aws/gamelift/model/DescribeMatchmakingRequest.h>
#include <aws/gamelift/model/DescribeMatchmakingConfigurationsRequest.h>
#include <aws/gamelift/model/DescribeMatchmakingRuleSetsRequest.h>
#include <aws/gamelift/model/DescribePlayerSessionsRequest.h>
#include <aws/gamelift/model/DescribeRuntimeConfigurationRequest.h>
#include <aws/gamelift/model/DescribeScalingPoliciesRequest.h>
#include <aws/gamelift/model/DescribeScriptRequest.h>
#include <aws/gamelift/model/DescribeVpcPeeringAuthorizationsRequest.h>
#include <aws/gamelift/model/DescribeVpcPeeringConnectionsRequest.h>
#include <aws/gamelift/model/GetGameSessionLogUrlRequest.h>
#include <aws/gamelift/model/GetInstanceAccessRequest.h>
#include <aws/gamelift/model/ListAliasesRequest.h>
#include <aws/gamelift/model/ListBuildsRequest.h>
#include <aws/gamelift/model/ListFleetsRequest.h>
#include <aws/gamelift/model/ListGameServerGroupsRequest.h>
#include <aws/gamelift/model/ListGameServersRequest.h>
#include <aws/gamelift/model/ListScriptsRequest.h>
#include <aws/gamelift/model/ListTagsForResourceRequest.h>
#include <aws/gamelift/model/PutScalingPolicyRequest.h>
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
#include <aws/gamelift/model/UntagResourceRequest.h>
#include <aws/gamelift/model/UpdateAliasRequest.h>
#include <aws/gamelift/model/UpdateBuildRequest.h>
#include <aws/gamelift/model/UpdateFleetAttributesRequest.h>
#include <aws/gamelift/model/UpdateFleetCapacityRequest.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsRequest.h>
#include <aws/gamelift/model/UpdateGameServerRequest.h>
#include <aws/gamelift/model/UpdateGameServerGroupRequest.h>
#include <aws/gamelift/model/UpdateGameSessionRequest.h>
#include <aws/gamelift/model/UpdateGameSessionQueueRequest.h>
#include <aws/gamelift/model/UpdateMatchmakingConfigurationRequest.h>
#include <aws/gamelift/model/UpdateRuntimeConfigurationRequest.h>
#include <aws/gamelift/model/UpdateScriptRequest.h>
#include <aws/gamelift/model/ValidateMatchmakingRuleSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GameLift;
using namespace Aws::GameLift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "gamelift";
static const char* ALLOCATION_TAG = "GameLiftClient";

GameLiftClient::GameLiftClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::GameLiftClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::GameLiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::~GameLiftClient()
{
}

void GameLiftClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("GameLift");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GameLiftEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GameLiftClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AcceptMatchOutcome GameLiftClient::AcceptMatch(const AcceptMatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptMatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptMatchOutcomeCallable GameLiftClient::AcceptMatchCallable(const AcceptMatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptMatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptMatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientAcceptMatchAsyncHelper(GameLiftClient const * const clientThis, const AcceptMatchRequest& request, const AcceptMatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptMatch(request), context);
}

void GameLiftClient::AcceptMatchAsync(const AcceptMatchRequest& request, const AcceptMatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientAcceptMatchAsyncHelper( this, request, handler, context ); } );
}

ClaimGameServerOutcome GameLiftClient::ClaimGameServer(const ClaimGameServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ClaimGameServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ClaimGameServerOutcomeCallable GameLiftClient::ClaimGameServerCallable(const ClaimGameServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClaimGameServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClaimGameServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientClaimGameServerAsyncHelper(GameLiftClient const * const clientThis, const ClaimGameServerRequest& request, const ClaimGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ClaimGameServer(request), context);
}

void GameLiftClient::ClaimGameServerAsync(const ClaimGameServerRequest& request, const ClaimGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientClaimGameServerAsyncHelper( this, request, handler, context ); } );
}

CreateAliasOutcome GameLiftClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAliasOutcomeCallable GameLiftClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateAliasAsyncHelper(GameLiftClient const * const clientThis, const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAlias(request), context);
}

void GameLiftClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateAliasAsyncHelper( this, request, handler, context ); } );
}

CreateBuildOutcome GameLiftClient::CreateBuild(const CreateBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateBuildOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBuildOutcomeCallable GameLiftClient::CreateBuildCallable(const CreateBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateBuildAsyncHelper(GameLiftClient const * const clientThis, const CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBuild(request), context);
}

void GameLiftClient::CreateBuildAsync(const CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateBuildAsyncHelper( this, request, handler, context ); } );
}

CreateFleetOutcome GameLiftClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetOutcomeCallable GameLiftClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateFleetAsyncHelper(GameLiftClient const * const clientThis, const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFleet(request), context);
}

void GameLiftClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateFleetAsyncHelper( this, request, handler, context ); } );
}

CreateFleetLocationsOutcome GameLiftClient::CreateFleetLocations(const CreateFleetLocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFleetLocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFleetLocationsOutcomeCallable GameLiftClient::CreateFleetLocationsCallable(const CreateFleetLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleetLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateFleetLocationsAsyncHelper(GameLiftClient const * const clientThis, const CreateFleetLocationsRequest& request, const CreateFleetLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFleetLocations(request), context);
}

void GameLiftClient::CreateFleetLocationsAsync(const CreateFleetLocationsRequest& request, const CreateFleetLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateFleetLocationsAsyncHelper( this, request, handler, context ); } );
}

CreateGameServerGroupOutcome GameLiftClient::CreateGameServerGroup(const CreateGameServerGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGameServerGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGameServerGroupOutcomeCallable GameLiftClient::CreateGameServerGroupCallable(const CreateGameServerGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGameServerGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGameServerGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateGameServerGroupAsyncHelper(GameLiftClient const * const clientThis, const CreateGameServerGroupRequest& request, const CreateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGameServerGroup(request), context);
}

void GameLiftClient::CreateGameServerGroupAsync(const CreateGameServerGroupRequest& request, const CreateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateGameServerGroupAsyncHelper( this, request, handler, context ); } );
}

CreateGameSessionOutcome GameLiftClient::CreateGameSession(const CreateGameSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGameSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGameSessionOutcomeCallable GameLiftClient::CreateGameSessionCallable(const CreateGameSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGameSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGameSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateGameSessionAsyncHelper(GameLiftClient const * const clientThis, const CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGameSession(request), context);
}

void GameLiftClient::CreateGameSessionAsync(const CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateGameSessionAsyncHelper( this, request, handler, context ); } );
}

CreateGameSessionQueueOutcome GameLiftClient::CreateGameSessionQueue(const CreateGameSessionQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGameSessionQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGameSessionQueueOutcomeCallable GameLiftClient::CreateGameSessionQueueCallable(const CreateGameSessionQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGameSessionQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGameSessionQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateGameSessionQueueAsyncHelper(GameLiftClient const * const clientThis, const CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGameSessionQueue(request), context);
}

void GameLiftClient::CreateGameSessionQueueAsync(const CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateGameSessionQueueAsyncHelper( this, request, handler, context ); } );
}

CreateMatchmakingConfigurationOutcome GameLiftClient::CreateMatchmakingConfiguration(const CreateMatchmakingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMatchmakingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMatchmakingConfigurationOutcomeCallable GameLiftClient::CreateMatchmakingConfigurationCallable(const CreateMatchmakingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMatchmakingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMatchmakingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateMatchmakingConfigurationAsyncHelper(GameLiftClient const * const clientThis, const CreateMatchmakingConfigurationRequest& request, const CreateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMatchmakingConfiguration(request), context);
}

void GameLiftClient::CreateMatchmakingConfigurationAsync(const CreateMatchmakingConfigurationRequest& request, const CreateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateMatchmakingConfigurationAsyncHelper( this, request, handler, context ); } );
}

CreateMatchmakingRuleSetOutcome GameLiftClient::CreateMatchmakingRuleSet(const CreateMatchmakingRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMatchmakingRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMatchmakingRuleSetOutcomeCallable GameLiftClient::CreateMatchmakingRuleSetCallable(const CreateMatchmakingRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMatchmakingRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMatchmakingRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateMatchmakingRuleSetAsyncHelper(GameLiftClient const * const clientThis, const CreateMatchmakingRuleSetRequest& request, const CreateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMatchmakingRuleSet(request), context);
}

void GameLiftClient::CreateMatchmakingRuleSetAsync(const CreateMatchmakingRuleSetRequest& request, const CreateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateMatchmakingRuleSetAsyncHelper( this, request, handler, context ); } );
}

CreatePlayerSessionOutcome GameLiftClient::CreatePlayerSession(const CreatePlayerSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePlayerSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePlayerSessionOutcomeCallable GameLiftClient::CreatePlayerSessionCallable(const CreatePlayerSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlayerSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlayerSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreatePlayerSessionAsyncHelper(GameLiftClient const * const clientThis, const CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePlayerSession(request), context);
}

void GameLiftClient::CreatePlayerSessionAsync(const CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreatePlayerSessionAsyncHelper( this, request, handler, context ); } );
}

CreatePlayerSessionsOutcome GameLiftClient::CreatePlayerSessions(const CreatePlayerSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreatePlayerSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePlayerSessionsOutcomeCallable GameLiftClient::CreatePlayerSessionsCallable(const CreatePlayerSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlayerSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlayerSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreatePlayerSessionsAsyncHelper(GameLiftClient const * const clientThis, const CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePlayerSessions(request), context);
}

void GameLiftClient::CreatePlayerSessionsAsync(const CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreatePlayerSessionsAsyncHelper( this, request, handler, context ); } );
}

CreateScriptOutcome GameLiftClient::CreateScript(const CreateScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateScriptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateScriptOutcomeCallable GameLiftClient::CreateScriptCallable(const CreateScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateScriptAsyncHelper(GameLiftClient const * const clientThis, const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateScript(request), context);
}

void GameLiftClient::CreateScriptAsync(const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateScriptAsyncHelper( this, request, handler, context ); } );
}

CreateVpcPeeringAuthorizationOutcome GameLiftClient::CreateVpcPeeringAuthorization(const CreateVpcPeeringAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVpcPeeringAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcPeeringAuthorizationOutcomeCallable GameLiftClient::CreateVpcPeeringAuthorizationCallable(const CreateVpcPeeringAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcPeeringAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcPeeringAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateVpcPeeringAuthorizationAsyncHelper(GameLiftClient const * const clientThis, const CreateVpcPeeringAuthorizationRequest& request, const CreateVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVpcPeeringAuthorization(request), context);
}

void GameLiftClient::CreateVpcPeeringAuthorizationAsync(const CreateVpcPeeringAuthorizationRequest& request, const CreateVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateVpcPeeringAuthorizationAsyncHelper( this, request, handler, context ); } );
}

CreateVpcPeeringConnectionOutcome GameLiftClient::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateVpcPeeringConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcPeeringConnectionOutcomeCallable GameLiftClient::CreateVpcPeeringConnectionCallable(const CreateVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientCreateVpcPeeringConnectionAsyncHelper(GameLiftClient const * const clientThis, const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVpcPeeringConnection(request), context);
}

void GameLiftClient::CreateVpcPeeringConnectionAsync(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientCreateVpcPeeringConnectionAsyncHelper( this, request, handler, context ); } );
}

DeleteAliasOutcome GameLiftClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAliasOutcomeCallable GameLiftClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteAliasAsyncHelper(GameLiftClient const * const clientThis, const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAlias(request), context);
}

void GameLiftClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteBuildOutcome GameLiftClient::DeleteBuild(const DeleteBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteBuildOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBuildOutcomeCallable GameLiftClient::DeleteBuildCallable(const DeleteBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteBuildAsyncHelper(GameLiftClient const * const clientThis, const DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBuild(request), context);
}

void GameLiftClient::DeleteBuildAsync(const DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteBuildAsyncHelper( this, request, handler, context ); } );
}

DeleteFleetOutcome GameLiftClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFleetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetOutcomeCallable GameLiftClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteFleetAsyncHelper(GameLiftClient const * const clientThis, const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFleet(request), context);
}

void GameLiftClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteFleetAsyncHelper( this, request, handler, context ); } );
}

DeleteFleetLocationsOutcome GameLiftClient::DeleteFleetLocations(const DeleteFleetLocationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFleetLocationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFleetLocationsOutcomeCallable GameLiftClient::DeleteFleetLocationsCallable(const DeleteFleetLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleetLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteFleetLocationsAsyncHelper(GameLiftClient const * const clientThis, const DeleteFleetLocationsRequest& request, const DeleteFleetLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFleetLocations(request), context);
}

void GameLiftClient::DeleteFleetLocationsAsync(const DeleteFleetLocationsRequest& request, const DeleteFleetLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteFleetLocationsAsyncHelper( this, request, handler, context ); } );
}

DeleteGameServerGroupOutcome GameLiftClient::DeleteGameServerGroup(const DeleteGameServerGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGameServerGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGameServerGroupOutcomeCallable GameLiftClient::DeleteGameServerGroupCallable(const DeleteGameServerGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGameServerGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGameServerGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteGameServerGroupAsyncHelper(GameLiftClient const * const clientThis, const DeleteGameServerGroupRequest& request, const DeleteGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGameServerGroup(request), context);
}

void GameLiftClient::DeleteGameServerGroupAsync(const DeleteGameServerGroupRequest& request, const DeleteGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteGameServerGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteGameSessionQueueOutcome GameLiftClient::DeleteGameSessionQueue(const DeleteGameSessionQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGameSessionQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGameSessionQueueOutcomeCallable GameLiftClient::DeleteGameSessionQueueCallable(const DeleteGameSessionQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGameSessionQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGameSessionQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteGameSessionQueueAsyncHelper(GameLiftClient const * const clientThis, const DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGameSessionQueue(request), context);
}

void GameLiftClient::DeleteGameSessionQueueAsync(const DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteGameSessionQueueAsyncHelper( this, request, handler, context ); } );
}

DeleteMatchmakingConfigurationOutcome GameLiftClient::DeleteMatchmakingConfiguration(const DeleteMatchmakingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMatchmakingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMatchmakingConfigurationOutcomeCallable GameLiftClient::DeleteMatchmakingConfigurationCallable(const DeleteMatchmakingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMatchmakingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMatchmakingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteMatchmakingConfigurationAsyncHelper(GameLiftClient const * const clientThis, const DeleteMatchmakingConfigurationRequest& request, const DeleteMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMatchmakingConfiguration(request), context);
}

void GameLiftClient::DeleteMatchmakingConfigurationAsync(const DeleteMatchmakingConfigurationRequest& request, const DeleteMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteMatchmakingConfigurationAsyncHelper( this, request, handler, context ); } );
}

DeleteMatchmakingRuleSetOutcome GameLiftClient::DeleteMatchmakingRuleSet(const DeleteMatchmakingRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteMatchmakingRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMatchmakingRuleSetOutcomeCallable GameLiftClient::DeleteMatchmakingRuleSetCallable(const DeleteMatchmakingRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMatchmakingRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMatchmakingRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteMatchmakingRuleSetAsyncHelper(GameLiftClient const * const clientThis, const DeleteMatchmakingRuleSetRequest& request, const DeleteMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMatchmakingRuleSet(request), context);
}

void GameLiftClient::DeleteMatchmakingRuleSetAsync(const DeleteMatchmakingRuleSetRequest& request, const DeleteMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteMatchmakingRuleSetAsyncHelper( this, request, handler, context ); } );
}

DeleteScalingPolicyOutcome GameLiftClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteScalingPolicyOutcomeCallable GameLiftClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteScalingPolicyAsyncHelper(GameLiftClient const * const clientThis, const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteScalingPolicy(request), context);
}

void GameLiftClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteScriptOutcome GameLiftClient::DeleteScript(const DeleteScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteScriptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteScriptOutcomeCallable GameLiftClient::DeleteScriptCallable(const DeleteScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteScriptAsyncHelper(GameLiftClient const * const clientThis, const DeleteScriptRequest& request, const DeleteScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteScript(request), context);
}

void GameLiftClient::DeleteScriptAsync(const DeleteScriptRequest& request, const DeleteScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteScriptAsyncHelper( this, request, handler, context ); } );
}

DeleteVpcPeeringAuthorizationOutcome GameLiftClient::DeleteVpcPeeringAuthorization(const DeleteVpcPeeringAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVpcPeeringAuthorizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcPeeringAuthorizationOutcomeCallable GameLiftClient::DeleteVpcPeeringAuthorizationCallable(const DeleteVpcPeeringAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcPeeringAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcPeeringAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteVpcPeeringAuthorizationAsyncHelper(GameLiftClient const * const clientThis, const DeleteVpcPeeringAuthorizationRequest& request, const DeleteVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVpcPeeringAuthorization(request), context);
}

void GameLiftClient::DeleteVpcPeeringAuthorizationAsync(const DeleteVpcPeeringAuthorizationRequest& request, const DeleteVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteVpcPeeringAuthorizationAsyncHelper( this, request, handler, context ); } );
}

DeleteVpcPeeringConnectionOutcome GameLiftClient::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteVpcPeeringConnectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcPeeringConnectionOutcomeCallable GameLiftClient::DeleteVpcPeeringConnectionCallable(const DeleteVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeleteVpcPeeringConnectionAsyncHelper(GameLiftClient const * const clientThis, const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVpcPeeringConnection(request), context);
}

void GameLiftClient::DeleteVpcPeeringConnectionAsync(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeleteVpcPeeringConnectionAsyncHelper( this, request, handler, context ); } );
}

DeregisterGameServerOutcome GameLiftClient::DeregisterGameServer(const DeregisterGameServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterGameServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterGameServerOutcomeCallable GameLiftClient::DeregisterGameServerCallable(const DeregisterGameServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterGameServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterGameServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDeregisterGameServerAsyncHelper(GameLiftClient const * const clientThis, const DeregisterGameServerRequest& request, const DeregisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterGameServer(request), context);
}

void GameLiftClient::DeregisterGameServerAsync(const DeregisterGameServerRequest& request, const DeregisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDeregisterGameServerAsyncHelper( this, request, handler, context ); } );
}

DescribeAliasOutcome GameLiftClient::DescribeAlias(const DescribeAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAliasOutcomeCallable GameLiftClient::DescribeAliasCallable(const DescribeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeAliasAsyncHelper(GameLiftClient const * const clientThis, const DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAlias(request), context);
}

void GameLiftClient::DescribeAliasAsync(const DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeAliasAsyncHelper( this, request, handler, context ); } );
}

DescribeBuildOutcome GameLiftClient::DescribeBuild(const DescribeBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeBuildOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBuildOutcomeCallable GameLiftClient::DescribeBuildCallable(const DescribeBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeBuildAsyncHelper(GameLiftClient const * const clientThis, const DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBuild(request), context);
}

void GameLiftClient::DescribeBuildAsync(const DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeBuildAsyncHelper( this, request, handler, context ); } );
}

DescribeEC2InstanceLimitsOutcome GameLiftClient::DescribeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEC2InstanceLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEC2InstanceLimitsOutcomeCallable GameLiftClient::DescribeEC2InstanceLimitsCallable(const DescribeEC2InstanceLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEC2InstanceLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEC2InstanceLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeEC2InstanceLimitsAsyncHelper(GameLiftClient const * const clientThis, const DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEC2InstanceLimits(request), context);
}

void GameLiftClient::DescribeEC2InstanceLimitsAsync(const DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeEC2InstanceLimitsAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetAttributesOutcome GameLiftClient::DescribeFleetAttributes(const DescribeFleetAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetAttributesOutcomeCallable GameLiftClient::DescribeFleetAttributesCallable(const DescribeFleetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetAttributesAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetAttributes(request), context);
}

void GameLiftClient::DescribeFleetAttributesAsync(const DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetCapacityOutcome GameLiftClient::DescribeFleetCapacity(const DescribeFleetCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetCapacityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetCapacityOutcomeCallable GameLiftClient::DescribeFleetCapacityCallable(const DescribeFleetCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetCapacityAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetCapacity(request), context);
}

void GameLiftClient::DescribeFleetCapacityAsync(const DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetCapacityAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetEventsOutcome GameLiftClient::DescribeFleetEvents(const DescribeFleetEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetEventsOutcomeCallable GameLiftClient::DescribeFleetEventsCallable(const DescribeFleetEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetEventsAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetEvents(request), context);
}

void GameLiftClient::DescribeFleetEventsAsync(const DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetEventsAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetLocationAttributesOutcome GameLiftClient::DescribeFleetLocationAttributes(const DescribeFleetLocationAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetLocationAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetLocationAttributesOutcomeCallable GameLiftClient::DescribeFleetLocationAttributesCallable(const DescribeFleetLocationAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetLocationAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetLocationAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetLocationAttributesAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetLocationAttributesRequest& request, const DescribeFleetLocationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetLocationAttributes(request), context);
}

void GameLiftClient::DescribeFleetLocationAttributesAsync(const DescribeFleetLocationAttributesRequest& request, const DescribeFleetLocationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetLocationAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetLocationCapacityOutcome GameLiftClient::DescribeFleetLocationCapacity(const DescribeFleetLocationCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetLocationCapacityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetLocationCapacityOutcomeCallable GameLiftClient::DescribeFleetLocationCapacityCallable(const DescribeFleetLocationCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetLocationCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetLocationCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetLocationCapacityAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetLocationCapacityRequest& request, const DescribeFleetLocationCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetLocationCapacity(request), context);
}

void GameLiftClient::DescribeFleetLocationCapacityAsync(const DescribeFleetLocationCapacityRequest& request, const DescribeFleetLocationCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetLocationCapacityAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetLocationUtilizationOutcome GameLiftClient::DescribeFleetLocationUtilization(const DescribeFleetLocationUtilizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetLocationUtilizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetLocationUtilizationOutcomeCallable GameLiftClient::DescribeFleetLocationUtilizationCallable(const DescribeFleetLocationUtilizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetLocationUtilizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetLocationUtilization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetLocationUtilizationAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetLocationUtilizationRequest& request, const DescribeFleetLocationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetLocationUtilization(request), context);
}

void GameLiftClient::DescribeFleetLocationUtilizationAsync(const DescribeFleetLocationUtilizationRequest& request, const DescribeFleetLocationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetLocationUtilizationAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetPortSettingsOutcome GameLiftClient::DescribeFleetPortSettings(const DescribeFleetPortSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetPortSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetPortSettingsOutcomeCallable GameLiftClient::DescribeFleetPortSettingsCallable(const DescribeFleetPortSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetPortSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetPortSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetPortSettingsAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetPortSettings(request), context);
}

void GameLiftClient::DescribeFleetPortSettingsAsync(const DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetPortSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeFleetUtilizationOutcome GameLiftClient::DescribeFleetUtilization(const DescribeFleetUtilizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFleetUtilizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFleetUtilizationOutcomeCallable GameLiftClient::DescribeFleetUtilizationCallable(const DescribeFleetUtilizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetUtilizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetUtilization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeFleetUtilizationAsyncHelper(GameLiftClient const * const clientThis, const DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFleetUtilization(request), context);
}

void GameLiftClient::DescribeFleetUtilizationAsync(const DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeFleetUtilizationAsyncHelper( this, request, handler, context ); } );
}

DescribeGameServerOutcome GameLiftClient::DescribeGameServer(const DescribeGameServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGameServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGameServerOutcomeCallable GameLiftClient::DescribeGameServerCallable(const DescribeGameServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeGameServerAsyncHelper(GameLiftClient const * const clientThis, const DescribeGameServerRequest& request, const DescribeGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGameServer(request), context);
}

void GameLiftClient::DescribeGameServerAsync(const DescribeGameServerRequest& request, const DescribeGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeGameServerAsyncHelper( this, request, handler, context ); } );
}

DescribeGameServerGroupOutcome GameLiftClient::DescribeGameServerGroup(const DescribeGameServerGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGameServerGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGameServerGroupOutcomeCallable GameLiftClient::DescribeGameServerGroupCallable(const DescribeGameServerGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameServerGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameServerGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeGameServerGroupAsyncHelper(GameLiftClient const * const clientThis, const DescribeGameServerGroupRequest& request, const DescribeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGameServerGroup(request), context);
}

void GameLiftClient::DescribeGameServerGroupAsync(const DescribeGameServerGroupRequest& request, const DescribeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeGameServerGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeGameServerInstancesOutcome GameLiftClient::DescribeGameServerInstances(const DescribeGameServerInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGameServerInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGameServerInstancesOutcomeCallable GameLiftClient::DescribeGameServerInstancesCallable(const DescribeGameServerInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameServerInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameServerInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeGameServerInstancesAsyncHelper(GameLiftClient const * const clientThis, const DescribeGameServerInstancesRequest& request, const DescribeGameServerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGameServerInstances(request), context);
}

void GameLiftClient::DescribeGameServerInstancesAsync(const DescribeGameServerInstancesRequest& request, const DescribeGameServerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeGameServerInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeGameSessionDetailsOutcome GameLiftClient::DescribeGameSessionDetails(const DescribeGameSessionDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGameSessionDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGameSessionDetailsOutcomeCallable GameLiftClient::DescribeGameSessionDetailsCallable(const DescribeGameSessionDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessionDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeGameSessionDetailsAsyncHelper(GameLiftClient const * const clientThis, const DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGameSessionDetails(request), context);
}

void GameLiftClient::DescribeGameSessionDetailsAsync(const DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeGameSessionDetailsAsyncHelper( this, request, handler, context ); } );
}

DescribeGameSessionPlacementOutcome GameLiftClient::DescribeGameSessionPlacement(const DescribeGameSessionPlacementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGameSessionPlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGameSessionPlacementOutcomeCallable GameLiftClient::DescribeGameSessionPlacementCallable(const DescribeGameSessionPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessionPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeGameSessionPlacementAsyncHelper(GameLiftClient const * const clientThis, const DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGameSessionPlacement(request), context);
}

void GameLiftClient::DescribeGameSessionPlacementAsync(const DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeGameSessionPlacementAsyncHelper( this, request, handler, context ); } );
}

DescribeGameSessionQueuesOutcome GameLiftClient::DescribeGameSessionQueues(const DescribeGameSessionQueuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGameSessionQueuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGameSessionQueuesOutcomeCallable GameLiftClient::DescribeGameSessionQueuesCallable(const DescribeGameSessionQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessionQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeGameSessionQueuesAsyncHelper(GameLiftClient const * const clientThis, const DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGameSessionQueues(request), context);
}

void GameLiftClient::DescribeGameSessionQueuesAsync(const DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeGameSessionQueuesAsyncHelper( this, request, handler, context ); } );
}

DescribeGameSessionsOutcome GameLiftClient::DescribeGameSessions(const DescribeGameSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGameSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGameSessionsOutcomeCallable GameLiftClient::DescribeGameSessionsCallable(const DescribeGameSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeGameSessionsAsyncHelper(GameLiftClient const * const clientThis, const DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGameSessions(request), context);
}

void GameLiftClient::DescribeGameSessionsAsync(const DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeGameSessionsAsyncHelper( this, request, handler, context ); } );
}

DescribeInstancesOutcome GameLiftClient::DescribeInstances(const DescribeInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeInstancesOutcomeCallable GameLiftClient::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeInstancesAsyncHelper(GameLiftClient const * const clientThis, const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeInstances(request), context);
}

void GameLiftClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeInstancesAsyncHelper( this, request, handler, context ); } );
}

DescribeMatchmakingOutcome GameLiftClient::DescribeMatchmaking(const DescribeMatchmakingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMatchmakingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMatchmakingOutcomeCallable GameLiftClient::DescribeMatchmakingCallable(const DescribeMatchmakingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMatchmakingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMatchmaking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeMatchmakingAsyncHelper(GameLiftClient const * const clientThis, const DescribeMatchmakingRequest& request, const DescribeMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMatchmaking(request), context);
}

void GameLiftClient::DescribeMatchmakingAsync(const DescribeMatchmakingRequest& request, const DescribeMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeMatchmakingAsyncHelper( this, request, handler, context ); } );
}

DescribeMatchmakingConfigurationsOutcome GameLiftClient::DescribeMatchmakingConfigurations(const DescribeMatchmakingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMatchmakingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMatchmakingConfigurationsOutcomeCallable GameLiftClient::DescribeMatchmakingConfigurationsCallable(const DescribeMatchmakingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMatchmakingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMatchmakingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeMatchmakingConfigurationsAsyncHelper(GameLiftClient const * const clientThis, const DescribeMatchmakingConfigurationsRequest& request, const DescribeMatchmakingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMatchmakingConfigurations(request), context);
}

void GameLiftClient::DescribeMatchmakingConfigurationsAsync(const DescribeMatchmakingConfigurationsRequest& request, const DescribeMatchmakingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeMatchmakingConfigurationsAsyncHelper( this, request, handler, context ); } );
}

DescribeMatchmakingRuleSetsOutcome GameLiftClient::DescribeMatchmakingRuleSets(const DescribeMatchmakingRuleSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeMatchmakingRuleSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMatchmakingRuleSetsOutcomeCallable GameLiftClient::DescribeMatchmakingRuleSetsCallable(const DescribeMatchmakingRuleSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMatchmakingRuleSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMatchmakingRuleSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeMatchmakingRuleSetsAsyncHelper(GameLiftClient const * const clientThis, const DescribeMatchmakingRuleSetsRequest& request, const DescribeMatchmakingRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMatchmakingRuleSets(request), context);
}

void GameLiftClient::DescribeMatchmakingRuleSetsAsync(const DescribeMatchmakingRuleSetsRequest& request, const DescribeMatchmakingRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeMatchmakingRuleSetsAsyncHelper( this, request, handler, context ); } );
}

DescribePlayerSessionsOutcome GameLiftClient::DescribePlayerSessions(const DescribePlayerSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePlayerSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePlayerSessionsOutcomeCallable GameLiftClient::DescribePlayerSessionsCallable(const DescribePlayerSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePlayerSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePlayerSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribePlayerSessionsAsyncHelper(GameLiftClient const * const clientThis, const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePlayerSessions(request), context);
}

void GameLiftClient::DescribePlayerSessionsAsync(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribePlayerSessionsAsyncHelper( this, request, handler, context ); } );
}

DescribeRuntimeConfigurationOutcome GameLiftClient::DescribeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRuntimeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuntimeConfigurationOutcomeCallable GameLiftClient::DescribeRuntimeConfigurationCallable(const DescribeRuntimeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuntimeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuntimeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeRuntimeConfigurationAsyncHelper(GameLiftClient const * const clientThis, const DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRuntimeConfiguration(request), context);
}

void GameLiftClient::DescribeRuntimeConfigurationAsync(const DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeRuntimeConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingPoliciesOutcome GameLiftClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScalingPoliciesOutcomeCallable GameLiftClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeScalingPoliciesAsyncHelper(GameLiftClient const * const clientThis, const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingPolicies(request), context);
}

void GameLiftClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeScalingPoliciesAsyncHelper( this, request, handler, context ); } );
}

DescribeScriptOutcome GameLiftClient::DescribeScript(const DescribeScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScriptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScriptOutcomeCallable GameLiftClient::DescribeScriptCallable(const DescribeScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeScriptAsyncHelper(GameLiftClient const * const clientThis, const DescribeScriptRequest& request, const DescribeScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScript(request), context);
}

void GameLiftClient::DescribeScriptAsync(const DescribeScriptRequest& request, const DescribeScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeScriptAsyncHelper( this, request, handler, context ); } );
}

DescribeVpcPeeringAuthorizationsOutcome GameLiftClient::DescribeVpcPeeringAuthorizations(const DescribeVpcPeeringAuthorizationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeVpcPeeringAuthorizationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVpcPeeringAuthorizationsOutcomeCallable GameLiftClient::DescribeVpcPeeringAuthorizationsCallable(const DescribeVpcPeeringAuthorizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcPeeringAuthorizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcPeeringAuthorizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeVpcPeeringAuthorizationsAsyncHelper(GameLiftClient const * const clientThis, const DescribeVpcPeeringAuthorizationsRequest& request, const DescribeVpcPeeringAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVpcPeeringAuthorizations(request), context);
}

void GameLiftClient::DescribeVpcPeeringAuthorizationsAsync(const DescribeVpcPeeringAuthorizationsRequest& request, const DescribeVpcPeeringAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeVpcPeeringAuthorizationsAsyncHelper( this, request, handler, context ); } );
}

DescribeVpcPeeringConnectionsOutcome GameLiftClient::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeVpcPeeringConnectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVpcPeeringConnectionsOutcomeCallable GameLiftClient::DescribeVpcPeeringConnectionsCallable(const DescribeVpcPeeringConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcPeeringConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcPeeringConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientDescribeVpcPeeringConnectionsAsyncHelper(GameLiftClient const * const clientThis, const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeVpcPeeringConnections(request), context);
}

void GameLiftClient::DescribeVpcPeeringConnectionsAsync(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientDescribeVpcPeeringConnectionsAsyncHelper( this, request, handler, context ); } );
}

GetGameSessionLogUrlOutcome GameLiftClient::GetGameSessionLogUrl(const GetGameSessionLogUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGameSessionLogUrlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGameSessionLogUrlOutcomeCallable GameLiftClient::GetGameSessionLogUrlCallable(const GetGameSessionLogUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGameSessionLogUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGameSessionLogUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientGetGameSessionLogUrlAsyncHelper(GameLiftClient const * const clientThis, const GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGameSessionLogUrl(request), context);
}

void GameLiftClient::GetGameSessionLogUrlAsync(const GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientGetGameSessionLogUrlAsyncHelper( this, request, handler, context ); } );
}

GetInstanceAccessOutcome GameLiftClient::GetInstanceAccess(const GetInstanceAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetInstanceAccessOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceAccessOutcomeCallable GameLiftClient::GetInstanceAccessCallable(const GetInstanceAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientGetInstanceAccessAsyncHelper(GameLiftClient const * const clientThis, const GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceAccess(request), context);
}

void GameLiftClient::GetInstanceAccessAsync(const GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientGetInstanceAccessAsyncHelper( this, request, handler, context ); } );
}

ListAliasesOutcome GameLiftClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAliasesOutcomeCallable GameLiftClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientListAliasesAsyncHelper(GameLiftClient const * const clientThis, const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAliases(request), context);
}

void GameLiftClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientListAliasesAsyncHelper( this, request, handler, context ); } );
}

ListBuildsOutcome GameLiftClient::ListBuilds(const ListBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListBuildsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBuildsOutcomeCallable GameLiftClient::ListBuildsCallable(const ListBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientListBuildsAsyncHelper(GameLiftClient const * const clientThis, const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBuilds(request), context);
}

void GameLiftClient::ListBuildsAsync(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientListBuildsAsyncHelper( this, request, handler, context ); } );
}

ListFleetsOutcome GameLiftClient::ListFleets(const ListFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFleetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFleetsOutcomeCallable GameLiftClient::ListFleetsCallable(const ListFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientListFleetsAsyncHelper(GameLiftClient const * const clientThis, const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFleets(request), context);
}

void GameLiftClient::ListFleetsAsync(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientListFleetsAsyncHelper( this, request, handler, context ); } );
}

ListGameServerGroupsOutcome GameLiftClient::ListGameServerGroups(const ListGameServerGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGameServerGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGameServerGroupsOutcomeCallable GameLiftClient::ListGameServerGroupsCallable(const ListGameServerGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGameServerGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGameServerGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientListGameServerGroupsAsyncHelper(GameLiftClient const * const clientThis, const ListGameServerGroupsRequest& request, const ListGameServerGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGameServerGroups(request), context);
}

void GameLiftClient::ListGameServerGroupsAsync(const ListGameServerGroupsRequest& request, const ListGameServerGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientListGameServerGroupsAsyncHelper( this, request, handler, context ); } );
}

ListGameServersOutcome GameLiftClient::ListGameServers(const ListGameServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGameServersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGameServersOutcomeCallable GameLiftClient::ListGameServersCallable(const ListGameServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGameServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGameServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientListGameServersAsyncHelper(GameLiftClient const * const clientThis, const ListGameServersRequest& request, const ListGameServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGameServers(request), context);
}

void GameLiftClient::ListGameServersAsync(const ListGameServersRequest& request, const ListGameServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientListGameServersAsyncHelper( this, request, handler, context ); } );
}

ListScriptsOutcome GameLiftClient::ListScripts(const ListScriptsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListScriptsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListScriptsOutcomeCallable GameLiftClient::ListScriptsCallable(const ListScriptsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListScriptsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListScripts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientListScriptsAsyncHelper(GameLiftClient const * const clientThis, const ListScriptsRequest& request, const ListScriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListScripts(request), context);
}

void GameLiftClient::ListScriptsAsync(const ListScriptsRequest& request, const ListScriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientListScriptsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome GameLiftClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GameLiftClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientListTagsForResourceAsyncHelper(GameLiftClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void GameLiftClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutScalingPolicyOutcome GameLiftClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutScalingPolicyOutcomeCallable GameLiftClient::PutScalingPolicyCallable(const PutScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientPutScalingPolicyAsyncHelper(GameLiftClient const * const clientThis, const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutScalingPolicy(request), context);
}

void GameLiftClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientPutScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

RegisterGameServerOutcome GameLiftClient::RegisterGameServer(const RegisterGameServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterGameServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterGameServerOutcomeCallable GameLiftClient::RegisterGameServerCallable(const RegisterGameServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterGameServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterGameServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientRegisterGameServerAsyncHelper(GameLiftClient const * const clientThis, const RegisterGameServerRequest& request, const RegisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterGameServer(request), context);
}

void GameLiftClient::RegisterGameServerAsync(const RegisterGameServerRequest& request, const RegisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientRegisterGameServerAsyncHelper( this, request, handler, context ); } );
}

RequestUploadCredentialsOutcome GameLiftClient::RequestUploadCredentials(const RequestUploadCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RequestUploadCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RequestUploadCredentialsOutcomeCallable GameLiftClient::RequestUploadCredentialsCallable(const RequestUploadCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestUploadCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestUploadCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientRequestUploadCredentialsAsyncHelper(GameLiftClient const * const clientThis, const RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RequestUploadCredentials(request), context);
}

void GameLiftClient::RequestUploadCredentialsAsync(const RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientRequestUploadCredentialsAsyncHelper( this, request, handler, context ); } );
}

ResolveAliasOutcome GameLiftClient::ResolveAlias(const ResolveAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResolveAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResolveAliasOutcomeCallable GameLiftClient::ResolveAliasCallable(const ResolveAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientResolveAliasAsyncHelper(GameLiftClient const * const clientThis, const ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResolveAlias(request), context);
}

void GameLiftClient::ResolveAliasAsync(const ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientResolveAliasAsyncHelper( this, request, handler, context ); } );
}

ResumeGameServerGroupOutcome GameLiftClient::ResumeGameServerGroup(const ResumeGameServerGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResumeGameServerGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeGameServerGroupOutcomeCallable GameLiftClient::ResumeGameServerGroupCallable(const ResumeGameServerGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeGameServerGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeGameServerGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientResumeGameServerGroupAsyncHelper(GameLiftClient const * const clientThis, const ResumeGameServerGroupRequest& request, const ResumeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResumeGameServerGroup(request), context);
}

void GameLiftClient::ResumeGameServerGroupAsync(const ResumeGameServerGroupRequest& request, const ResumeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientResumeGameServerGroupAsyncHelper( this, request, handler, context ); } );
}

SearchGameSessionsOutcome GameLiftClient::SearchGameSessions(const SearchGameSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SearchGameSessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchGameSessionsOutcomeCallable GameLiftClient::SearchGameSessionsCallable(const SearchGameSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchGameSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchGameSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientSearchGameSessionsAsyncHelper(GameLiftClient const * const clientThis, const SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchGameSessions(request), context);
}

void GameLiftClient::SearchGameSessionsAsync(const SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientSearchGameSessionsAsyncHelper( this, request, handler, context ); } );
}

StartFleetActionsOutcome GameLiftClient::StartFleetActions(const StartFleetActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFleetActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFleetActionsOutcomeCallable GameLiftClient::StartFleetActionsCallable(const StartFleetActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFleetActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFleetActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientStartFleetActionsAsyncHelper(GameLiftClient const * const clientThis, const StartFleetActionsRequest& request, const StartFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartFleetActions(request), context);
}

void GameLiftClient::StartFleetActionsAsync(const StartFleetActionsRequest& request, const StartFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientStartFleetActionsAsyncHelper( this, request, handler, context ); } );
}

StartGameSessionPlacementOutcome GameLiftClient::StartGameSessionPlacement(const StartGameSessionPlacementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartGameSessionPlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartGameSessionPlacementOutcomeCallable GameLiftClient::StartGameSessionPlacementCallable(const StartGameSessionPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartGameSessionPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartGameSessionPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientStartGameSessionPlacementAsyncHelper(GameLiftClient const * const clientThis, const StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartGameSessionPlacement(request), context);
}

void GameLiftClient::StartGameSessionPlacementAsync(const StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientStartGameSessionPlacementAsyncHelper( this, request, handler, context ); } );
}

StartMatchBackfillOutcome GameLiftClient::StartMatchBackfill(const StartMatchBackfillRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMatchBackfillOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMatchBackfillOutcomeCallable GameLiftClient::StartMatchBackfillCallable(const StartMatchBackfillRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMatchBackfillOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMatchBackfill(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientStartMatchBackfillAsyncHelper(GameLiftClient const * const clientThis, const StartMatchBackfillRequest& request, const StartMatchBackfillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMatchBackfill(request), context);
}

void GameLiftClient::StartMatchBackfillAsync(const StartMatchBackfillRequest& request, const StartMatchBackfillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientStartMatchBackfillAsyncHelper( this, request, handler, context ); } );
}

StartMatchmakingOutcome GameLiftClient::StartMatchmaking(const StartMatchmakingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartMatchmakingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMatchmakingOutcomeCallable GameLiftClient::StartMatchmakingCallable(const StartMatchmakingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMatchmakingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMatchmaking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientStartMatchmakingAsyncHelper(GameLiftClient const * const clientThis, const StartMatchmakingRequest& request, const StartMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMatchmaking(request), context);
}

void GameLiftClient::StartMatchmakingAsync(const StartMatchmakingRequest& request, const StartMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientStartMatchmakingAsyncHelper( this, request, handler, context ); } );
}

StopFleetActionsOutcome GameLiftClient::StopFleetActions(const StopFleetActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopFleetActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFleetActionsOutcomeCallable GameLiftClient::StopFleetActionsCallable(const StopFleetActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFleetActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFleetActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientStopFleetActionsAsyncHelper(GameLiftClient const * const clientThis, const StopFleetActionsRequest& request, const StopFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopFleetActions(request), context);
}

void GameLiftClient::StopFleetActionsAsync(const StopFleetActionsRequest& request, const StopFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientStopFleetActionsAsyncHelper( this, request, handler, context ); } );
}

StopGameSessionPlacementOutcome GameLiftClient::StopGameSessionPlacement(const StopGameSessionPlacementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopGameSessionPlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopGameSessionPlacementOutcomeCallable GameLiftClient::StopGameSessionPlacementCallable(const StopGameSessionPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopGameSessionPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopGameSessionPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientStopGameSessionPlacementAsyncHelper(GameLiftClient const * const clientThis, const StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopGameSessionPlacement(request), context);
}

void GameLiftClient::StopGameSessionPlacementAsync(const StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientStopGameSessionPlacementAsyncHelper( this, request, handler, context ); } );
}

StopMatchmakingOutcome GameLiftClient::StopMatchmaking(const StopMatchmakingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopMatchmakingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMatchmakingOutcomeCallable GameLiftClient::StopMatchmakingCallable(const StopMatchmakingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMatchmakingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMatchmaking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientStopMatchmakingAsyncHelper(GameLiftClient const * const clientThis, const StopMatchmakingRequest& request, const StopMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopMatchmaking(request), context);
}

void GameLiftClient::StopMatchmakingAsync(const StopMatchmakingRequest& request, const StopMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientStopMatchmakingAsyncHelper( this, request, handler, context ); } );
}

SuspendGameServerGroupOutcome GameLiftClient::SuspendGameServerGroup(const SuspendGameServerGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SuspendGameServerGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SuspendGameServerGroupOutcomeCallable GameLiftClient::SuspendGameServerGroupCallable(const SuspendGameServerGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SuspendGameServerGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SuspendGameServerGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientSuspendGameServerGroupAsyncHelper(GameLiftClient const * const clientThis, const SuspendGameServerGroupRequest& request, const SuspendGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SuspendGameServerGroup(request), context);
}

void GameLiftClient::SuspendGameServerGroupAsync(const SuspendGameServerGroupRequest& request, const SuspendGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientSuspendGameServerGroupAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome GameLiftClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GameLiftClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientTagResourceAsyncHelper(GameLiftClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void GameLiftClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome GameLiftClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GameLiftClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUntagResourceAsyncHelper(GameLiftClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void GameLiftClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAliasOutcome GameLiftClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAliasOutcomeCallable GameLiftClient::UpdateAliasCallable(const UpdateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateAliasAsyncHelper(GameLiftClient const * const clientThis, const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAlias(request), context);
}

void GameLiftClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateAliasAsyncHelper( this, request, handler, context ); } );
}

UpdateBuildOutcome GameLiftClient::UpdateBuild(const UpdateBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateBuildOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBuildOutcomeCallable GameLiftClient::UpdateBuildCallable(const UpdateBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateBuildAsyncHelper(GameLiftClient const * const clientThis, const UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBuild(request), context);
}

void GameLiftClient::UpdateBuildAsync(const UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateBuildAsyncHelper( this, request, handler, context ); } );
}

UpdateFleetAttributesOutcome GameLiftClient::UpdateFleetAttributes(const UpdateFleetAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFleetAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFleetAttributesOutcomeCallable GameLiftClient::UpdateFleetAttributesCallable(const UpdateFleetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateFleetAttributesAsyncHelper(GameLiftClient const * const clientThis, const UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFleetAttributes(request), context);
}

void GameLiftClient::UpdateFleetAttributesAsync(const UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateFleetAttributesAsyncHelper( this, request, handler, context ); } );
}

UpdateFleetCapacityOutcome GameLiftClient::UpdateFleetCapacity(const UpdateFleetCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFleetCapacityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFleetCapacityOutcomeCallable GameLiftClient::UpdateFleetCapacityCallable(const UpdateFleetCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateFleetCapacityAsyncHelper(GameLiftClient const * const clientThis, const UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFleetCapacity(request), context);
}

void GameLiftClient::UpdateFleetCapacityAsync(const UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateFleetCapacityAsyncHelper( this, request, handler, context ); } );
}

UpdateFleetPortSettingsOutcome GameLiftClient::UpdateFleetPortSettings(const UpdateFleetPortSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFleetPortSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFleetPortSettingsOutcomeCallable GameLiftClient::UpdateFleetPortSettingsCallable(const UpdateFleetPortSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetPortSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetPortSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateFleetPortSettingsAsyncHelper(GameLiftClient const * const clientThis, const UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFleetPortSettings(request), context);
}

void GameLiftClient::UpdateFleetPortSettingsAsync(const UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateFleetPortSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateGameServerOutcome GameLiftClient::UpdateGameServer(const UpdateGameServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGameServerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameServerOutcomeCallable GameLiftClient::UpdateGameServerCallable(const UpdateGameServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGameServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateGameServerAsyncHelper(GameLiftClient const * const clientThis, const UpdateGameServerRequest& request, const UpdateGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGameServer(request), context);
}

void GameLiftClient::UpdateGameServerAsync(const UpdateGameServerRequest& request, const UpdateGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateGameServerAsyncHelper( this, request, handler, context ); } );
}

UpdateGameServerGroupOutcome GameLiftClient::UpdateGameServerGroup(const UpdateGameServerGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGameServerGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameServerGroupOutcomeCallable GameLiftClient::UpdateGameServerGroupCallable(const UpdateGameServerGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameServerGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGameServerGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateGameServerGroupAsyncHelper(GameLiftClient const * const clientThis, const UpdateGameServerGroupRequest& request, const UpdateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGameServerGroup(request), context);
}

void GameLiftClient::UpdateGameServerGroupAsync(const UpdateGameServerGroupRequest& request, const UpdateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateGameServerGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateGameSessionOutcome GameLiftClient::UpdateGameSession(const UpdateGameSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGameSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameSessionOutcomeCallable GameLiftClient::UpdateGameSessionCallable(const UpdateGameSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGameSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateGameSessionAsyncHelper(GameLiftClient const * const clientThis, const UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGameSession(request), context);
}

void GameLiftClient::UpdateGameSessionAsync(const UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateGameSessionAsyncHelper( this, request, handler, context ); } );
}

UpdateGameSessionQueueOutcome GameLiftClient::UpdateGameSessionQueue(const UpdateGameSessionQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGameSessionQueueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameSessionQueueOutcomeCallable GameLiftClient::UpdateGameSessionQueueCallable(const UpdateGameSessionQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameSessionQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGameSessionQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateGameSessionQueueAsyncHelper(GameLiftClient const * const clientThis, const UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGameSessionQueue(request), context);
}

void GameLiftClient::UpdateGameSessionQueueAsync(const UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateGameSessionQueueAsyncHelper( this, request, handler, context ); } );
}

UpdateMatchmakingConfigurationOutcome GameLiftClient::UpdateMatchmakingConfiguration(const UpdateMatchmakingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateMatchmakingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMatchmakingConfigurationOutcomeCallable GameLiftClient::UpdateMatchmakingConfigurationCallable(const UpdateMatchmakingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMatchmakingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMatchmakingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateMatchmakingConfigurationAsyncHelper(GameLiftClient const * const clientThis, const UpdateMatchmakingConfigurationRequest& request, const UpdateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMatchmakingConfiguration(request), context);
}

void GameLiftClient::UpdateMatchmakingConfigurationAsync(const UpdateMatchmakingConfigurationRequest& request, const UpdateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateMatchmakingConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateRuntimeConfigurationOutcome GameLiftClient::UpdateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuntimeConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuntimeConfigurationOutcomeCallable GameLiftClient::UpdateRuntimeConfigurationCallable(const UpdateRuntimeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuntimeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuntimeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateRuntimeConfigurationAsyncHelper(GameLiftClient const * const clientThis, const UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuntimeConfiguration(request), context);
}

void GameLiftClient::UpdateRuntimeConfigurationAsync(const UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateRuntimeConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateScriptOutcome GameLiftClient::UpdateScript(const UpdateScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateScriptOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateScriptOutcomeCallable GameLiftClient::UpdateScriptCallable(const UpdateScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientUpdateScriptAsyncHelper(GameLiftClient const * const clientThis, const UpdateScriptRequest& request, const UpdateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateScript(request), context);
}

void GameLiftClient::UpdateScriptAsync(const UpdateScriptRequest& request, const UpdateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientUpdateScriptAsyncHelper( this, request, handler, context ); } );
}

ValidateMatchmakingRuleSetOutcome GameLiftClient::ValidateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ValidateMatchmakingRuleSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateMatchmakingRuleSetOutcomeCallable GameLiftClient::ValidateMatchmakingRuleSetCallable(const ValidateMatchmakingRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateMatchmakingRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateMatchmakingRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClientValidateMatchmakingRuleSetAsyncHelper(GameLiftClient const * const clientThis, const ValidateMatchmakingRuleSetRequest& request, const ValidateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ValidateMatchmakingRuleSet(request), context);
}

void GameLiftClient::ValidateMatchmakingRuleSetAsync(const ValidateMatchmakingRuleSetRequest& request, const ValidateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GameLiftClientValidateMatchmakingRuleSetAsyncHelper( this, request, handler, context ); } );
}

