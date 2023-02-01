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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/gamesparks/GameSparksClient.h>
#include <aws/gamesparks/GameSparksErrorMarshaller.h>
#include <aws/gamesparks/GameSparksEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* GameSparksClient::SERVICE_NAME = "gamesparks";
const char* GameSparksClient::ALLOCATION_TAG = "GameSparksClient";

GameSparksClient::GameSparksClient(const GameSparks::GameSparksClientConfiguration& clientConfiguration,
                                   std::shared_ptr<GameSparksEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GameSparksClient::GameSparksClient(const AWSCredentials& credentials,
                                   std::shared_ptr<GameSparksEndpointProviderBase> endpointProvider,
                                   const GameSparks::GameSparksClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GameSparksClient::GameSparksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<GameSparksEndpointProviderBase> endpointProvider,
                                   const GameSparks::GameSparksClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GameSparksClient::GameSparksClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<GameSparksEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GameSparksClient::GameSparksClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GameSparksEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GameSparksClient::GameSparksClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GameSparksErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GameSparksEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GameSparksClient::~GameSparksClient()
{
}

std::shared_ptr<GameSparksEndpointProviderBase>& GameSparksClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GameSparksClient::init(const GameSparks::GameSparksClientConfiguration& config)
{
  AWSClient::SetServiceClientName("GameSparks");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void GameSparksClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateGameOutcome GameSparksClient::CreateGame(const CreateGameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game");
  return CreateGameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcome GameSparksClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSnapshot", "Required field: GameName, is not set");
    return CreateSnapshotOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot");
  return CreateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStageOutcome GameSparksClient::CreateStage(const CreateStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: GameName, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage");
  return CreateStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGameOutcome GameSparksClient::DeleteGame(const DeleteGameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGame", "Required field: GameName, is not set");
    return DeleteGameOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  return DeleteGameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStageOutcome GameSparksClient::DeleteStage(const DeleteStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  return DeleteStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisconnectPlayerOutcome GameSparksClient::DisconnectPlayer(const DisconnectPlayerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisconnectPlayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisconnectPlayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/runtime/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/player/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlayerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disconnect");
  return DisconnectPlayerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportSnapshotOutcome GameSparksClient::ExportSnapshot(const ExportSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/export");
  return ExportSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionOutcome GameSparksClient::GetExtension(const GetExtensionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExtension, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extension/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetExtensionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExtensionVersionOutcome GameSparksClient::GetExtensionVersion(const GetExtensionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExtensionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExtensionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extension/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExtensionVersion());
  return GetExtensionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGameOutcome GameSparksClient::GetGame(const GetGameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGame", "Required field: GameName, is not set");
    return GetGameOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  return GetGameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGameConfigurationOutcome GameSparksClient::GetGameConfiguration(const GetGameConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGameConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGameConfiguration", "Required field: GameName, is not set");
    return GetGameConfigurationOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGameConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return GetGameConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGeneratedCodeJobOutcome GameSparksClient::GetGeneratedCodeJob(const GetGeneratedCodeJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGeneratedCodeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGeneratedCodeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/generated-sdk-code-job/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetGeneratedCodeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPlayerConnectionStatusOutcome GameSparksClient::GetPlayerConnectionStatus(const GetPlayerConnectionStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPlayerConnectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPlayerConnectionStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/runtime/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/player/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPlayerId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/connection");
  return GetPlayerConnectionStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSnapshotOutcome GameSparksClient::GetSnapshot(const GetSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  return GetSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStageOutcome GameSparksClient::GetStage(const GetStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  return GetStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStageDeploymentOutcome GameSparksClient::GetStageDeployment(const GetStageDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStageDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStageDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployment");
  return GetStageDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ImportGameConfigurationOutcome GameSparksClient::ImportGameConfiguration(const ImportGameConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportGameConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportGameConfiguration", "Required field: GameName, is not set");
    return ImportGameConfigurationOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportGameConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return ImportGameConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionVersionsOutcome GameSparksClient::ListExtensionVersions(const ListExtensionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExtensionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExtensionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extension/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  return ListExtensionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExtensionsOutcome GameSparksClient::ListExtensions(const ListExtensionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExtensions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExtensions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/extension");
  return ListExtensionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGamesOutcome GameSparksClient::ListGames(const ListGamesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game");
  return ListGamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGeneratedCodeJobsOutcome GameSparksClient::ListGeneratedCodeJobs(const ListGeneratedCodeJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGeneratedCodeJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGeneratedCodeJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/generated-sdk-code-jobs");
  return ListGeneratedCodeJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSnapshotsOutcome GameSparksClient::ListSnapshots(const ListSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSnapshots", "Required field: GameName, is not set");
    return ListSnapshotsOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot");
  return ListSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStageDeploymentsOutcome GameSparksClient::ListStageDeployments(const ListStageDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStageDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStageDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  return ListStageDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStagesOutcome GameSparksClient::ListStages(const ListStagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStages", "Required field: GameName, is not set");
    return ListStagesOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage");
  return ListStagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome GameSparksClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartGeneratedCodeJobOutcome GameSparksClient::StartGeneratedCodeJob(const StartGeneratedCodeJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartGeneratedCodeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartGeneratedCodeJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/generated-sdk-code-job");
  return StartGeneratedCodeJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStageDeploymentOutcome GameSparksClient::StartStageDeployment(const StartStageDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartStageDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartStageDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployment");
  return StartStageDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome GameSparksClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome GameSparksClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameOutcome GameSparksClient::UpdateGame(const UpdateGameRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGame", "Required field: GameName, is not set");
    return UpdateGameOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  return UpdateGameOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGameConfigurationOutcome GameSparksClient::UpdateGameConfiguration(const UpdateGameConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGameConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GameNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGameConfiguration", "Required field: GameName, is not set");
    return UpdateGameConfigurationOutcome(Aws::Client::AWSError<GameSparksErrors>(GameSparksErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GameName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGameConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return UpdateGameConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSnapshotOutcome GameSparksClient::UpdateSnapshot(const UpdateSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotId());
  return UpdateSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStageOutcome GameSparksClient::UpdateStage(const UpdateStageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/game/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGameName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stage/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStageName());
  return UpdateStageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

