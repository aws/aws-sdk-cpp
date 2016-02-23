/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/GameLiftClient.h>
#include <aws/gamelift/GameLiftEndpoint.h>
#include <aws/gamelift/GameLiftErrorMarshaller.h>
#include <aws/gamelift/model/CreateAliasRequest.h>
#include <aws/gamelift/model/CreateBuildRequest.h>
#include <aws/gamelift/model/CreateFleetRequest.h>
#include <aws/gamelift/model/CreateGameSessionRequest.h>
#include <aws/gamelift/model/CreatePlayerSessionRequest.h>
#include <aws/gamelift/model/CreatePlayerSessionsRequest.h>
#include <aws/gamelift/model/DeleteAliasRequest.h>
#include <aws/gamelift/model/DeleteBuildRequest.h>
#include <aws/gamelift/model/DeleteFleetRequest.h>
#include <aws/gamelift/model/DescribeAliasRequest.h>
#include <aws/gamelift/model/DescribeBuildRequest.h>
#include <aws/gamelift/model/DescribeEC2InstanceLimitsRequest.h>
#include <aws/gamelift/model/DescribeFleetAttributesRequest.h>
#include <aws/gamelift/model/DescribeFleetCapacityRequest.h>
#include <aws/gamelift/model/DescribeFleetEventsRequest.h>
#include <aws/gamelift/model/DescribeFleetPortSettingsRequest.h>
#include <aws/gamelift/model/DescribeFleetUtilizationRequest.h>
#include <aws/gamelift/model/DescribeGameSessionsRequest.h>
#include <aws/gamelift/model/DescribePlayerSessionsRequest.h>
#include <aws/gamelift/model/GetGameSessionLogUrlRequest.h>
#include <aws/gamelift/model/ListAliasesRequest.h>
#include <aws/gamelift/model/ListBuildsRequest.h>
#include <aws/gamelift/model/ListFleetsRequest.h>
#include <aws/gamelift/model/RequestUploadCredentialsRequest.h>
#include <aws/gamelift/model/ResolveAliasRequest.h>
#include <aws/gamelift/model/UpdateAliasRequest.h>
#include <aws/gamelift/model/UpdateBuildRequest.h>
#include <aws/gamelift/model/UpdateFleetAttributesRequest.h>
#include <aws/gamelift/model/UpdateFleetCapacityRequest.h>
#include <aws/gamelift/model/UpdateFleetPortSettingsRequest.h>
#include <aws/gamelift/model/UpdateGameSessionRequest.h>

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
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::GameLiftClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<GameLiftErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameLiftClient::GameLiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << GameLiftEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CreateAliasOutcome GameLiftClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::CreateAlias, this, request);
}

void GameLiftClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::CreateAliasAsyncHelper, this, request, handler, context);
}

void GameLiftClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateBuildOutcome GameLiftClient::CreateBuild(const CreateBuildRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::CreateBuild, this, request);
}

void GameLiftClient::CreateBuildAsync(const CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::CreateBuildAsyncHelper, this, request, handler, context);
}

void GameLiftClient::CreateBuildAsyncHelper(const CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBuild(request), context);
}

CreateFleetOutcome GameLiftClient::CreateFleet(const CreateFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::CreateFleet, this, request);
}

void GameLiftClient::CreateFleetAsync(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::CreateFleetAsyncHelper, this, request, handler, context);
}

void GameLiftClient::CreateFleetAsyncHelper(const CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFleet(request), context);
}

CreateGameSessionOutcome GameLiftClient::CreateGameSession(const CreateGameSessionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::CreateGameSession, this, request);
}

void GameLiftClient::CreateGameSessionAsync(const CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::CreateGameSessionAsyncHelper, this, request, handler, context);
}

void GameLiftClient::CreateGameSessionAsyncHelper(const CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGameSession(request), context);
}

CreatePlayerSessionOutcome GameLiftClient::CreatePlayerSession(const CreatePlayerSessionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::CreatePlayerSession, this, request);
}

void GameLiftClient::CreatePlayerSessionAsync(const CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::CreatePlayerSessionAsyncHelper, this, request, handler, context);
}

void GameLiftClient::CreatePlayerSessionAsyncHelper(const CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlayerSession(request), context);
}

