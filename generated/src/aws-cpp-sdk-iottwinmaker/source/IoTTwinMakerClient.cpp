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

#include <aws/iottwinmaker/IoTTwinMakerClient.h>
#include <aws/iottwinmaker/IoTTwinMakerErrorMarshaller.h>
#include <aws/iottwinmaker/IoTTwinMakerEndpointProvider.h>
#include <aws/iottwinmaker/model/BatchPutPropertyValuesRequest.h>
#include <aws/iottwinmaker/model/CreateComponentTypeRequest.h>
#include <aws/iottwinmaker/model/CreateEntityRequest.h>
#include <aws/iottwinmaker/model/CreateSceneRequest.h>
#include <aws/iottwinmaker/model/CreateSyncJobRequest.h>
#include <aws/iottwinmaker/model/CreateWorkspaceRequest.h>
#include <aws/iottwinmaker/model/DeleteComponentTypeRequest.h>
#include <aws/iottwinmaker/model/DeleteEntityRequest.h>
#include <aws/iottwinmaker/model/DeleteSceneRequest.h>
#include <aws/iottwinmaker/model/DeleteSyncJobRequest.h>
#include <aws/iottwinmaker/model/DeleteWorkspaceRequest.h>
#include <aws/iottwinmaker/model/ExecuteQueryRequest.h>
#include <aws/iottwinmaker/model/GetComponentTypeRequest.h>
#include <aws/iottwinmaker/model/GetEntityRequest.h>
#include <aws/iottwinmaker/model/GetPricingPlanRequest.h>
#include <aws/iottwinmaker/model/GetPropertyValueRequest.h>
#include <aws/iottwinmaker/model/GetPropertyValueHistoryRequest.h>
#include <aws/iottwinmaker/model/GetSceneRequest.h>
#include <aws/iottwinmaker/model/GetSyncJobRequest.h>
#include <aws/iottwinmaker/model/GetWorkspaceRequest.h>
#include <aws/iottwinmaker/model/ListComponentTypesRequest.h>
#include <aws/iottwinmaker/model/ListEntitiesRequest.h>
#include <aws/iottwinmaker/model/ListScenesRequest.h>
#include <aws/iottwinmaker/model/ListSyncJobsRequest.h>
#include <aws/iottwinmaker/model/ListSyncResourcesRequest.h>
#include <aws/iottwinmaker/model/ListTagsForResourceRequest.h>
#include <aws/iottwinmaker/model/ListWorkspacesRequest.h>
#include <aws/iottwinmaker/model/TagResourceRequest.h>
#include <aws/iottwinmaker/model/UntagResourceRequest.h>
#include <aws/iottwinmaker/model/UpdateComponentTypeRequest.h>
#include <aws/iottwinmaker/model/UpdateEntityRequest.h>
#include <aws/iottwinmaker/model/UpdatePricingPlanRequest.h>
#include <aws/iottwinmaker/model/UpdateSceneRequest.h>
#include <aws/iottwinmaker/model/UpdateWorkspaceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTTwinMaker;
using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* IoTTwinMakerClient::SERVICE_NAME = "iottwinmaker";
const char* IoTTwinMakerClient::ALLOCATION_TAG = "IoTTwinMakerClient";

