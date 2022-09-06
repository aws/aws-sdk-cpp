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

#include <aws/gamesparks/GameSparksClient.h>
#include <aws/gamesparks/GameSparksEndpoint.h>
#include <aws/gamesparks/GameSparksErrorMarshaller.h>
#include <aws/gamesparks/model/CreateGameRequest.h>
#include <aws/gamesparks/model/CreateSnapshotRequest.h>
#include <aws/gamesparks/model/CreateStageRequest.h>
#include <aws/gamesparks/model/DeleteGameRequest.h>
#include <aws/gamesparks/model/DeleteStageRequest.h>
#include <aws/gamesparks/model/DisconnectPlayerRequest.h>
#include <aws/gamesparks/model/ExportSnapshotRequest.h>
#include <aws/gamesparks/model/GetExtensionRequest.h>
#include <aws/gamesparks/model/GetExtensionVersionRequest.h>
#include <aws/gamesparks/model/GetGameRequest.h>
#include <aws/gamesparks/model/GetGameConfigurationRequest.h>
#include <aws/gamesparks/model/GetGeneratedCodeJobRequest.h>
#include <aws/gamesparks/model/GetPlayerConnectionStatusRequest.h>
#include <aws/gamesparks/model/GetSnapshotRequest.h>
#include <aws/gamesparks/model/GetStageRequest.h>
#include <aws/gamesparks/model/GetStageDeploymentRequest.h>
#include <aws/gamesparks/model/ImportGameConfigurationRequest.h>
#include <aws/gamesparks/model/ListExtensionVersionsRequest.h>
#include <aws/gamesparks/model/ListExtensionsRequest.h>
#include <aws/gamesparks/model/ListGamesRequest.h>
#include <aws/gamesparks/model/ListGeneratedCodeJobsRequest.h>
#include <aws/gamesparks/model/ListSnapshotsRequest.h>
#include <aws/gamesparks/model/ListStageDeploymentsRequest.h>
#include <aws/gamesparks/model/ListStagesRequest.h>
#include <aws/gamesparks/model/ListTagsForResourceRequest.h>
#include <aws/gamesparks/model/StartGeneratedCodeJobRequest.h>
#include <aws/gamesparks/model/StartStageDeploymentRequest.h>
#include <aws/gamesparks/model/TagResourceRequest.h>
#include <aws/gamesparks/model/UntagResourceRequest.h>
#include <aws/gamesparks/model/UpdateGameRequest.h>
#include <aws/gamesparks/model/UpdateGameConfigurationRequest.h>
#include <aws/gamesparks/model/UpdateSnapshotRequest.h>
#include <aws/gamesparks/model/UpdateStageRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GameSparks;
using namespace Aws::GameSparks::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "gamesparks";
static const char* ALLOCATION_TAG = "GameSparksClient";

GameSparksClient::GameSparksClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameSparksClient::GameSparksClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameSparksClient::GameSparksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GameSparksClient::~GameSparksClient()
{
}

void GameSparksClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("GameSparks");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GameSparksEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GameSparksClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateGameOutcome GameSparksClient::CreateGame(const CreateGameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game");
  return CreateGameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGameOutcomeCallable GameSparksClient::CreateGameCallable(const CreateGameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGame(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::CreateGameAsync(const CreateGameRequest& request, const CreateGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGameAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::CreateGameAsyncHelper(const CreateGameRequest& request, const CreateGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGame(request), context);
}

CreateSnapshotOutcome GameSparksClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSnapshot", "Required field: GameName, is not set");
    return CreateSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot");
  return CreateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable GameSparksClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSnapshotAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::CreateSnapshotAsyncHelper(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSnapshot(request), context);
}

CreateStageOutcome GameSparksClient::CreateStage(const CreateStageRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: GameName, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage");
  return CreateStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStageOutcomeCallable GameSparksClient::CreateStageCallable(const CreateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::CreateStageAsync(const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStageAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::CreateStageAsyncHelper(const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStage(request), context);
}

DeleteGameOutcome GameSparksClient::DeleteGame(const DeleteGameRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGame", "Required field: GameName, is not set");
    return DeleteGameOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  return DeleteGameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGameOutcomeCallable GameSparksClient::DeleteGameCallable(const DeleteGameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGame(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::DeleteGameAsync(const DeleteGameRequest& request, const DeleteGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGameAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::DeleteGameAsyncHelper(const DeleteGameRequest& request, const DeleteGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGame(request), context);
}

DeleteStageOutcome GameSparksClient::DeleteStage(const DeleteStageRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: GameName, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: StageName, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  return DeleteStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStageOutcomeCallable GameSparksClient::DeleteStageCallable(const DeleteStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::DeleteStageAsync(const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStageAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::DeleteStageAsyncHelper(const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStage(request), context);
}

DisconnectPlayerOutcome GameSparksClient::DisconnectPlayer(const DisconnectPlayerRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisconnectPlayer", "Required field: GameName, is not set");
    return DisconnectPlayerOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.PlayerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisconnectPlayer", "Required field: PlayerId, is not set");
    return DisconnectPlayerOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlayerId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisconnectPlayer", "Required field: StageName, is not set");
    return DisconnectPlayerOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/runtime/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/player/");
  uri.AddPathSegment(request.GetPlayerId());
  uri.AddPathSegments("/disconnect");
  return DisconnectPlayerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisconnectPlayerOutcomeCallable GameSparksClient::DisconnectPlayerCallable(const DisconnectPlayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisconnectPlayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisconnectPlayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::DisconnectPlayerAsync(const DisconnectPlayerRequest& request, const DisconnectPlayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisconnectPlayerAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::DisconnectPlayerAsyncHelper(const DisconnectPlayerRequest& request, const DisconnectPlayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisconnectPlayer(request), context);
}

ExportSnapshotOutcome GameSparksClient::ExportSnapshot(const ExportSnapshotRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportSnapshot", "Required field: GameName, is not set");
    return ExportSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportSnapshot", "Required field: SnapshotId, is not set");
    return ExportSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot/");
  uri.AddPathSegment(request.GetSnapshotId());
  uri.AddPathSegments("/export");
  return ExportSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportSnapshotOutcomeCallable GameSparksClient::ExportSnapshotCallable(const ExportSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ExportSnapshotAsync(const ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExportSnapshotAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ExportSnapshotAsyncHelper(const ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportSnapshot(request), context);
}

GetExtensionOutcome GameSparksClient::GetExtension(const GetExtensionRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtension", "Required field: Name, is not set");
    return GetExtensionOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtension", "Required field: Namespace, is not set");
    return GetExtensionOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extension/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegment(request.GetName());
  return GetExtensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionOutcomeCallable GameSparksClient::GetExtensionCallable(const GetExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetExtensionAsync(const GetExtensionRequest& request, const GetExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExtensionAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetExtensionAsyncHelper(const GetExtensionRequest& request, const GetExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExtension(request), context);
}

GetExtensionVersionOutcome GameSparksClient::GetExtensionVersion(const GetExtensionVersionRequest& request) const
{
  if (!request.ExtensionVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtensionVersion", "Required field: ExtensionVersion, is not set");
    return GetExtensionVersionOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExtensionVersion]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtensionVersion", "Required field: Name, is not set");
    return GetExtensionVersionOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExtensionVersion", "Required field: Namespace, is not set");
    return GetExtensionVersionOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extension/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/version/");
  uri.AddPathSegment(request.GetExtensionVersion());
  return GetExtensionVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionVersionOutcomeCallable GameSparksClient::GetExtensionVersionCallable(const GetExtensionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExtensionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExtensionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetExtensionVersionAsync(const GetExtensionVersionRequest& request, const GetExtensionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExtensionVersionAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetExtensionVersionAsyncHelper(const GetExtensionVersionRequest& request, const GetExtensionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExtensionVersion(request), context);
}

GetGameOutcome GameSparksClient::GetGame(const GetGameRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGame", "Required field: GameName, is not set");
    return GetGameOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  return GetGameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGameOutcomeCallable GameSparksClient::GetGameCallable(const GetGameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGame(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetGameAsync(const GetGameRequest& request, const GetGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGameAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetGameAsyncHelper(const GetGameRequest& request, const GetGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGame(request), context);
}

GetGameConfigurationOutcome GameSparksClient::GetGameConfiguration(const GetGameConfigurationRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGameConfiguration", "Required field: GameName, is not set");
    return GetGameConfigurationOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/configuration");
  return GetGameConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGameConfigurationOutcomeCallable GameSparksClient::GetGameConfigurationCallable(const GetGameConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGameConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGameConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetGameConfigurationAsync(const GetGameConfigurationRequest& request, const GetGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGameConfigurationAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetGameConfigurationAsyncHelper(const GetGameConfigurationRequest& request, const GetGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGameConfiguration(request), context);
}

GetGeneratedCodeJobOutcome GameSparksClient::GetGeneratedCodeJob(const GetGeneratedCodeJobRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGeneratedCodeJob", "Required field: GameName, is not set");
    return GetGeneratedCodeJobOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGeneratedCodeJob", "Required field: JobId, is not set");
    return GetGeneratedCodeJobOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGeneratedCodeJob", "Required field: SnapshotId, is not set");
    return GetGeneratedCodeJobOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot/");
  uri.AddPathSegment(request.GetSnapshotId());
  uri.AddPathSegments("/generated-sdk-code-job/");
  uri.AddPathSegment(request.GetJobId());
  return GetGeneratedCodeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGeneratedCodeJobOutcomeCallable GameSparksClient::GetGeneratedCodeJobCallable(const GetGeneratedCodeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeneratedCodeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeneratedCodeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetGeneratedCodeJobAsync(const GetGeneratedCodeJobRequest& request, const GetGeneratedCodeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGeneratedCodeJobAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetGeneratedCodeJobAsyncHelper(const GetGeneratedCodeJobRequest& request, const GetGeneratedCodeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGeneratedCodeJob(request), context);
}

GetPlayerConnectionStatusOutcome GameSparksClient::GetPlayerConnectionStatus(const GetPlayerConnectionStatusRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlayerConnectionStatus", "Required field: GameName, is not set");
    return GetPlayerConnectionStatusOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.PlayerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlayerConnectionStatus", "Required field: PlayerId, is not set");
    return GetPlayerConnectionStatusOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlayerId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPlayerConnectionStatus", "Required field: StageName, is not set");
    return GetPlayerConnectionStatusOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/runtime/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/player/");
  uri.AddPathSegment(request.GetPlayerId());
  uri.AddPathSegments("/connection");
  return GetPlayerConnectionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPlayerConnectionStatusOutcomeCallable GameSparksClient::GetPlayerConnectionStatusCallable(const GetPlayerConnectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPlayerConnectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPlayerConnectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetPlayerConnectionStatusAsync(const GetPlayerConnectionStatusRequest& request, const GetPlayerConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPlayerConnectionStatusAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetPlayerConnectionStatusAsyncHelper(const GetPlayerConnectionStatusRequest& request, const GetPlayerConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPlayerConnectionStatus(request), context);
}

GetSnapshotOutcome GameSparksClient::GetSnapshot(const GetSnapshotRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshot", "Required field: GameName, is not set");
    return GetSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshot", "Required field: SnapshotId, is not set");
    return GetSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot/");
  uri.AddPathSegment(request.GetSnapshotId());
  return GetSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSnapshotOutcomeCallable GameSparksClient::GetSnapshotCallable(const GetSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetSnapshotAsync(const GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSnapshotAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetSnapshotAsyncHelper(const GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSnapshot(request), context);
}

GetStageOutcome GameSparksClient::GetStage(const GetStageRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: GameName, is not set");
    return GetStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: StageName, is not set");
    return GetStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  return GetStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStageOutcomeCallable GameSparksClient::GetStageCallable(const GetStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetStageAsync(const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStageAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetStageAsyncHelper(const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStage(request), context);
}

GetStageDeploymentOutcome GameSparksClient::GetStageDeployment(const GetStageDeploymentRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStageDeployment", "Required field: GameName, is not set");
    return GetStageDeploymentOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStageDeployment", "Required field: StageName, is not set");
    return GetStageDeploymentOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/deployment");
  return GetStageDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStageDeploymentOutcomeCallable GameSparksClient::GetStageDeploymentCallable(const GetStageDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStageDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStageDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::GetStageDeploymentAsync(const GetStageDeploymentRequest& request, const GetStageDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStageDeploymentAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::GetStageDeploymentAsyncHelper(const GetStageDeploymentRequest& request, const GetStageDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStageDeployment(request), context);
}

ImportGameConfigurationOutcome GameSparksClient::ImportGameConfiguration(const ImportGameConfigurationRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportGameConfiguration", "Required field: GameName, is not set");
    return ImportGameConfigurationOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/configuration");
  return ImportGameConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportGameConfigurationOutcomeCallable GameSparksClient::ImportGameConfigurationCallable(const ImportGameConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportGameConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportGameConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ImportGameConfigurationAsync(const ImportGameConfigurationRequest& request, const ImportGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportGameConfigurationAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ImportGameConfigurationAsyncHelper(const ImportGameConfigurationRequest& request, const ImportGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportGameConfiguration(request), context);
}

ListExtensionVersionsOutcome GameSparksClient::ListExtensionVersions(const ListExtensionVersionsRequest& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListExtensionVersions", "Required field: Name, is not set");
    return ListExtensionVersionsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListExtensionVersions", "Required field: Namespace, is not set");
    return ListExtensionVersionsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extension/");
  uri.AddPathSegment(request.GetNamespace());
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/version");
  return ListExtensionVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionVersionsOutcomeCallable GameSparksClient::ListExtensionVersionsCallable(const ListExtensionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExtensionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExtensionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListExtensionVersionsAsync(const ListExtensionVersionsRequest& request, const ListExtensionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExtensionVersionsAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListExtensionVersionsAsyncHelper(const ListExtensionVersionsRequest& request, const ListExtensionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExtensionVersions(request), context);
}

ListExtensionsOutcome GameSparksClient::ListExtensions(const ListExtensionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/extension");
  return ListExtensionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionsOutcomeCallable GameSparksClient::ListExtensionsCallable(const ListExtensionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExtensionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExtensions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListExtensionsAsync(const ListExtensionsRequest& request, const ListExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExtensionsAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListExtensionsAsyncHelper(const ListExtensionsRequest& request, const ListExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExtensions(request), context);
}

ListGamesOutcome GameSparksClient::ListGames(const ListGamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game");
  return ListGamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGamesOutcomeCallable GameSparksClient::ListGamesCallable(const ListGamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListGamesAsync(const ListGamesRequest& request, const ListGamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGamesAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListGamesAsyncHelper(const ListGamesRequest& request, const ListGamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGames(request), context);
}

ListGeneratedCodeJobsOutcome GameSparksClient::ListGeneratedCodeJobs(const ListGeneratedCodeJobsRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGeneratedCodeJobs", "Required field: GameName, is not set");
    return ListGeneratedCodeJobsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGeneratedCodeJobs", "Required field: SnapshotId, is not set");
    return ListGeneratedCodeJobsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot/");
  uri.AddPathSegment(request.GetSnapshotId());
  uri.AddPathSegments("/generated-sdk-code-jobs");
  return ListGeneratedCodeJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGeneratedCodeJobsOutcomeCallable GameSparksClient::ListGeneratedCodeJobsCallable(const ListGeneratedCodeJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeneratedCodeJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeneratedCodeJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListGeneratedCodeJobsAsync(const ListGeneratedCodeJobsRequest& request, const ListGeneratedCodeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGeneratedCodeJobsAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListGeneratedCodeJobsAsyncHelper(const ListGeneratedCodeJobsRequest& request, const ListGeneratedCodeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGeneratedCodeJobs(request), context);
}

ListSnapshotsOutcome GameSparksClient::ListSnapshots(const ListSnapshotsRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSnapshots", "Required field: GameName, is not set");
    return ListSnapshotsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot");
  return ListSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSnapshotsOutcomeCallable GameSparksClient::ListSnapshotsCallable(const ListSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListSnapshotsAsync(const ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSnapshotsAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListSnapshotsAsyncHelper(const ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSnapshots(request), context);
}

ListStageDeploymentsOutcome GameSparksClient::ListStageDeployments(const ListStageDeploymentsRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStageDeployments", "Required field: GameName, is not set");
    return ListStageDeploymentsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStageDeployments", "Required field: StageName, is not set");
    return ListStageDeploymentsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/deployments");
  return ListStageDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStageDeploymentsOutcomeCallable GameSparksClient::ListStageDeploymentsCallable(const ListStageDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStageDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStageDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListStageDeploymentsAsync(const ListStageDeploymentsRequest& request, const ListStageDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStageDeploymentsAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListStageDeploymentsAsyncHelper(const ListStageDeploymentsRequest& request, const ListStageDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStageDeployments(request), context);
}

ListStagesOutcome GameSparksClient::ListStages(const ListStagesRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStages", "Required field: GameName, is not set");
    return ListStagesOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage");
  return ListStagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStagesOutcomeCallable GameSparksClient::ListStagesCallable(const ListStagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListStagesAsync(const ListStagesRequest& request, const ListStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStagesAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListStagesAsyncHelper(const ListStagesRequest& request, const ListStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStages(request), context);
}

ListTagsForResourceOutcome GameSparksClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GameSparksClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartGeneratedCodeJobOutcome GameSparksClient::StartGeneratedCodeJob(const StartGeneratedCodeJobRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartGeneratedCodeJob", "Required field: GameName, is not set");
    return StartGeneratedCodeJobOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartGeneratedCodeJob", "Required field: SnapshotId, is not set");
    return StartGeneratedCodeJobOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot/");
  uri.AddPathSegment(request.GetSnapshotId());
  uri.AddPathSegments("/generated-sdk-code-job");
  return StartGeneratedCodeJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartGeneratedCodeJobOutcomeCallable GameSparksClient::StartGeneratedCodeJobCallable(const StartGeneratedCodeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartGeneratedCodeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartGeneratedCodeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::StartGeneratedCodeJobAsync(const StartGeneratedCodeJobRequest& request, const StartGeneratedCodeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartGeneratedCodeJobAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::StartGeneratedCodeJobAsyncHelper(const StartGeneratedCodeJobRequest& request, const StartGeneratedCodeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartGeneratedCodeJob(request), context);
}

StartStageDeploymentOutcome GameSparksClient::StartStageDeployment(const StartStageDeploymentRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStageDeployment", "Required field: GameName, is not set");
    return StartStageDeploymentOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStageDeployment", "Required field: StageName, is not set");
    return StartStageDeploymentOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/deployment");
  return StartStageDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStageDeploymentOutcomeCallable GameSparksClient::StartStageDeploymentCallable(const StartStageDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStageDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStageDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::StartStageDeploymentAsync(const StartStageDeploymentRequest& request, const StartStageDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartStageDeploymentAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::StartStageDeploymentAsyncHelper(const StartStageDeploymentRequest& request, const StartStageDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartStageDeployment(request), context);
}

TagResourceOutcome GameSparksClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GameSparksClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome GameSparksClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GameSparksClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateGameOutcome GameSparksClient::UpdateGame(const UpdateGameRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGame", "Required field: GameName, is not set");
    return UpdateGameOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  return UpdateGameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameOutcomeCallable GameSparksClient::UpdateGameCallable(const UpdateGameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGame(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::UpdateGameAsync(const UpdateGameRequest& request, const UpdateGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGameAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::UpdateGameAsyncHelper(const UpdateGameRequest& request, const UpdateGameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGame(request), context);
}

UpdateGameConfigurationOutcome GameSparksClient::UpdateGameConfiguration(const UpdateGameConfigurationRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGameConfiguration", "Required field: GameName, is not set");
    return UpdateGameConfigurationOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/configuration");
  return UpdateGameConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameConfigurationOutcomeCallable GameSparksClient::UpdateGameConfigurationCallable(const UpdateGameConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGameConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGameConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::UpdateGameConfigurationAsync(const UpdateGameConfigurationRequest& request, const UpdateGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGameConfigurationAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::UpdateGameConfigurationAsyncHelper(const UpdateGameConfigurationRequest& request, const UpdateGameConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGameConfiguration(request), context);
}

UpdateSnapshotOutcome GameSparksClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSnapshot", "Required field: GameName, is not set");
    return UpdateSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSnapshot", "Required field: SnapshotId, is not set");
    return UpdateSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/snapshot/");
  uri.AddPathSegment(request.GetSnapshotId());
  return UpdateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSnapshotOutcomeCallable GameSparksClient::UpdateSnapshotCallable(const UpdateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::UpdateSnapshotAsync(const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSnapshotAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::UpdateSnapshotAsyncHelper(const UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSnapshot(request), context);
}

UpdateStageOutcome GameSparksClient::UpdateStage(const UpdateStageRequest& request) const
{
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: GameName, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: StageName, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/game/");
  uri.AddPathSegment(request.GetGameName());
  uri.AddPathSegments("/stage/");
  uri.AddPathSegment(request.GetStageName());
  return UpdateStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStageOutcomeCallable GameSparksClient::UpdateStageCallable(const UpdateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GameSparksClient::UpdateStageAsync(const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStageAsyncHelper( request, handler, context ); } );
}

void GameSparksClient::UpdateStageAsyncHelper(const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStage(request), context);
}

