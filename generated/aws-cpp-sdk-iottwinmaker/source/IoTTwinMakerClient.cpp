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

#include <aws/iottwinmaker/IoTTwinMakerClient.h>
#include <aws/iottwinmaker/IoTTwinMakerEndpoint.h>
#include <aws/iottwinmaker/IoTTwinMakerErrorMarshaller.h>
#include <aws/iottwinmaker/model/BatchPutPropertyValuesRequest.h>
#include <aws/iottwinmaker/model/CreateComponentTypeRequest.h>
#include <aws/iottwinmaker/model/CreateEntityRequest.h>
#include <aws/iottwinmaker/model/CreateSceneRequest.h>
#include <aws/iottwinmaker/model/CreateWorkspaceRequest.h>
#include <aws/iottwinmaker/model/DeleteComponentTypeRequest.h>
#include <aws/iottwinmaker/model/DeleteEntityRequest.h>
#include <aws/iottwinmaker/model/DeleteSceneRequest.h>
#include <aws/iottwinmaker/model/DeleteWorkspaceRequest.h>
#include <aws/iottwinmaker/model/GetComponentTypeRequest.h>
#include <aws/iottwinmaker/model/GetEntityRequest.h>
#include <aws/iottwinmaker/model/GetPropertyValueRequest.h>
#include <aws/iottwinmaker/model/GetPropertyValueHistoryRequest.h>
#include <aws/iottwinmaker/model/GetSceneRequest.h>
#include <aws/iottwinmaker/model/GetWorkspaceRequest.h>
#include <aws/iottwinmaker/model/ListComponentTypesRequest.h>
#include <aws/iottwinmaker/model/ListEntitiesRequest.h>
#include <aws/iottwinmaker/model/ListScenesRequest.h>
#include <aws/iottwinmaker/model/ListTagsForResourceRequest.h>
#include <aws/iottwinmaker/model/ListWorkspacesRequest.h>
#include <aws/iottwinmaker/model/TagResourceRequest.h>
#include <aws/iottwinmaker/model/UntagResourceRequest.h>
#include <aws/iottwinmaker/model/UpdateComponentTypeRequest.h>
#include <aws/iottwinmaker/model/UpdateEntityRequest.h>
#include <aws/iottwinmaker/model/UpdateSceneRequest.h>
#include <aws/iottwinmaker/model/UpdateWorkspaceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTTwinMaker;
using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "iottwinmaker";
static const char* ALLOCATION_TAG = "IoTTwinMakerClient";

IoTTwinMakerClient::IoTTwinMakerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTTwinMakerClient::IoTTwinMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTTwinMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTTwinMakerClient::~IoTTwinMakerClient()
{
}

void IoTTwinMakerClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("IoTTwinMaker");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = IoTTwinMakerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void IoTTwinMakerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

