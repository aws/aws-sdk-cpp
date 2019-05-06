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

#include <aws/workdocs/WorkDocsClient.h>
#include <aws/workdocs/WorkDocsEndpoint.h>
#include <aws/workdocs/WorkDocsErrorMarshaller.h>
#include <aws/workdocs/model/AbortDocumentVersionUploadRequest.h>
#include <aws/workdocs/model/ActivateUserRequest.h>
#include <aws/workdocs/model/AddResourcePermissionsRequest.h>
#include <aws/workdocs/model/CreateCommentRequest.h>
#include <aws/workdocs/model/CreateCustomMetadataRequest.h>
#include <aws/workdocs/model/CreateFolderRequest.h>
#include <aws/workdocs/model/CreateLabelsRequest.h>
#include <aws/workdocs/model/CreateNotificationSubscriptionRequest.h>
#include <aws/workdocs/model/CreateUserRequest.h>
#include <aws/workdocs/model/DeactivateUserRequest.h>
#include <aws/workdocs/model/DeleteCommentRequest.h>
#include <aws/workdocs/model/DeleteCustomMetadataRequest.h>
#include <aws/workdocs/model/DeleteDocumentRequest.h>
#include <aws/workdocs/model/DeleteFolderRequest.h>
#include <aws/workdocs/model/DeleteFolderContentsRequest.h>
#include <aws/workdocs/model/DeleteLabelsRequest.h>
#include <aws/workdocs/model/DeleteNotificationSubscriptionRequest.h>
#include <aws/workdocs/model/DeleteUserRequest.h>
#include <aws/workdocs/model/DescribeActivitiesRequest.h>
#include <aws/workdocs/model/DescribeCommentsRequest.h>
#include <aws/workdocs/model/DescribeDocumentVersionsRequest.h>
#include <aws/workdocs/model/DescribeFolderContentsRequest.h>
#include <aws/workdocs/model/DescribeGroupsRequest.h>
#include <aws/workdocs/model/DescribeNotificationSubscriptionsRequest.h>
#include <aws/workdocs/model/DescribeResourcePermissionsRequest.h>
#include <aws/workdocs/model/DescribeRootFoldersRequest.h>
#include <aws/workdocs/model/DescribeUsersRequest.h>
#include <aws/workdocs/model/GetCurrentUserRequest.h>
#include <aws/workdocs/model/GetDocumentRequest.h>
#include <aws/workdocs/model/GetDocumentPathRequest.h>
#include <aws/workdocs/model/GetDocumentVersionRequest.h>
#include <aws/workdocs/model/GetFolderRequest.h>
#include <aws/workdocs/model/GetFolderPathRequest.h>
#include <aws/workdocs/model/GetResourcesRequest.h>
#include <aws/workdocs/model/InitiateDocumentVersionUploadRequest.h>
#include <aws/workdocs/model/RemoveAllResourcePermissionsRequest.h>
#include <aws/workdocs/model/RemoveResourcePermissionRequest.h>
#include <aws/workdocs/model/UpdateDocumentRequest.h>
#include <aws/workdocs/model/UpdateDocumentVersionRequest.h>
#include <aws/workdocs/model/UpdateFolderRequest.h>
#include <aws/workdocs/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkDocs;
using namespace Aws::WorkDocs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "workdocs";
static const char* ALLOCATION_TAG = "WorkDocsClient";


WorkDocsClient::WorkDocsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkDocsClient::~WorkDocsClient()
{
}

void WorkDocsClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WorkDocsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WorkDocsClient::OverrideEndpoint(const Aws::String& endpoint)
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

AbortDocumentVersionUploadOutcome WorkDocsClient::AbortDocumentVersionUpload(const AbortDocumentVersionUploadRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortDocumentVersionUpload", "Required field: DocumentId, is not set");
    return AbortDocumentVersionUploadOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortDocumentVersionUpload", "Required field: VersionId, is not set");
    return AbortDocumentVersionUploadOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/versions/";
  ss << request.GetVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AbortDocumentVersionUploadOutcome(NoResult());
  }
  else
  {
    return AbortDocumentVersionUploadOutcome(outcome.GetError());
  }
}

