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

#include <aws/workdocs/WorkDocsClient.h>
#include <aws/workdocs/WorkDocsErrorMarshaller.h>
#include <aws/workdocs/WorkDocsEndpointProvider.h>
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
#include <aws/workdocs/model/DeleteDocumentVersionRequest.h>
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
#include <aws/workdocs/model/RestoreDocumentVersionsRequest.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WorkDocsClient::SERVICE_NAME = "workdocs";
const char* WorkDocsClient::ALLOCATION_TAG = "WorkDocsClient";

WorkDocsClient::WorkDocsClient(const WorkDocs::WorkDocsClientConfiguration& clientConfiguration,
                               std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const AWSCredentials& credentials,
                               std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider,
                               const WorkDocs::WorkDocsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider,
                               const WorkDocs::WorkDocsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WorkDocsClient::WorkDocsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WorkDocsClient::~WorkDocsClient()
{
}

std::shared_ptr<WorkDocsEndpointProviderBase>& WorkDocsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WorkDocsClient::init(const WorkDocs::WorkDocsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkDocs");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WorkDocsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AbortDocumentVersionUploadOutcome WorkDocsClient::AbortDocumentVersionUpload(const AbortDocumentVersionUploadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AbortDocumentVersionUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AbortDocumentVersionUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  return AbortDocumentVersionUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AbortDocumentVersionUpload(request), context);
    } );
}

ActivateUserOutcome WorkDocsClient::ActivateUser(const ActivateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ActivateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ActivateUser", "Required field: UserId, is not set");
    return ActivateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ActivateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/activation");
  return ActivateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ActivateUser(request), context);
    } );
}

AddResourcePermissionsOutcome WorkDocsClient::AddResourcePermissions(const AddResourcePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddResourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddResourcePermissions", "Required field: ResourceId, is not set");
    return AddResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddResourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return AddResourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddResourcePermissions(request), context);
    } );
}

CreateCommentOutcome WorkDocsClient::CreateComment(const CreateCommentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/comment");
  return CreateCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateComment(request), context);
    } );
}

CreateCustomMetadataOutcome WorkDocsClient::CreateCustomMetadata(const CreateCustomMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCustomMetadata", "Required field: ResourceId, is not set");
    return CreateCustomMetadataOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customMetadata");
  return CreateCustomMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCustomMetadata(request), context);
    } );
}

CreateFolderOutcome WorkDocsClient::CreateFolder(const CreateFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders");
  return CreateFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFolder(request), context);
    } );
}

CreateLabelsOutcome WorkDocsClient::CreateLabels(const CreateLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLabels", "Required field: ResourceId, is not set");
    return CreateLabelsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/labels");
  return CreateLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLabels(request), context);
    } );
}

CreateNotificationSubscriptionOutcome WorkDocsClient::CreateNotificationSubscription(const CreateNotificationSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNotificationSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrganizationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNotificationSubscription", "Required field: OrganizationId, is not set");
    return CreateNotificationSubscriptionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNotificationSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/organizations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  return CreateNotificationSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateNotificationSubscription(request), context);
    } );
}

CreateUserOutcome WorkDocsClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users");
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUser(request), context);
    } );
}

DeactivateUserOutcome WorkDocsClient::DeactivateUser(const DeactivateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeactivateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeactivateUser", "Required field: UserId, is not set");
    return DeactivateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeactivateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/activation");
  return DeactivateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeactivateUser(request), context);
    } );
}

DeleteCommentOutcome WorkDocsClient::DeleteComment(const DeleteCommentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteComment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/comment/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCommentId());
  return DeleteCommentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteComment(request), context);
    } );
}

DeleteCustomMetadataOutcome WorkDocsClient::DeleteCustomMetadata(const DeleteCustomMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomMetadata", "Required field: ResourceId, is not set");
    return DeleteCustomMetadataOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customMetadata");
  return DeleteCustomMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCustomMetadata(request), context);
    } );
}

DeleteDocumentOutcome WorkDocsClient::DeleteDocument(const DeleteDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocument", "Required field: DocumentId, is not set");
    return DeleteDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  return DeleteDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDocument(request), context);
    } );
}

