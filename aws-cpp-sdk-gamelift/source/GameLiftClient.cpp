/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/gamelift/model/CreateAliasRequest.h>
#include <aws/gamelift/model/CreateBuildRequest.h>
#include <aws/gamelift/model/CreateFleetRequest.h>
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
#include <aws/gamelift/model/DeleteGameSessionQueueRequest.h>
#include <aws/gamelift/model/DeleteMatchmakingConfigurationRequest.h>
#include <aws/gamelift/model/DeleteMatchmakingRuleSetRequest.h>
#include <aws/gamelift/model/DeleteScalingPolicyRequest.h>
#include <aws/gamelift/model/DeleteScriptRequest.h>
#include <aws/gamelift/model/DeleteVpcPeeringAuthorizationRequest.h>
#include <aws/gamelift/model/DeleteVpcPeeringConnectionRequest.h>
#include <aws/gamelift/model/DescribeAliasRequest.h>
#include <aws/gamelift/model/DescribeBuildRequest.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsRequest.h>
#include <aws/gamelift/model/DescribeFleetAttributesRequest.h>
#include <aws/gamelift/model/DescribeFleetCapacityRequest.h>
#include <aws/gamelift/model/DescribeFleetEventsRequest.h>
#include <aws/gamelift/model/DescribeFleetPortSettingsRequest.h>
#include <aws/gamelift/model/DescribeFleetUtilizationRequest.h>
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
#include <aws/gamelift/model/ListScriptsRequest.h>
#include <aws/gamelift/model/PutScalingPolicyRequest.h>
#include <aws/gamelift/model/RequestUploadCredentialsRequest.h>
#include <aws/gamelift/model/ResolveAliasRequest.h>
#include <aws/gamelift/model/SearchGameSessionsRequest.h>
#include <aws/gamelift/model/StartFleetActionsRequest.h>
#include <aws/gamelift/model/StartGameSessionPlacementRequest.h>
#include <aws/gamelift/model/StartMatchBackfillRequest.h>
#include <aws/gamelift/model/StartMatchmakingRequest.h>
#include <aws/gamelift/model/StopFleetActionsRequest.h>
#include <aws/gamelift/model/StopGameSessionPlacementRequest.h>
#include <aws/gamelift/model/StopMatchmakingRequest.h>
#include <aws/gamelift/model/UpdateAliasRequest.h>
#include <aws/gamelift/model/UpdateBuildRequest.h>
#include <aws/gamelift/model/UpdateFleetAttributesRequest.h>
#include <aws/gamelift/model/UpdateFleetCapacityRequest.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::GameLiftClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::GameLiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::~GameLiftClient()
{
}

void GameLiftClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AcceptMatchOutcome(AcceptMatchResult(outcome.GetResult()));
  }
  else
  {
    return AcceptMatchOutcome(outcome.GetError());
  }
}

AcceptMatchOutcomeCallable GameLiftClient::AcceptMatchCallable(const AcceptMatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptMatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptMatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::AcceptMatchAsync(const AcceptMatchRequest& request, const AcceptMatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptMatchAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::AcceptMatchAsyncHelper(const AcceptMatchRequest& request, const AcceptMatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptMatch(request), context);
}

CreateAliasOutcome GameLiftClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAliasOutcome(CreateAliasResult(outcome.GetResult()));
  }
  else
  {
    return CreateAliasOutcome(outcome.GetError());
  }
}

CreateAliasOutcomeCallable GameLiftClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAliasAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateBuildOutcome GameLiftClient::CreateBuild(const CreateBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBuildOutcome(CreateBuildResult(outcome.GetResult()));
  }
  else
  {
    return CreateBuildOutcome(outcome.GetError());
  }
}

CreateBuildOutcomeCallable GameLiftClient::CreateBuildCallable(const CreateBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateBuildAsync(const CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBuildAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateBuildAsyncHelper(const CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBuild(request), context);
}

CreateFleetOutcome GameLiftClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFleetOutcome(CreateFleetResult(outcome.GetResult()));
  }
  else
  {
    return CreateFleetOutcome(outcome.GetError());
  }
}

CreateFleetOutcomeCallable GameLiftClient::CreateFleetCallable(const CreateFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFleetAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateFleetAsyncHelper(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFleet(request), context);
}

CreateGameSessionOutcome GameLiftClient::CreateGameSession(const CreateGameSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGameSessionOutcome(CreateGameSessionResult(outcome.GetResult()));
  }
  else
  {
    return CreateGameSessionOutcome(outcome.GetError());
  }
}

CreateGameSessionOutcomeCallable GameLiftClient::CreateGameSessionCallable(const CreateGameSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGameSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGameSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateGameSessionAsync(const CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGameSessionAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateGameSessionAsyncHelper(const CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGameSession(request), context);
}

CreateGameSessionQueueOutcome GameLiftClient::CreateGameSessionQueue(const CreateGameSessionQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGameSessionQueueOutcome(CreateGameSessionQueueResult(outcome.GetResult()));
  }
  else
  {
    return CreateGameSessionQueueOutcome(outcome.GetError());
  }
}

