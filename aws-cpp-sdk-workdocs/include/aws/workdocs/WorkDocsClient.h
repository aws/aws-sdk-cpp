/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workdocs/WorkDocsServiceClientModel.h>
#include <aws/workdocs/WorkDocsLegacyAsyncMacros.h>

namespace Aws
{
namespace WorkDocs
{
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
   * model.</p>  <p>The pricing for Amazon WorkDocs APIs varies depending on
   * the API call type for these actions:</p> <ul> <li> <p> <code>READ (Get*)</code>
   * </p> </li> <li> <p> <code>WRITE (Activate*, Add*, Create*, Deactivate*,
   * Initiate*, Update*)</code> </p> </li> <li> <p> <code>LIST (Describe*)</code>
   * </p> </li> <li> <p> <code>DELETE*, CANCEL</code> </p> </li> </ul> <p>For
   * information about Amazon WorkDocs API pricing, see <a
   * href="https://aws.amazon.com/workdocs/pricing/">Amazon WorkDocs Pricing</a>.</p>
   * 
   */
  class AWS_WORKDOCS_API WorkDocsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::WorkDocs::WorkDocsClientConfiguration& clientConfiguration = Aws::WorkDocs::WorkDocsClientConfiguration(),
                       std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG),
                       const Aws::WorkDocs::WorkDocsClientConfiguration& clientConfiguration = Aws::WorkDocs::WorkDocsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkDocsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider = Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG),
                       const Aws::WorkDocs::WorkDocsClientConfiguration& clientConfiguration = Aws::WorkDocs::WorkDocsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkDocsClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkDocsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~WorkDocsClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Activates the specified user. Only active users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ActivateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateUserOutcome ActivateUser(const Model::ActivateUserRequest& request) const;


        /**
         * <p>Creates a set of permissions for the specified folder or document. The
         * resource permissions are overwritten if the principals already have different
         * permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/AddResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::AddResourcePermissionsOutcome AddResourcePermissions(const Model::AddResourcePermissionsRequest& request) const;


        /**
         * <p>Adds a new comment to the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateComment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCommentOutcome CreateComment(const Model::CreateCommentRequest& request) const;


        /**
         * <p>Adds one or more custom properties to the specified resource (a folder,
         * document, or version).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateCustomMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomMetadataOutcome CreateCustomMetadata(const Model::CreateCustomMetadataRequest& request) const;


        /**
         * <p>Creates a folder with the specified name and parent folder.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFolderOutcome CreateFolder(const Model::CreateFolderRequest& request) const;


        /**
         * <p>Adds the specified list of labels to the given resource (a document or
         * folder)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLabelsOutcome CreateLabels(const Model::CreateLabelsRequest& request) const;


        /**
         * <p>Configure Amazon WorkDocs to use Amazon SNS notifications. The endpoint
         * receives a confirmation message, and must confirm the subscription.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/manage-notifications.html">Setting
         * up notifications for an IAM user or role</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateNotificationSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationSubscriptionOutcome CreateNotificationSubscription(const Model::CreateNotificationSubscriptionRequest& request) const;


        /**
         * <p>Creates a user in a Simple AD or Microsoft AD directory. The status of a
         * newly created user is "ACTIVE". New users can access Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;


        /**
         * <p>Deactivates the specified user, which revokes the user's access to Amazon
         * WorkDocs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeactivateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateUserOutcome DeactivateUser(const Model::DeactivateUserRequest& request) const;


        /**
         * <p>Deletes the specified comment from the document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteComment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCommentOutcome DeleteComment(const Model::DeleteCommentRequest& request) const;


        /**
         * <p>Deletes custom metadata from the specified resource.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteCustomMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomMetadataOutcome DeleteCustomMetadata(const Model::DeleteCustomMetadataRequest& request) const;


        /**
         * <p>Permanently deletes the specified document and its associated
         * metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;


        /**
         * <p>Deletes a version of an Amazon WorkDocs document. Use the
         * <code>DeletePriorVersions</code> parameter to delete prior
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentVersionOutcome DeleteDocumentVersion(const Model::DeleteDocumentVersionRequest& request) const;


        /**
         * <p>Permanently deletes the specified folder and its contents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest& request) const;


        /**
         * <p>Deletes the contents of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolderContents">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderContentsOutcome DeleteFolderContents(const Model::DeleteFolderContentsRequest& request) const;


        /**
         * <p>Deletes the specified list of labels from a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteLabels">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLabelsOutcome DeleteLabels(const Model::DeleteLabelsRequest& request) const;


        /**
         * <p>Deletes the specified subscription from the specified
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteNotificationSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationSubscriptionOutcome DeleteNotificationSubscription(const Model::DeleteNotificationSubscriptionRequest& request) const;


        /**
         * <p>Deletes the specified user from a Simple AD or Microsoft AD
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;


        /**
         * <p>Describes the user activities in a specified time period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivitiesOutcome DescribeActivities(const Model::DescribeActivitiesRequest& request) const;


        /**
         * <p>List all the comments for the specified document version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeComments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCommentsOutcome DescribeComments(const Model::DescribeCommentsRequest& request) const;


        /**
         * <p>Retrieves the document versions for the specified document.</p> <p>By
         * default, only active versions are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDocumentVersionsOutcome DescribeDocumentVersions(const Model::DescribeDocumentVersionsRequest& request) const;


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
         * <p>Describes the groups specified by the query. Groups are defined by the
         * underlying Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGroupsOutcome DescribeGroups(const Model::DescribeGroupsRequest& request) const;


        /**
         * <p>Lists the specified notification subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeNotificationSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationSubscriptionsOutcome DescribeNotificationSubscriptions(const Model::DescribeNotificationSubscriptionsRequest& request) const;


        /**
         * <p>Describes the permissions of a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePermissionsOutcome DescribeResourcePermissions(const Model::DescribeResourcePermissionsRequest& request) const;


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
         * <p>Retrieves details of the current user for whom the authentication token was
         * generated. This is not a valid action for SigV4 (administrative API)
         * clients.</p> <p>This action requires an authentication token. To get an
         * authentication token, register an application with Amazon WorkDocs. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/workdocs/latest/developerguide/wd-auth-user.html">Authentication
         * and Access Control for User Applications</a> in the <i>Amazon WorkDocs Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetCurrentUser">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentUserOutcome GetCurrentUser(const Model::GetCurrentUserRequest& request) const;


        /**
         * <p>Retrieves details of a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;


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
         * <p>Retrieves version metadata for the specified document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentVersionOutcome GetDocumentVersion(const Model::GetDocumentVersionRequest& request) const;


        /**
         * <p>Retrieves the metadata of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderOutcome GetFolder(const Model::GetFolderRequest& request) const;


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
         * <p>Retrieves a collection of resources, including folders and documents. The
         * only <code>CollectionType</code> supported is
         * <code>SHARED_WITH_ME</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetResources">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcesOutcome GetResources(const Model::GetResourcesRequest& request) const;


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
         * <p>Removes all the permissions from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveAllResourcePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAllResourcePermissionsOutcome RemoveAllResourcePermissions(const Model::RemoveAllResourcePermissionsRequest& request) const;


        /**
         * <p>Removes the permission for the specified principal from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RemoveResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveResourcePermissionOutcome RemoveResourcePermission(const Model::RemoveResourcePermissionRequest& request) const;


        /**
         * <p>Recovers a deleted version of an Amazon WorkDocs document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RestoreDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDocumentVersionsOutcome RestoreDocumentVersions(const Model::RestoreDocumentVersionsRequest& request) const;


        /**
         * <p>Updates the specified attributes of a document. The user must have access to
         * both the document and its parent folder, if applicable.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;


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
         * <p>Updates the specified attributes of the specified folder. The user must have
         * access to both the folder and its parent folder, if applicable.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFolderOutcome UpdateFolder(const Model::UpdateFolderRequest& request) const;


        /**
         * <p>Updates the specified attributes of the specified user, and grants or revokes
         * administrative privileges to the Amazon WorkDocs site.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkDocsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const WorkDocsClientConfiguration& clientConfiguration);

      WorkDocsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkDocsEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkDocs
} // namespace Aws
