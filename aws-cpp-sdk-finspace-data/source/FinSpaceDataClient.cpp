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

#include <aws/finspace-data/FinSpaceDataClient.h>
#include <aws/finspace-data/FinSpaceDataEndpoint.h>
#include <aws/finspace-data/FinSpaceDataErrorMarshaller.h>
#include <aws/finspace-data/model/AssociateUserToPermissionGroupRequest.h>
#include <aws/finspace-data/model/CreateChangesetRequest.h>
#include <aws/finspace-data/model/CreateDataViewRequest.h>
#include <aws/finspace-data/model/CreateDatasetRequest.h>
#include <aws/finspace-data/model/CreatePermissionGroupRequest.h>
#include <aws/finspace-data/model/CreateUserRequest.h>
#include <aws/finspace-data/model/DeleteDatasetRequest.h>
#include <aws/finspace-data/model/DeletePermissionGroupRequest.h>
#include <aws/finspace-data/model/DisableUserRequest.h>
#include <aws/finspace-data/model/DisassociateUserFromPermissionGroupRequest.h>
#include <aws/finspace-data/model/EnableUserRequest.h>
#include <aws/finspace-data/model/GetChangesetRequest.h>
#include <aws/finspace-data/model/GetDataViewRequest.h>
#include <aws/finspace-data/model/GetDatasetRequest.h>
#include <aws/finspace-data/model/GetExternalDataViewAccessDetailsRequest.h>
#include <aws/finspace-data/model/GetPermissionGroupRequest.h>
#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsRequest.h>
#include <aws/finspace-data/model/GetUserRequest.h>
#include <aws/finspace-data/model/GetWorkingLocationRequest.h>
#include <aws/finspace-data/model/ListChangesetsRequest.h>
#include <aws/finspace-data/model/ListDataViewsRequest.h>
#include <aws/finspace-data/model/ListDatasetsRequest.h>
#include <aws/finspace-data/model/ListPermissionGroupsRequest.h>
#include <aws/finspace-data/model/ListPermissionGroupsByUserRequest.h>
#include <aws/finspace-data/model/ListUsersRequest.h>
#include <aws/finspace-data/model/ListUsersByPermissionGroupRequest.h>
#include <aws/finspace-data/model/ResetUserPasswordRequest.h>
#include <aws/finspace-data/model/UpdateChangesetRequest.h>
#include <aws/finspace-data/model/UpdateDatasetRequest.h>
#include <aws/finspace-data/model/UpdatePermissionGroupRequest.h>
#include <aws/finspace-data/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FinSpaceData;
using namespace Aws::FinSpaceData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "finspace-api";
static const char* ALLOCATION_TAG = "FinSpaceDataClient";


FinSpaceDataClient::FinSpaceDataClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::FinSpaceDataClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::FinSpaceDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::~FinSpaceDataClient()
{
}

void FinSpaceDataClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("finspace data");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FinSpaceDataEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FinSpaceDataClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateUserToPermissionGroupOutcome FinSpaceDataClient::AssociateUserToPermissionGroup(const AssociateUserToPermissionGroupRequest& request) const
{
  if (!request.PermissionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserToPermissionGroup", "Required field: PermissionGroupId, is not set");
    return AssociateUserToPermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PermissionGroupId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserToPermissionGroup", "Required field: UserId, is not set");
    return AssociateUserToPermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group/");
  uri.AddPathSegment(request.GetPermissionGroupId());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserId());
  return AssociateUserToPermissionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateUserToPermissionGroupOutcomeCallable FinSpaceDataClient::AssociateUserToPermissionGroupCallable(const AssociateUserToPermissionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateUserToPermissionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateUserToPermissionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::AssociateUserToPermissionGroupAsync(const AssociateUserToPermissionGroupRequest& request, const AssociateUserToPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateUserToPermissionGroupAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::AssociateUserToPermissionGroupAsyncHelper(const AssociateUserToPermissionGroupRequest& request, const AssociateUserToPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateUserToPermissionGroup(request), context);
}

CreateChangesetOutcome FinSpaceDataClient::CreateChangeset(const CreateChangesetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChangeset", "Required field: DatasetId, is not set");
    return CreateChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2");
  return CreateChangesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChangesetOutcomeCallable FinSpaceDataClient::CreateChangesetCallable(const CreateChangesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChangesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChangeset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateChangesetAsync(const CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChangesetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateChangesetAsyncHelper(const CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChangeset(request), context);
}

CreateDataViewOutcome FinSpaceDataClient::CreateDataView(const CreateDataViewRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataView", "Required field: DatasetId, is not set");
    return CreateDataViewOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/dataviewsv2");
  return CreateDataViewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataViewOutcomeCallable FinSpaceDataClient::CreateDataViewCallable(const CreateDataViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateDataViewAsync(const CreateDataViewRequest& request, const CreateDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataViewAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateDataViewAsyncHelper(const CreateDataViewRequest& request, const CreateDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataView(request), context);
}

CreateDatasetOutcome FinSpaceDataClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2");
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable FinSpaceDataClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateDatasetAsyncHelper(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataset(request), context);
}

CreatePermissionGroupOutcome FinSpaceDataClient::CreatePermissionGroup(const CreatePermissionGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group");
  return CreatePermissionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePermissionGroupOutcomeCallable FinSpaceDataClient::CreatePermissionGroupCallable(const CreatePermissionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePermissionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePermissionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreatePermissionGroupAsync(const CreatePermissionGroupRequest& request, const CreatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePermissionGroupAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreatePermissionGroupAsyncHelper(const CreatePermissionGroupRequest& request, const CreatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePermissionGroup(request), context);
}

CreateUserOutcome FinSpaceDataClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user");
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable FinSpaceDataClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeleteDatasetOutcome FinSpaceDataClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2/");
  uri.AddPathSegment(request.GetDatasetId());
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable FinSpaceDataClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

DeletePermissionGroupOutcome FinSpaceDataClient::DeletePermissionGroup(const DeletePermissionGroupRequest& request) const
{
  if (!request.PermissionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePermissionGroup", "Required field: PermissionGroupId, is not set");
    return DeletePermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PermissionGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group/");
  uri.AddPathSegment(request.GetPermissionGroupId());
  return DeletePermissionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePermissionGroupOutcomeCallable FinSpaceDataClient::DeletePermissionGroupCallable(const DeletePermissionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePermissionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePermissionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::DeletePermissionGroupAsync(const DeletePermissionGroupRequest& request, const DeletePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePermissionGroupAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::DeletePermissionGroupAsyncHelper(const DeletePermissionGroupRequest& request, const DeletePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePermissionGroup(request), context);
}

DisableUserOutcome FinSpaceDataClient::DisableUser(const DisableUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableUser", "Required field: UserId, is not set");
    return DisableUserOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/");
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/disable");
  return DisableUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableUserOutcomeCallable FinSpaceDataClient::DisableUserCallable(const DisableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::DisableUserAsync(const DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableUserAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::DisableUserAsyncHelper(const DisableUserRequest& request, const DisableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableUser(request), context);
}

DisassociateUserFromPermissionGroupOutcome FinSpaceDataClient::DisassociateUserFromPermissionGroup(const DisassociateUserFromPermissionGroupRequest& request) const
{
  if (!request.PermissionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateUserFromPermissionGroup", "Required field: PermissionGroupId, is not set");
    return DisassociateUserFromPermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PermissionGroupId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateUserFromPermissionGroup", "Required field: UserId, is not set");
    return DisassociateUserFromPermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group/");
  uri.AddPathSegment(request.GetPermissionGroupId());
  uri.AddPathSegments("/users/");
  uri.AddPathSegment(request.GetUserId());
  return DisassociateUserFromPermissionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateUserFromPermissionGroupOutcomeCallable FinSpaceDataClient::DisassociateUserFromPermissionGroupCallable(const DisassociateUserFromPermissionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateUserFromPermissionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateUserFromPermissionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::DisassociateUserFromPermissionGroupAsync(const DisassociateUserFromPermissionGroupRequest& request, const DisassociateUserFromPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateUserFromPermissionGroupAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::DisassociateUserFromPermissionGroupAsyncHelper(const DisassociateUserFromPermissionGroupRequest& request, const DisassociateUserFromPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateUserFromPermissionGroup(request), context);
}

EnableUserOutcome FinSpaceDataClient::EnableUser(const EnableUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EnableUser", "Required field: UserId, is not set");
    return EnableUserOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/");
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/enable");
  return EnableUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableUserOutcomeCallable FinSpaceDataClient::EnableUserCallable(const EnableUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::EnableUserAsync(const EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableUserAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::EnableUserAsyncHelper(const EnableUserRequest& request, const EnableUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableUser(request), context);
}

GetChangesetOutcome FinSpaceDataClient::GetChangeset(const GetChangesetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeset", "Required field: DatasetId, is not set");
    return GetChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  if (!request.ChangesetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeset", "Required field: ChangesetId, is not set");
    return GetChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangesetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2/");
  uri.AddPathSegment(request.GetChangesetId());
  return GetChangesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChangesetOutcomeCallable FinSpaceDataClient::GetChangesetCallable(const GetChangesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetChangesetAsync(const GetChangesetRequest& request, const GetChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangesetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetChangesetAsyncHelper(const GetChangesetRequest& request, const GetChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChangeset(request), context);
}

GetDataViewOutcome FinSpaceDataClient::GetDataView(const GetDataViewRequest& request) const
{
  if (!request.DataViewIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataView", "Required field: DataViewId, is not set");
    return GetDataViewOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataViewId]", false));
  }
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataView", "Required field: DatasetId, is not set");
    return GetDataViewOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/dataviewsv2/");
  uri.AddPathSegment(request.GetDataViewId());
  return GetDataViewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataViewOutcomeCallable FinSpaceDataClient::GetDataViewCallable(const GetDataViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetDataViewAsync(const GetDataViewRequest& request, const GetDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataViewAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetDataViewAsyncHelper(const GetDataViewRequest& request, const GetDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataView(request), context);
}

GetDatasetOutcome FinSpaceDataClient::GetDataset(const GetDatasetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataset", "Required field: DatasetId, is not set");
    return GetDatasetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2/");
  uri.AddPathSegment(request.GetDatasetId());
  return GetDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatasetOutcomeCallable FinSpaceDataClient::GetDatasetCallable(const GetDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetDatasetAsync(const GetDatasetRequest& request, const GetDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetDatasetAsyncHelper(const GetDatasetRequest& request, const GetDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataset(request), context);
}

GetExternalDataViewAccessDetailsOutcome FinSpaceDataClient::GetExternalDataViewAccessDetails(const GetExternalDataViewAccessDetailsRequest& request) const
{
  if (!request.DataViewIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExternalDataViewAccessDetails", "Required field: DataViewId, is not set");
    return GetExternalDataViewAccessDetailsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataViewId]", false));
  }
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExternalDataViewAccessDetails", "Required field: DatasetId, is not set");
    return GetExternalDataViewAccessDetailsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/dataviewsv2/");
  uri.AddPathSegment(request.GetDataViewId());
  uri.AddPathSegments("/external-access-details");
  return GetExternalDataViewAccessDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExternalDataViewAccessDetailsOutcomeCallable FinSpaceDataClient::GetExternalDataViewAccessDetailsCallable(const GetExternalDataViewAccessDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExternalDataViewAccessDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExternalDataViewAccessDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetExternalDataViewAccessDetailsAsync(const GetExternalDataViewAccessDetailsRequest& request, const GetExternalDataViewAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExternalDataViewAccessDetailsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetExternalDataViewAccessDetailsAsyncHelper(const GetExternalDataViewAccessDetailsRequest& request, const GetExternalDataViewAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExternalDataViewAccessDetails(request), context);
}

GetPermissionGroupOutcome FinSpaceDataClient::GetPermissionGroup(const GetPermissionGroupRequest& request) const
{
  if (!request.PermissionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPermissionGroup", "Required field: PermissionGroupId, is not set");
    return GetPermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PermissionGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group/");
  uri.AddPathSegment(request.GetPermissionGroupId());
  return GetPermissionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionGroupOutcomeCallable FinSpaceDataClient::GetPermissionGroupCallable(const GetPermissionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermissionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetPermissionGroupAsync(const GetPermissionGroupRequest& request, const GetPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPermissionGroupAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetPermissionGroupAsyncHelper(const GetPermissionGroupRequest& request, const GetPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPermissionGroup(request), context);
}

GetProgrammaticAccessCredentialsOutcome FinSpaceDataClient::GetProgrammaticAccessCredentials(const GetProgrammaticAccessCredentialsRequest& request) const
{
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProgrammaticAccessCredentials", "Required field: EnvironmentId, is not set");
    return GetProgrammaticAccessCredentialsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/credentials/programmatic");
  return GetProgrammaticAccessCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProgrammaticAccessCredentialsOutcomeCallable FinSpaceDataClient::GetProgrammaticAccessCredentialsCallable(const GetProgrammaticAccessCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProgrammaticAccessCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProgrammaticAccessCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetProgrammaticAccessCredentialsAsync(const GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProgrammaticAccessCredentialsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetProgrammaticAccessCredentialsAsyncHelper(const GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProgrammaticAccessCredentials(request), context);
}

GetUserOutcome FinSpaceDataClient::GetUser(const GetUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: UserId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/");
  uri.AddPathSegment(request.GetUserId());
  return GetUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserOutcomeCallable FinSpaceDataClient::GetUserCallable(const GetUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetUserAsync(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetUserAsyncHelper(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUser(request), context);
}

GetWorkingLocationOutcome FinSpaceDataClient::GetWorkingLocation(const GetWorkingLocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workingLocationV1");
  return GetWorkingLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkingLocationOutcomeCallable FinSpaceDataClient::GetWorkingLocationCallable(const GetWorkingLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkingLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkingLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetWorkingLocationAsync(const GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkingLocationAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetWorkingLocationAsyncHelper(const GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkingLocation(request), context);
}

ListChangesetsOutcome FinSpaceDataClient::ListChangesets(const ListChangesetsRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChangesets", "Required field: DatasetId, is not set");
    return ListChangesetsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2");
  return ListChangesetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChangesetsOutcomeCallable FinSpaceDataClient::ListChangesetsCallable(const ListChangesetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChangesetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChangesets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListChangesetsAsync(const ListChangesetsRequest& request, const ListChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChangesetsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListChangesetsAsyncHelper(const ListChangesetsRequest& request, const ListChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChangesets(request), context);
}

ListDataViewsOutcome FinSpaceDataClient::ListDataViews(const ListDataViewsRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataViews", "Required field: DatasetId, is not set");
    return ListDataViewsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/dataviewsv2");
  return ListDataViewsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataViewsOutcomeCallable FinSpaceDataClient::ListDataViewsCallable(const ListDataViewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataViewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataViews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListDataViewsAsync(const ListDataViewsRequest& request, const ListDataViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataViewsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListDataViewsAsyncHelper(const ListDataViewsRequest& request, const ListDataViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataViews(request), context);
}

ListDatasetsOutcome FinSpaceDataClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2");
  return ListDatasetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable FinSpaceDataClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListDatasetsAsyncHelper(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasets(request), context);
}

ListPermissionGroupsOutcome FinSpaceDataClient::ListPermissionGroups(const ListPermissionGroupsRequest& request) const
{
  if (!request.MaxResultsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPermissionGroups", "Required field: MaxResults, is not set");
    return ListPermissionGroupsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MaxResults]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group");
  return ListPermissionGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionGroupsOutcomeCallable FinSpaceDataClient::ListPermissionGroupsCallable(const ListPermissionGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListPermissionGroupsAsync(const ListPermissionGroupsRequest& request, const ListPermissionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionGroupsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListPermissionGroupsAsyncHelper(const ListPermissionGroupsRequest& request, const ListPermissionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissionGroups(request), context);
}

ListPermissionGroupsByUserOutcome FinSpaceDataClient::ListPermissionGroupsByUser(const ListPermissionGroupsByUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPermissionGroupsByUser", "Required field: UserId, is not set");
    return ListPermissionGroupsByUserOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  if (!request.MaxResultsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPermissionGroupsByUser", "Required field: MaxResults, is not set");
    return ListPermissionGroupsByUserOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MaxResults]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/");
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/permission-groups");
  return ListPermissionGroupsByUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionGroupsByUserOutcomeCallable FinSpaceDataClient::ListPermissionGroupsByUserCallable(const ListPermissionGroupsByUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionGroupsByUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionGroupsByUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListPermissionGroupsByUserAsync(const ListPermissionGroupsByUserRequest& request, const ListPermissionGroupsByUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionGroupsByUserAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListPermissionGroupsByUserAsyncHelper(const ListPermissionGroupsByUserRequest& request, const ListPermissionGroupsByUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissionGroupsByUser(request), context);
}

ListUsersOutcome FinSpaceDataClient::ListUsers(const ListUsersRequest& request) const
{
  if (!request.MaxResultsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: MaxResults, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MaxResults]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user");
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable FinSpaceDataClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

ListUsersByPermissionGroupOutcome FinSpaceDataClient::ListUsersByPermissionGroup(const ListUsersByPermissionGroupRequest& request) const
{
  if (!request.PermissionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsersByPermissionGroup", "Required field: PermissionGroupId, is not set");
    return ListUsersByPermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PermissionGroupId]", false));
  }
  if (!request.MaxResultsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsersByPermissionGroup", "Required field: MaxResults, is not set");
    return ListUsersByPermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MaxResults]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group/");
  uri.AddPathSegment(request.GetPermissionGroupId());
  uri.AddPathSegments("/users");
  return ListUsersByPermissionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersByPermissionGroupOutcomeCallable FinSpaceDataClient::ListUsersByPermissionGroupCallable(const ListUsersByPermissionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersByPermissionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsersByPermissionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListUsersByPermissionGroupAsync(const ListUsersByPermissionGroupRequest& request, const ListUsersByPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersByPermissionGroupAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListUsersByPermissionGroupAsyncHelper(const ListUsersByPermissionGroupRequest& request, const ListUsersByPermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsersByPermissionGroup(request), context);
}

ResetUserPasswordOutcome FinSpaceDataClient::ResetUserPassword(const ResetUserPasswordRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetUserPassword", "Required field: UserId, is not set");
    return ResetUserPasswordOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/");
  uri.AddPathSegment(request.GetUserId());
  uri.AddPathSegments("/password");
  return ResetUserPasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetUserPasswordOutcomeCallable FinSpaceDataClient::ResetUserPasswordCallable(const ResetUserPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetUserPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetUserPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ResetUserPasswordAsync(const ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetUserPasswordAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ResetUserPasswordAsyncHelper(const ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetUserPassword(request), context);
}

UpdateChangesetOutcome FinSpaceDataClient::UpdateChangeset(const UpdateChangesetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChangeset", "Required field: DatasetId, is not set");
    return UpdateChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  if (!request.ChangesetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChangeset", "Required field: ChangesetId, is not set");
    return UpdateChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangesetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2/");
  uri.AddPathSegment(request.GetChangesetId());
  return UpdateChangesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChangesetOutcomeCallable FinSpaceDataClient::UpdateChangesetCallable(const UpdateChangesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChangesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChangeset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::UpdateChangesetAsync(const UpdateChangesetRequest& request, const UpdateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChangesetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::UpdateChangesetAsyncHelper(const UpdateChangesetRequest& request, const UpdateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChangeset(request), context);
}

UpdateDatasetOutcome FinSpaceDataClient::UpdateDataset(const UpdateDatasetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: DatasetId, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2/");
  uri.AddPathSegment(request.GetDatasetId());
  return UpdateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetOutcomeCallable FinSpaceDataClient::UpdateDatasetCallable(const UpdateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::UpdateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::UpdateDatasetAsyncHelper(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataset(request), context);
}

UpdatePermissionGroupOutcome FinSpaceDataClient::UpdatePermissionGroup(const UpdatePermissionGroupRequest& request) const
{
  if (!request.PermissionGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePermissionGroup", "Required field: PermissionGroupId, is not set");
    return UpdatePermissionGroupOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PermissionGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/permission-group/");
  uri.AddPathSegment(request.GetPermissionGroupId());
  return UpdatePermissionGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePermissionGroupOutcomeCallable FinSpaceDataClient::UpdatePermissionGroupCallable(const UpdatePermissionGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePermissionGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePermissionGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::UpdatePermissionGroupAsync(const UpdatePermissionGroupRequest& request, const UpdatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePermissionGroupAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::UpdatePermissionGroupAsyncHelper(const UpdatePermissionGroupRequest& request, const UpdatePermissionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePermissionGroup(request), context);
}

UpdateUserOutcome FinSpaceDataClient::UpdateUser(const UpdateUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/user/");
  uri.AddPathSegment(request.GetUserId());
  return UpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcomeCallable FinSpaceDataClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