CreateGameSessionQueueOutcomeCallable GameLiftClient::CreateGameSessionQueueCallable(const CreateGameSessionQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGameSessionQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGameSessionQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateGameSessionQueueAsync(const CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGameSessionQueueAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateGameSessionQueueAsyncHelper(const CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGameSessionQueue(request), context);
}

CreateMatchmakingConfigurationOutcome GameLiftClient::CreateMatchmakingConfiguration(const CreateMatchmakingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMatchmakingConfigurationOutcome(CreateMatchmakingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return CreateMatchmakingConfigurationOutcome(outcome.GetError());
  }
}

CreateMatchmakingConfigurationOutcomeCallable GameLiftClient::CreateMatchmakingConfigurationCallable(const CreateMatchmakingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMatchmakingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMatchmakingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateMatchmakingConfigurationAsync(const CreateMatchmakingConfigurationRequest& request, const CreateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMatchmakingConfigurationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateMatchmakingConfigurationAsyncHelper(const CreateMatchmakingConfigurationRequest& request, const CreateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMatchmakingConfiguration(request), context);
}

CreateMatchmakingRuleSetOutcome GameLiftClient::CreateMatchmakingRuleSet(const CreateMatchmakingRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMatchmakingRuleSetOutcome(CreateMatchmakingRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateMatchmakingRuleSetOutcome(outcome.GetError());
  }
}

CreateMatchmakingRuleSetOutcomeCallable GameLiftClient::CreateMatchmakingRuleSetCallable(const CreateMatchmakingRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMatchmakingRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMatchmakingRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateMatchmakingRuleSetAsync(const CreateMatchmakingRuleSetRequest& request, const CreateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMatchmakingRuleSetAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateMatchmakingRuleSetAsyncHelper(const CreateMatchmakingRuleSetRequest& request, const CreateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMatchmakingRuleSet(request), context);
}

CreatePlayerSessionOutcome GameLiftClient::CreatePlayerSession(const CreatePlayerSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePlayerSessionOutcome(CreatePlayerSessionResult(outcome.GetResult()));
  }
  else
  {
    return CreatePlayerSessionOutcome(outcome.GetError());
  }
}

CreatePlayerSessionOutcomeCallable GameLiftClient::CreatePlayerSessionCallable(const CreatePlayerSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlayerSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlayerSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreatePlayerSessionAsync(const CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePlayerSessionAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreatePlayerSessionAsyncHelper(const CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlayerSession(request), context);
}

CreatePlayerSessionsOutcome GameLiftClient::CreatePlayerSessions(const CreatePlayerSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePlayerSessionsOutcome(CreatePlayerSessionsResult(outcome.GetResult()));
  }
  else
  {
    return CreatePlayerSessionsOutcome(outcome.GetError());
  }
}

CreatePlayerSessionsOutcomeCallable GameLiftClient::CreatePlayerSessionsCallable(const CreatePlayerSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlayerSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlayerSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreatePlayerSessionsAsync(const CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePlayerSessionsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreatePlayerSessionsAsyncHelper(const CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlayerSessions(request), context);
}

CreateScriptOutcome GameLiftClient::CreateScript(const CreateScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateScriptOutcome(CreateScriptResult(outcome.GetResult()));
  }
  else
  {
    return CreateScriptOutcome(outcome.GetError());
  }
}

CreateScriptOutcomeCallable GameLiftClient::CreateScriptCallable(const CreateScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateScriptAsync(const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateScriptAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateScriptAsyncHelper(const CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateScript(request), context);
}

CreateVpcPeeringAuthorizationOutcome GameLiftClient::CreateVpcPeeringAuthorization(const CreateVpcPeeringAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVpcPeeringAuthorizationOutcome(CreateVpcPeeringAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return CreateVpcPeeringAuthorizationOutcome(outcome.GetError());
  }
}

CreateVpcPeeringAuthorizationOutcomeCallable GameLiftClient::CreateVpcPeeringAuthorizationCallable(const CreateVpcPeeringAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcPeeringAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcPeeringAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateVpcPeeringAuthorizationAsync(const CreateVpcPeeringAuthorizationRequest& request, const CreateVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcPeeringAuthorizationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateVpcPeeringAuthorizationAsyncHelper(const CreateVpcPeeringAuthorizationRequest& request, const CreateVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcPeeringAuthorization(request), context);
}

CreateVpcPeeringConnectionOutcome GameLiftClient::CreateVpcPeeringConnection(const CreateVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVpcPeeringConnectionOutcome(CreateVpcPeeringConnectionResult(outcome.GetResult()));
  }
  else
  {
    return CreateVpcPeeringConnectionOutcome(outcome.GetError());
  }
}

CreateVpcPeeringConnectionOutcomeCallable GameLiftClient::CreateVpcPeeringConnectionCallable(const CreateVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::CreateVpcPeeringConnectionAsync(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcPeeringConnectionAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::CreateVpcPeeringConnectionAsyncHelper(const CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcPeeringConnection(request), context);
}

DeleteAliasOutcome GameLiftClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAliasOutcome(NoResult());
  }
  else
  {
    return DeleteAliasOutcome(outcome.GetError());
  }
}

DeleteAliasOutcomeCallable GameLiftClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAliasAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteAliasAsyncHelper(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlias(request), context);
}

DeleteBuildOutcome GameLiftClient::DeleteBuild(const DeleteBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBuildOutcome(NoResult());
  }
  else
  {
    return DeleteBuildOutcome(outcome.GetError());
  }
}

DeleteBuildOutcomeCallable GameLiftClient::DeleteBuildCallable(const DeleteBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteBuildAsync(const DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBuildAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteBuildAsyncHelper(const DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBuild(request), context);
}

DeleteFleetOutcome GameLiftClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFleetOutcome(NoResult());
  }
  else
  {
    return DeleteFleetOutcome(outcome.GetError());
  }
}

DeleteFleetOutcomeCallable GameLiftClient::DeleteFleetCallable(const DeleteFleetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFleetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFleet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFleetAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteFleetAsyncHelper(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFleet(request), context);
}