CreatePlayerSessionsOutcome GameLiftClient::CreatePlayerSessions(const CreatePlayerSessionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::CreatePlayerSessions, this, request);
}

void GameLiftClient::CreatePlayerSessionsAsync(const CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::CreatePlayerSessionsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::CreatePlayerSessionsAsyncHelper(const CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlayerSessions(request), context);
}

DeleteAliasOutcome GameLiftClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DeleteAlias, this, request);
}

void GameLiftClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DeleteAliasAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DeleteAliasAsyncHelper(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlias(request), context);
}

DeleteBuildOutcome GameLiftClient::DeleteBuild(const DeleteBuildRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DeleteBuild, this, request);
}

void GameLiftClient::DeleteBuildAsync(const DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DeleteBuildAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DeleteBuildAsyncHelper(const DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBuild(request), context);
}

DeleteFleetOutcome GameLiftClient::DeleteFleet(const DeleteFleetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DeleteFleet, this, request);
}

void GameLiftClient::DeleteFleetAsync(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DeleteFleetAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DeleteFleetAsyncHelper(const DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFleet(request), context);
}

DescribeAliasOutcome GameLiftClient::DescribeAlias(const DescribeAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeAlias, this, request);
}

void GameLiftClient::DescribeAliasAsync(const DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeAliasAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeAliasAsyncHelper(const DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlias(request), context);
}

DescribeBuildOutcome GameLiftClient::DescribeBuild(const DescribeBuildRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeBuild, this, request);
}

void GameLiftClient::DescribeBuildAsync(const DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeBuildAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeBuildAsyncHelper(const DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBuild(request), context);
}

DescribeEC2InstanceLimitsOutcome GameLiftClient::DescribeEC2InstanceLimits(const DescribeEC2InstanceLimitsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeEC2InstanceLimits, this, request);
}

void GameLiftClient::DescribeEC2InstanceLimitsAsync(const DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeEC2InstanceLimitsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeEC2InstanceLimitsAsyncHelper(const DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEC2InstanceLimits(request), context);
}

DescribeFleetAttributesOutcome GameLiftClient::DescribeFleetAttributes(const DescribeFleetAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeFleetAttributes, this, request);
}

void GameLiftClient::DescribeFleetAttributesAsync(const DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeFleetAttributesAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeFleetAttributesAsyncHelper(const DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetAttributes(request), context);
}

DescribeFleetCapacityOutcome GameLiftClient::DescribeFleetCapacity(const DescribeFleetCapacityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeFleetCapacity, this, request);
}

void GameLiftClient::DescribeFleetCapacityAsync(const DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeFleetCapacityAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeFleetCapacityAsyncHelper(const DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetCapacity(request), context);
}

DescribeFleetEventsOutcome GameLiftClient::DescribeFleetEvents(const DescribeFleetEventsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeFleetEvents, this, request);
}

void GameLiftClient::DescribeFleetEventsAsync(const DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeFleetEventsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeFleetEventsAsyncHelper(const DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetEvents(request), context);
}

DescribeFleetPortSettingsOutcome GameLiftClient::DescribeFleetPortSettings(const DescribeFleetPortSettingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeFleetPortSettings, this, request);
}

void GameLiftClient::DescribeFleetPortSettingsAsync(const DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeFleetPortSettingsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeFleetPortSettingsAsyncHelper(const DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetPortSettings(request), context);
}

DescribeFleetUtilizationOutcome GameLiftClient::DescribeFleetUtilization(const DescribeFleetUtilizationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeFleetUtilization, this, request);
}

void GameLiftClient::DescribeFleetUtilizationAsync(const DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeFleetUtilizationAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeFleetUtilizationAsyncHelper(const DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFleetUtilization(request), context);
}

DescribeGameSessionsOutcome GameLiftClient::DescribeGameSessions(const DescribeGameSessionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribeGameSessions, this, request);
}

void GameLiftClient::DescribeGameSessionsAsync(const DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribeGameSessionsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribeGameSessionsAsyncHelper(const DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGameSessions(request), context);
}

DescribePlayerSessionsOutcome GameLiftClient::DescribePlayerSessions(const DescribePlayerSessionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::DescribePlayerSessions, this, request);
}

void GameLiftClient::DescribePlayerSessionsAsync(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::DescribePlayerSessionsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::DescribePlayerSessionsAsyncHelper(const DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePlayerSessions(request), context);
}