AbortDocumentVersionUploadOutcomeCallable WorkDocsClient::AbortDocumentVersionUploadCallable(const AbortDocumentVersionUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AbortDocumentVersionUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AbortDocumentVersionUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::AbortDocumentVersionUploadAsync(const AbortDocumentVersionUploadRequest& request, const AbortDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AbortDocumentVersionUploadAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::AbortDocumentVersionUploadAsyncHelper(const AbortDocumentVersionUploadRequest& request, const AbortDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AbortDocumentVersionUpload(request), context);
}

ActivateUserOutcome WorkDocsClient::ActivateUser(const ActivateUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateUser", "Required field: UserId, is not set");
    return ActivateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/users/";
  ss << request.GetUserId();
  ss << "/activation";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ActivateUserOutcome(ActivateUserResult(outcome.GetResult()));
  }
  else
  {
    return ActivateUserOutcome(outcome.GetError());
  }
}

ActivateUserOutcomeCallable WorkDocsClient::ActivateUserCallable(const ActivateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::ActivateUserAsync(const ActivateUserRequest& request, const ActivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivateUserAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::ActivateUserAsyncHelper(const ActivateUserRequest& request, const ActivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateUser(request), context);
}

AddResourcePermissionsOutcome WorkDocsClient::AddResourcePermissions(const AddResourcePermissionsRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddResourcePermissions", "Required field: ResourceId, is not set");
    return AddResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/permissions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddResourcePermissionsOutcome(AddResourcePermissionsResult(outcome.GetResult()));
  }
  else
  {
    return AddResourcePermissionsOutcome(outcome.GetError());
  }
}

AddResourcePermissionsOutcomeCallable WorkDocsClient::AddResourcePermissionsCallable(const AddResourcePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddResourcePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddResourcePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::AddResourcePermissionsAsync(const AddResourcePermissionsRequest& request, const AddResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddResourcePermissionsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::AddResourcePermissionsAsyncHelper(const AddResourcePermissionsRequest& request, const AddResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddResourcePermissions(request), context);
}

CreateCommentOutcome WorkDocsClient::CreateComment(const CreateCommentRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComment", "Required field: DocumentId, is not set");
    return CreateCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComment", "Required field: VersionId, is not set");
    return CreateCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/versions/";
  ss << request.GetVersionId();
  ss << "/comment";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCommentOutcome(CreateCommentResult(outcome.GetResult()));
  }
  else
  {
    return CreateCommentOutcome(outcome.GetError());
  }
}

CreateCommentOutcomeCallable WorkDocsClient::CreateCommentCallable(const CreateCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::CreateCommentAsync(const CreateCommentRequest& request, const CreateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCommentAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::CreateCommentAsyncHelper(const CreateCommentRequest& request, const CreateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateComment(request), context);
}

CreateCustomMetadataOutcome WorkDocsClient::CreateCustomMetadata(const CreateCustomMetadataRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCustomMetadata", "Required field: ResourceId, is not set");
    return CreateCustomMetadataOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/customMetadata";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCustomMetadataOutcome(CreateCustomMetadataResult(outcome.GetResult()));
  }
  else
  {
    return CreateCustomMetadataOutcome(outcome.GetError());
  }
}

CreateCustomMetadataOutcomeCallable WorkDocsClient::CreateCustomMetadataCallable(const CreateCustomMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::CreateCustomMetadataAsync(const CreateCustomMetadataRequest& request, const CreateCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomMetadataAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::CreateCustomMetadataAsyncHelper(const CreateCustomMetadataRequest& request, const CreateCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomMetadata(request), context);
}

CreateFolderOutcome WorkDocsClient::CreateFolder(const CreateFolderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/folders";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFolderOutcome(CreateFolderResult(outcome.GetResult()));
  }
  else
  {
    return CreateFolderOutcome(outcome.GetError());
  }
}