DeleteDocumentVersionOutcome WorkDocsClient::DeleteDocumentVersion(const DeleteDocumentVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDocumentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentVersion", "Required field: DocumentId, is not set");
    return DeleteDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentVersion", "Required field: VersionId, is not set");
    return DeleteDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }
  if (!request.DeletePriorVersionsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentVersion", "Required field: DeletePriorVersions, is not set");
    return DeleteDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeletePriorVersions]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDocumentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documentVersions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  return DeleteDocumentVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDocumentVersionOutcomeCallable WorkDocsClient::DeleteDocumentVersionCallable(const DeleteDocumentVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocumentVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::DeleteDocumentVersionAsync(const DeleteDocumentVersionRequest& request, const DeleteDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDocumentVersion(request), context);
    } );
}

DeleteFolderOutcome WorkDocsClient::DeleteFolder(const DeleteFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: FolderId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return DeleteFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFolder(request), context);
    } );
}

DeleteFolderContentsOutcome WorkDocsClient::DeleteFolderContents(const DeleteFolderContentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFolderContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderContents", "Required field: FolderId, is not set");
    return DeleteFolderContentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFolderContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  return DeleteFolderContentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFolderContents(request), context);
    } );
}

DeleteLabelsOutcome WorkDocsClient::DeleteLabels(const DeleteLabelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLabels", "Required field: ResourceId, is not set");
    return DeleteLabelsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLabels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/labels");
  return DeleteLabelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLabels(request), context);
    } );
}

DeleteNotificationSubscriptionOutcome WorkDocsClient::DeleteNotificationSubscription(const DeleteNotificationSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNotificationSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNotificationSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/organizations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  return DeleteNotificationSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteNotificationSubscription(request), context);
    } );
}

DeleteUserOutcome WorkDocsClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteUser(request), context);
    } );
}

DescribeActivitiesOutcome WorkDocsClient::DescribeActivities(const DescribeActivitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeActivities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeActivities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/activities");
  return DescribeActivitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeActivities(request), context);
    } );
}

DescribeCommentsOutcome WorkDocsClient::DescribeComments(const DescribeCommentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeComments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeComments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/comments");
  return DescribeCommentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeComments(request), context);
    } );
}

DescribeDocumentVersionsOutcome WorkDocsClient::DescribeDocumentVersions(const DescribeDocumentVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDocumentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDocumentVersions", "Required field: DocumentId, is not set");
    return DescribeDocumentVersionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDocumentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return DescribeDocumentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDocumentVersions(request), context);
    } );
}

DescribeFolderContentsOutcome WorkDocsClient::DescribeFolderContents(const DescribeFolderContentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFolderContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderContents", "Required field: FolderId, is not set");
    return DescribeFolderContentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFolderContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  return DescribeFolderContentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFolderContents(request), context);
    } );
}

DescribeGroupsOutcome WorkDocsClient::DescribeGroups(const DescribeGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SearchQueryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroups", "Required field: SearchQuery, is not set");
    return DescribeGroupsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SearchQuery]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/groups");
  return DescribeGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeGroups(request), context);
    } );
}

DescribeNotificationSubscriptionsOutcome WorkDocsClient::DescribeNotificationSubscriptions(const DescribeNotificationSubscriptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNotificationSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrganizationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNotificationSubscriptions", "Required field: OrganizationId, is not set");
    return DescribeNotificationSubscriptionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNotificationSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/organizations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  return DescribeNotificationSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeNotificationSubscriptions(request), context);
    } );
}

DescribeResourcePermissionsOutcome WorkDocsClient::DescribeResourcePermissions(const DescribeResourcePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeResourcePermissions", "Required field: ResourceId, is not set");
    return DescribeResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeResourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResourcePermissions(request), context);
    } );
}

DescribeRootFoldersOutcome WorkDocsClient::DescribeRootFolders(const DescribeRootFoldersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRootFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AuthenticationTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRootFolders", "Required field: AuthenticationToken, is not set");
    return DescribeRootFoldersOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthenticationToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRootFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/me/root");
  return DescribeRootFoldersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRootFolders(request), context);
    } );
}

