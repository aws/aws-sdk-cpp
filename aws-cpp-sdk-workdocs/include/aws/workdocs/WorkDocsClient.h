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

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class UpdateDocumentRequest;
        class UpdateDocumentVersionRequest;
        class UpdateFolderRequest;
        class UpdateUserRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> AbortDocumentVersionUploadOutcome;
        typedef Aws::Utils::Outcome<ActivateUserResult, Aws::Client::AWSError<WorkDocsErrors>> ActivateUserOutcome;
        typedef Aws::Utils::Outcome<AddResourcePermissionsResult, Aws::Client::AWSError<WorkDocsErrors>> AddResourcePermissionsOutcome;
        typedef Aws::Utils::Outcome<CreateCommentResult, Aws::Client::AWSError<WorkDocsErrors>> CreateCommentOutcome;
        typedef Aws::Utils::Outcome<CreateCustomMetadataResult, Aws::Client::AWSError<WorkDocsErrors>> CreateCustomMetadataOutcome;
        typedef Aws::Utils::Outcome<CreateFolderResult, Aws::Client::AWSError<WorkDocsErrors>> CreateFolderOutcome;
        typedef Aws::Utils::Outcome<CreateLabelsResult, Aws::Client::AWSError<WorkDocsErrors>> CreateLabelsOutcome;
        typedef Aws::Utils::Outcome<CreateNotificationSubscriptionResult, Aws::Client::AWSError<WorkDocsErrors>> CreateNotificationSubscriptionOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, Aws::Client::AWSError<WorkDocsErrors>> CreateUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> DeactivateUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteCommentOutcome;
        typedef Aws::Utils::Outcome<DeleteCustomMetadataResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteCustomMetadataOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteDocumentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteFolderOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteFolderContentsOutcome;
        typedef Aws::Utils::Outcome<DeleteLabelsResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteLabelsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteNotificationSubscriptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> DeleteUserOutcome;
        typedef Aws::Utils::Outcome<DescribeActivitiesResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeActivitiesOutcome;
        typedef Aws::Utils::Outcome<DescribeCommentsResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeCommentsOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentVersionsResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeDocumentVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeFolderContentsResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeFolderContentsOutcome;
        typedef Aws::Utils::Outcome<DescribeGroupsResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeNotificationSubscriptionsResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeNotificationSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<DescribeResourcePermissionsResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeResourcePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeRootFoldersResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeRootFoldersOutcome;
        typedef Aws::Utils::Outcome<DescribeUsersResult, Aws::Client::AWSError<WorkDocsErrors>> DescribeUsersOutcome;
        typedef Aws::Utils::Outcome<GetCurrentUserResult, Aws::Client::AWSError<WorkDocsErrors>> GetCurrentUserOutcome;
        typedef Aws::Utils::Outcome<GetDocumentResult, Aws::Client::AWSError<WorkDocsErrors>> GetDocumentOutcome;
        typedef Aws::Utils::Outcome<GetDocumentPathResult, Aws::Client::AWSError<WorkDocsErrors>> GetDocumentPathOutcome;
        typedef Aws::Utils::Outcome<GetDocumentVersionResult, Aws::Client::AWSError<WorkDocsErrors>> GetDocumentVersionOutcome;
        typedef Aws::Utils::Outcome<GetFolderResult, Aws::Client::AWSError<WorkDocsErrors>> GetFolderOutcome;
        typedef Aws::Utils::Outcome<GetFolderPathResult, Aws::Client::AWSError<WorkDocsErrors>> GetFolderPathOutcome;
        typedef Aws::Utils::Outcome<GetResourcesResult, Aws::Client::AWSError<WorkDocsErrors>> GetResourcesOutcome;
        typedef Aws::Utils::Outcome<InitiateDocumentVersionUploadResult, Aws::Client::AWSError<WorkDocsErrors>> InitiateDocumentVersionUploadOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> RemoveAllResourcePermissionsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> RemoveResourcePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> UpdateDocumentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> UpdateDocumentVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<WorkDocsErrors>> UpdateFolderOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, Aws::Client::AWSError<WorkDocsErrors>> UpdateUserOutcome;

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
        typedef std::future<UpdateDocumentOutcome> UpdateDocumentOutcomeCallable;
        typedef std::future<UpdateDocumentVersionOutcome> UpdateDocumentVersionOutcomeCallable;
        typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
} // namespace Model

  class WorkDocsClient;

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
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateDocumentRequest&, const Model::UpdateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateDocumentVersionRequest&, const Model::UpdateDocumentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentVersionResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateFolderRequest&, const Model::UpdateFolderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFolderResponseReceivedHandler;
    typedef std::function<void(const WorkDocsClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;

  /**
   * <p>The WorkDocs API is designed for the following use cases:</p> <ul> <li>
   * <p>File Migration: File migration applications are supported for users who want
   * to migrate their files from an on-premises or off-premises file system or
   * service. Users can insert files into a user directory structure, as well as
   * allow for basic metadata changes, such as modifications to the permissions of
   * files.</p> </li> <li> <p>Security: Support security applications are supported
   * for users who have additional security needs, such as antivirus or data loss
   * prevention. The API actions, along with AWS CloudTrail, allow these applications
   * to detect when changes occur in Amazon WorkDocs. Then, the application can take
   * the necessary actions and replace the target file. If the target file violates
   * the policy, the application can also choose to email the user.</p> </li> <li>
   * <p>eDiscovery/Analytics: General administrative applications are supported, such
   * as eDiscovery and analytics. These applications can choose to mimic or record
   * the actions in an Amazon WorkDocs site, along with AWS CloudTrail, to replicate
   * data for eDiscovery, backup, or analytical applications.</p> </li> </ul> <p>All
   * Amazon WorkDocs API actions are Amazon authenticated and certificate-signed.
   * They not only require the use of the AWS SDK, but also allow for the exclusive
   * use of IAM users and roles to help facilitate access, trust, and permission
   * policies. By creating a role and allowing an IAM user to access the Amazon
   * WorkDocs site, the IAM user gains full administrative visibility into the entire
   * Amazon WorkDocs site (or as set in the IAM policy). This includes, but is not
   * limited to, the ability to modify file permissions and upload any file to any
   * user. This allows developers to perform the three use cases above, as well as
   * give users the ability to grant access on a selective basis using the IAM
   * model.</p>
   */
  class AWS_WORKDOCS_API WorkDocsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkDocsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WorkDocsClient();

        inline virtual const char* GetServiceClientName() const override { return "WorkDocs"; }


        /**
         * <p>Aborts the upload of the specified document version that was previously
         * initiated by <a>InitiateDocumentVersionUpload</a>. The client should make this
         * call only when it no longer intends to upload the document version, or fails to
         * do so.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AbortDocumentVersionUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortDocumentVersionUploadOutcome AbortDocumentVersionUpload(const Model::AbortDocumentVersionUploadRequest& request) const;

        /**
         * <p>Aborts the upload of the specified document version that was previously
         * initiated by <a>InitiateDocumentVersionUpload</a>. The client should make this
         * call only when it no longer intends to upload the document version, or fails to
         * do so.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AbortDocumentVersionUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AbortDocumentVersionUploadOutcomeCallable AbortDocumentVersionUploadCallable(const Model::AbortDocumentVersionUploadRequest& request) const;

        /**
         * <p>Aborts the upload of the specified document version that was previously
         * initiated by <a>InitiateDocumentVersionUpload</a>. The client should make this
         * call only when it no longer intends to upload the document version, or fails to
         * do so.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AbortDocumentVersionUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AbortDocumentVersionUploadAsync(const Model::AbortDocumentVersionUploadRequest& request, const AbortDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Activates the specified user. Only active users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ActivateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateUserOutcome ActivateUser(const Model::ActivateUserRequest& request) const;

        /**
         * <p>Activates the specified user. Only active users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ActivateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateUserOutcomeCallable ActivateUserCallable(const Model::ActivateUserRequest& request) const;

        /**
         * <p>Activates the specified user. Only active users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ActivateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateUserAsync(const Model::ActivateUserRequest& request, const ActivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a set of permissions for the specified folder or document. The
         * resource permissions are overwritten if the principals already have different
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AddResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::AddResourcePermissionsOutcome AddResourcePermissions(const Model::AddResourcePermissionsRequest& request) const;

        /**
         * <p>Creates a set of permissions for the specified folder or document. The
         * resource permissions are overwritten if the principals already have different
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AddResourcePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddResourcePermissionsOutcomeCallable AddResourcePermissionsCallable(const Model::AddResourcePermissionsRequest& request) const;

        /**
         * <p>Creates a set of permissions for the specified folder or document. The
         * resource permissions are overwritten if the principals already have different
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AddResourcePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddResourcePermissionsAsync(const Model::AddResourcePermissionsRequest& request, const AddResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a new comment to the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateComment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCommentOutcome CreateComment(const Model::CreateCommentRequest& request) const;

        /**
         * <p>Adds a new comment to the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateComment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCommentOutcomeCallable CreateCommentCallable(const Model::CreateCommentRequest& request) const;

        /**
         * <p>Adds a new comment to the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateComment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCommentAsync(const Model::CreateCommentRequest& request, const CreateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more custom properties to the specified resource (a folder,
         * document, or version).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateCustomMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomMetadataOutcome CreateCustomMetadata(const Model::CreateCustomMetadataRequest& request) const;

        /**
         * <p>Adds one or more custom properties to the specified resource (a folder,
         * document, or version).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateCustomMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomMetadataOutcomeCallable CreateCustomMetadataCallable(const Model::CreateCustomMetadataRequest& request) const;

        /**
         * <p>Adds one or more custom properties to the specified resource (a folder,
         * document, or version).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateCustomMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomMetadataAsync(const Model::CreateCustomMetadataRequest& request, const CreateCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a folder with the specified name and parent folder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest& request) const;

        /**
         * <p>Creates a folder with the specified name and parent folder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateFolder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request) const;

        /**
         * <p>Creates a folder with the specified name and parent folder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateFolder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified list of labels to the given resource (a document or
         * folder)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelsOutcome CreateLabels(const Model::CreateLabelsRequest& request) const;

        /**
         * <p>Adds the specified list of labels to the given resource (a document or
         * folder)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateLabels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLabelsOutcomeCallable CreateLabelsCallable(const Model::CreateLabelsRequest& request) const;

        /**
         * <p>Adds the specified list of labels to the given resource (a document or
         * folder)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateLabels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLabelsAsync(const Model::CreateLabelsRequest& request, const CreateLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configure Amazon WorkDocs to use Amazon SNS notifications. The endpoint
         * receives a confirmation message, and must confirm the subscription.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/subscribe-notifications.html">Subscribe
         * to Notifications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateNotificationSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationSubscriptionOutcome CreateNotificationSubscription(const Model::CreateNotificationSubscriptionRequest& request) const;

        /**
         * <p>Configure Amazon WorkDocs to use Amazon SNS notifications. The endpoint
         * receives a confirmation message, and must confirm the subscription.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/subscribe-notifications.html">Subscribe
         * to Notifications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateNotificationSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotificationSubscriptionOutcomeCallable CreateNotificationSubscriptionCallable(const Model::CreateNotificationSubscriptionRequest& request) const;

        /**
         * <p>Configure Amazon WorkDocs to use Amazon SNS notifications. The endpoint
         * receives a confirmation message, and must confirm the subscription.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/subscribe-notifications.html">Subscribe
         * to Notifications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateNotificationSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNotificationSubscriptionAsync(const Model::CreateNotificationSubscriptionRequest& request, const CreateNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user in a Simple AD or Microsoft AD directory. The status of a
         * newly created user is "ACTIVE". New users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user in a Simple AD or Microsoft AD directory. The status of a
         * newly created user is "ACTIVE". New users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user in a Simple AD or Microsoft AD directory. The status of a
         * newly created user is "ACTIVE". New users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates the specified user, which revokes the user's access to Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeactivateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateUserOutcome DeactivateUser(const Model::DeactivateUserRequest& request) const;

        /**
         * <p>Deactivates the specified user, which revokes the user's access to Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeactivateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateUserOutcomeCallable DeactivateUserCallable(const Model::DeactivateUserRequest& request) const;

        /**
         * <p>Deactivates the specified user, which revokes the user's access to Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeactivateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateUserAsync(const Model::DeactivateUserRequest& request, const DeactivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified comment from the document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteComment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCommentOutcome DeleteComment(const Model::DeleteCommentRequest& request) const;

        /**
         * <p>Deletes the specified comment from the document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteComment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCommentOutcomeCallable DeleteCommentCallable(const Model::DeleteCommentRequest& request) const;

        /**
         * <p>Deletes the specified comment from the document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteComment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCommentAsync(const Model::DeleteCommentRequest& request, const DeleteCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes custom metadata from the specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteCustomMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomMetadataOutcome DeleteCustomMetadata(const Model::DeleteCustomMetadataRequest& request) const;

        /**
         * <p>Deletes custom metadata from the specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteCustomMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomMetadataOutcomeCallable DeleteCustomMetadataCallable(const Model::DeleteCustomMetadataRequest& request) const;

        /**
         * <p>Deletes custom metadata from the specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteCustomMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomMetadataAsync(const Model::DeleteCustomMetadataRequest& request, const DeleteCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the specified document and its associated
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Permanently deletes the specified document and its associated
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Permanently deletes the specified document and its associated
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the specified folder and its contents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest& request) const;

        /**
         * <p>Permanently deletes the specified folder and its contents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFolderOutcomeCallable DeleteFolderCallable(const Model::DeleteFolderRequest& request) const;

        /**
         * <p>Permanently deletes the specified folder and its contents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the contents of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolderContents">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderContentsOutcome DeleteFolderContents(const Model::DeleteFolderContentsRequest& request) const;

        /**
         * <p>Deletes the contents of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolderContents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFolderContentsOutcomeCallable DeleteFolderContentsCallable(const Model::DeleteFolderContentsRequest& request) const;

        /**
         * <p>Deletes the contents of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolderContents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFolderContentsAsync(const Model::DeleteFolderContentsRequest& request, const DeleteFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified list of labels from a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelsOutcome DeleteLabels(const Model::DeleteLabelsRequest& request) const;

        /**
         * <p>Deletes the specified list of labels from a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteLabels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLabelsOutcomeCallable DeleteLabelsCallable(const Model::DeleteLabelsRequest& request) const;

        /**
         * <p>Deletes the specified list of labels from a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteLabels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLabelsAsync(const Model::DeleteLabelsRequest& request, const DeleteLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified subscription from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteNotificationSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationSubscriptionOutcome DeleteNotificationSubscription(const Model::DeleteNotificationSubscriptionRequest& request) const;

        /**
         * <p>Deletes the specified subscription from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteNotificationSubscription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationSubscriptionOutcomeCallable DeleteNotificationSubscriptionCallable(const Model::DeleteNotificationSubscriptionRequest& request) const;

        /**
         * <p>Deletes the specified subscription from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteNotificationSubscription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNotificationSubscriptionAsync(const Model::DeleteNotificationSubscriptionRequest& request, const DeleteNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified user from a Simple AD or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the specified user from a Simple AD or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * <p>Deletes the specified user from a Simple AD or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the user activities in a specified time period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivitiesOutcome DescribeActivities(const Model::DescribeActivitiesRequest& request) const;

        /**
         * <p>Describes the user activities in a specified time period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeActivities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivitiesOutcomeCallable DescribeActivitiesCallable(const Model::DescribeActivitiesRequest& request) const;

        /**
         * <p>Describes the user activities in a specified time period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeActivities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivitiesAsync(const Model::DescribeActivitiesRequest& request, const DescribeActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all the comments for the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeComments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCommentsOutcome DescribeComments(const Model::DescribeCommentsRequest& request) const;

        /**
         * <p>List all the comments for the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeComments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCommentsOutcomeCallable DescribeCommentsCallable(const Model::DescribeCommentsRequest& request) const;

        /**
         * <p>List all the comments for the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeComments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCommentsAsync(const Model::DescribeCommentsRequest& request, const DescribeCommentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the document versions for the specified document.</p> <p>By
         * default, only active versions are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentVersionsOutcome DescribeDocumentVersions(const Model::DescribeDocumentVersionsRequest& request) const;

        /**
         * <p>Retrieves the document versions for the specified document.</p> <p>By
         * default, only active versions are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeDocumentVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentVersionsOutcomeCallable DescribeDocumentVersionsCallable(const Model::DescribeDocumentVersionsRequest& request) const;

        /**
         * <p>Retrieves the document versions for the specified document.</p> <p>By
         * default, only active versions are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeDocumentVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentVersionsAsync(const Model::DescribeDocumentVersionsRequest& request, const DescribeDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the contents of the specified folder, including its documents and
         * subfolders.</p> <p>By default, Amazon WorkDocs returns the first 100 active
         * document and folder metadata items. If there are more results, the response
         * includes a marker that you can use to request the next set of results. You can
         * also request initialized documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeFolderContents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFolderContentsOutcome DescribeFolderContents(const Model::DescribeFolderContentsRequest& request) const;

        /**
         * <p>Describes the contents of the specified folder, including its documents and
         * subfolders.</p> <p>By default, Amazon WorkDocs returns the first 100 active
         * document and folder metadata items. If there are more results, the response
         * includes a marker that you can use to request the next set of results. You can
         * also request initialized documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeFolderContents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFolderContentsOutcomeCallable DescribeFolderContentsCallable(const Model::DescribeFolderContentsRequest& request) const;

        /**
         * <p>Describes the contents of the specified folder, including its documents and
         * subfolders.</p> <p>By default, Amazon WorkDocs returns the first 100 active
         * document and folder metadata items. If there are more results, the response
         * includes a marker that you can use to request the next set of results. You can
         * also request initialized documents.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeFolderContents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFolderContentsAsync(const Model::DescribeFolderContentsRequest& request, const DescribeFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the groups specified by the query. Groups are defined by the
         * underlying Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupsOutcome DescribeGroups(const Model::DescribeGroupsRequest& request) const;

        /**
         * <p>Describes the groups specified by the query. Groups are defined by the
         * underlying Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGroupsOutcomeCallable DescribeGroupsCallable(const Model::DescribeGroupsRequest& request) const;

        /**
         * <p>Describes the groups specified by the query. Groups are defined by the
         * underlying Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the specified notification subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeNotificationSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationSubscriptionsOutcome DescribeNotificationSubscriptions(const Model::DescribeNotificationSubscriptionsRequest& request) const;

        /**
         * <p>Lists the specified notification subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeNotificationSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationSubscriptionsOutcomeCallable DescribeNotificationSubscriptionsCallable(const Model::DescribeNotificationSubscriptionsRequest& request) const;

        /**
         * <p>Lists the specified notification subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeNotificationSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNotificationSubscriptionsAsync(const Model::DescribeNotificationSubscriptionsRequest& request, const DescribeNotificationSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions of a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePermissionsOutcome DescribeResourcePermissions(const Model::DescribeResourcePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions of a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeResourcePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourcePermissionsOutcomeCallable DescribeResourcePermissionsCallable(const Model::DescribeResourcePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions of a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeResourcePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourcePermissionsAsync(const Model::DescribeResourcePermissionsRequest& request, const DescribeResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the current user's special folders; the <code>RootFolder</code> and
         * the <code>RecycleBin</code>. <code>RootFolder</code> is the root of user's files
         * and folders and <code>RecycleBin</code> is the root of recycled items. This is
         * not a valid action for SigV4 (administrative API) clients.</p> <p>This action
         * requires an authentication token. To get an authentication token, register an
         * application with Amazon WorkDocs. For more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication
         * and Access Control for User Applications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeRootFolders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRootFoldersOutcome DescribeRootFolders(const Model::DescribeRootFoldersRequest& request) const;

        /**
         * <p>Describes the current user's special folders; the <code>RootFolder</code> and
         * the <code>RecycleBin</code>. <code>RootFolder</code> is the root of user's files
         * and folders and <code>RecycleBin</code> is the root of recycled items. This is
         * not a valid action for SigV4 (administrative API) clients.</p> <p>This action
         * requires an authentication token. To get an authentication token, register an
         * application with Amazon WorkDocs. For more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication
         * and Access Control for User Applications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeRootFolders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRootFoldersOutcomeCallable DescribeRootFoldersCallable(const Model::DescribeRootFoldersRequest& request) const;

        /**
         * <p>Describes the current user's special folders; the <code>RootFolder</code> and
         * the <code>RecycleBin</code>. <code>RootFolder</code> is the root of user's files
         * and folders and <code>RecycleBin</code> is the root of recycled items. This is
         * not a valid action for SigV4 (administrative API) clients.</p> <p>This action
         * requires an authentication token. To get an authentication token, register an
         * application with Amazon WorkDocs. For more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication
         * and Access Control for User Applications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeRootFolders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRootFoldersAsync(const Model::DescribeRootFoldersRequest& request, const DescribeRootFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified users. You can describe all users or filter the
         * results (for example, by status or organization).</p> <p>By default, Amazon
         * WorkDocs returns the first 24 active or pending users. If there are more
         * results, the response includes a marker that you can use to request the next set
         * of results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUsersOutcome DescribeUsers(const Model::DescribeUsersRequest& request) const;

        /**
         * <p>Describes the specified users. You can describe all users or filter the
         * results (for example, by status or organization).</p> <p>By default, Amazon
         * WorkDocs returns the first 24 active or pending users. If there are more
         * results, the response includes a marker that you can use to request the next set
         * of results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request) const;

        /**
         * <p>Describes the specified users. You can describe all users or filter the
         * results (for example, by status or organization).</p> <p>By default, Amazon
         * WorkDocs returns the first 24 active or pending users. If there are more
         * results, the response includes a marker that you can use to request the next set
         * of results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details of the current user for whom the authentication token was
         * generated. This is not a valid action for SigV4 (administrative API)
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetCurrentUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentUserOutcome GetCurrentUser(const Model::GetCurrentUserRequest& request) const;

        /**
         * <p>Retrieves details of the current user for whom the authentication token was
         * generated. This is not a valid action for SigV4 (administrative API)
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetCurrentUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCurrentUserOutcomeCallable GetCurrentUserCallable(const Model::GetCurrentUserRequest& request) const;

        /**
         * <p>Retrieves details of the current user for whom the authentication token was
         * generated. This is not a valid action for SigV4 (administrative API)
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetCurrentUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCurrentUserAsync(const Model::GetCurrentUserRequest& request, const GetCurrentUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details of a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Retrieves details of a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentOutcomeCallable GetDocumentCallable(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Retrieves details of a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentAsync(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * requested document.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested document and only includes the IDs of the
         * parent folders in the path. You can limit the maximum number of levels. You can
         * also request the names of the parent folders.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentPathOutcome GetDocumentPath(const Model::GetDocumentPathRequest& request) const;

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * requested document.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested document and only includes the IDs of the
         * parent folders in the path. You can limit the maximum number of levels. You can
         * also request the names of the parent folders.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentPath">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentPathOutcomeCallable GetDocumentPathCallable(const Model::GetDocumentPathRequest& request) const;

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * requested document.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested document and only includes the IDs of the
         * parent folders in the path. You can limit the maximum number of levels. You can
         * also request the names of the parent folders.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentPath">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentPathAsync(const Model::GetDocumentPathRequest& request, const GetDocumentPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves version metadata for the specified document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentVersionOutcome GetDocumentVersion(const Model::GetDocumentVersionRequest& request) const;

        /**
         * <p>Retrieves version metadata for the specified document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentVersionOutcomeCallable GetDocumentVersionCallable(const Model::GetDocumentVersionRequest& request) const;

        /**
         * <p>Retrieves version metadata for the specified document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentVersionAsync(const Model::GetDocumentVersionRequest& request, const GetDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderOutcome GetFolder(const Model::GetFolderRequest& request) const;

        /**
         * <p>Retrieves the metadata of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFolderOutcomeCallable GetFolderCallable(const Model::GetFolderRequest& request) const;

        /**
         * <p>Retrieves the metadata of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFolderAsync(const Model::GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * specified folder.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested folder and only includes the IDs of the parent
         * folders in the path. You can limit the maximum number of levels. You can also
         * request the parent folder names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolderPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderPathOutcome GetFolderPath(const Model::GetFolderPathRequest& request) const;

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * specified folder.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested folder and only includes the IDs of the parent
         * folders in the path. You can limit the maximum number of levels. You can also
         * request the parent folder names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolderPath">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFolderPathOutcomeCallable GetFolderPathCallable(const Model::GetFolderPathRequest& request) const;

        /**
         * <p>Retrieves the path information (the hierarchy from the root folder) for the
         * specified folder.</p> <p>By default, Amazon WorkDocs returns a maximum of 100
         * levels upwards from the requested folder and only includes the IDs of the parent
         * folders in the path. You can limit the maximum number of levels. You can also
         * request the parent folder names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolderPath">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFolderPathAsync(const Model::GetFolderPathRequest& request, const GetFolderPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of resources, including folders and documents. The
         * only <code>CollectionType</code> supported is
         * <code>SHARED_WITH_ME</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Retrieves a collection of resources, including folders and documents. The
         * only <code>CollectionType</code> supported is
         * <code>SHARED_WITH_ME</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcesOutcomeCallable GetResourcesCallable(const Model::GetResourcesRequest& request) const;

        /**
         * <p>Retrieves a collection of resources, including folders and documents. The
         * only <code>CollectionType</code> supported is
         * <code>SHARED_WITH_ME</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcesAsync(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new document object and version object.</p> <p>The client specifies
         * the parent folder ID and name of the document to upload. The ID is optionally
         * specified when creating a new version of an existing document. This is the first
         * step to upload a document. Next, upload the document to the URL returned from
         * the call, and then call <a>UpdateDocumentVersion</a>.</p> <p>To cancel the
         * document upload, call <a>AbortDocumentVersionUpload</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/InitiateDocumentVersionUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::InitiateDocumentVersionUploadOutcome InitiateDocumentVersionUpload(const Model::InitiateDocumentVersionUploadRequest& request) const;

        /**
         * <p>Creates a new document object and version object.</p> <p>The client specifies
         * the parent folder ID and name of the document to upload. The ID is optionally
         * specified when creating a new version of an existing document. This is the first
         * step to upload a document. Next, upload the document to the URL returned from
         * the call, and then call <a>UpdateDocumentVersion</a>.</p> <p>To cancel the
         * document upload, call <a>AbortDocumentVersionUpload</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/InitiateDocumentVersionUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateDocumentVersionUploadOutcomeCallable InitiateDocumentVersionUploadCallable(const Model::InitiateDocumentVersionUploadRequest& request) const;

        /**
         * <p>Creates a new document object and version object.</p> <p>The client specifies
         * the parent folder ID and name of the document to upload. The ID is optionally
         * specified when creating a new version of an existing document. This is the first
         * step to upload a document. Next, upload the document to the URL returned from
         * the call, and then call <a>UpdateDocumentVersion</a>.</p> <p>To cancel the
         * document upload, call <a>AbortDocumentVersionUpload</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/InitiateDocumentVersionUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitiateDocumentVersionUploadAsync(const Model::InitiateDocumentVersionUploadRequest& request, const InitiateDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes all the permissions from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveAllResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAllResourcePermissionsOutcome RemoveAllResourcePermissions(const Model::RemoveAllResourcePermissionsRequest& request) const;

        /**
         * <p>Removes all the permissions from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveAllResourcePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAllResourcePermissionsOutcomeCallable RemoveAllResourcePermissionsCallable(const Model::RemoveAllResourcePermissionsRequest& request) const;

        /**
         * <p>Removes all the permissions from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveAllResourcePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAllResourcePermissionsAsync(const Model::RemoveAllResourcePermissionsRequest& request, const RemoveAllResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the permission for the specified principal from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveResourcePermissionOutcome RemoveResourcePermission(const Model::RemoveResourcePermissionRequest& request) const;

        /**
         * <p>Removes the permission for the specified principal from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveResourcePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveResourcePermissionOutcomeCallable RemoveResourcePermissionCallable(const Model::RemoveResourcePermissionRequest& request) const;

        /**
         * <p>Removes the permission for the specified principal from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveResourcePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveResourcePermissionAsync(const Model::RemoveResourcePermissionRequest& request, const RemoveResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attributes of a document. The user must have access to
         * both the document and its parent folder, if applicable.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>Updates the specified attributes of a document. The user must have access to
         * both the document and its parent folder, if applicable.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocument">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentOutcomeCallable UpdateDocumentCallable(const Model::UpdateDocumentRequest& request) const;

        /**
         * <p>Updates the specified attributes of a document. The user must have access to
         * both the document and its parent folder, if applicable.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocument">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentAsync(const Model::UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Changes the status of the document version to ACTIVE. </p> <p>Amazon WorkDocs
         * also sets its document container to ACTIVE. This is the last step in a document
         * upload, after the client uploads the document to an S3-presigned URL returned by
         * <a>InitiateDocumentVersionUpload</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentVersionOutcome UpdateDocumentVersion(const Model::UpdateDocumentVersionRequest& request) const;

        /**
         * <p>Changes the status of the document version to ACTIVE. </p> <p>Amazon WorkDocs
         * also sets its document container to ACTIVE. This is the last step in a document
         * upload, after the client uploads the document to an S3-presigned URL returned by
         * <a>InitiateDocumentVersionUpload</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocumentVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentVersionOutcomeCallable UpdateDocumentVersionCallable(const Model::UpdateDocumentVersionRequest& request) const;

        /**
         * <p>Changes the status of the document version to ACTIVE. </p> <p>Amazon WorkDocs
         * also sets its document container to ACTIVE. This is the last step in a document
         * upload, after the client uploads the document to an S3-presigned URL returned by
         * <a>InitiateDocumentVersionUpload</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocumentVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDocumentVersionAsync(const Model::UpdateDocumentVersionRequest& request, const UpdateDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attributes of the specified folder. The user must have
         * access to both the folder and its parent folder, if applicable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest& request) const;

        /**
         * <p>Updates the specified attributes of the specified folder. The user must have
         * access to both the folder and its parent folder, if applicable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateFolder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFolderOutcomeCallable UpdateFolderCallable(const Model::UpdateFolderRequest& request) const;

        /**
         * <p>Updates the specified attributes of the specified folder. The user must have
         * access to both the folder and its parent folder, if applicable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateFolder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFolderAsync(const Model::UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attributes of the specified user, and grants or revokes
         * administrative privileges to the Amazon WorkDocs site.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates the specified attributes of the specified user, and grants or revokes
         * administrative privileges to the Amazon WorkDocs site.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates the specified attributes of the specified user, and grants or revokes
         * administrative privileges to the Amazon WorkDocs site.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AbortDocumentVersionUploadAsyncHelper(const Model::AbortDocumentVersionUploadRequest& request, const AbortDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ActivateUserAsyncHelper(const Model::ActivateUserRequest& request, const ActivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AddResourcePermissionsAsyncHelper(const Model::AddResourcePermissionsRequest& request, const AddResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCommentAsyncHelper(const Model::CreateCommentRequest& request, const CreateCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCustomMetadataAsyncHelper(const Model::CreateCustomMetadataRequest& request, const CreateCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFolderAsyncHelper(const Model::CreateFolderRequest& request, const CreateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLabelsAsyncHelper(const Model::CreateLabelsRequest& request, const CreateLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNotificationSubscriptionAsyncHelper(const Model::CreateNotificationSubscriptionRequest& request, const CreateNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeactivateUserAsyncHelper(const Model::DeactivateUserRequest& request, const DeactivateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCommentAsyncHelper(const Model::DeleteCommentRequest& request, const DeleteCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCustomMetadataAsyncHelper(const Model::DeleteCustomMetadataRequest& request, const DeleteCustomMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDocumentAsyncHelper(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFolderAsyncHelper(const Model::DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFolderContentsAsyncHelper(const Model::DeleteFolderContentsRequest& request, const DeleteFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLabelsAsyncHelper(const Model::DeleteLabelsRequest& request, const DeleteLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNotificationSubscriptionAsyncHelper(const Model::DeleteNotificationSubscriptionRequest& request, const DeleteNotificationSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserAsyncHelper(const Model::DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActivitiesAsyncHelper(const Model::DescribeActivitiesRequest& request, const DescribeActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCommentsAsyncHelper(const Model::DescribeCommentsRequest& request, const DescribeCommentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentVersionsAsyncHelper(const Model::DescribeDocumentVersionsRequest& request, const DescribeDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFolderContentsAsyncHelper(const Model::DescribeFolderContentsRequest& request, const DescribeFolderContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeGroupsAsyncHelper(const Model::DescribeGroupsRequest& request, const DescribeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNotificationSubscriptionsAsyncHelper(const Model::DescribeNotificationSubscriptionsRequest& request, const DescribeNotificationSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourcePermissionsAsyncHelper(const Model::DescribeResourcePermissionsRequest& request, const DescribeResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRootFoldersAsyncHelper(const Model::DescribeRootFoldersRequest& request, const DescribeRootFoldersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUsersAsyncHelper(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCurrentUserAsyncHelper(const Model::GetCurrentUserRequest& request, const GetCurrentUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentAsyncHelper(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentPathAsyncHelper(const Model::GetDocumentPathRequest& request, const GetDocumentPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentVersionAsyncHelper(const Model::GetDocumentVersionRequest& request, const GetDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFolderAsyncHelper(const Model::GetFolderRequest& request, const GetFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFolderPathAsyncHelper(const Model::GetFolderPathRequest& request, const GetFolderPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcesAsyncHelper(const Model::GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitiateDocumentVersionUploadAsyncHelper(const Model::InitiateDocumentVersionUploadRequest& request, const InitiateDocumentVersionUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAllResourcePermissionsAsyncHelper(const Model::RemoveAllResourcePermissionsRequest& request, const RemoveAllResourcePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveResourcePermissionAsyncHelper(const Model::RemoveResourcePermissionRequest& request, const RemoveResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentAsyncHelper(const Model::UpdateDocumentRequest& request, const UpdateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDocumentVersionAsyncHelper(const Model::UpdateDocumentVersionRequest& request, const UpdateDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFolderAsyncHelper(const Model::UpdateFolderRequest& request, const UpdateFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkDocs
} // namespace Aws
