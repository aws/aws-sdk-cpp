/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/workdocs/WorkDocsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/workdocs/WorkDocsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WorkDocsClient header */
#include <aws/workdocs/model/ActivateUserResult.h>
#include <aws/workdocs/model/AddResourcePermissionsResult.h>
#include <aws/workdocs/model/CreateCommentResult.h>
#include <aws/workdocs/model/CreateCustomMetadataResult.h>
#include <aws/workdocs/model/CreateFolderResult.h>
#include <aws/workdocs/model/CreateLabelsResult.h>
#include <aws/workdocs/model/CreateNotificationSubscriptionResult.h>
#include <aws/workdocs/model/CreateUserResult.h>
#include <aws/workdocs/model/DeleteCustomMetadataResult.h>
#include <aws/workdocs/model/DeleteLabelsResult.h>
#include <aws/workdocs/model/DescribeActivitiesResult.h>
#include <aws/workdocs/model/DescribeCommentsResult.h>
#include <aws/workdocs/model/DescribeDocumentVersionsResult.h>
#include <aws/workdocs/model/DescribeFolderContentsResult.h>
#include <aws/workdocs/model/DescribeGroupsResult.h>
#include <aws/workdocs/model/DescribeNotificationSubscriptionsResult.h>
#include <aws/workdocs/model/DescribeResourcePermissionsResult.h>
#include <aws/workdocs/model/DescribeRootFoldersResult.h>
#include <aws/workdocs/model/DescribeUsersResult.h>
#include <aws/workdocs/model/GetCurrentUserResult.h>
#include <aws/workdocs/model/GetDocumentResult.h>
#include <aws/workdocs/model/GetDocumentPathResult.h>
#include <aws/workdocs/model/GetDocumentVersionResult.h>
#include <aws/workdocs/model/GetFolderResult.h>
#include <aws/workdocs/model/GetFolderPathResult.h>
#include <aws/workdocs/model/GetResourcesResult.h>
#include <aws/workdocs/model/InitiateDocumentVersionUploadResult.h>
#include <aws/workdocs/model/UpdateUserResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in WorkDocsClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace WorkDocs
  {
    using WorkDocsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WorkDocsEndpointProviderBase = Aws::WorkDocs::Endpoint::WorkDocsEndpointProviderBase;
    using WorkDocsEndpointProvider = Aws::WorkDocs::Endpoint::WorkDocsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WorkDocsClient header */
      class AbortDocumentVersionUploadRequest;
      class ActivateUserRequest;
      class AddResourcePermissionsRequest;
      class CreateCommentRequest;
      class CreateCustomMetadataRequest;
      class CreateFolderRequest;
      class CreateLabelsRequest;
      class CreateNotificationSubscriptionRequest;
      class CreateUserRequest;
      class DeactivateUserRequest;
      class DeleteCommentRequest;
      class DeleteCustomMetadataRequest;
      class DeleteDocumentRequest;
      class DeleteDocumentVersionRequest;
      class DeleteFolderRequest;
      class DeleteFolderContentsRequest;
      class DeleteLabelsRequest;
      class DeleteNotificationSubscriptionRequest;
      class DeleteUserRequest;
      class DescribeActivitiesRequest;
      class DescribeCommentsRequest;
      class DescribeDocumentVersionsRequest;
      class DescribeFolderContentsRequest;
      class DescribeGroupsRequest;
      class DescribeNotificationSubscriptionsRequest;
      class DescribeResourcePermissionsRequest;
      class DescribeRootFoldersRequest;
      class DescribeUsersRequest;
      class GetCurrentUserRequest;
      class GetDocumentRequest;
      class GetDocumentPathRequest;
      class GetDocumentVersionRequest;
      class GetFolderRequest;
      class GetFolderPathRequest;
      class GetResourcesRequest;
      class InitiateDocumentVersionUploadRequest;
      class RemoveAllResourcePermissionsRequest;
      class RemoveResourcePermissionRequest;
      class RestoreDocumentVersionsRequest;
      class UpdateDocumentRequest;
      class UpdateDocumentVersionRequest;
      class UpdateFolderRequest;
      class UpdateUserRequest;
      /* End of service model forward declarations required in WorkDocsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> AbortDocumentVersionUploadOutcome;
      typedef Aws::Utils::Outcome<ActivateUserResult, WorkDocsError> ActivateUserOutcome;
      typedef Aws::Utils::Outcome<AddResourcePermissionsResult, WorkDocsError> AddResourcePermissionsOutcome;
      typedef Aws::Utils::Outcome<CreateCommentResult, WorkDocsError> CreateCommentOutcome;
      typedef Aws::Utils::Outcome<CreateCustomMetadataResult, WorkDocsError> CreateCustomMetadataOutcome;
      typedef Aws::Utils::Outcome<CreateFolderResult, WorkDocsError> CreateFolderOutcome;
      typedef Aws::Utils::Outcome<CreateLabelsResult, WorkDocsError> CreateLabelsOutcome;
      typedef Aws::Utils::Outcome<CreateNotificationSubscriptionResult, WorkDocsError> CreateNotificationSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, WorkDocsError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeactivateUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeleteCommentOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomMetadataResult, WorkDocsError> DeleteCustomMetadataOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeleteDocumentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeleteDocumentVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeleteFolderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeleteFolderContentsOutcome;
      typedef Aws::Utils::Outcome<DeleteLabelsResult, WorkDocsError> DeleteLabelsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeleteNotificationSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DescribeActivitiesResult, WorkDocsError> DescribeActivitiesOutcome;
      typedef Aws::Utils::Outcome<DescribeCommentsResult, WorkDocsError> DescribeCommentsOutcome;
      typedef Aws::Utils::Outcome<DescribeDocumentVersionsResult, WorkDocsError> DescribeDocumentVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeFolderContentsResult, WorkDocsError> DescribeFolderContentsOutcome;
      typedef Aws::Utils::Outcome<DescribeGroupsResult, WorkDocsError> DescribeGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeNotificationSubscriptionsResult, WorkDocsError> DescribeNotificationSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePermissionsResult, WorkDocsError> DescribeResourcePermissionsOutcome;
      typedef Aws::Utils::Outcome<DescribeRootFoldersResult, WorkDocsError> DescribeRootFoldersOutcome;
      typedef Aws::Utils::Outcome<DescribeUsersResult, WorkDocsError> DescribeUsersOutcome;
      typedef Aws::Utils::Outcome<GetCurrentUserResult, WorkDocsError> GetCurrentUserOutcome;
      typedef Aws::Utils::Outcome<GetDocumentResult, WorkDocsError> GetDocumentOutcome;
      typedef Aws::Utils::Outcome<GetDocumentPathResult, WorkDocsError> GetDocumentPathOutcome;
      typedef Aws::Utils::Outcome<GetDocumentVersionResult, WorkDocsError> GetDocumentVersionOutcome;
      typedef Aws::Utils::Outcome<GetFolderResult, WorkDocsError> GetFolderOutcome;
      typedef Aws::Utils::Outcome<GetFolderPathResult, WorkDocsError> GetFolderPathOutcome;
      typedef Aws::Utils::Outcome<GetResourcesResult, WorkDocsError> GetResourcesOutcome;
      typedef Aws::Utils::Outcome<InitiateDocumentVersionUploadResult, WorkDocsError> InitiateDocumentVersionUploadOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> RemoveAllResourcePermissionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> RemoveResourcePermissionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> RestoreDocumentVersionsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> UpdateDocumentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> UpdateDocumentVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, WorkDocsError> UpdateFolderOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, WorkDocsError> UpdateUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AbortDocumentVersionUploadOutcome> AbortDocumentVersionUploadOutcomeCallable;
      typedef std::future<ActivateUserOutcome> ActivateUserOutcomeCallable;
      typedef std::future<AddResourcePermissionsOutcome> AddResourcePermissionsOutcomeCallable;
      typedef std::future<CreateCommentOutcome> CreateCommentOutcomeCallable;
      typedef std::future<CreateCustomMetadataOutcome> CreateCustomMetadataOutcomeCallable;
      typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
      typedef std::future<CreateLabelsOutcome> CreateLabelsOutcomeCallable;
      typedef std::future<CreateNotificationSubscriptionOutcome> CreateNotificationSubscriptionOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeactivateUserOutcome> DeactivateUserOutcomeCallable;
      typedef std::future<DeleteCommentOutcome> DeleteCommentOutcomeCallable;
      typedef std::future<DeleteCustomMetadataOutcome> DeleteCustomMetadataOutcomeCallable;
      typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
      typedef std::future<DeleteDocumentVersionOutcome> DeleteDocumentVersionOutcomeCallable;
      typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
      typedef std::future<DeleteFolderContentsOutcome> DeleteFolderContentsOutcomeCallable;
      typedef std::future<DeleteLabelsOutcome> DeleteLabelsOutcomeCallable;
      typedef std::future<DeleteNotificationSubscriptionOutcome> DeleteNotificationSubscriptionOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DescribeActivitiesOutcome> DescribeActivitiesOutcomeCallable;
      typedef std::future<DescribeCommentsOutcome> DescribeCommentsOutcomeCallable;
      typedef std::future<DescribeDocumentVersionsOutcome> DescribeDocumentVersionsOutcomeCallable;
      typedef std::future<DescribeFolderContentsOutcome> DescribeFolderContentsOutcomeCallable;
      typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
      typedef std::future<DescribeNotificationSubscriptionsOutcome> DescribeNotificationSubscriptionsOutcomeCallable;
      typedef std::future<DescribeResourcePermissionsOutcome> DescribeResourcePermissionsOutcomeCallable;
      typedef std::future<DescribeRootFoldersOutcome> DescribeRootFoldersOutcomeCallable;
      typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
      typedef std::future<GetCurrentUserOutcome> GetCurrentUserOutcomeCallable;
      typedef std::future<GetDocumentOutcome> GetDocumentOutcomeCallable;
      typedef std::future<GetDocumentPathOutcome> GetDocumentPathOutcomeCallable;
      typedef std::future<GetDocumentVersionOutcome> GetDocumentVersionOutcomeCallable;
      typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
      typedef std::future<GetFolderPathOutcome> GetFolderPathOutcomeCallable;
      typedef std::future<GetResourcesOutcome> GetResourcesOutcomeCallable;
      typedef std::future<InitiateDocumentVersionUploadOutcome> InitiateDocumentVersionUploadOutcomeCallable;
      typedef std::future<RemoveAllResourcePermissionsOutcome> RemoveAllResourcePermissionsOutcomeCallable;
      typedef std::future<RemoveResourcePermissionOutcome> RemoveResourcePermissionOutcomeCallable;
      typedef std::future<RestoreDocumentVersionsOutcome> RestoreDocumentVersionsOutcomeCallable;
      typedef std::future<UpdateDocumentOutcome> UpdateDocumentOutcomeCallable;
      typedef std::future<UpdateDocumentVersionOutcome> UpdateDocumentVersionOutcomeCallable;
      typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WorkDocsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WorkDocsClient*, const Model::AbortDocumentVersionUploadRequest&, const Model::AbortDocumentVersionUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AbortDocumentVersionUploadResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::ActivateUserRequest&, const Model::ActivateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateUserResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::AddResourcePermissionsRequest&, const Model::AddResourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddResourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::CreateCommentRequest&, const Model::CreateCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCommentResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::CreateCustomMetadataRequest&, const Model::CreateCustomMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomMetadataResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::CreateFolderRequest&, const Model::CreateFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFolderResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::CreateLabelsRequest&, const Model::CreateLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLabelsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::CreateNotificationSubscriptionRequest&, const Model::CreateNotificationSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotificationSubscriptionResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeactivateUserRequest&, const Model::DeactivateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateUserResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteCommentRequest&, const Model::DeleteCommentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCommentResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteCustomMetadataRequest&, const Model::DeleteCustomMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomMetadataResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteDocumentRequest&, const Model::DeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteDocumentVersionRequest&, const Model::DeleteDocumentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentVersionResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteFolderRequest&, const Model::DeleteFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFolderResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteFolderContentsRequest&, const Model::DeleteFolderContentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFolderContentsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteLabelsRequest&, const Model::DeleteLabelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLabelsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteNotificationSubscriptionRequest&, const Model::DeleteNotificationSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationSubscriptionResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeActivitiesRequest&, const Model::DescribeActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivitiesResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeCommentsRequest&, const Model::DescribeCommentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCommentsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeDocumentVersionsRequest&, const Model::DescribeDocumentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentVersionsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeFolderContentsRequest&, const Model::DescribeFolderContentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFolderContentsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeGroupsRequest&, const Model::DescribeGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeNotificationSubscriptionsRequest&, const Model::DescribeNotificationSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNotificationSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeResourcePermissionsRequest&, const Model::DescribeResourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeRootFoldersRequest&, const Model::DescribeRootFoldersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRootFoldersResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::DescribeUsersRequest&, const Model::DescribeUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUsersResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::GetCurrentUserRequest&, const Model::GetCurrentUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCurrentUserResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::GetDocumentRequest&, const Model::GetDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::GetDocumentPathRequest&, const Model::GetDocumentPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentPathResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::GetDocumentVersionRequest&, const Model::GetDocumentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentVersionResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::GetFolderRequest&, const Model::GetFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFolderResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::GetFolderPathRequest&, const Model::GetFolderPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFolderPathResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::GetResourcesRequest&, const Model::GetResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcesResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::InitiateDocumentVersionUploadRequest&, const Model::InitiateDocumentVersionUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitiateDocumentVersionUploadResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::RemoveAllResourcePermissionsRequest&, const Model::RemoveAllResourcePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAllResourcePermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::RemoveResourcePermissionRequest&, const Model::RemoveResourcePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveResourcePermissionResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::RestoreDocumentVersionsRequest&, const Model::RestoreDocumentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDocumentVersionsResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateDocumentRequest&, const Model::UpdateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateDocumentVersionRequest&, const Model::UpdateDocumentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentVersionResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateFolderRequest&, const Model::UpdateFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFolderResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WorkDocs
} // namespace Aws