DescribeUsersOutcome WorkDocsClient::DescribeUsers(const DescribeUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users");
  return DescribeUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeUsers(request), context);
    } );
}

GetCurrentUserOutcome WorkDocsClient::GetCurrentUser(const GetCurrentUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCurrentUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AuthenticationTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCurrentUser", "Required field: AuthenticationToken, is not set");
    return GetCurrentUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthenticationToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCurrentUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/me");
  return GetCurrentUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCurrentUser(request), context);
    } );
}

GetDocumentOutcome WorkDocsClient::GetDocument(const GetDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocument", "Required field: DocumentId, is not set");
    return GetDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  return GetDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDocument(request), context);
    } );
}

GetDocumentPathOutcome WorkDocsClient::GetDocumentPath(const GetDocumentPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocumentPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentPath", "Required field: DocumentId, is not set");
    return GetDocumentPathOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocumentPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/path");
  return GetDocumentPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDocumentPath(request), context);
    } );
}

GetDocumentVersionOutcome WorkDocsClient::GetDocumentVersion(const GetDocumentVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDocumentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDocumentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  return GetDocumentVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDocumentVersion(request), context);
    } );
}

GetFolderOutcome WorkDocsClient::GetFolder(const GetFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFolder", "Required field: FolderId, is not set");
    return GetFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return GetFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFolder(request), context);
    } );
}

GetFolderPathOutcome WorkDocsClient::GetFolderPath(const GetFolderPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFolderPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFolderPath", "Required field: FolderId, is not set");
    return GetFolderPathOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFolderPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/path");
  return GetFolderPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFolderPath(request), context);
    } );
}

GetResourcesOutcome WorkDocsClient::GetResources(const GetResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources");
  return GetResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResources(request), context);
    } );
}

InitiateDocumentVersionUploadOutcome WorkDocsClient::InitiateDocumentVersionUpload(const InitiateDocumentVersionUploadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateDocumentVersionUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateDocumentVersionUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents");
  return InitiateDocumentVersionUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InitiateDocumentVersionUpload(request), context);
    } );
}

RemoveAllResourcePermissionsOutcome WorkDocsClient::RemoveAllResourcePermissions(const RemoveAllResourcePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveAllResourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAllResourcePermissions", "Required field: ResourceId, is not set");
    return RemoveAllResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveAllResourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return RemoveAllResourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveAllResourcePermissions(request), context);
    } );
}

RemoveResourcePermissionOutcome WorkDocsClient::RemoveResourcePermission(const RemoveResourcePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveResourcePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveResourcePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return RemoveResourcePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveResourcePermission(request), context);
    } );
}

RestoreDocumentVersionsOutcome WorkDocsClient::RestoreDocumentVersions(const RestoreDocumentVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreDocumentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreDocumentVersions", "Required field: DocumentId, is not set");
    return RestoreDocumentVersionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreDocumentVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documentVersions/restore/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  return RestoreDocumentVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreDocumentVersionsOutcomeCallable WorkDocsClient::RestoreDocumentVersionsCallable(const RestoreDocumentVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreDocumentVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreDocumentVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkDocsClient::RestoreDocumentVersionsAsync(const RestoreDocumentVersionsRequest& request, const RestoreDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestoreDocumentVersions(request), context);
    } );
}

UpdateDocumentOutcome WorkDocsClient::UpdateDocument(const UpdateDocumentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DocumentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocument", "Required field: DocumentId, is not set");
    return UpdateDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDocument, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  return UpdateDocumentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDocument(request), context);
    } );
}

UpdateDocumentVersionOutcome WorkDocsClient::UpdateDocumentVersion(const UpdateDocumentVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDocumentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDocumentVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  return UpdateDocumentVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDocumentVersion(request), context);
    } );
}

UpdateFolderOutcome WorkDocsClient::UpdateFolder(const UpdateFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: FolderId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return UpdateFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFolder(request), context);
    } );
}

UpdateUserOutcome WorkDocsClient::UpdateUser(const UpdateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return UpdateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUser(request), context);
    } );
}