CreateFolderOutcomeCallable WorkDocsClient::CreateFolderCallable(const CreateFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::CreateFolderAsync(const CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFolderAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::CreateFolderAsyncHelper(const CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFolder(request), context);
}

CreateLabelsOutcome WorkDocsClient::CreateLabels(const CreateLabelsRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLabels", "Required field: ResourceId, is not set");
    return CreateLabelsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/labels";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLabelsOutcome(CreateLabelsResult(outcome.GetResult()));
  }
  else
  {
    return CreateLabelsOutcome(outcome.GetError());
  }
}

CreateLabelsOutcomeCallable WorkDocsClient::CreateLabelsCallable(const CreateLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::CreateLabelsAsync(const CreateLabelsRequest& request, const CreateLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLabelsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::CreateLabelsAsyncHelper(const CreateLabelsRequest& request, const CreateLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLabels(request), context);
}

CreateNotificationSubscriptionOutcome WorkDocsClient::CreateNotificationSubscription(const CreateNotificationSubscriptionRequest& request) const
{
  if (!request.OrganizationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNotificationSubscription", "Required field: OrganizationId, is not set");
    return CreateNotificationSubscriptionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/organizations/";
  ss << request.GetOrganizationId();
  ss << "/subscriptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNotificationSubscriptionOutcome(CreateNotificationSubscriptionResult(outcome.GetResult()));
  }
  else
  {
    return CreateNotificationSubscriptionOutcome(outcome.GetError());
  }
}

CreateNotificationSubscriptionOutcomeCallable WorkDocsClient::CreateNotificationSubscriptionCallable(const CreateNotificationSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNotificationSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNotificationSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::CreateNotificationSubscriptionAsync(const CreateNotificationSubscriptionRequest& request, const CreateNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNotificationSubscriptionAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::CreateNotificationSubscriptionAsyncHelper(const CreateNotificationSubscriptionRequest& request, const CreateNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNotificationSubscription(request), context);
}

CreateUserOutcome WorkDocsClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/users";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserOutcome(CreateUserResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserOutcome(outcome.GetError());
  }
}

CreateUserOutcomeCallable WorkDocsClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeactivateUserOutcome WorkDocsClient::DeactivateUser(const DeactivateUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateUser", "Required field: UserId, is not set");
    return DeactivateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/users/";
  ss << request.GetUserId();
  ss << "/activation";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeactivateUserOutcome(NoResult());
  }
  else
  {
    return DeactivateUserOutcome(outcome.GetError());
  }
}

DeactivateUserOutcomeCallable WorkDocsClient::DeactivateUserCallable(const DeactivateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeactivateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeactivateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeactivateUserAsync(const DeactivateUserRequest& request, const DeactivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeactivateUserAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeactivateUserAsyncHelper(const DeactivateUserRequest& request, const DeactivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeactivateUser(request), context);
}

DeleteCommentOutcome WorkDocsClient::DeleteComment(const DeleteCommentRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComment", "Required field: DocumentId, is not set");
    return DeleteCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComment", "Required field: VersionId, is not set");
    return DeleteCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  if (!request.CommentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComment", "Required field: CommentId, is not set");
    return DeleteCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CommentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/versions/";
  ss << request.GetVersionId();
  ss << "/comment/";
  ss << request.GetCommentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCommentOutcome(NoResult());
  }
  else
  {
    return DeleteCommentOutcome(outcome.GetError());
  }
}

DeleteCommentOutcomeCallable WorkDocsClient::DeleteCommentCallable(const DeleteCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteCommentAsync(const DeleteCommentRequest& request, const DeleteCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCommentAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteCommentAsyncHelper(const DeleteCommentRequest& request, const DeleteCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteComment(request), context);
}

DeleteCustomMetadataOutcome WorkDocsClient::DeleteCustomMetadata(const DeleteCustomMetadataRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomMetadata", "Required field: ResourceId, is not set");
    return DeleteCustomMetadataOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/customMetadata";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteCustomMetadataOutcome(DeleteCustomMetadataResult(outcome.GetResult()));
  }
  else
  {
    return DeleteCustomMetadataOutcome(outcome.GetError());
  }
}

DeleteCustomMetadataOutcomeCallable WorkDocsClient::DeleteCustomMetadataCallable(const DeleteCustomMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteCustomMetadataAsync(const DeleteCustomMetadataRequest& request, const DeleteCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomMetadataAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteCustomMetadataAsyncHelper(const DeleteCustomMetadataRequest& request, const DeleteCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomMetadata(request), context);
}

DeleteDocumentOutcome WorkDocsClient::DeleteDocument(const DeleteDocumentRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocument", "Required field: DocumentId, is not set");
    return DeleteDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDocumentOutcome(NoResult());
  }
  else
  {
    return DeleteDocumentOutcome(outcome.GetError());
  }
}

DeleteDocumentOutcomeCallable WorkDocsClient::DeleteDocumentCallable(const DeleteDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteDocumentAsync(const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDocumentAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteDocumentAsyncHelper(const DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDocument(request), context);
}

DeleteFolderOutcome WorkDocsClient::DeleteFolder(const DeleteFolderRequest& request) const
{
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: FolderId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/folders/";
  ss << request.GetFolderId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFolderOutcome(NoResult());
  }
  else
  {
    return DeleteFolderOutcome(outcome.GetError());
  }
}

DeleteFolderOutcomeCallable WorkDocsClient::DeleteFolderCallable(const DeleteFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFolderAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteFolderAsyncHelper(const DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFolder(request), context);
}

DeleteFolderContentsOutcome WorkDocsClient::DeleteFolderContents(const DeleteFolderContentsRequest& request) const
{
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderContents", "Required field: FolderId, is not set");
    return DeleteFolderContentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/folders/";
  ss << request.GetFolderId();
  ss << "/contents";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFolderContentsOutcome(NoResult());
  }
  else
  {
    return DeleteFolderContentsOutcome(outcome.GetError());
  }
}

