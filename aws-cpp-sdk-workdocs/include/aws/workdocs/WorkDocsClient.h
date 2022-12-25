/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workdocs/WorkDocsServiceClientModel.h>

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
  class AWS_WORKDOCS_API WorkDocsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<WorkDocsClient>
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
         * A Callable wrapper for AbortDocumentVersionUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AbortDocumentVersionUploadOutcomeCallable AbortDocumentVersionUploadCallable(const Model::AbortDocumentVersionUploadRequest& request) const;

        /**
         * An Async wrapper for AbortDocumentVersionUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ActivateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateUserOutcomeCallable ActivateUserCallable(const Model::ActivateUserRequest& request) const;

        /**
         * An Async wrapper for ActivateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for AddResourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddResourcePermissionsOutcomeCallable AddResourcePermissionsCallable(const Model::AddResourcePermissionsRequest& request) const;

        /**
         * An Async wrapper for AddResourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCommentOutcomeCallable CreateCommentCallable(const Model::CreateCommentRequest& request) const;

        /**
         * An Async wrapper for CreateComment that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateCustomMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomMetadataOutcomeCallable CreateCustomMetadataCallable(const Model::CreateCustomMetadataRequest& request) const;

        /**
         * An Async wrapper for CreateCustomMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFolderOutcomeCallable CreateFolderCallable(const Model::CreateFolderRequest& request) const;

        /**
         * An Async wrapper for CreateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLabelsOutcomeCallable CreateLabelsCallable(const Model::CreateLabelsRequest& request) const;

        /**
         * An Async wrapper for CreateLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLabelsAsync(const Model::CreateLabelsRequest& request, const CreateLabelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateNotificationSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNotificationSubscriptionOutcomeCallable CreateNotificationSubscriptionCallable(const Model::CreateNotificationSubscriptionRequest& request) const;

        /**
         * An Async wrapper for CreateNotificationSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeactivateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateUserOutcomeCallable DeactivateUserCallable(const Model::DeactivateUserRequest& request) const;

        /**
         * An Async wrapper for DeactivateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCommentOutcomeCallable DeleteCommentCallable(const Model::DeleteCommentRequest& request) const;

        /**
         * An Async wrapper for DeleteComment that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteCustomMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomMetadataOutcomeCallable DeleteCustomMetadataCallable(const Model::DeleteCustomMetadataRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request) const;

        /**
         * An Async wrapper for DeleteDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a version of an Amazon WorkDocs document. Use the
         * <code>DeletePriorVersions</code> parameter to delete prior
         * versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteDocumentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDocumentVersionOutcome DeleteDocumentVersion(const Model::DeleteDocumentVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDocumentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentVersionOutcomeCallable DeleteDocumentVersionCallable(const Model::DeleteDocumentVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteDocumentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentVersionAsync(const Model::DeleteDocumentVersionRequest& request, const DeleteDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently deletes the specified folder and its contents.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderOutcome DeleteFolder(const Model::DeleteFolderRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFolderOutcomeCallable DeleteFolderCallable(const Model::DeleteFolderRequest& request) const;

        /**
         * An Async wrapper for DeleteFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the contents of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DeleteFolderContents">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFolderContentsOutcome DeleteFolderContents(const Model::DeleteFolderContentsRequest& request) const;

        /**
         * A Callable wrapper for DeleteFolderContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFolderContentsOutcomeCallable DeleteFolderContentsCallable(const Model::DeleteFolderContentsRequest& request) const;

        /**
         * An Async wrapper for DeleteFolderContents that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteLabels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLabelsOutcomeCallable DeleteLabelsCallable(const Model::DeleteLabelsRequest& request) const;

        /**
         * An Async wrapper for DeleteLabels that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteNotificationSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNotificationSubscriptionOutcomeCallable DeleteNotificationSubscriptionCallable(const Model::DeleteNotificationSubscriptionRequest& request) const;

        /**
         * An Async wrapper for DeleteNotificationSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request) const;

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivitiesOutcomeCallable DescribeActivitiesCallable(const Model::DescribeActivitiesRequest& request) const;

        /**
         * An Async wrapper for DescribeActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeComments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCommentsOutcomeCallable DescribeCommentsCallable(const Model::DescribeCommentsRequest& request) const;

        /**
         * An Async wrapper for DescribeComments that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeDocumentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentVersionsOutcomeCallable DescribeDocumentVersionsCallable(const Model::DescribeDocumentVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeDocumentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeFolderContents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFolderContentsOutcomeCallable DescribeFolderContentsCallable(const Model::DescribeFolderContentsRequest& request) const;

        /**
         * An Async wrapper for DescribeFolderContents that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGroupsOutcomeCallable DescribeGroupsCallable(const Model::DescribeGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the specified notification subscriptions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/DescribeNotificationSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNotificationSubscriptionsOutcome DescribeNotificationSubscriptions(const Model::DescribeNotificationSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeNotificationSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNotificationSubscriptionsOutcomeCallable DescribeNotificationSubscriptionsCallable(const Model::DescribeNotificationSubscriptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeNotificationSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeResourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourcePermissionsOutcomeCallable DescribeResourcePermissionsCallable(const Model::DescribeResourcePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribeResourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeRootFolders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRootFoldersOutcomeCallable DescribeRootFoldersCallable(const Model::DescribeRootFoldersRequest& request) const;

        /**
         * An Async wrapper for DescribeRootFolders that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUsersOutcomeCallable DescribeUsersCallable(const Model::DescribeUsersRequest& request) const;

        /**
         * An Async wrapper for DescribeUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for GetCurrentUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCurrentUserOutcomeCallable GetCurrentUserCallable(const Model::GetCurrentUserRequest& request) const;

        /**
         * An Async wrapper for GetCurrentUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCurrentUserAsync(const Model::GetCurrentUserRequest& request, const GetCurrentUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details of a document.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * A Callable wrapper for GetDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentOutcomeCallable GetDocumentCallable(const Model::GetDocumentRequest& request) const;

        /**
         * An Async wrapper for GetDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetDocumentPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentPathOutcomeCallable GetDocumentPathCallable(const Model::GetDocumentPathRequest& request) const;

        /**
         * An Async wrapper for GetDocumentPath that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetDocumentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentVersionOutcomeCallable GetDocumentVersionCallable(const Model::GetDocumentVersionRequest& request) const;

        /**
         * An Async wrapper for GetDocumentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentVersionAsync(const Model::GetDocumentVersionRequest& request, const GetDocumentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata of the specified folder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/GetFolder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFolderOutcome GetFolder(const Model::GetFolderRequest& request) const;

        /**
         * A Callable wrapper for GetFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFolderOutcomeCallable GetFolderCallable(const Model::GetFolderRequest& request) const;

        /**
         * An Async wrapper for GetFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetFolderPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFolderPathOutcomeCallable GetFolderPathCallable(const Model::GetFolderPathRequest& request) const;

        /**
         * An Async wrapper for GetFolderPath that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcesOutcomeCallable GetResourcesCallable(const Model::GetResourcesRequest& request) const;

        /**
         * An Async wrapper for GetResources that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for InitiateDocumentVersionUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitiateDocumentVersionUploadOutcomeCallable InitiateDocumentVersionUploadCallable(const Model::InitiateDocumentVersionUploadRequest& request) const;

        /**
         * An Async wrapper for InitiateDocumentVersionUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RemoveAllResourcePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAllResourcePermissionsOutcomeCallable RemoveAllResourcePermissionsCallable(const Model::RemoveAllResourcePermissionsRequest& request) const;

        /**
         * An Async wrapper for RemoveAllResourcePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for RemoveResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveResourcePermissionOutcomeCallable RemoveResourcePermissionCallable(const Model::RemoveResourcePermissionRequest& request) const;

        /**
         * An Async wrapper for RemoveResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveResourcePermissionAsync(const Model::RemoveResourcePermissionRequest& request, const RemoveResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Recovers a deleted version of an Amazon WorkDocs document.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/RestoreDocumentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDocumentVersionsOutcome RestoreDocumentVersions(const Model::RestoreDocumentVersionsRequest& request) const;

        /**
         * A Callable wrapper for RestoreDocumentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreDocumentVersionsOutcomeCallable RestoreDocumentVersionsCallable(const Model::RestoreDocumentVersionsRequest& request) const;

        /**
         * An Async wrapper for RestoreDocumentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreDocumentVersionsAsync(const Model::RestoreDocumentVersionsRequest& request, const RestoreDocumentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attributes of a document. The user must have access to
         * both the document and its parent folder, if applicable.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UpdateDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDocumentOutcome UpdateDocument(const Model::UpdateDocumentRequest& request) const;

        /**
         * A Callable wrapper for UpdateDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentOutcomeCallable UpdateDocumentCallable(const Model::UpdateDocumentRequest& request) const;

        /**
         * An Async wrapper for UpdateDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateDocumentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDocumentVersionOutcomeCallable UpdateDocumentVersionCallable(const Model::UpdateDocumentVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateDocumentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateFolder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFolderOutcomeCallable UpdateFolderCallable(const Model::UpdateFolderRequest& request) const;

        /**
         * An Async wrapper for UpdateFolder that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<WorkDocsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<WorkDocsClient>;
      void init(const WorkDocsClientConfiguration& clientConfiguration);

      WorkDocsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<WorkDocsEndpointProviderBase> m_endpointProvider;
  };

} // namespace WorkDocs
} // namespace Aws