BatchPutPropertyValuesOutcome IoTTwinMakerClient::BatchPutPropertyValues(const BatchPutPropertyValuesRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchPutPropertyValues", "Required field: WorkspaceId, is not set");
    return BatchPutPropertyValuesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchPutPropertyValues", "Invalid DNS host: " << uri.GetAuthority());
      return BatchPutPropertyValuesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entity-properties");
  return BatchPutPropertyValuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchPutPropertyValuesOutcomeCallable IoTTwinMakerClient::BatchPutPropertyValuesCallable(const BatchPutPropertyValuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchPutPropertyValuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchPutPropertyValues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::BatchPutPropertyValuesAsync(const BatchPutPropertyValuesRequest& request, const BatchPutPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchPutPropertyValuesAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::BatchPutPropertyValuesAsyncHelper(const BatchPutPropertyValuesRequest& request, const BatchPutPropertyValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchPutPropertyValues(request), context);
}

CreateComponentTypeOutcome IoTTwinMakerClient::CreateComponentType(const CreateComponentTypeRequest& request) const
{
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComponentType", "Required field: ComponentTypeId, is not set");
    return CreateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComponentType", "Required field: WorkspaceId, is not set");
    return CreateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateComponentType", "Invalid DNS host: " << uri.GetAuthority());
      return CreateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/component-types/");
  uri.AddPathSegment(request.GetComponentTypeId());
  return CreateComponentTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentTypeOutcomeCallable IoTTwinMakerClient::CreateComponentTypeCallable(const CreateComponentTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponentType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::CreateComponentTypeAsync(const CreateComponentTypeRequest& request, const CreateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateComponentTypeAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::CreateComponentTypeAsyncHelper(const CreateComponentTypeRequest& request, const CreateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateComponentType(request), context);
}

CreateEntityOutcome IoTTwinMakerClient::CreateEntity(const CreateEntityRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateEntity", "Required field: WorkspaceId, is not set");
    return CreateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateEntity", "Invalid DNS host: " << uri.GetAuthority());
      return CreateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entities");
  return CreateEntityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEntityOutcomeCallable IoTTwinMakerClient::CreateEntityCallable(const CreateEntityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEntityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEntity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::CreateEntityAsync(const CreateEntityRequest& request, const CreateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateEntityAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::CreateEntityAsyncHelper(const CreateEntityRequest& request, const CreateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEntity(request), context);
}

CreateSceneOutcome IoTTwinMakerClient::CreateScene(const CreateSceneRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateScene", "Required field: WorkspaceId, is not set");
    return CreateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateScene", "Invalid DNS host: " << uri.GetAuthority());
      return CreateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/scenes");
  return CreateSceneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSceneOutcomeCallable IoTTwinMakerClient::CreateSceneCallable(const CreateSceneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSceneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScene(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::CreateSceneAsync(const CreateSceneRequest& request, const CreateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSceneAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::CreateSceneAsyncHelper(const CreateSceneRequest& request, const CreateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateScene(request), context);
}

CreateWorkspaceOutcome IoTTwinMakerClient::CreateWorkspace(const CreateWorkspaceRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWorkspace", "Required field: WorkspaceId, is not set");
    return CreateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateWorkspace", "Invalid DNS host: " << uri.GetAuthority());
      return CreateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  return CreateWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceOutcomeCallable IoTTwinMakerClient::CreateWorkspaceCallable(const CreateWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::CreateWorkspaceAsync(const CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkspaceAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::CreateWorkspaceAsyncHelper(const CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkspace(request), context);
}

DeleteComponentTypeOutcome IoTTwinMakerClient::DeleteComponentType(const DeleteComponentTypeRequest& request) const
{
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponentType", "Required field: ComponentTypeId, is not set");
    return DeleteComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponentType", "Required field: WorkspaceId, is not set");
    return DeleteComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteComponentType", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/component-types/");
  uri.AddPathSegment(request.GetComponentTypeId());
  return DeleteComponentTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentTypeOutcomeCallable IoTTwinMakerClient::DeleteComponentTypeCallable(const DeleteComponentTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponentType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::DeleteComponentTypeAsync(const DeleteComponentTypeRequest& request, const DeleteComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteComponentTypeAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::DeleteComponentTypeAsyncHelper(const DeleteComponentTypeRequest& request, const DeleteComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteComponentType(request), context);
}

DeleteEntityOutcome IoTTwinMakerClient::DeleteEntity(const DeleteEntityRequest& request) const
{
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEntity", "Required field: EntityId, is not set");
    return DeleteEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEntity", "Required field: WorkspaceId, is not set");
    return DeleteEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteEntity", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entities/");
  uri.AddPathSegment(request.GetEntityId());
  return DeleteEntityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntityOutcomeCallable IoTTwinMakerClient::DeleteEntityCallable(const DeleteEntityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEntityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEntity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::DeleteEntityAsync(const DeleteEntityRequest& request, const DeleteEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEntityAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::DeleteEntityAsyncHelper(const DeleteEntityRequest& request, const DeleteEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEntity(request), context);
}

DeleteSceneOutcome IoTTwinMakerClient::DeleteScene(const DeleteSceneRequest& request) const
{
  if (!request.SceneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteScene", "Required field: SceneId, is not set");
    return DeleteSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SceneId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteScene", "Required field: WorkspaceId, is not set");
    return DeleteSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteScene", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/scenes/");
  uri.AddPathSegment(request.GetSceneId());
  return DeleteSceneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSceneOutcomeCallable IoTTwinMakerClient::DeleteSceneCallable(const DeleteSceneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSceneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScene(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::DeleteSceneAsync(const DeleteSceneRequest& request, const DeleteSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSceneAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::DeleteSceneAsyncHelper(const DeleteSceneRequest& request, const DeleteSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScene(request), context);
}

DeleteWorkspaceOutcome IoTTwinMakerClient::DeleteWorkspace(const DeleteWorkspaceRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Required field: WorkspaceId, is not set");
    return DeleteWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteWorkspace", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  return DeleteWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceOutcomeCallable IoTTwinMakerClient::DeleteWorkspaceCallable(const DeleteWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::DeleteWorkspaceAsync(const DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorkspaceAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::DeleteWorkspaceAsyncHelper(const DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorkspace(request), context);
}

GetComponentTypeOutcome IoTTwinMakerClient::GetComponentType(const GetComponentTypeRequest& request) const
{
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentType", "Required field: ComponentTypeId, is not set");
    return GetComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponentType", "Required field: WorkspaceId, is not set");
    return GetComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetComponentType", "Invalid DNS host: " << uri.GetAuthority());
      return GetComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/component-types/");
  uri.AddPathSegment(request.GetComponentTypeId());
  return GetComponentTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentTypeOutcomeCallable IoTTwinMakerClient::GetComponentTypeCallable(const GetComponentTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponentType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::GetComponentTypeAsync(const GetComponentTypeRequest& request, const GetComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetComponentTypeAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::GetComponentTypeAsyncHelper(const GetComponentTypeRequest& request, const GetComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComponentType(request), context);
}

GetEntityOutcome IoTTwinMakerClient::GetEntity(const GetEntityRequest& request) const
{
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEntity", "Required field: EntityId, is not set");
    return GetEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEntity", "Required field: WorkspaceId, is not set");
    return GetEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetEntity", "Invalid DNS host: " << uri.GetAuthority());
      return GetEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entities/");
  uri.AddPathSegment(request.GetEntityId());
  return GetEntityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEntityOutcomeCallable IoTTwinMakerClient::GetEntityCallable(const GetEntityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEntityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEntity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::GetEntityAsync(const GetEntityRequest& request, const GetEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEntityAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::GetEntityAsyncHelper(const GetEntityRequest& request, const GetEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEntity(request), context);
}

GetPropertyValueOutcome IoTTwinMakerClient::GetPropertyValue(const GetPropertyValueRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPropertyValue", "Required field: WorkspaceId, is not set");
    return GetPropertyValueOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetPropertyValue", "Invalid DNS host: " << uri.GetAuthority());
      return GetPropertyValueOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entity-properties/value");
  return GetPropertyValueOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPropertyValueOutcomeCallable IoTTwinMakerClient::GetPropertyValueCallable(const GetPropertyValueRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPropertyValueOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPropertyValue(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::GetPropertyValueAsync(const GetPropertyValueRequest& request, const GetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPropertyValueAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::GetPropertyValueAsyncHelper(const GetPropertyValueRequest& request, const GetPropertyValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPropertyValue(request), context);
}

GetPropertyValueHistoryOutcome IoTTwinMakerClient::GetPropertyValueHistory(const GetPropertyValueHistoryRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPropertyValueHistory", "Required field: WorkspaceId, is not set");
    return GetPropertyValueHistoryOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetPropertyValueHistory", "Invalid DNS host: " << uri.GetAuthority());
      return GetPropertyValueHistoryOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entity-properties/history");
  return GetPropertyValueHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPropertyValueHistoryOutcomeCallable IoTTwinMakerClient::GetPropertyValueHistoryCallable(const GetPropertyValueHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPropertyValueHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPropertyValueHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::GetPropertyValueHistoryAsync(const GetPropertyValueHistoryRequest& request, const GetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPropertyValueHistoryAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::GetPropertyValueHistoryAsyncHelper(const GetPropertyValueHistoryRequest& request, const GetPropertyValueHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPropertyValueHistory(request), context);
}

GetSceneOutcome IoTTwinMakerClient::GetScene(const GetSceneRequest& request) const
{
  if (!request.SceneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetScene", "Required field: SceneId, is not set");
    return GetSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SceneId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetScene", "Required field: WorkspaceId, is not set");
    return GetSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetScene", "Invalid DNS host: " << uri.GetAuthority());
      return GetSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/scenes/");
  uri.AddPathSegment(request.GetSceneId());
  return GetSceneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSceneOutcomeCallable IoTTwinMakerClient::GetSceneCallable(const GetSceneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSceneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetScene(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::GetSceneAsync(const GetSceneRequest& request, const GetSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSceneAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::GetSceneAsyncHelper(const GetSceneRequest& request, const GetSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetScene(request), context);
}

GetWorkspaceOutcome IoTTwinMakerClient::GetWorkspace(const GetWorkspaceRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkspace", "Required field: WorkspaceId, is not set");
    return GetWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetWorkspace", "Invalid DNS host: " << uri.GetAuthority());
      return GetWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  return GetWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkspaceOutcomeCallable IoTTwinMakerClient::GetWorkspaceCallable(const GetWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::GetWorkspaceAsync(const GetWorkspaceRequest& request, const GetWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkspaceAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::GetWorkspaceAsyncHelper(const GetWorkspaceRequest& request, const GetWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkspace(request), context);
}

ListComponentTypesOutcome IoTTwinMakerClient::ListComponentTypes(const ListComponentTypesRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListComponentTypes", "Required field: WorkspaceId, is not set");
    return ListComponentTypesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListComponentTypes", "Invalid DNS host: " << uri.GetAuthority());
      return ListComponentTypesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/component-types-list");
  return ListComponentTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentTypesOutcomeCallable IoTTwinMakerClient::ListComponentTypesCallable(const ListComponentTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponentTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::ListComponentTypesAsync(const ListComponentTypesRequest& request, const ListComponentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListComponentTypesAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::ListComponentTypesAsyncHelper(const ListComponentTypesRequest& request, const ListComponentTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListComponentTypes(request), context);
}

ListEntitiesOutcome IoTTwinMakerClient::ListEntities(const ListEntitiesRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEntities", "Required field: WorkspaceId, is not set");
    return ListEntitiesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListEntities", "Invalid DNS host: " << uri.GetAuthority());
      return ListEntitiesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entities-list");
  return ListEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitiesOutcomeCallable IoTTwinMakerClient::ListEntitiesCallable(const ListEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::ListEntitiesAsync(const ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEntitiesAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::ListEntitiesAsyncHelper(const ListEntitiesRequest& request, const ListEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntities(request), context);
}

ListScenesOutcome IoTTwinMakerClient::ListScenes(const ListScenesRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListScenes", "Required field: WorkspaceId, is not set");
    return ListScenesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListScenes", "Invalid DNS host: " << uri.GetAuthority());
      return ListScenesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/scenes-list");
  return ListScenesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListScenesOutcomeCallable IoTTwinMakerClient::ListScenesCallable(const ListScenesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListScenesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListScenes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::ListScenesAsync(const ListScenesRequest& request, const ListScenesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListScenesAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::ListScenesAsyncHelper(const ListScenesRequest& request, const ListScenesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListScenes(request), context);
}

ListTagsForResourceOutcome IoTTwinMakerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListTagsForResource", "Invalid DNS host: " << uri.GetAuthority());
      return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags-list");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTTwinMakerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListWorkspacesOutcome IoTTwinMakerClient::ListWorkspaces(const ListWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListWorkspaces", "Invalid DNS host: " << uri.GetAuthority());
      return ListWorkspacesOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces-list");
  return ListWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorkspacesOutcomeCallable IoTTwinMakerClient::ListWorkspacesCallable(const ListWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::ListWorkspacesAsync(const ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListWorkspacesAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::ListWorkspacesAsyncHelper(const ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListWorkspaces(request), context);
}

TagResourceOutcome IoTTwinMakerClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("TagResource", "Invalid DNS host: " << uri.GetAuthority());
      return TagResourceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTTwinMakerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome IoTTwinMakerClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UntagResource", "Invalid DNS host: " << uri.GetAuthority());
      return UntagResourceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTTwinMakerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateComponentTypeOutcome IoTTwinMakerClient::UpdateComponentType(const UpdateComponentTypeRequest& request) const
{
  if (!request.ComponentTypeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateComponentType", "Required field: ComponentTypeId, is not set");
    return UpdateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComponentTypeId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateComponentType", "Required field: WorkspaceId, is not set");
    return UpdateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateComponentType", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateComponentTypeOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/component-types/");
  uri.AddPathSegment(request.GetComponentTypeId());
  return UpdateComponentTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateComponentTypeOutcomeCallable IoTTwinMakerClient::UpdateComponentTypeCallable(const UpdateComponentTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComponentTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComponentType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::UpdateComponentTypeAsync(const UpdateComponentTypeRequest& request, const UpdateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateComponentTypeAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::UpdateComponentTypeAsyncHelper(const UpdateComponentTypeRequest& request, const UpdateComponentTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateComponentType(request), context);
}

UpdateEntityOutcome IoTTwinMakerClient::UpdateEntity(const UpdateEntityRequest& request) const
{
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEntity", "Required field: EntityId, is not set");
    return UpdateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEntity", "Required field: WorkspaceId, is not set");
    return UpdateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateEntity", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateEntityOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/entities/");
  uri.AddPathSegment(request.GetEntityId());
  return UpdateEntityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEntityOutcomeCallable IoTTwinMakerClient::UpdateEntityCallable(const UpdateEntityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEntityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEntity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::UpdateEntityAsync(const UpdateEntityRequest& request, const UpdateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEntityAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::UpdateEntityAsyncHelper(const UpdateEntityRequest& request, const UpdateEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEntity(request), context);
}

UpdateSceneOutcome IoTTwinMakerClient::UpdateScene(const UpdateSceneRequest& request) const
{
  if (!request.SceneIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScene", "Required field: SceneId, is not set");
    return UpdateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SceneId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScene", "Required field: WorkspaceId, is not set");
    return UpdateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateScene", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateSceneOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  uri.AddPathSegments("/scenes/");
  uri.AddPathSegment(request.GetSceneId());
  return UpdateSceneOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSceneOutcomeCallable IoTTwinMakerClient::UpdateSceneCallable(const UpdateSceneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSceneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScene(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::UpdateSceneAsync(const UpdateSceneRequest& request, const UpdateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSceneAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::UpdateSceneAsyncHelper(const UpdateSceneRequest& request, const UpdateSceneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateScene(request), context);
}

UpdateWorkspaceOutcome IoTTwinMakerClient::UpdateWorkspace(const UpdateWorkspaceRequest& request) const
{
  if (!request.WorkspaceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkspace", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkspaceId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("api." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateWorkspace", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateWorkspaceOutcome(Aws::Client::AWSError<IoTTwinMakerErrors>(IoTTwinMakerErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/workspaces/");
  uri.AddPathSegment(request.GetWorkspaceId());
  return UpdateWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceOutcomeCallable IoTTwinMakerClient::UpdateWorkspaceCallable(const UpdateWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTTwinMakerClient::UpdateWorkspaceAsync(const UpdateWorkspaceRequest& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateWorkspaceAsyncHelper( request, handler, context ); } );
}

void IoTTwinMakerClient::UpdateWorkspaceAsyncHelper(const UpdateWorkspaceRequest& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateWorkspace(request), context);
}