DeleteFolderContentsOutcomeCallable WorkDocsClient::DeleteFolderContentsCallable(const DeleteFolderContentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFolderContentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFolderContents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteFolderContentsAsync(const DeleteFolderContentsRequest& request, const DeleteFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFolderContentsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteFolderContentsAsyncHelper(const DeleteFolderContentsRequest& request, const DeleteFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFolderContents(request), context);
}

DeleteLabelsOutcome WorkDocsClient::DeleteLabels(const DeleteLabelsRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLabels", "Required field: ResourceId, is not set");
    return DeleteLabelsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/labels";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLabelsOutcome(DeleteLabelsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLabelsOutcome(outcome.GetError());
  }
}

DeleteLabelsOutcomeCallable WorkDocsClient::DeleteLabelsCallable(const DeleteLabelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLabelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLabels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteLabelsAsync(const DeleteLabelsRequest& request, const DeleteLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLabelsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteLabelsAsyncHelper(const DeleteLabelsRequest& request, const DeleteLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLabels(request), context);
}

DeleteNotificationSubscriptionOutcome WorkDocsClient::DeleteNotificationSubscription(const DeleteNotificationSubscriptionRequest& request) const
{
  if (!request.SubscriptionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNotificationSubscription", "Required field: SubscriptionId, is not set");
    return DeleteNotificationSubscriptionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  if (!request.OrganizationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNotificationSubscription", "Required field: OrganizationId, is not set");
    return DeleteNotificationSubscriptionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/organizations/";
  ss << request.GetOrganizationId();
  ss << "/subscriptions/";
  ss << request.GetSubscriptionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNotificationSubscriptionOutcome(NoResult());
  }
  else
  {
    return DeleteNotificationSubscriptionOutcome(outcome.GetError());
  }
}

DeleteNotificationSubscriptionOutcomeCallable WorkDocsClient::DeleteNotificationSubscriptionCallable(const DeleteNotificationSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNotificationSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNotificationSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteNotificationSubscriptionAsync(const DeleteNotificationSubscriptionRequest& request, const DeleteNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNotificationSubscriptionAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteNotificationSubscriptionAsyncHelper(const DeleteNotificationSubscriptionRequest& request, const DeleteNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNotificationSubscription(request), context);
}

DeleteUserOutcome WorkDocsClient::DeleteUser(const DeleteUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserOutcome(NoResult());
  }
  else
  {
    return DeleteUserOutcome(outcome.GetError());
  }
}

DeleteUserOutcomeCallable WorkDocsClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DescribeActivitiesOutcome WorkDocsClient::DescribeActivities(const DescribeActivitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/activities";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeActivitiesOutcome(DescribeActivitiesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeActivitiesOutcome(outcome.GetError());
  }
}

DescribeActivitiesOutcomeCallable WorkDocsClient::DescribeActivitiesCallable(const DescribeActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeActivitiesAsync(const DescribeActivitiesRequest& request, const DescribeActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeActivitiesAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeActivitiesAsyncHelper(const DescribeActivitiesRequest& request, const DescribeActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeActivities(request), context);
}

DescribeCommentsOutcome WorkDocsClient::DescribeComments(const DescribeCommentsRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeComments", "Required field: DocumentId, is not set");
    return DescribeCommentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeComments", "Required field: VersionId, is not set");
    return DescribeCommentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/versions/";
  ss << request.GetVersionId();
  ss << "/comments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCommentsOutcome(DescribeCommentsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCommentsOutcome(outcome.GetError());
  }
}

DescribeCommentsOutcomeCallable WorkDocsClient::DescribeCommentsCallable(const DescribeCommentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCommentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeCommentsAsync(const DescribeCommentsRequest& request, const DescribeCommentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCommentsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeCommentsAsyncHelper(const DescribeCommentsRequest& request, const DescribeCommentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComments(request), context);
}

DescribeDocumentVersionsOutcome WorkDocsClient::DescribeDocumentVersions(const DescribeDocumentVersionsRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDocumentVersions", "Required field: DocumentId, is not set");
    return DescribeDocumentVersionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDocumentVersionsOutcome(DescribeDocumentVersionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDocumentVersionsOutcome(outcome.GetError());
  }
}

DescribeDocumentVersionsOutcomeCallable WorkDocsClient::DescribeDocumentVersionsCallable(const DescribeDocumentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocumentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeDocumentVersionsAsync(const DescribeDocumentVersionsRequest& request, const DescribeDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDocumentVersionsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeDocumentVersionsAsyncHelper(const DescribeDocumentVersionsRequest& request, const DescribeDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDocumentVersions(request), context);
}

DescribeFolderContentsOutcome WorkDocsClient::DescribeFolderContents(const DescribeFolderContentsRequest& request) const
{
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderContents", "Required field: FolderId, is not set");
    return DescribeFolderContentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/folders/";
  ss << request.GetFolderId();
  ss << "/contents";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFolderContentsOutcome(DescribeFolderContentsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFolderContentsOutcome(outcome.GetError());
  }
}

DescribeFolderContentsOutcomeCallable WorkDocsClient::DescribeFolderContentsCallable(const DescribeFolderContentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFolderContentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFolderContents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeFolderContentsAsync(const DescribeFolderContentsRequest& request, const DescribeFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFolderContentsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeFolderContentsAsyncHelper(const DescribeFolderContentsRequest& request, const DescribeFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFolderContents(request), context);
}

DescribeGroupsOutcome WorkDocsClient::DescribeGroups(const DescribeGroupsRequest& request) const
{
  if (!request.SearchQueryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroups", "Required field: SearchQuery, is not set");
    return DescribeGroupsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SearchQuery]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGroupsOutcome(DescribeGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGroupsOutcome(outcome.GetError());
  }
}

DescribeGroupsOutcomeCallable WorkDocsClient::DescribeGroupsCallable(const DescribeGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeGroupsAsync(const DescribeGroupsRequest& request, const DescribeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGroupsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeGroupsAsyncHelper(const DescribeGroupsRequest& request, const DescribeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGroups(request), context);
}

DescribeNotificationSubscriptionsOutcome WorkDocsClient::DescribeNotificationSubscriptions(const DescribeNotificationSubscriptionsRequest& request) const
{
  if (!request.OrganizationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNotificationSubscriptions", "Required field: OrganizationId, is not set");
    return DescribeNotificationSubscriptionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/organizations/";
  ss << request.GetOrganizationId();
  ss << "/subscriptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeNotificationSubscriptionsOutcome(DescribeNotificationSubscriptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeNotificationSubscriptionsOutcome(outcome.GetError());
  }
}

DescribeNotificationSubscriptionsOutcomeCallable WorkDocsClient::DescribeNotificationSubscriptionsCallable(const DescribeNotificationSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeNotificationSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeNotificationSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeNotificationSubscriptionsAsync(const DescribeNotificationSubscriptionsRequest& request, const DescribeNotificationSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeNotificationSubscriptionsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeNotificationSubscriptionsAsyncHelper(const DescribeNotificationSubscriptionsRequest& request, const DescribeNotificationSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeNotificationSubscriptions(request), context);
}

DescribeResourcePermissionsOutcome WorkDocsClient::DescribeResourcePermissions(const DescribeResourcePermissionsRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeResourcePermissions", "Required field: ResourceId, is not set");
    return DescribeResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/permissions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeResourcePermissionsOutcome(DescribeResourcePermissionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeResourcePermissionsOutcome(outcome.GetError());
  }
}

DescribeResourcePermissionsOutcomeCallable WorkDocsClient::DescribeResourcePermissionsCallable(const DescribeResourcePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeResourcePermissionsAsync(const DescribeResourcePermissionsRequest& request, const DescribeResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourcePermissionsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeResourcePermissionsAsyncHelper(const DescribeResourcePermissionsRequest& request, const DescribeResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResourcePermissions(request), context);
}

DescribeRootFoldersOutcome WorkDocsClient::DescribeRootFolders(const DescribeRootFoldersRequest& request) const
{
  if (!request.AuthenticationTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRootFolders", "Required field: AuthenticationToken, is not set");
    return DescribeRootFoldersOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthenticationToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/me/root";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRootFoldersOutcome(DescribeRootFoldersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRootFoldersOutcome(outcome.GetError());
  }
}

DescribeRootFoldersOutcomeCallable WorkDocsClient::DescribeRootFoldersCallable(const DescribeRootFoldersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRootFoldersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRootFolders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeRootFoldersAsync(const DescribeRootFoldersRequest& request, const DescribeRootFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRootFoldersAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeRootFoldersAsyncHelper(const DescribeRootFoldersRequest& request, const DescribeRootFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRootFolders(request), context);
}

DescribeUsersOutcome WorkDocsClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/users";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUsersOutcome(DescribeUsersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUsersOutcome(outcome.GetError());
  }
}

DescribeUsersOutcomeCallable WorkDocsClient::DescribeUsersCallable(const DescribeUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUsersAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::DescribeUsersAsyncHelper(const DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUsers(request), context);
}

GetCurrentUserOutcome WorkDocsClient::GetCurrentUser(const GetCurrentUserRequest& request) const
{
  if (!request.AuthenticationTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCurrentUser", "Required field: AuthenticationToken, is not set");
    return GetCurrentUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthenticationToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/me";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCurrentUserOutcome(GetCurrentUserResult(outcome.GetResult()));
  }
  else
  {
    return GetCurrentUserOutcome(outcome.GetError());
  }
}

GetCurrentUserOutcomeCallable WorkDocsClient::GetCurrentUserCallable(const GetCurrentUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCurrentUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCurrentUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::GetCurrentUserAsync(const GetCurrentUserRequest& request, const GetCurrentUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCurrentUserAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::GetCurrentUserAsyncHelper(const GetCurrentUserRequest& request, const GetCurrentUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCurrentUser(request), context);
}

GetDocumentOutcome WorkDocsClient::GetDocument(const GetDocumentRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocument", "Required field: DocumentId, is not set");
    return GetDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentOutcome(GetDocumentResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentOutcome(outcome.GetError());
  }
}

GetDocumentOutcomeCallable WorkDocsClient::GetDocumentCallable(const GetDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::GetDocumentAsync(const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::GetDocumentAsyncHelper(const GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocument(request), context);
}

GetDocumentPathOutcome WorkDocsClient::GetDocumentPath(const GetDocumentPathRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentPath", "Required field: DocumentId, is not set");
    return GetDocumentPathOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/path";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentPathOutcome(GetDocumentPathResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentPathOutcome(outcome.GetError());
  }
}

GetDocumentPathOutcomeCallable WorkDocsClient::GetDocumentPathCallable(const GetDocumentPathRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentPathOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentPath(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::GetDocumentPathAsync(const GetDocumentPathRequest& request, const GetDocumentPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentPathAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::GetDocumentPathAsyncHelper(const GetDocumentPathRequest& request, const GetDocumentPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentPath(request), context);
}

GetDocumentVersionOutcome WorkDocsClient::GetDocumentVersion(const GetDocumentVersionRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentVersion", "Required field: DocumentId, is not set");
    return GetDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentVersion", "Required field: VersionId, is not set");
    return GetDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/versions/";
  ss << request.GetVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentVersionOutcome(GetDocumentVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentVersionOutcome(outcome.GetError());
  }
}

GetDocumentVersionOutcomeCallable WorkDocsClient::GetDocumentVersionCallable(const GetDocumentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::GetDocumentVersionAsync(const GetDocumentVersionRequest& request, const GetDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentVersionAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::GetDocumentVersionAsyncHelper(const GetDocumentVersionRequest& request, const GetDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentVersion(request), context);
}

GetFolderOutcome WorkDocsClient::GetFolder(const GetFolderRequest& request) const
{
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFolder", "Required field: FolderId, is not set");
    return GetFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/folders/";
  ss << request.GetFolderId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFolderOutcome(GetFolderResult(outcome.GetResult()));
  }
  else
  {
    return GetFolderOutcome(outcome.GetError());
  }
}

GetFolderOutcomeCallable WorkDocsClient::GetFolderCallable(const GetFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::GetFolderAsync(const GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFolderAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::GetFolderAsyncHelper(const GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFolder(request), context);
}

GetFolderPathOutcome WorkDocsClient::GetFolderPath(const GetFolderPathRequest& request) const
{
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFolderPath", "Required field: FolderId, is not set");
    return GetFolderPathOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/folders/";
  ss << request.GetFolderId();
  ss << "/path";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFolderPathOutcome(GetFolderPathResult(outcome.GetResult()));
  }
  else
  {
    return GetFolderPathOutcome(outcome.GetError());
  }
}

GetFolderPathOutcomeCallable WorkDocsClient::GetFolderPathCallable(const GetFolderPathRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFolderPathOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFolderPath(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::GetFolderPathAsync(const GetFolderPathRequest& request, const GetFolderPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFolderPathAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::GetFolderPathAsyncHelper(const GetFolderPathRequest& request, const GetFolderPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFolderPath(request), context);
}

GetResourcesOutcome WorkDocsClient::GetResources(const GetResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetResourcesOutcome(GetResourcesResult(outcome.GetResult()));
  }
  else
  {
    return GetResourcesOutcome(outcome.GetError());
  }
}

GetResourcesOutcomeCallable WorkDocsClient::GetResourcesCallable(const GetResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::GetResourcesAsync(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcesAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::GetResourcesAsyncHelper(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResources(request), context);
}

InitiateDocumentVersionUploadOutcome WorkDocsClient::InitiateDocumentVersionUpload(const InitiateDocumentVersionUploadRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InitiateDocumentVersionUploadOutcome(InitiateDocumentVersionUploadResult(outcome.GetResult()));
  }
  else
  {
    return InitiateDocumentVersionUploadOutcome(outcome.GetError());
  }
}

InitiateDocumentVersionUploadOutcomeCallable WorkDocsClient::InitiateDocumentVersionUploadCallable(const InitiateDocumentVersionUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateDocumentVersionUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateDocumentVersionUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::InitiateDocumentVersionUploadAsync(const InitiateDocumentVersionUploadRequest& request, const InitiateDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InitiateDocumentVersionUploadAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::InitiateDocumentVersionUploadAsyncHelper(const InitiateDocumentVersionUploadRequest& request, const InitiateDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitiateDocumentVersionUpload(request), context);
}

RemoveAllResourcePermissionsOutcome WorkDocsClient::RemoveAllResourcePermissions(const RemoveAllResourcePermissionsRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAllResourcePermissions", "Required field: ResourceId, is not set");
    return RemoveAllResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/permissions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveAllResourcePermissionsOutcome(NoResult());
  }
  else
  {
    return RemoveAllResourcePermissionsOutcome(outcome.GetError());
  }
}

RemoveAllResourcePermissionsOutcomeCallable WorkDocsClient::RemoveAllResourcePermissionsCallable(const RemoveAllResourcePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAllResourcePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAllResourcePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::RemoveAllResourcePermissionsAsync(const RemoveAllResourcePermissionsRequest& request, const RemoveAllResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveAllResourcePermissionsAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::RemoveAllResourcePermissionsAsyncHelper(const RemoveAllResourcePermissionsRequest& request, const RemoveAllResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveAllResourcePermissions(request), context);
}

RemoveResourcePermissionOutcome WorkDocsClient::RemoveResourcePermission(const RemoveResourcePermissionRequest& request) const
{
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveResourcePermission", "Required field: ResourceId, is not set");
    return RemoveResourcePermissionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveResourcePermission", "Required field: PrincipalId, is not set");
    return RemoveResourcePermissionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/resources/";
  ss << request.GetResourceId();
  ss << "/permissions/";
  ss << request.GetPrincipalId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveResourcePermissionOutcome(NoResult());
  }
  else
  {
    return RemoveResourcePermissionOutcome(outcome.GetError());
  }
}

RemoveResourcePermissionOutcomeCallable WorkDocsClient::RemoveResourcePermissionCallable(const RemoveResourcePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveResourcePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveResourcePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::RemoveResourcePermissionAsync(const RemoveResourcePermissionRequest& request, const RemoveResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveResourcePermissionAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::RemoveResourcePermissionAsyncHelper(const RemoveResourcePermissionRequest& request, const RemoveResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveResourcePermission(request), context);
}

UpdateDocumentOutcome WorkDocsClient::UpdateDocument(const UpdateDocumentRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocument", "Required field: DocumentId, is not set");
    return UpdateDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDocumentOutcome(NoResult());
  }
  else
  {
    return UpdateDocumentOutcome(outcome.GetError());
  }
}

UpdateDocumentOutcomeCallable WorkDocsClient::UpdateDocumentCallable(const UpdateDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::UpdateDocumentAsync(const UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDocumentAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::UpdateDocumentAsyncHelper(const UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDocument(request), context);
}

UpdateDocumentVersionOutcome WorkDocsClient::UpdateDocumentVersion(const UpdateDocumentVersionRequest& request) const
{
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentVersion", "Required field: DocumentId, is not set");
    return UpdateDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentVersion", "Required field: VersionId, is not set");
    return UpdateDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/documents/";
  ss << request.GetDocumentId();
  ss << "/versions/";
  ss << request.GetVersionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDocumentVersionOutcome(NoResult());
  }
  else
  {
    return UpdateDocumentVersionOutcome(outcome.GetError());
  }
}

UpdateDocumentVersionOutcomeCallable WorkDocsClient::UpdateDocumentVersionCallable(const UpdateDocumentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::UpdateDocumentVersionAsync(const UpdateDocumentVersionRequest& request, const UpdateDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDocumentVersionAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::UpdateDocumentVersionAsyncHelper(const UpdateDocumentVersionRequest& request, const UpdateDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDocumentVersion(request), context);
}

UpdateFolderOutcome WorkDocsClient::UpdateFolder(const UpdateFolderRequest& request) const
{
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: FolderId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/folders/";
  ss << request.GetFolderId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFolderOutcome(NoResult());
  }
  else
  {
    return UpdateFolderOutcome(outcome.GetError());
  }
}

UpdateFolderOutcomeCallable WorkDocsClient::UpdateFolderCallable(const UpdateFolderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFolderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFolder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::UpdateFolderAsync(const UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFolderAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::UpdateFolderAsyncHelper(const UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFolder(request), context);
}

UpdateUserOutcome WorkDocsClient::UpdateUser(const UpdateUserRequest& request) const
{
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/api/v1/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserOutcome(UpdateUserResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserOutcome(outcome.GetError());
  }
}

UpdateUserOutcomeCallable WorkDocsClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAsyncHelper( request, handler, context ); } );
}

void WorkDocsClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

