/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces/model/CreateTagsResult.h>
#include <aws/workspaces/model/CreateWorkspacesResult.h>
#include <aws/workspaces/model/DeleteTagsResult.h>
#include <aws/workspaces/model/DescribeTagsResult.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesResult.h>
#include <aws/workspaces/model/DescribeWorkspacesResult.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusResult.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesResult.h>
#include <aws/workspaces/model/RebootWorkspacesResult.h>
#include <aws/workspaces/model/RebuildWorkspacesResult.h>
#include <aws/workspaces/model/StartWorkspacesResult.h>
#include <aws/workspaces/model/StopWorkspacesResult.h>
#include <aws/workspaces/model/TerminateWorkspacesResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace WorkSpaces
{

namespace Model
{
        class CreateTagsRequest;
        class CreateWorkspacesRequest;
        class DeleteTagsRequest;
        class DescribeTagsRequest;
        class DescribeWorkspaceBundlesRequest;
        class DescribeWorkspaceDirectoriesRequest;
        class DescribeWorkspacesRequest;
        class DescribeWorkspacesConnectionStatusRequest;
        class ModifyWorkspacePropertiesRequest;
        class RebootWorkspacesRequest;
        class RebuildWorkspacesRequest;
        class StartWorkspacesRequest;
        class StopWorkspacesRequest;
        class TerminateWorkspacesRequest;

        typedef Aws::Utils::Outcome<CreateTagsResult, Aws::Client::AWSError<WorkSpacesErrors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<CreateWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> CreateWorkspacesOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, Aws::Client::AWSError<WorkSpacesErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceBundlesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspaceBundlesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceDirectoriesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspaceDirectoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspacesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspacesConnectionStatusResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspacesConnectionStatusOutcome;
        typedef Aws::Utils::Outcome<ModifyWorkspacePropertiesResult, Aws::Client::AWSError<WorkSpacesErrors>> ModifyWorkspacePropertiesOutcome;
        typedef Aws::Utils::Outcome<RebootWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> RebootWorkspacesOutcome;
        typedef Aws::Utils::Outcome<RebuildWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> RebuildWorkspacesOutcome;
        typedef Aws::Utils::Outcome<StartWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> StartWorkspacesOutcome;
        typedef Aws::Utils::Outcome<StopWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> StopWorkspacesOutcome;
        typedef Aws::Utils::Outcome<TerminateWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> TerminateWorkspacesOutcome;

        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<CreateWorkspacesOutcome> CreateWorkspacesOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeWorkspaceBundlesOutcome> DescribeWorkspaceBundlesOutcomeCallable;
        typedef std::future<DescribeWorkspaceDirectoriesOutcome> DescribeWorkspaceDirectoriesOutcomeCallable;
        typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
        typedef std::future<DescribeWorkspacesConnectionStatusOutcome> DescribeWorkspacesConnectionStatusOutcomeCallable;
        typedef std::future<ModifyWorkspacePropertiesOutcome> ModifyWorkspacePropertiesOutcomeCallable;
        typedef std::future<RebootWorkspacesOutcome> RebootWorkspacesOutcomeCallable;
        typedef std::future<RebuildWorkspacesOutcome> RebuildWorkspacesOutcomeCallable;
        typedef std::future<StartWorkspacesOutcome> StartWorkspacesOutcomeCallable;
        typedef std::future<StopWorkspacesOutcome> StopWorkspacesOutcomeCallable;
        typedef std::future<TerminateWorkspacesOutcome> TerminateWorkspacesOutcomeCallable;
} // namespace Model

  class WorkSpacesClient;

    typedef std::function<void(const WorkSpacesClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateWorkspacesRequest&, const Model::CreateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceBundlesRequest&, const Model::DescribeWorkspaceBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceBundlesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceDirectoriesRequest&, const Model::DescribeWorkspaceDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceDirectoriesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesRequest&, const Model::DescribeWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesConnectionStatusRequest&, const Model::DescribeWorkspacesConnectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesConnectionStatusResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspacePropertiesRequest&, const Model::ModifyWorkspacePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspacePropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebootWorkspacesRequest&, const Model::RebootWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebuildWorkspacesRequest&, const Model::RebuildWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebuildWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StartWorkspacesRequest&, const Model::StartWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StopWorkspacesRequest&, const Model::StopWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::TerminateWorkspacesRequest&, const Model::TerminateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateWorkspacesResponseReceivedHandler;

  /**
   * <fullname>Amazon WorkSpaces Service</fullname> <p>This reference provides
   * detailed information about the Amazon WorkSpaces operations.</p>
   */
  class AWS_WORKSPACES_API WorkSpacesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~WorkSpacesClient();

        /**
         * <p>Creates tags for a WorkSpace.</p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates tags for a WorkSpace.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates tags for a WorkSpace.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more WorkSpaces.</p> <note> <p>This operation is asynchronous
         * and returns before the WorkSpaces are created.</p> </note>
         */
        virtual Model::CreateWorkspacesOutcome CreateWorkspaces(const Model::CreateWorkspacesRequest& request) const;

        /**
         * <p>Creates one or more WorkSpaces.</p> <note> <p>This operation is asynchronous
         * and returns before the WorkSpaces are created.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspacesOutcomeCallable CreateWorkspacesCallable(const Model::CreateWorkspacesRequest& request) const;

        /**
         * <p>Creates one or more WorkSpaces.</p> <note> <p>This operation is asynchronous
         * and returns before the WorkSpaces are created.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspacesAsync(const Model::CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes tags from a WorkSpace.</p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes tags from a WorkSpace.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes tags from a WorkSpace.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes tags for a WorkSpace.</p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes tags for a WorkSpace.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes tags for a WorkSpace.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the WorkSpace bundles that are available to your
         * account in the specified region.</p> <p>You can filter the results with either
         * the <code>BundleIds</code> parameter, or the <code>Owner</code> parameter, but
         * not both.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> request and response parameters. If more results are
         * available, the <code>NextToken</code> response member contains a token that you
         * pass in the next call to this operation to retrieve the next set of items.</p>
         */
        virtual Model::DescribeWorkspaceBundlesOutcome DescribeWorkspaceBundles(const Model::DescribeWorkspaceBundlesRequest& request) const;

        /**
         * <p>Obtains information about the WorkSpace bundles that are available to your
         * account in the specified region.</p> <p>You can filter the results with either
         * the <code>BundleIds</code> parameter, or the <code>Owner</code> parameter, but
         * not both.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> request and response parameters. If more results are
         * available, the <code>NextToken</code> response member contains a token that you
         * pass in the next call to this operation to retrieve the next set of items.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceBundlesOutcomeCallable DescribeWorkspaceBundlesCallable(const Model::DescribeWorkspaceBundlesRequest& request) const;

        /**
         * <p>Obtains information about the WorkSpace bundles that are available to your
         * account in the specified region.</p> <p>You can filter the results with either
         * the <code>BundleIds</code> parameter, or the <code>Owner</code> parameter, but
         * not both.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> request and response parameters. If more results are
         * available, the <code>NextToken</code> response member contains a token that you
         * pass in the next call to this operation to retrieve the next set of items.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceBundlesAsync(const Model::DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the AWS Directory Service directories in the
         * region that are registered with Amazon WorkSpaces and are available to your
         * account.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> request and response parameters. If more results are
         * available, the <code>NextToken</code> response member contains a token that you
         * pass in the next call to this operation to retrieve the next set of items.</p>
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcome DescribeWorkspaceDirectories(const Model::DescribeWorkspaceDirectoriesRequest& request) const;

        /**
         * <p>Retrieves information about the AWS Directory Service directories in the
         * region that are registered with Amazon WorkSpaces and are available to your
         * account.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> request and response parameters. If more results are
         * available, the <code>NextToken</code> response member contains a token that you
         * pass in the next call to this operation to retrieve the next set of items.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcomeCallable DescribeWorkspaceDirectoriesCallable(const Model::DescribeWorkspaceDirectoriesRequest& request) const;

        /**
         * <p>Retrieves information about the AWS Directory Service directories in the
         * region that are registered with Amazon WorkSpaces and are available to your
         * account.</p> <p>This operation supports pagination with the use of the
         * <code>NextToken</code> request and response parameters. If more results are
         * available, the <code>NextToken</code> response member contains a token that you
         * pass in the next call to this operation to retrieve the next set of items.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceDirectoriesAsync(const Model::DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the specified WorkSpaces.</p> <p>Only one of the
         * filter parameters, such as <code>BundleId</code>, <code>DirectoryId</code>, or
         * <code>WorkspaceIds</code>, can be specified at a time.</p> <p>This operation
         * supports pagination with the use of the <code>NextToken</code> request and
         * response parameters. If more results are available, the <code>NextToken</code>
         * response member contains a token that you pass in the next call to this
         * operation to retrieve the next set of items.</p>
         */
        virtual Model::DescribeWorkspacesOutcome DescribeWorkspaces(const Model::DescribeWorkspacesRequest& request) const;

        /**
         * <p>Obtains information about the specified WorkSpaces.</p> <p>Only one of the
         * filter parameters, such as <code>BundleId</code>, <code>DirectoryId</code>, or
         * <code>WorkspaceIds</code>, can be specified at a time.</p> <p>This operation
         * supports pagination with the use of the <code>NextToken</code> request and
         * response parameters. If more results are available, the <code>NextToken</code>
         * response member contains a token that you pass in the next call to this
         * operation to retrieve the next set of items.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspacesOutcomeCallable DescribeWorkspacesCallable(const Model::DescribeWorkspacesRequest& request) const;

        /**
         * <p>Obtains information about the specified WorkSpaces.</p> <p>Only one of the
         * filter parameters, such as <code>BundleId</code>, <code>DirectoryId</code>, or
         * <code>WorkspaceIds</code>, can be specified at a time.</p> <p>This operation
         * supports pagination with the use of the <code>NextToken</code> request and
         * response parameters. If more results are available, the <code>NextToken</code>
         * response member contains a token that you pass in the next call to this
         * operation to retrieve the next set of items.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspacesAsync(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the connection status of a specified WorkSpace.</p>
         */
        virtual Model::DescribeWorkspacesConnectionStatusOutcome DescribeWorkspacesConnectionStatus(const Model::DescribeWorkspacesConnectionStatusRequest& request) const;

        /**
         * <p>Describes the connection status of a specified WorkSpace.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspacesConnectionStatusOutcomeCallable DescribeWorkspacesConnectionStatusCallable(const Model::DescribeWorkspacesConnectionStatusRequest& request) const;

        /**
         * <p>Describes the connection status of a specified WorkSpace.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspacesConnectionStatusAsync(const Model::DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the WorkSpace properties, including the RunningMode and AutoStop
         * time.</p>
         */
        virtual Model::ModifyWorkspacePropertiesOutcome ModifyWorkspaceProperties(const Model::ModifyWorkspacePropertiesRequest& request) const;

        /**
         * <p>Modifies the WorkSpace properties, including the RunningMode and AutoStop
         * time.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyWorkspacePropertiesOutcomeCallable ModifyWorkspacePropertiesCallable(const Model::ModifyWorkspacePropertiesRequest& request) const;

        /**
         * <p>Modifies the WorkSpace properties, including the RunningMode and AutoStop
         * time.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyWorkspacePropertiesAsync(const Model::ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>To be able to reboot a WorkSpace,
         * the WorkSpace must have a <b>State</b> of <code>AVAILABLE</code>,
         * <code>IMPAIRED</code>, or <code>INOPERABLE</code>.</p> <note> <p>This operation
         * is asynchronous and returns before the WorkSpaces have rebooted.</p> </note>
         */
        virtual Model::RebootWorkspacesOutcome RebootWorkspaces(const Model::RebootWorkspacesRequest& request) const;

        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>To be able to reboot a WorkSpace,
         * the WorkSpace must have a <b>State</b> of <code>AVAILABLE</code>,
         * <code>IMPAIRED</code>, or <code>INOPERABLE</code>.</p> <note> <p>This operation
         * is asynchronous and returns before the WorkSpaces have rebooted.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootWorkspacesOutcomeCallable RebootWorkspacesCallable(const Model::RebootWorkspacesRequest& request) const;

        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>To be able to reboot a WorkSpace,
         * the WorkSpace must have a <b>State</b> of <code>AVAILABLE</code>,
         * <code>IMPAIRED</code>, or <code>INOPERABLE</code>.</p> <note> <p>This operation
         * is asynchronous and returns before the WorkSpaces have rebooted.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootWorkspacesAsync(const Model::RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rebuilds the specified WorkSpaces.</p> <p>Rebuilding a WorkSpace is a
         * potentially destructive action that can result in the loss of data. Rebuilding a
         * WorkSpace causes the following to occur:</p> <ul> <li> <p>The system is restored
         * to the image of the bundle that the WorkSpace is created from. Any applications
         * that have been installed, or system settings that have been made since the
         * WorkSpace was created will be lost.</p> </li> <li> <p>The data drive (D drive)
         * is re-created from the last automatic snapshot taken of the data drive. The
         * current contents of the data drive are overwritten. Automatic snapshots of the
         * data drive are taken every 12 hours, so the snapshot can be as much as 12 hours
         * old.</p> </li> </ul> <p>To be able to rebuild a WorkSpace, the WorkSpace must
         * have a <b>State</b> of <code>AVAILABLE</code> or <code>ERROR</code>.</p> <note>
         * <p>This operation is asynchronous and returns before the WorkSpaces have been
         * completely rebuilt.</p> </note>
         */
        virtual Model::RebuildWorkspacesOutcome RebuildWorkspaces(const Model::RebuildWorkspacesRequest& request) const;

        /**
         * <p>Rebuilds the specified WorkSpaces.</p> <p>Rebuilding a WorkSpace is a
         * potentially destructive action that can result in the loss of data. Rebuilding a
         * WorkSpace causes the following to occur:</p> <ul> <li> <p>The system is restored
         * to the image of the bundle that the WorkSpace is created from. Any applications
         * that have been installed, or system settings that have been made since the
         * WorkSpace was created will be lost.</p> </li> <li> <p>The data drive (D drive)
         * is re-created from the last automatic snapshot taken of the data drive. The
         * current contents of the data drive are overwritten. Automatic snapshots of the
         * data drive are taken every 12 hours, so the snapshot can be as much as 12 hours
         * old.</p> </li> </ul> <p>To be able to rebuild a WorkSpace, the WorkSpace must
         * have a <b>State</b> of <code>AVAILABLE</code> or <code>ERROR</code>.</p> <note>
         * <p>This operation is asynchronous and returns before the WorkSpaces have been
         * completely rebuilt.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebuildWorkspacesOutcomeCallable RebuildWorkspacesCallable(const Model::RebuildWorkspacesRequest& request) const;

        /**
         * <p>Rebuilds the specified WorkSpaces.</p> <p>Rebuilding a WorkSpace is a
         * potentially destructive action that can result in the loss of data. Rebuilding a
         * WorkSpace causes the following to occur:</p> <ul> <li> <p>The system is restored
         * to the image of the bundle that the WorkSpace is created from. Any applications
         * that have been installed, or system settings that have been made since the
         * WorkSpace was created will be lost.</p> </li> <li> <p>The data drive (D drive)
         * is re-created from the last automatic snapshot taken of the data drive. The
         * current contents of the data drive are overwritten. Automatic snapshots of the
         * data drive are taken every 12 hours, so the snapshot can be as much as 12 hours
         * old.</p> </li> </ul> <p>To be able to rebuild a WorkSpace, the WorkSpace must
         * have a <b>State</b> of <code>AVAILABLE</code> or <code>ERROR</code>.</p> <note>
         * <p>This operation is asynchronous and returns before the WorkSpaces have been
         * completely rebuilt.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebuildWorkspacesAsync(const Model::RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified WorkSpaces. The API only works with WorkSpaces that have
         * RunningMode configured as AutoStop and the State set to “STOPPED.”</p>
         */
        virtual Model::StartWorkspacesOutcome StartWorkspaces(const Model::StartWorkspacesRequest& request) const;

        /**
         * <p>Starts the specified WorkSpaces. The API only works with WorkSpaces that have
         * RunningMode configured as AutoStop and the State set to “STOPPED.”</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartWorkspacesOutcomeCallable StartWorkspacesCallable(const Model::StartWorkspacesRequest& request) const;

        /**
         * <p>Starts the specified WorkSpaces. The API only works with WorkSpaces that have
         * RunningMode configured as AutoStop and the State set to “STOPPED.”</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartWorkspacesAsync(const Model::StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stops the specified WorkSpaces. The API only works with WorkSpaces that have
         * RunningMode configured as AutoStop and the State set to AVAILABLE, IMPAIRED,
         * UNHEALTHY, or ERROR.</p>
         */
        virtual Model::StopWorkspacesOutcome StopWorkspaces(const Model::StopWorkspacesRequest& request) const;

        /**
         * <p> Stops the specified WorkSpaces. The API only works with WorkSpaces that have
         * RunningMode configured as AutoStop and the State set to AVAILABLE, IMPAIRED,
         * UNHEALTHY, or ERROR.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopWorkspacesOutcomeCallable StopWorkspacesCallable(const Model::StopWorkspacesRequest& request) const;

        /**
         * <p> Stops the specified WorkSpaces. The API only works with WorkSpaces that have
         * RunningMode configured as AutoStop and the State set to AVAILABLE, IMPAIRED,
         * UNHEALTHY, or ERROR.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopWorkspacesAsync(const Model::StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p> <p>Terminating a WorkSpace is a
         * permanent action and cannot be undone. The user's data is not maintained and
         * will be destroyed. If you need to archive any user data, contact Amazon Web
         * Services before terminating the WorkSpace.</p> <p>You can terminate a WorkSpace
         * that is in any state except <code>SUSPENDED</code>.</p> <note> <p>This operation
         * is asynchronous and returns before the WorkSpaces have been completely
         * terminated.</p> </note>
         */
        virtual Model::TerminateWorkspacesOutcome TerminateWorkspaces(const Model::TerminateWorkspacesRequest& request) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p> <p>Terminating a WorkSpace is a
         * permanent action and cannot be undone. The user's data is not maintained and
         * will be destroyed. If you need to archive any user data, contact Amazon Web
         * Services before terminating the WorkSpace.</p> <p>You can terminate a WorkSpace
         * that is in any state except <code>SUSPENDED</code>.</p> <note> <p>This operation
         * is asynchronous and returns before the WorkSpaces have been completely
         * terminated.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateWorkspacesOutcomeCallable TerminateWorkspacesCallable(const Model::TerminateWorkspacesRequest& request) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p> <p>Terminating a WorkSpace is a
         * permanent action and cannot be undone. The user's data is not maintained and
         * will be destroyed. If you need to archive any user data, contact Amazon Web
         * Services before terminating the WorkSpace.</p> <p>You can terminate a WorkSpace
         * that is in any state except <code>SUSPENDED</code>.</p> <note> <p>This operation
         * is asynchronous and returns before the WorkSpaces have been completely
         * terminated.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateWorkspacesAsync(const Model::TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkspacesAsyncHelper(const Model::CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceBundlesAsyncHelper(const Model::DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceDirectoriesAsyncHelper(const Model::DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspacesAsyncHelper(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspacesConnectionStatusAsyncHelper(const Model::DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyWorkspacePropertiesAsyncHelper(const Model::ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootWorkspacesAsyncHelper(const Model::RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebuildWorkspacesAsyncHelper(const Model::RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartWorkspacesAsyncHelper(const Model::StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopWorkspacesAsyncHelper(const Model::StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateWorkspacesAsyncHelper(const Model::TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace WorkSpaces
} // namespace Aws