GetGameSessionLogUrlOutcome GameLiftClient::GetGameSessionLogUrl(const GetGameSessionLogUrlRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::GetGameSessionLogUrl, this, request);
}

void GameLiftClient::GetGameSessionLogUrlAsync(const GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::GetGameSessionLogUrlAsyncHelper, this, request, handler, context);
}

void GameLiftClient::GetGameSessionLogUrlAsyncHelper(const GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGameSessionLogUrl(request), context);
}

ListAliasesOutcome GameLiftClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::ListAliases, this, request);
}

void GameLiftClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::ListAliasesAsyncHelper, this, request, handler, context);
}

void GameLiftClient::ListAliasesAsyncHelper(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAliases(request), context);
}

ListBuildsOutcome GameLiftClient::ListBuilds(const ListBuildsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::ListBuilds, this, request);
}

void GameLiftClient::ListBuildsAsync(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::ListBuildsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::ListBuildsAsyncHelper(const ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBuilds(request), context);
}

ListFleetsOutcome GameLiftClient::ListFleets(const ListFleetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::ListFleets, this, request);
}

void GameLiftClient::ListFleetsAsync(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::ListFleetsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::ListFleetsAsyncHelper(const ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFleets(request), context);
}

RequestUploadCredentialsOutcome GameLiftClient::RequestUploadCredentials(const RequestUploadCredentialsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::RequestUploadCredentials, this, request);
}

void GameLiftClient::RequestUploadCredentialsAsync(const RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::RequestUploadCredentialsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::RequestUploadCredentialsAsyncHelper(const RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestUploadCredentials(request), context);
}

ResolveAliasOutcome GameLiftClient::ResolveAlias(const ResolveAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::ResolveAlias, this, request);
}

void GameLiftClient::ResolveAliasAsync(const ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::ResolveAliasAsyncHelper, this, request, handler, context);
}

void GameLiftClient::ResolveAliasAsyncHelper(const ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResolveAlias(request), context);
}

UpdateAliasOutcome GameLiftClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::UpdateAlias, this, request);
}

void GameLiftClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::UpdateAliasAsyncHelper, this, request, handler, context);
}

void GameLiftClient::UpdateAliasAsyncHelper(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAlias(request), context);
}

UpdateBuildOutcome GameLiftClient::UpdateBuild(const UpdateBuildRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::UpdateBuild, this, request);
}

void GameLiftClient::UpdateBuildAsync(const UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::UpdateBuildAsyncHelper, this, request, handler, context);
}

void GameLiftClient::UpdateBuildAsyncHelper(const UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBuild(request), context);
}

UpdateFleetAttributesOutcome GameLiftClient::UpdateFleetAttributes(const UpdateFleetAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::UpdateFleetAttributes, this, request);
}

void GameLiftClient::UpdateFleetAttributesAsync(const UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::UpdateFleetAttributesAsyncHelper, this, request, handler, context);
}

void GameLiftClient::UpdateFleetAttributesAsyncHelper(const UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleetAttributes(request), context);
}

UpdateFleetCapacityOutcome GameLiftClient::UpdateFleetCapacity(const UpdateFleetCapacityRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::UpdateFleetCapacity, this, request);
}

void GameLiftClient::UpdateFleetCapacityAsync(const UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::UpdateFleetCapacityAsyncHelper, this, request, handler, context);
}

void GameLiftClient::UpdateFleetCapacityAsyncHelper(const UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleetCapacity(request), context);
}

UpdateFleetPortSettingsOutcome GameLiftClient::UpdateFleetPortSettings(const UpdateFleetPortSettingsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::UpdateFleetPortSettings, this, request);
}

void GameLiftClient::UpdateFleetPortSettingsAsync(const UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::UpdateFleetPortSettingsAsyncHelper, this, request, handler, context);
}

void GameLiftClient::UpdateFleetPortSettingsAsyncHelper(const UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFleetPortSettings(request), context);
}

UpdateGameSessionOutcome GameLiftClient::UpdateGameSession(const UpdateGameSessionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &GameLiftClient::UpdateGameSession, this, request);
}

void GameLiftClient::UpdateGameSessionAsync(const UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&GameLiftClient::UpdateGameSessionAsyncHelper, this, request, handler, context);
}

void GameLiftClient::UpdateGameSessionAsyncHelper(const UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGameSession(request), context);
}