IoTTwinMakerClient::IoTTwinMakerClient(const IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration,
                                       std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const AWSCredentials& credentials,
                                       std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider,
                                       const IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<IoTTwinMakerEndpointProviderBase> endpointProvider,
                                       const IoTTwinMaker::IoTTwinMakerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  IoTTwinMakerClient::IoTTwinMakerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTTwinMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
IoTTwinMakerClient::~IoTTwinMakerClient()
{
}

std::shared_ptr<IoTTwinMakerEndpointProviderBase>& IoTTwinMakerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTTwinMakerClient::init(const IoTTwinMaker::IoTTwinMakerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoTTwinMaker");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void IoTTwinMakerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchPutPropertyValuesOutcome IoTTwinMakerClient::BatchPutPropertyValues(const BatchPutPropertyValuesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchPutPropertyValues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchPutPropertyValues", "Required field: WorkspaceId, is not set");
    return BatchPutPropertyValuesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchPutPropertyValues, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("data.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), BatchPutPropertyValuesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entity-properties");
  return BatchPutPropertyValuesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentTypeOutcome IoTTwinMakerClient::CreateComponentType(const CreateComponentTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComponentType", "Required field: WorkspaceId, is not set");
    return CreateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComponentType", "Required field: ComponentTypeId, is not set");
    return CreateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateComponentTypeOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  return CreateComponentTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEntityOutcome IoTTwinMakerClient::CreateEntity(const CreateEntityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEntity", "Required field: WorkspaceId, is not set");
    return CreateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateEntityOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entities");
  return CreateEntityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSceneOutcome IoTTwinMakerClient::CreateScene(const CreateSceneRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateScene", "Required field: WorkspaceId, is not set");
    return CreateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateSceneOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/scenes");
  return CreateSceneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSyncJobOutcome IoTTwinMakerClient::CreateSyncJob(const CreateSyncJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSyncJob", "Required field: WorkspaceId, is not set");
    return CreateSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.SyncSourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSyncJob", "Required field: SyncSource, is not set");
    return CreateSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SyncSource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateSyncJobOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
  return CreateSyncJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceOutcome IoTTwinMakerClient::CreateWorkspace(const CreateWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWorkspace", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateWorkspaceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  return CreateWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentTypeOutcome IoTTwinMakerClient::DeleteComponentType(const DeleteComponentTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponentType", "Required field: WorkspaceId, is not set");
    return DeleteComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponentType", "Required field: ComponentTypeId, is not set");
    return DeleteComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteComponentTypeOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  return DeleteComponentTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntityOutcome IoTTwinMakerClient::DeleteEntity(const DeleteEntityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEntity", "Required field: WorkspaceId, is not set");
    return DeleteEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEntity", "Required field: EntityId, is not set");
    return DeleteEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteEntityOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityId());
  return DeleteEntityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSceneOutcome IoTTwinMakerClient::DeleteScene(const DeleteSceneRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteScene", "Required field: WorkspaceId, is not set");
    return DeleteSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.SceneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteScene", "Required field: SceneId, is not set");
    return DeleteSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SceneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteSceneOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/scenes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSceneId());
  return DeleteSceneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSyncJobOutcome IoTTwinMakerClient::DeleteSyncJob(const DeleteSyncJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSyncJob", "Required field: WorkspaceId, is not set");
    return DeleteSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.SyncSourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSyncJob", "Required field: SyncSource, is not set");
    return DeleteSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SyncSource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteSyncJobOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
  return DeleteSyncJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceOutcome IoTTwinMakerClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteWorkspaceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  return DeleteWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ExecuteQueryOutcome IoTTwinMakerClient::ExecuteQuery(const ExecuteQueryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExecuteQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExecuteQuery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ExecuteQueryOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/queries/execution");
  return ExecuteQueryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetComponentTypeOutcome IoTTwinMakerClient::GetComponentType(const GetComponentTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentType", "Required field: WorkspaceId, is not set");
    return GetComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentType", "Required field: ComponentTypeId, is not set");
    return GetComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetComponentTypeOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  return GetComponentTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEntityOutcome IoTTwinMakerClient::GetEntity(const GetEntityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEntity", "Required field: WorkspaceId, is not set");
    return GetEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEntity", "Required field: EntityId, is not set");
    return GetEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetEntityOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityId());
  return GetEntityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPricingPlanOutcome IoTTwinMakerClient::GetPricingPlan(const GetPricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetPricingPlanOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/pricingplan");
  return GetPricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPropertyValueOutcome IoTTwinMakerClient::GetPropertyValue(const GetPropertyValueRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPropertyValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPropertyValue", "Required field: WorkspaceId, is not set");
    return GetPropertyValueOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPropertyValue, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("data.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetPropertyValueOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entity-properties/value");
  return GetPropertyValueOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPropertyValueHistoryOutcome IoTTwinMakerClient::GetPropertyValueHistory(const GetPropertyValueHistoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPropertyValueHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPropertyValueHistory", "Required field: WorkspaceId, is not set");
    return GetPropertyValueHistoryOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPropertyValueHistory, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("data.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetPropertyValueHistoryOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entity-properties/history");
  return GetPropertyValueHistoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSceneOutcome IoTTwinMakerClient::GetScene(const GetSceneRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetScene", "Required field: WorkspaceId, is not set");
    return GetSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.SceneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetScene", "Required field: SceneId, is not set");
    return GetSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SceneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetSceneOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/scenes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSceneId());
  return GetSceneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSyncJobOutcome IoTTwinMakerClient::GetSyncJob(const GetSyncJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SyncSourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSyncJob", "Required field: SyncSource, is not set");
    return GetSyncJobOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SyncSource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSyncJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetSyncJobOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
  return GetSyncJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkspaceOutcome IoTTwinMakerClient::GetWorkspace(const GetWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkspace", "Required field: WorkspaceId, is not set");
    return GetWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetWorkspaceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  return GetWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListComponentTypesOutcome IoTTwinMakerClient::ListComponentTypes(const ListComponentTypesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListComponentTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListComponentTypes", "Required field: WorkspaceId, is not set");
    return ListComponentTypesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListComponentTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListComponentTypesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/component-types-list");
  return ListComponentTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitiesOutcome IoTTwinMakerClient::ListEntities(const ListEntitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEntities", "Required field: WorkspaceId, is not set");
    return ListEntitiesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListEntitiesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entities-list");
  return ListEntitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListScenesOutcome IoTTwinMakerClient::ListScenes(const ListScenesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScenes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListScenes", "Required field: WorkspaceId, is not set");
    return ListScenesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListScenes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListScenesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/scenes-list");
  return ListScenesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSyncJobsOutcome IoTTwinMakerClient::ListSyncJobs(const ListSyncJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSyncJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSyncJobs", "Required field: WorkspaceId, is not set");
    return ListSyncJobsOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSyncJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListSyncJobsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs-list");
  return ListSyncJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSyncResourcesOutcome IoTTwinMakerClient::ListSyncResources(const ListSyncResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSyncResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSyncResources", "Required field: WorkspaceId, is not set");
    return ListSyncResourcesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.SyncSourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSyncResources", "Required field: SyncSource, is not set");
    return ListSyncResourcesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SyncSource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSyncResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListSyncResourcesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sync-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSyncSource());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources-list");
  return ListSyncResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome IoTTwinMakerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListTagsForResourceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags-list");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkspacesOutcome IoTTwinMakerClient::ListWorkspaces(const ListWorkspacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkspaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListWorkspacesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces-list");
  return ListWorkspacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome IoTTwinMakerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), TagResourceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome IoTTwinMakerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceARN, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UntagResourceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateComponentTypeOutcome IoTTwinMakerClient::UpdateComponentType(const UpdateComponentTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateComponentType", "Required field: WorkspaceId, is not set");
    return UpdateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateComponentType", "Required field: ComponentTypeId, is not set");
    return UpdateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateComponentType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateComponentTypeOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/component-types/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComponentTypeId());
  return UpdateComponentTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEntityOutcome IoTTwinMakerClient::UpdateEntity(const UpdateEntityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEntity", "Required field: WorkspaceId, is not set");
    return UpdateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEntity", "Required field: EntityId, is not set");
    return UpdateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateEntityOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntityId());
  return UpdateEntityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePricingPlanOutcome IoTTwinMakerClient::UpdatePricingPlan(const UpdatePricingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePricingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdatePricingPlanOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/pricingplan");
  return UpdatePricingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSceneOutcome IoTTwinMakerClient::UpdateScene(const UpdateSceneRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScene", "Required field: WorkspaceId, is not set");
    return UpdateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  if (!request.SceneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScene", "Required field: SceneId, is not set");
    return UpdateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SceneId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateScene, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateSceneOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/scenes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSceneId());
  return UpdateSceneOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceOutcome IoTTwinMakerClient::UpdateWorkspace(const UpdateWorkspaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkspace", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkspace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateWorkspaceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
  return UpdateWorkspaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