DeleteGameSessionQueueOutcome GameLiftClient::DeleteGameSessionQueue(const DeleteGameSessionQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGameSessionQueueOutcome(DeleteGameSessionQueueResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGameSessionQueueOutcome(outcome.GetError());
  }
}

DeleteGameSessionQueueOutcomeCallable GameLiftClient::DeleteGameSessionQueueCallable(const DeleteGameSessionQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGameSessionQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGameSessionQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteGameSessionQueueAsync(const DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGameSessionQueueAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteGameSessionQueueAsyncHelper(const DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGameSessionQueue(request), context);
}

DeleteMatchmakingConfigurationOutcome GameLiftClient::DeleteMatchmakingConfiguration(const DeleteMatchmakingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMatchmakingConfigurationOutcome(DeleteMatchmakingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMatchmakingConfigurationOutcome(outcome.GetError());
  }
}

DeleteMatchmakingConfigurationOutcomeCallable GameLiftClient::DeleteMatchmakingConfigurationCallable(const DeleteMatchmakingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMatchmakingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMatchmakingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteMatchmakingConfigurationAsync(const DeleteMatchmakingConfigurationRequest& request, const DeleteMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMatchmakingConfigurationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteMatchmakingConfigurationAsyncHelper(const DeleteMatchmakingConfigurationRequest& request, const DeleteMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMatchmakingConfiguration(request), context);
}

DeleteMatchmakingRuleSetOutcome GameLiftClient::DeleteMatchmakingRuleSet(const DeleteMatchmakingRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMatchmakingRuleSetOutcome(DeleteMatchmakingRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMatchmakingRuleSetOutcome(outcome.GetError());
  }
}

DeleteMatchmakingRuleSetOutcomeCallable GameLiftClient::DeleteMatchmakingRuleSetCallable(const DeleteMatchmakingRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMatchmakingRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMatchmakingRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteMatchmakingRuleSetAsync(const DeleteMatchmakingRuleSetRequest& request, const DeleteMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMatchmakingRuleSetAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteMatchmakingRuleSetAsyncHelper(const DeleteMatchmakingRuleSetRequest& request, const DeleteMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMatchmakingRuleSet(request), context);
}

DeleteScalingPolicyOutcome GameLiftClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteScalingPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteScalingPolicyOutcome(outcome.GetError());
  }
}

DeleteScalingPolicyOutcomeCallable GameLiftClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteScalingPolicyAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteScalingPolicyAsyncHelper(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScalingPolicy(request), context);
}

DeleteScriptOutcome GameLiftClient::DeleteScript(const DeleteScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteScriptOutcome(NoResult());
  }
  else
  {
    return DeleteScriptOutcome(outcome.GetError());
  }
}

DeleteScriptOutcomeCallable GameLiftClient::DeleteScriptCallable(const DeleteScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteScriptAsync(const DeleteScriptRequest& request, const DeleteScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteScriptAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteScriptAsyncHelper(const DeleteScriptRequest& request, const DeleteScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScript(request), context);
}

DeleteVpcPeeringAuthorizationOutcome GameLiftClient::DeleteVpcPeeringAuthorization(const DeleteVpcPeeringAuthorizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVpcPeeringAuthorizationOutcome(DeleteVpcPeeringAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVpcPeeringAuthorizationOutcome(outcome.GetError());
  }
}

DeleteVpcPeeringAuthorizationOutcomeCallable GameLiftClient::DeleteVpcPeeringAuthorizationCallable(const DeleteVpcPeeringAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcPeeringAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcPeeringAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteVpcPeeringAuthorizationAsync(const DeleteVpcPeeringAuthorizationRequest& request, const DeleteVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcPeeringAuthorizationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteVpcPeeringAuthorizationAsyncHelper(const DeleteVpcPeeringAuthorizationRequest& request, const DeleteVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcPeeringAuthorization(request), context);
}

DeleteVpcPeeringConnectionOutcome GameLiftClient::DeleteVpcPeeringConnection(const DeleteVpcPeeringConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVpcPeeringConnectionOutcome(DeleteVpcPeeringConnectionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVpcPeeringConnectionOutcome(outcome.GetError());
  }
}

DeleteVpcPeeringConnectionOutcomeCallable GameLiftClient::DeleteVpcPeeringConnectionCallable(const DeleteVpcPeeringConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcPeeringConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcPeeringConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DeleteVpcPeeringConnectionAsync(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcPeeringConnectionAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DeleteVpcPeeringConnectionAsyncHelper(const DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcPeeringConnection(request), context);
}

DescribeAliasOutcome GameLiftClient::DescribeAlias(const DescribeAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAliasOutcome(DescribeAliasResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAliasOutcome(outcome.GetError());
  }
}

DescribeAliasOutcomeCallable GameLiftClient::DescribeAliasCallable(const DescribeAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeAliasAsync(const DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAliasAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeAliasAsyncHelper(const DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlias(request), context);
}

DescribeBuildOutcome GameLiftClient::DescribeBuild(const DescribeBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBuildOutcome(DescribeBuildResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBuildOutcome(outcome.GetError());
  }
}

DescribeBuildOutcomeCallable GameLiftClient::DescribeBuildCallable(const DescribeBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeBuildAsync(const DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBuildAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeBuildAsyncHelper(const DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBuild(request), context);
}

DescribeEC2InstanceLimitsOutcome GameLiftClient::DescribeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEC2InstanceLimitsOutcome(DescribeEC2InstanceLimitsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEC2InstanceLimitsOutcome(outcome.GetError());
  }
}

DescribeEC2InstanceLimitsOutcomeCallable GameLiftClient::DescribeEC2InstanceLimitsCallable(const DescribeEC2InstanceLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEC2InstanceLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEC2InstanceLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeEC2InstanceLimitsAsync(const DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEC2InstanceLimitsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeEC2InstanceLimitsAsyncHelper(const DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEC2InstanceLimits(request), context);
}

DescribeFleetAttributesOutcome GameLiftClient::DescribeFleetAttributes(const DescribeFleetAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetAttributesOutcome(DescribeFleetAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetAttributesOutcome(outcome.GetError());
  }
}

DescribeFleetAttributesOutcomeCallable GameLiftClient::DescribeFleetAttributesCallable(const DescribeFleetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeFleetAttributesAsync(const DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetAttributesAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeFleetAttributesAsyncHelper(const DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetAttributes(request), context);
}

DescribeFleetCapacityOutcome GameLiftClient::DescribeFleetCapacity(const DescribeFleetCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetCapacityOutcome(DescribeFleetCapacityResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetCapacityOutcome(outcome.GetError());
  }
}

DescribeFleetCapacityOutcomeCallable GameLiftClient::DescribeFleetCapacityCallable(const DescribeFleetCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeFleetCapacityAsync(const DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetCapacityAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeFleetCapacityAsyncHelper(const DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetCapacity(request), context);
}

DescribeFleetEventsOutcome GameLiftClient::DescribeFleetEvents(const DescribeFleetEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetEventsOutcome(DescribeFleetEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetEventsOutcome(outcome.GetError());
  }
}

DescribeFleetEventsOutcomeCallable GameLiftClient::DescribeFleetEventsCallable(const DescribeFleetEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeFleetEventsAsync(const DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetEventsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeFleetEventsAsyncHelper(const DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetEvents(request), context);
}

DescribeFleetPortSettingsOutcome GameLiftClient::DescribeFleetPortSettings(const DescribeFleetPortSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetPortSettingsOutcome(DescribeFleetPortSettingsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetPortSettingsOutcome(outcome.GetError());
  }
}

DescribeFleetPortSettingsOutcomeCallable GameLiftClient::DescribeFleetPortSettingsCallable(const DescribeFleetPortSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetPortSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetPortSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeFleetPortSettingsAsync(const DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetPortSettingsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeFleetPortSettingsAsyncHelper(const DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetPortSettings(request), context);
}

DescribeFleetUtilizationOutcome GameLiftClient::DescribeFleetUtilization(const DescribeFleetUtilizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFleetUtilizationOutcome(DescribeFleetUtilizationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFleetUtilizationOutcome(outcome.GetError());
  }
}

DescribeFleetUtilizationOutcomeCallable GameLiftClient::DescribeFleetUtilizationCallable(const DescribeFleetUtilizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFleetUtilizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFleetUtilization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeFleetUtilizationAsync(const DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFleetUtilizationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeFleetUtilizationAsyncHelper(const DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetUtilization(request), context);
}

DescribeGameSessionDetailsOutcome GameLiftClient::DescribeGameSessionDetails(const DescribeGameSessionDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGameSessionDetailsOutcome(DescribeGameSessionDetailsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGameSessionDetailsOutcome(outcome.GetError());
  }
}

DescribeGameSessionDetailsOutcomeCallable GameLiftClient::DescribeGameSessionDetailsCallable(const DescribeGameSessionDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessionDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeGameSessionDetailsAsync(const DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGameSessionDetailsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeGameSessionDetailsAsyncHelper(const DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGameSessionDetails(request), context);
}

DescribeGameSessionPlacementOutcome GameLiftClient::DescribeGameSessionPlacement(const DescribeGameSessionPlacementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGameSessionPlacementOutcome(DescribeGameSessionPlacementResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGameSessionPlacementOutcome(outcome.GetError());
  }
}

DescribeGameSessionPlacementOutcomeCallable GameLiftClient::DescribeGameSessionPlacementCallable(const DescribeGameSessionPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessionPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeGameSessionPlacementAsync(const DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGameSessionPlacementAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeGameSessionPlacementAsyncHelper(const DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGameSessionPlacement(request), context);
}

DescribeGameSessionQueuesOutcome GameLiftClient::DescribeGameSessionQueues(const DescribeGameSessionQueuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGameSessionQueuesOutcome(DescribeGameSessionQueuesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGameSessionQueuesOutcome(outcome.GetError());
  }
}

DescribeGameSessionQueuesOutcomeCallable GameLiftClient::DescribeGameSessionQueuesCallable(const DescribeGameSessionQueuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionQueuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessionQueues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeGameSessionQueuesAsync(const DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGameSessionQueuesAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeGameSessionQueuesAsyncHelper(const DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGameSessionQueues(request), context);
}

DescribeGameSessionsOutcome GameLiftClient::DescribeGameSessions(const DescribeGameSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGameSessionsOutcome(DescribeGameSessionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGameSessionsOutcome(outcome.GetError());
  }
}

DescribeGameSessionsOutcomeCallable GameLiftClient::DescribeGameSessionsCallable(const DescribeGameSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGameSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGameSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeGameSessionsAsync(const DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGameSessionsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeGameSessionsAsyncHelper(const DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGameSessions(request), context);
}

DescribeInstancesOutcome GameLiftClient::DescribeInstances(const DescribeInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeInstancesOutcome(DescribeInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstancesOutcome(outcome.GetError());
  }
}

DescribeInstancesOutcomeCallable GameLiftClient::DescribeInstancesCallable(const DescribeInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstancesAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeInstancesAsyncHelper(const DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstances(request), context);
}

DescribeMatchmakingOutcome GameLiftClient::DescribeMatchmaking(const DescribeMatchmakingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMatchmakingOutcome(DescribeMatchmakingResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMatchmakingOutcome(outcome.GetError());
  }
}

DescribeMatchmakingOutcomeCallable GameLiftClient::DescribeMatchmakingCallable(const DescribeMatchmakingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMatchmakingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMatchmaking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeMatchmakingAsync(const DescribeMatchmakingRequest& request, const DescribeMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMatchmakingAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeMatchmakingAsyncHelper(const DescribeMatchmakingRequest& request, const DescribeMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMatchmaking(request), context);
}

DescribeMatchmakingConfigurationsOutcome GameLiftClient::DescribeMatchmakingConfigurations(const DescribeMatchmakingConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMatchmakingConfigurationsOutcome(DescribeMatchmakingConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMatchmakingConfigurationsOutcome(outcome.GetError());
  }
}

DescribeMatchmakingConfigurationsOutcomeCallable GameLiftClient::DescribeMatchmakingConfigurationsCallable(const DescribeMatchmakingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMatchmakingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMatchmakingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeMatchmakingConfigurationsAsync(const DescribeMatchmakingConfigurationsRequest& request, const DescribeMatchmakingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMatchmakingConfigurationsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeMatchmakingConfigurationsAsyncHelper(const DescribeMatchmakingConfigurationsRequest& request, const DescribeMatchmakingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMatchmakingConfigurations(request), context);
}

DescribeMatchmakingRuleSetsOutcome GameLiftClient::DescribeMatchmakingRuleSets(const DescribeMatchmakingRuleSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMatchmakingRuleSetsOutcome(DescribeMatchmakingRuleSetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMatchmakingRuleSetsOutcome(outcome.GetError());
  }
}

DescribeMatchmakingRuleSetsOutcomeCallable GameLiftClient::DescribeMatchmakingRuleSetsCallable(const DescribeMatchmakingRuleSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMatchmakingRuleSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMatchmakingRuleSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeMatchmakingRuleSetsAsync(const DescribeMatchmakingRuleSetsRequest& request, const DescribeMatchmakingRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMatchmakingRuleSetsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeMatchmakingRuleSetsAsyncHelper(const DescribeMatchmakingRuleSetsRequest& request, const DescribeMatchmakingRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMatchmakingRuleSets(request), context);
}

DescribePlayerSessionsOutcome GameLiftClient::DescribePlayerSessions(const DescribePlayerSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePlayerSessionsOutcome(DescribePlayerSessionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribePlayerSessionsOutcome(outcome.GetError());
  }
}

DescribePlayerSessionsOutcomeCallable GameLiftClient::DescribePlayerSessionsCallable(const DescribePlayerSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePlayerSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePlayerSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribePlayerSessionsAsync(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePlayerSessionsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribePlayerSessionsAsyncHelper(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePlayerSessions(request), context);
}

DescribeRuntimeConfigurationOutcome GameLiftClient::DescribeRuntimeConfiguration(const DescribeRuntimeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRuntimeConfigurationOutcome(DescribeRuntimeConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRuntimeConfigurationOutcome(outcome.GetError());
  }
}

DescribeRuntimeConfigurationOutcomeCallable GameLiftClient::DescribeRuntimeConfigurationCallable(const DescribeRuntimeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuntimeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuntimeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeRuntimeConfigurationAsync(const DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRuntimeConfigurationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeRuntimeConfigurationAsyncHelper(const DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRuntimeConfiguration(request), context);
}

DescribeScalingPoliciesOutcome GameLiftClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScalingPoliciesOutcome(DescribeScalingPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingPoliciesOutcome(outcome.GetError());
  }
}

DescribeScalingPoliciesOutcomeCallable GameLiftClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingPoliciesAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeScalingPoliciesAsyncHelper(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingPolicies(request), context);
}

DescribeScriptOutcome GameLiftClient::DescribeScript(const DescribeScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScriptOutcome(DescribeScriptResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScriptOutcome(outcome.GetError());
  }
}

DescribeScriptOutcomeCallable GameLiftClient::DescribeScriptCallable(const DescribeScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeScriptAsync(const DescribeScriptRequest& request, const DescribeScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScriptAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeScriptAsyncHelper(const DescribeScriptRequest& request, const DescribeScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScript(request), context);
}

DescribeVpcPeeringAuthorizationsOutcome GameLiftClient::DescribeVpcPeeringAuthorizations(const DescribeVpcPeeringAuthorizationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVpcPeeringAuthorizationsOutcome(DescribeVpcPeeringAuthorizationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcPeeringAuthorizationsOutcome(outcome.GetError());
  }
}

DescribeVpcPeeringAuthorizationsOutcomeCallable GameLiftClient::DescribeVpcPeeringAuthorizationsCallable(const DescribeVpcPeeringAuthorizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcPeeringAuthorizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcPeeringAuthorizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeVpcPeeringAuthorizationsAsync(const DescribeVpcPeeringAuthorizationsRequest& request, const DescribeVpcPeeringAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcPeeringAuthorizationsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeVpcPeeringAuthorizationsAsyncHelper(const DescribeVpcPeeringAuthorizationsRequest& request, const DescribeVpcPeeringAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcPeeringAuthorizations(request), context);
}

DescribeVpcPeeringConnectionsOutcome GameLiftClient::DescribeVpcPeeringConnections(const DescribeVpcPeeringConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVpcPeeringConnectionsOutcome(DescribeVpcPeeringConnectionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVpcPeeringConnectionsOutcome(outcome.GetError());
  }
}

DescribeVpcPeeringConnectionsOutcomeCallable GameLiftClient::DescribeVpcPeeringConnectionsCallable(const DescribeVpcPeeringConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcPeeringConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcPeeringConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::DescribeVpcPeeringConnectionsAsync(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVpcPeeringConnectionsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::DescribeVpcPeeringConnectionsAsyncHelper(const DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVpcPeeringConnections(request), context);
}

GetGameSessionLogUrlOutcome GameLiftClient::GetGameSessionLogUrl(const GetGameSessionLogUrlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGameSessionLogUrlOutcome(GetGameSessionLogUrlResult(outcome.GetResult()));
  }
  else
  {
    return GetGameSessionLogUrlOutcome(outcome.GetError());
  }
}

GetGameSessionLogUrlOutcomeCallable GameLiftClient::GetGameSessionLogUrlCallable(const GetGameSessionLogUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGameSessionLogUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGameSessionLogUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::GetGameSessionLogUrlAsync(const GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGameSessionLogUrlAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::GetGameSessionLogUrlAsyncHelper(const GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGameSessionLogUrl(request), context);
}

GetInstanceAccessOutcome GameLiftClient::GetInstanceAccess(const GetInstanceAccessRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceAccessOutcome(GetInstanceAccessResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceAccessOutcome(outcome.GetError());
  }
}

GetInstanceAccessOutcomeCallable GameLiftClient::GetInstanceAccessCallable(const GetInstanceAccessRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceAccessOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceAccess(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::GetInstanceAccessAsync(const GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceAccessAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::GetInstanceAccessAsyncHelper(const GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceAccess(request), context);
}

ListAliasesOutcome GameLiftClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAliasesOutcome(ListAliasesResult(outcome.GetResult()));
  }
  else
  {
    return ListAliasesOutcome(outcome.GetError());
  }
}

ListAliasesOutcomeCallable GameLiftClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAliasesAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::ListAliasesAsyncHelper(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAliases(request), context);
}

ListBuildsOutcome GameLiftClient::ListBuilds(const ListBuildsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBuildsOutcome(ListBuildsResult(outcome.GetResult()));
  }
  else
  {
    return ListBuildsOutcome(outcome.GetError());
  }
}

ListBuildsOutcomeCallable GameLiftClient::ListBuildsCallable(const ListBuildsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBuildsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBuilds(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::ListBuildsAsync(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBuildsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::ListBuildsAsyncHelper(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBuilds(request), context);
}

ListFleetsOutcome GameLiftClient::ListFleets(const ListFleetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFleetsOutcome(ListFleetsResult(outcome.GetResult()));
  }
  else
  {
    return ListFleetsOutcome(outcome.GetError());
  }
}

ListFleetsOutcomeCallable GameLiftClient::ListFleetsCallable(const ListFleetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFleetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFleets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::ListFleetsAsync(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFleetsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::ListFleetsAsyncHelper(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFleets(request), context);
}

ListScriptsOutcome GameLiftClient::ListScripts(const ListScriptsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListScriptsOutcome(ListScriptsResult(outcome.GetResult()));
  }
  else
  {
    return ListScriptsOutcome(outcome.GetError());
  }
}

ListScriptsOutcomeCallable GameLiftClient::ListScriptsCallable(const ListScriptsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListScriptsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListScripts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::ListScriptsAsync(const ListScriptsRequest& request, const ListScriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListScriptsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::ListScriptsAsyncHelper(const ListScriptsRequest& request, const ListScriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListScripts(request), context);
}

PutScalingPolicyOutcome GameLiftClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutScalingPolicyOutcome(PutScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutScalingPolicyOutcome(outcome.GetError());
  }
}

PutScalingPolicyOutcomeCallable GameLiftClient::PutScalingPolicyCallable(const PutScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutScalingPolicyAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::PutScalingPolicyAsyncHelper(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScalingPolicy(request), context);
}

RequestUploadCredentialsOutcome GameLiftClient::RequestUploadCredentials(const RequestUploadCredentialsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RequestUploadCredentialsOutcome(RequestUploadCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return RequestUploadCredentialsOutcome(outcome.GetError());
  }
}

RequestUploadCredentialsOutcomeCallable GameLiftClient::RequestUploadCredentialsCallable(const RequestUploadCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RequestUploadCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RequestUploadCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::RequestUploadCredentialsAsync(const RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RequestUploadCredentialsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::RequestUploadCredentialsAsyncHelper(const RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestUploadCredentials(request), context);
}

ResolveAliasOutcome GameLiftClient::ResolveAlias(const ResolveAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResolveAliasOutcome(ResolveAliasResult(outcome.GetResult()));
  }
  else
  {
    return ResolveAliasOutcome(outcome.GetError());
  }
}

ResolveAliasOutcomeCallable GameLiftClient::ResolveAliasCallable(const ResolveAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::ResolveAliasAsync(const ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResolveAliasAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::ResolveAliasAsyncHelper(const ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResolveAlias(request), context);
}

SearchGameSessionsOutcome GameLiftClient::SearchGameSessions(const SearchGameSessionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchGameSessionsOutcome(SearchGameSessionsResult(outcome.GetResult()));
  }
  else
  {
    return SearchGameSessionsOutcome(outcome.GetError());
  }
}

SearchGameSessionsOutcomeCallable GameLiftClient::SearchGameSessionsCallable(const SearchGameSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchGameSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchGameSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::SearchGameSessionsAsync(const SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchGameSessionsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::SearchGameSessionsAsyncHelper(const SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchGameSessions(request), context);
}

StartFleetActionsOutcome GameLiftClient::StartFleetActions(const StartFleetActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartFleetActionsOutcome(StartFleetActionsResult(outcome.GetResult()));
  }
  else
  {
    return StartFleetActionsOutcome(outcome.GetError());
  }
}

StartFleetActionsOutcomeCallable GameLiftClient::StartFleetActionsCallable(const StartFleetActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFleetActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFleetActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::StartFleetActionsAsync(const StartFleetActionsRequest& request, const StartFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFleetActionsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::StartFleetActionsAsyncHelper(const StartFleetActionsRequest& request, const StartFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFleetActions(request), context);
}

StartGameSessionPlacementOutcome GameLiftClient::StartGameSessionPlacement(const StartGameSessionPlacementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartGameSessionPlacementOutcome(StartGameSessionPlacementResult(outcome.GetResult()));
  }
  else
  {
    return StartGameSessionPlacementOutcome(outcome.GetError());
  }
}

StartGameSessionPlacementOutcomeCallable GameLiftClient::StartGameSessionPlacementCallable(const StartGameSessionPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartGameSessionPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartGameSessionPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::StartGameSessionPlacementAsync(const StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartGameSessionPlacementAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::StartGameSessionPlacementAsyncHelper(const StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartGameSessionPlacement(request), context);
}

StartMatchBackfillOutcome GameLiftClient::StartMatchBackfill(const StartMatchBackfillRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartMatchBackfillOutcome(StartMatchBackfillResult(outcome.GetResult()));
  }
  else
  {
    return StartMatchBackfillOutcome(outcome.GetError());
  }
}

StartMatchBackfillOutcomeCallable GameLiftClient::StartMatchBackfillCallable(const StartMatchBackfillRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMatchBackfillOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMatchBackfill(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::StartMatchBackfillAsync(const StartMatchBackfillRequest& request, const StartMatchBackfillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartMatchBackfillAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::StartMatchBackfillAsyncHelper(const StartMatchBackfillRequest& request, const StartMatchBackfillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartMatchBackfill(request), context);
}

StartMatchmakingOutcome GameLiftClient::StartMatchmaking(const StartMatchmakingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartMatchmakingOutcome(StartMatchmakingResult(outcome.GetResult()));
  }
  else
  {
    return StartMatchmakingOutcome(outcome.GetError());
  }
}

StartMatchmakingOutcomeCallable GameLiftClient::StartMatchmakingCallable(const StartMatchmakingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMatchmakingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMatchmaking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::StartMatchmakingAsync(const StartMatchmakingRequest& request, const StartMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartMatchmakingAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::StartMatchmakingAsyncHelper(const StartMatchmakingRequest& request, const StartMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartMatchmaking(request), context);
}

StopFleetActionsOutcome GameLiftClient::StopFleetActions(const StopFleetActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopFleetActionsOutcome(StopFleetActionsResult(outcome.GetResult()));
  }
  else
  {
    return StopFleetActionsOutcome(outcome.GetError());
  }
}

StopFleetActionsOutcomeCallable GameLiftClient::StopFleetActionsCallable(const StopFleetActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFleetActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFleetActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::StopFleetActionsAsync(const StopFleetActionsRequest& request, const StopFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopFleetActionsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::StopFleetActionsAsyncHelper(const StopFleetActionsRequest& request, const StopFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopFleetActions(request), context);
}

StopGameSessionPlacementOutcome GameLiftClient::StopGameSessionPlacement(const StopGameSessionPlacementRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopGameSessionPlacementOutcome(StopGameSessionPlacementResult(outcome.GetResult()));
  }
  else
  {
    return StopGameSessionPlacementOutcome(outcome.GetError());
  }
}

StopGameSessionPlacementOutcomeCallable GameLiftClient::StopGameSessionPlacementCallable(const StopGameSessionPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopGameSessionPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopGameSessionPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::StopGameSessionPlacementAsync(const StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopGameSessionPlacementAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::StopGameSessionPlacementAsyncHelper(const StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopGameSessionPlacement(request), context);
}

StopMatchmakingOutcome GameLiftClient::StopMatchmaking(const StopMatchmakingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopMatchmakingOutcome(StopMatchmakingResult(outcome.GetResult()));
  }
  else
  {
    return StopMatchmakingOutcome(outcome.GetError());
  }
}

StopMatchmakingOutcomeCallable GameLiftClient::StopMatchmakingCallable(const StopMatchmakingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMatchmakingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMatchmaking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::StopMatchmakingAsync(const StopMatchmakingRequest& request, const StopMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopMatchmakingAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::StopMatchmakingAsyncHelper(const StopMatchmakingRequest& request, const StopMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopMatchmaking(request), context);
}

UpdateAliasOutcome GameLiftClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAliasOutcome(UpdateAliasResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAliasOutcome(outcome.GetError());
  }
}

UpdateAliasOutcomeCallable GameLiftClient::UpdateAliasCallable(const UpdateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAliasAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateAliasAsyncHelper(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAlias(request), context);
}

UpdateBuildOutcome GameLiftClient::UpdateBuild(const UpdateBuildRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBuildOutcome(UpdateBuildResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBuildOutcome(outcome.GetError());
  }
}

UpdateBuildOutcomeCallable GameLiftClient::UpdateBuildCallable(const UpdateBuildRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBuildOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBuild(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateBuildAsync(const UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBuildAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateBuildAsyncHelper(const UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBuild(request), context);
}

UpdateFleetAttributesOutcome GameLiftClient::UpdateFleetAttributes(const UpdateFleetAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFleetAttributesOutcome(UpdateFleetAttributesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFleetAttributesOutcome(outcome.GetError());
  }
}

UpdateFleetAttributesOutcomeCallable GameLiftClient::UpdateFleetAttributesCallable(const UpdateFleetAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateFleetAttributesAsync(const UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFleetAttributesAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateFleetAttributesAsyncHelper(const UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleetAttributes(request), context);
}

UpdateFleetCapacityOutcome GameLiftClient::UpdateFleetCapacity(const UpdateFleetCapacityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFleetCapacityOutcome(UpdateFleetCapacityResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFleetCapacityOutcome(outcome.GetError());
  }
}

UpdateFleetCapacityOutcomeCallable GameLiftClient::UpdateFleetCapacityCallable(const UpdateFleetCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateFleetCapacityAsync(const UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFleetCapacityAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateFleetCapacityAsyncHelper(const UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleetCapacity(request), context);
}

UpdateFleetPortSettingsOutcome GameLiftClient::UpdateFleetPortSettings(const UpdateFleetPortSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFleetPortSettingsOutcome(UpdateFleetPortSettingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFleetPortSettingsOutcome(outcome.GetError());
  }
}

UpdateFleetPortSettingsOutcomeCallable GameLiftClient::UpdateFleetPortSettingsCallable(const UpdateFleetPortSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFleetPortSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFleetPortSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateFleetPortSettingsAsync(const UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFleetPortSettingsAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateFleetPortSettingsAsyncHelper(const UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleetPortSettings(request), context);
}

UpdateGameSessionOutcome GameLiftClient::UpdateGameSession(const UpdateGameSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGameSessionOutcome(UpdateGameSessionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGameSessionOutcome(outcome.GetError());
  }
}

UpdateGameSessionOutcomeCallable GameLiftClient::UpdateGameSessionCallable(const UpdateGameSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGameSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateGameSessionAsync(const UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGameSessionAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateGameSessionAsyncHelper(const UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGameSession(request), context);
}

UpdateGameSessionQueueOutcome GameLiftClient::UpdateGameSessionQueue(const UpdateGameSessionQueueRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGameSessionQueueOutcome(UpdateGameSessionQueueResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGameSessionQueueOutcome(outcome.GetError());
  }
}

UpdateGameSessionQueueOutcomeCallable GameLiftClient::UpdateGameSessionQueueCallable(const UpdateGameSessionQueueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameSessionQueueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGameSessionQueue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateGameSessionQueueAsync(const UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGameSessionQueueAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateGameSessionQueueAsyncHelper(const UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGameSessionQueue(request), context);
}

UpdateMatchmakingConfigurationOutcome GameLiftClient::UpdateMatchmakingConfiguration(const UpdateMatchmakingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMatchmakingConfigurationOutcome(UpdateMatchmakingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMatchmakingConfigurationOutcome(outcome.GetError());
  }
}

UpdateMatchmakingConfigurationOutcomeCallable GameLiftClient::UpdateMatchmakingConfigurationCallable(const UpdateMatchmakingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMatchmakingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMatchmakingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateMatchmakingConfigurationAsync(const UpdateMatchmakingConfigurationRequest& request, const UpdateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMatchmakingConfigurationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateMatchmakingConfigurationAsyncHelper(const UpdateMatchmakingConfigurationRequest& request, const UpdateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMatchmakingConfiguration(request), context);
}

UpdateRuntimeConfigurationOutcome GameLiftClient::UpdateRuntimeConfiguration(const UpdateRuntimeConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRuntimeConfigurationOutcome(UpdateRuntimeConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRuntimeConfigurationOutcome(outcome.GetError());
  }
}

UpdateRuntimeConfigurationOutcomeCallable GameLiftClient::UpdateRuntimeConfigurationCallable(const UpdateRuntimeConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuntimeConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuntimeConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateRuntimeConfigurationAsync(const UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRuntimeConfigurationAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateRuntimeConfigurationAsyncHelper(const UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRuntimeConfiguration(request), context);
}

UpdateScriptOutcome GameLiftClient::UpdateScript(const UpdateScriptRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateScriptOutcome(UpdateScriptResult(outcome.GetResult()));
  }
  else
  {
    return UpdateScriptOutcome(outcome.GetError());
  }
}

UpdateScriptOutcomeCallable GameLiftClient::UpdateScriptCallable(const UpdateScriptRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScriptOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScript(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::UpdateScriptAsync(const UpdateScriptRequest& request, const UpdateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateScriptAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::UpdateScriptAsyncHelper(const UpdateScriptRequest& request, const UpdateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateScript(request), context);
}

ValidateMatchmakingRuleSetOutcome GameLiftClient::ValidateMatchmakingRuleSet(const ValidateMatchmakingRuleSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ValidateMatchmakingRuleSetOutcome(ValidateMatchmakingRuleSetResult(outcome.GetResult()));
  }
  else
  {
    return ValidateMatchmakingRuleSetOutcome(outcome.GetError());
  }
}

ValidateMatchmakingRuleSetOutcomeCallable GameLiftClient::ValidateMatchmakingRuleSetCallable(const ValidateMatchmakingRuleSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateMatchmakingRuleSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateMatchmakingRuleSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameLiftClient::ValidateMatchmakingRuleSetAsync(const ValidateMatchmakingRuleSetRequest& request, const ValidateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ValidateMatchmakingRuleSetAsyncHelper( request, handler, context ); } );
}

void GameLiftClient::ValidateMatchmakingRuleSetAsyncHelper(const ValidateMatchmakingRuleSetRequest& request, const ValidateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ValidateMatchmakingRuleSet(request), context);
}

