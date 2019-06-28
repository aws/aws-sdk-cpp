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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces/model/AssociateIpGroupsResult.h>
#include <aws/workspaces/model/AuthorizeIpRulesResult.h>
#include <aws/workspaces/model/CopyWorkspaceImageResult.h>
#include <aws/workspaces/model/CreateIpGroupResult.h>
#include <aws/workspaces/model/CreateTagsResult.h>
#include <aws/workspaces/model/CreateWorkspacesResult.h>
#include <aws/workspaces/model/DeleteIpGroupResult.h>
#include <aws/workspaces/model/DeleteTagsResult.h>
#include <aws/workspaces/model/DeleteWorkspaceImageResult.h>
#include <aws/workspaces/model/DescribeAccountResult.h>
#include <aws/workspaces/model/DescribeAccountModificationsResult.h>
#include <aws/workspaces/model/DescribeClientPropertiesResult.h>
#include <aws/workspaces/model/DescribeIpGroupsResult.h>
#include <aws/workspaces/model/DescribeTagsResult.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceImagesResult.h>
#include <aws/workspaces/model/DescribeWorkspacesResult.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusResult.h>
#include <aws/workspaces/model/DisassociateIpGroupsResult.h>
#include <aws/workspaces/model/ImportWorkspaceImageResult.h>
#include <aws/workspaces/model/ListAvailableManagementCidrRangesResult.h>
#include <aws/workspaces/model/ModifyAccountResult.h>
#include <aws/workspaces/model/ModifyClientPropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspaceStateResult.h>
#include <aws/workspaces/model/RebootWorkspacesResult.h>
#include <aws/workspaces/model/RebuildWorkspacesResult.h>
#include <aws/workspaces/model/RevokeIpRulesResult.h>
#include <aws/workspaces/model/StartWorkspacesResult.h>
#include <aws/workspaces/model/StopWorkspacesResult.h>
#include <aws/workspaces/model/TerminateWorkspacesResult.h>
#include <aws/workspaces/model/UpdateRulesOfIpGroupResult.h>
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

namespace WorkSpaces
{

namespace Model
{
        class AssociateIpGroupsRequest;
        class AuthorizeIpRulesRequest;
        class CopyWorkspaceImageRequest;
        class CreateIpGroupRequest;
        class CreateTagsRequest;
        class CreateWorkspacesRequest;
        class DeleteIpGroupRequest;
        class DeleteTagsRequest;
        class DeleteWorkspaceImageRequest;
        class DescribeAccountRequest;
        class DescribeAccountModificationsRequest;
        class DescribeClientPropertiesRequest;
        class DescribeIpGroupsRequest;
        class DescribeTagsRequest;
        class DescribeWorkspaceBundlesRequest;
        class DescribeWorkspaceDirectoriesRequest;
        class DescribeWorkspaceImagesRequest;
        class DescribeWorkspacesRequest;
        class DescribeWorkspacesConnectionStatusRequest;
        class DisassociateIpGroupsRequest;
        class ImportWorkspaceImageRequest;
        class ListAvailableManagementCidrRangesRequest;
        class ModifyAccountRequest;
        class ModifyClientPropertiesRequest;
        class ModifyWorkspacePropertiesRequest;
        class ModifyWorkspaceStateRequest;
        class RebootWorkspacesRequest;
        class RebuildWorkspacesRequest;
        class RevokeIpRulesRequest;
        class StartWorkspacesRequest;
        class StopWorkspacesRequest;
        class TerminateWorkspacesRequest;
        class UpdateRulesOfIpGroupRequest;

        typedef Aws::Utils::Outcome<AssociateIpGroupsResult, Aws::Client::AWSError<WorkSpacesErrors>> AssociateIpGroupsOutcome;
        typedef Aws::Utils::Outcome<AuthorizeIpRulesResult, Aws::Client::AWSError<WorkSpacesErrors>> AuthorizeIpRulesOutcome;
        typedef Aws::Utils::Outcome<CopyWorkspaceImageResult, Aws::Client::AWSError<WorkSpacesErrors>> CopyWorkspaceImageOutcome;
        typedef Aws::Utils::Outcome<CreateIpGroupResult, Aws::Client::AWSError<WorkSpacesErrors>> CreateIpGroupOutcome;
        typedef Aws::Utils::Outcome<CreateTagsResult, Aws::Client::AWSError<WorkSpacesErrors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<CreateWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> CreateWorkspacesOutcome;
        typedef Aws::Utils::Outcome<DeleteIpGroupResult, Aws::Client::AWSError<WorkSpacesErrors>> DeleteIpGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, Aws::Client::AWSError<WorkSpacesErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkspaceImageResult, Aws::Client::AWSError<WorkSpacesErrors>> DeleteWorkspaceImageOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeAccountOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountModificationsResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeAccountModificationsOutcome;
        typedef Aws::Utils::Outcome<DescribeClientPropertiesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeClientPropertiesOutcome;
        typedef Aws::Utils::Outcome<DescribeIpGroupsResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeIpGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceBundlesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspaceBundlesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceDirectoriesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspaceDirectoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceImagesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspaceImagesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspacesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspacesConnectionStatusResult, Aws::Client::AWSError<WorkSpacesErrors>> DescribeWorkspacesConnectionStatusOutcome;
        typedef Aws::Utils::Outcome<DisassociateIpGroupsResult, Aws::Client::AWSError<WorkSpacesErrors>> DisassociateIpGroupsOutcome;
        typedef Aws::Utils::Outcome<ImportWorkspaceImageResult, Aws::Client::AWSError<WorkSpacesErrors>> ImportWorkspaceImageOutcome;
        typedef Aws::Utils::Outcome<ListAvailableManagementCidrRangesResult, Aws::Client::AWSError<WorkSpacesErrors>> ListAvailableManagementCidrRangesOutcome;
        typedef Aws::Utils::Outcome<ModifyAccountResult, Aws::Client::AWSError<WorkSpacesErrors>> ModifyAccountOutcome;
        typedef Aws::Utils::Outcome<ModifyClientPropertiesResult, Aws::Client::AWSError<WorkSpacesErrors>> ModifyClientPropertiesOutcome;
        typedef Aws::Utils::Outcome<ModifyWorkspacePropertiesResult, Aws::Client::AWSError<WorkSpacesErrors>> ModifyWorkspacePropertiesOutcome;
        typedef Aws::Utils::Outcome<ModifyWorkspaceStateResult, Aws::Client::AWSError<WorkSpacesErrors>> ModifyWorkspaceStateOutcome;
        typedef Aws::Utils::Outcome<RebootWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> RebootWorkspacesOutcome;
        typedef Aws::Utils::Outcome<RebuildWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> RebuildWorkspacesOutcome;
        typedef Aws::Utils::Outcome<RevokeIpRulesResult, Aws::Client::AWSError<WorkSpacesErrors>> RevokeIpRulesOutcome;
        typedef Aws::Utils::Outcome<StartWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> StartWorkspacesOutcome;
        typedef Aws::Utils::Outcome<StopWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> StopWorkspacesOutcome;
        typedef Aws::Utils::Outcome<TerminateWorkspacesResult, Aws::Client::AWSError<WorkSpacesErrors>> TerminateWorkspacesOutcome;
        typedef Aws::Utils::Outcome<UpdateRulesOfIpGroupResult, Aws::Client::AWSError<WorkSpacesErrors>> UpdateRulesOfIpGroupOutcome;

        typedef std::future<AssociateIpGroupsOutcome> AssociateIpGroupsOutcomeCallable;
        typedef std::future<AuthorizeIpRulesOutcome> AuthorizeIpRulesOutcomeCallable;
        typedef std::future<CopyWorkspaceImageOutcome> CopyWorkspaceImageOutcomeCallable;
        typedef std::future<CreateIpGroupOutcome> CreateIpGroupOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<CreateWorkspacesOutcome> CreateWorkspacesOutcomeCallable;
        typedef std::future<DeleteIpGroupOutcome> DeleteIpGroupOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DeleteWorkspaceImageOutcome> DeleteWorkspaceImageOutcomeCallable;
        typedef std::future<DescribeAccountOutcome> DescribeAccountOutcomeCallable;
        typedef std::future<DescribeAccountModificationsOutcome> DescribeAccountModificationsOutcomeCallable;
        typedef std::future<DescribeClientPropertiesOutcome> DescribeClientPropertiesOutcomeCallable;
        typedef std::future<DescribeIpGroupsOutcome> DescribeIpGroupsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeWorkspaceBundlesOutcome> DescribeWorkspaceBundlesOutcomeCallable;
        typedef std::future<DescribeWorkspaceDirectoriesOutcome> DescribeWorkspaceDirectoriesOutcomeCallable;
        typedef std::future<DescribeWorkspaceImagesOutcome> DescribeWorkspaceImagesOutcomeCallable;
        typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
        typedef std::future<DescribeWorkspacesConnectionStatusOutcome> DescribeWorkspacesConnectionStatusOutcomeCallable;
        typedef std::future<DisassociateIpGroupsOutcome> DisassociateIpGroupsOutcomeCallable;
        typedef std::future<ImportWorkspaceImageOutcome> ImportWorkspaceImageOutcomeCallable;
        typedef std::future<ListAvailableManagementCidrRangesOutcome> ListAvailableManagementCidrRangesOutcomeCallable;
        typedef std::future<ModifyAccountOutcome> ModifyAccountOutcomeCallable;
        typedef std::future<ModifyClientPropertiesOutcome> ModifyClientPropertiesOutcomeCallable;
        typedef std::future<ModifyWorkspacePropertiesOutcome> ModifyWorkspacePropertiesOutcomeCallable;
        typedef std::future<ModifyWorkspaceStateOutcome> ModifyWorkspaceStateOutcomeCallable;
        typedef std::future<RebootWorkspacesOutcome> RebootWorkspacesOutcomeCallable;
        typedef std::future<RebuildWorkspacesOutcome> RebuildWorkspacesOutcomeCallable;
        typedef std::future<RevokeIpRulesOutcome> RevokeIpRulesOutcomeCallable;
        typedef std::future<StartWorkspacesOutcome> StartWorkspacesOutcomeCallable;
        typedef std::future<StopWorkspacesOutcome> StopWorkspacesOutcomeCallable;
        typedef std::future<TerminateWorkspacesOutcome> TerminateWorkspacesOutcomeCallable;
        typedef std::future<UpdateRulesOfIpGroupOutcome> UpdateRulesOfIpGroupOutcomeCallable;
} // namespace Model

  class WorkSpacesClient;

    typedef std::function<void(const WorkSpacesClient*, const Model::AssociateIpGroupsRequest&, const Model::AssociateIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::AuthorizeIpRulesRequest&, const Model::AuthorizeIpRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeIpRulesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CopyWorkspaceImageRequest&, const Model::CopyWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateIpGroupRequest&, const Model::CreateIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateWorkspacesRequest&, const Model::CreateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteIpGroupRequest&, const Model::DeleteIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteWorkspaceImageRequest&, const Model::DeleteWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeAccountRequest&, const Model::DescribeAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeAccountModificationsRequest&, const Model::DescribeAccountModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountModificationsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeClientPropertiesRequest&, const Model::DescribeClientPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeIpGroupsRequest&, const Model::DescribeIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceBundlesRequest&, const Model::DescribeWorkspaceBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceBundlesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceDirectoriesRequest&, const Model::DescribeWorkspaceDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceDirectoriesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceImagesRequest&, const Model::DescribeWorkspaceImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceImagesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesRequest&, const Model::DescribeWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesConnectionStatusRequest&, const Model::DescribeWorkspacesConnectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesConnectionStatusResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DisassociateIpGroupsRequest&, const Model::DisassociateIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ImportWorkspaceImageRequest&, const Model::ImportWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ListAvailableManagementCidrRangesRequest&, const Model::ListAvailableManagementCidrRangesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableManagementCidrRangesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyAccountRequest&, const Model::ModifyAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyAccountResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyClientPropertiesRequest&, const Model::ModifyClientPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClientPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspacePropertiesRequest&, const Model::ModifyWorkspacePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspacePropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspaceStateRequest&, const Model::ModifyWorkspaceStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspaceStateResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebootWorkspacesRequest&, const Model::RebootWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebuildWorkspacesRequest&, const Model::RebuildWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebuildWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RevokeIpRulesRequest&, const Model::RevokeIpRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeIpRulesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StartWorkspacesRequest&, const Model::StartWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StopWorkspacesRequest&, const Model::StopWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::TerminateWorkspacesRequest&, const Model::TerminateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateRulesOfIpGroupRequest&, const Model::UpdateRulesOfIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRulesOfIpGroupResponseReceivedHandler;

  /**
   * <fullname>Amazon WorkSpaces Service</fullname> <p>Amazon WorkSpaces enables you
   * to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops
   * for your users.</p>
   */
  class AWS_WORKSPACES_API WorkSpacesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        WorkSpacesClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        WorkSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~WorkSpacesClient();

        inline virtual const char* GetServiceClientName() const override { return "WorkSpaces"; }


        /**
         * <p>Associates the specified IP access control group with the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIpGroupsOutcome AssociateIpGroups(const Model::AssociateIpGroupsRequest& request) const;

        /**
         * <p>Associates the specified IP access control group with the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateIpGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateIpGroupsOutcomeCallable AssociateIpGroupsCallable(const Model::AssociateIpGroupsRequest& request) const;

        /**
         * <p>Associates the specified IP access control group with the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateIpGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateIpGroupsAsync(const Model::AssociateIpGroupsRequest& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more rules to the specified IP access control group.</p> <p>This
         * action gives users permission to access their WorkSpaces from the CIDR address
         * ranges specified in the rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AuthorizeIpRules">AWS
         * API Reference</a></p>
         */
        virtual Model::AuthorizeIpRulesOutcome AuthorizeIpRules(const Model::AuthorizeIpRulesRequest& request) const;

        /**
         * <p>Adds one or more rules to the specified IP access control group.</p> <p>This
         * action gives users permission to access their WorkSpaces from the CIDR address
         * ranges specified in the rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AuthorizeIpRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AuthorizeIpRulesOutcomeCallable AuthorizeIpRulesCallable(const Model::AuthorizeIpRulesRequest& request) const;

        /**
         * <p>Adds one or more rules to the specified IP access control group.</p> <p>This
         * action gives users permission to access their WorkSpaces from the CIDR address
         * ranges specified in the rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AuthorizeIpRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AuthorizeIpRulesAsync(const Model::AuthorizeIpRulesRequest& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies the specified image from the specified Region to the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyWorkspaceImageOutcome CopyWorkspaceImage(const Model::CopyWorkspaceImageRequest& request) const;

        /**
         * <p>Copies the specified image from the specified Region to the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyWorkspaceImageOutcomeCallable CopyWorkspaceImageCallable(const Model::CopyWorkspaceImageRequest& request) const;

        /**
         * <p>Copies the specified image from the specified Region to the current
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyWorkspaceImageAsync(const Model::CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IP access control group.</p> <p>An IP access control group
         * provides you with the ability to control the IP addresses from which users are
         * allowed to access their WorkSpaces. To specify the CIDR address ranges, add
         * rules to your IP access control group and then associate the group with your
         * directory. You can add rules when you create the group or at any time using
         * <a>AuthorizeIpRules</a>.</p> <p>There is a default IP access control group
         * associated with your directory. If you don't associate an IP access control
         * group with your directory, the default group is used. The default group includes
         * a default rule that allows users to access their WorkSpaces from anywhere. You
         * cannot modify the default IP access control group for your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIpGroupOutcome CreateIpGroup(const Model::CreateIpGroupRequest& request) const;

        /**
         * <p>Creates an IP access control group.</p> <p>An IP access control group
         * provides you with the ability to control the IP addresses from which users are
         * allowed to access their WorkSpaces. To specify the CIDR address ranges, add
         * rules to your IP access control group and then associate the group with your
         * directory. You can add rules when you create the group or at any time using
         * <a>AuthorizeIpRules</a>.</p> <p>There is a default IP access control group
         * associated with your directory. If you don't associate an IP access control
         * group with your directory, the default group is used. The default group includes
         * a default rule that allows users to access their WorkSpaces from anywhere. You
         * cannot modify the default IP access control group for your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateIpGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIpGroupOutcomeCallable CreateIpGroupCallable(const Model::CreateIpGroupRequest& request) const;

        /**
         * <p>Creates an IP access control group.</p> <p>An IP access control group
         * provides you with the ability to control the IP addresses from which users are
         * allowed to access their WorkSpaces. To specify the CIDR address ranges, add
         * rules to your IP access control group and then associate the group with your
         * directory. You can add rules when you create the group or at any time using
         * <a>AuthorizeIpRules</a>.</p> <p>There is a default IP access control group
         * associated with your directory. If you don't associate an IP access control
         * group with your directory, the default group is used. The default group includes
         * a default rule that allows users to access their WorkSpaces from anywhere. You
         * cannot modify the default IP access control group for your
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateIpGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIpGroupAsync(const Model::CreateIpGroupRequest& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more WorkSpaces.</p> <p>This operation is asynchronous and
         * returns before the WorkSpaces are created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspacesOutcome CreateWorkspaces(const Model::CreateWorkspacesRequest& request) const;

        /**
         * <p>Creates one or more WorkSpaces.</p> <p>This operation is asynchronous and
         * returns before the WorkSpaces are created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspacesOutcomeCallable CreateWorkspacesCallable(const Model::CreateWorkspacesRequest& request) const;

        /**
         * <p>Creates one or more WorkSpaces.</p> <p>This operation is asynchronous and
         * returns before the WorkSpaces are created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspacesAsync(const Model::CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IP access control group.</p> <p>You cannot delete an IP
         * access control group that is associated with a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIpGroupOutcome DeleteIpGroup(const Model::DeleteIpGroupRequest& request) const;

        /**
         * <p>Deletes the specified IP access control group.</p> <p>You cannot delete an IP
         * access control group that is associated with a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteIpGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIpGroupOutcomeCallable DeleteIpGroupCallable(const Model::DeleteIpGroupRequest& request) const;

        /**
         * <p>Deletes the specified IP access control group.</p> <p>You cannot delete an IP
         * access control group that is associated with a directory.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteIpGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIpGroupAsync(const Model::DeleteIpGroupRequest& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and un-share the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceImageOutcome DeleteWorkspaceImage(const Model::DeleteWorkspaceImageRequest& request) const;

        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and un-share the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceImageOutcomeCallable DeleteWorkspaceImageCallable(const Model::DeleteWorkspaceImageRequest& request) const;

        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and un-share the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceImageAsync(const Model::DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes the configuration of bring your own license
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOutcome DescribeAccount(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves a list that describes the configuration of bring your own license
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountOutcomeCallable DescribeAccountCallable(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves a list that describes the configuration of bring your own license
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAsync(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes modifications to the configuration of bring
         * your own license (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccountModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountModificationsOutcome DescribeAccountModifications(const Model::DescribeAccountModificationsRequest& request) const;

        /**
         * <p>Retrieves a list that describes modifications to the configuration of bring
         * your own license (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccountModifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountModificationsOutcomeCallable DescribeAccountModificationsCallable(const Model::DescribeAccountModificationsRequest& request) const;

        /**
         * <p>Retrieves a list that describes modifications to the configuration of bring
         * your own license (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccountModifications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountModificationsAsync(const Model::DescribeAccountModificationsRequest& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeClientProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClientPropertiesOutcome DescribeClientProperties(const Model::DescribeClientPropertiesRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeClientProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClientPropertiesOutcomeCallable DescribeClientPropertiesCallable(const Model::DescribeClientPropertiesRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeClientProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClientPropertiesAsync(const Model::DescribeClientPropertiesRequest& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your IP access control groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIpGroupsOutcome DescribeIpGroups(const Model::DescribeIpGroupsRequest& request) const;

        /**
         * <p>Describes one or more of your IP access control groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeIpGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIpGroupsOutcomeCallable DescribeIpGroupsCallable(const Model::DescribeIpGroupsRequest& request) const;

        /**
         * <p>Describes one or more of your IP access control groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeIpGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIpGroupsAsync(const Model::DescribeIpGroupsRequest& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Describes the specified tags for the specified WorkSpaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes the available WorkSpace bundles.</p> <p>You
         * can filter the results using either bundle ID or owner, but not
         * both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceBundlesOutcome DescribeWorkspaceBundles(const Model::DescribeWorkspaceBundlesRequest& request) const;

        /**
         * <p>Retrieves a list that describes the available WorkSpace bundles.</p> <p>You
         * can filter the results using either bundle ID or owner, but not
         * both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceBundles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceBundlesOutcomeCallable DescribeWorkspaceBundlesCallable(const Model::DescribeWorkspaceBundlesRequest& request) const;

        /**
         * <p>Retrieves a list that describes the available WorkSpace bundles.</p> <p>You
         * can filter the results using either bundle ID or owner, but not
         * both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceBundles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceBundlesAsync(const Model::DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available AWS Directory Service directories that are registered
         * with Amazon WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcome DescribeWorkspaceDirectories(const Model::DescribeWorkspaceDirectoriesRequest& request) const;

        /**
         * <p>Describes the available AWS Directory Service directories that are registered
         * with Amazon WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcomeCallable DescribeWorkspaceDirectoriesCallable(const Model::DescribeWorkspaceDirectoriesRequest& request) const;

        /**
         * <p>Describes the available AWS Directory Service directories that are registered
         * with Amazon WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceDirectoriesAsync(const Model::DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * identifiers are provided. Otherwise, all images in the account are described.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceImagesOutcome DescribeWorkspaceImages(const Model::DescribeWorkspaceImagesRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * identifiers are provided. Otherwise, all images in the account are described.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceImagesOutcomeCallable DescribeWorkspaceImagesCallable(const Model::DescribeWorkspaceImagesRequest& request) const;

        /**
         * <p>Retrieves a list that describes one or more specified images, if the image
         * identifiers are provided. Otherwise, all images in the account are described.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceImagesAsync(const Model::DescribeWorkspaceImagesRequest& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified WorkSpaces.</p> <p>You can filter the results by
         * using the bundle identifier, directory identifier, or owner, but you can specify
         * only one filter at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspacesOutcome DescribeWorkspaces(const Model::DescribeWorkspacesRequest& request) const;

        /**
         * <p>Describes the specified WorkSpaces.</p> <p>You can filter the results by
         * using the bundle identifier, directory identifier, or owner, but you can specify
         * only one filter at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspacesOutcomeCallable DescribeWorkspacesCallable(const Model::DescribeWorkspacesRequest& request) const;

        /**
         * <p>Describes the specified WorkSpaces.</p> <p>You can filter the results by
         * using the bundle identifier, directory identifier, or owner, but you can specify
         * only one filter at a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspacesAsync(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the connection status of the specified WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspacesConnectionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspacesConnectionStatusOutcome DescribeWorkspacesConnectionStatus(const Model::DescribeWorkspacesConnectionStatusRequest& request) const;

        /**
         * <p>Describes the connection status of the specified WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspacesConnectionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspacesConnectionStatusOutcomeCallable DescribeWorkspacesConnectionStatusCallable(const Model::DescribeWorkspacesConnectionStatusRequest& request) const;

        /**
         * <p>Describes the connection status of the specified WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspacesConnectionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspacesConnectionStatusAsync(const Model::DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified IP access control group from the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateIpGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIpGroupsOutcome DisassociateIpGroups(const Model::DisassociateIpGroupsRequest& request) const;

        /**
         * <p>Disassociates the specified IP access control group from the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateIpGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateIpGroupsOutcomeCallable DisassociateIpGroupsCallable(const Model::DisassociateIpGroupsRequest& request) const;

        /**
         * <p>Disassociates the specified IP access control group from the specified
         * directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateIpGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateIpGroupsAsync(const Model::DisassociateIpGroupsRequest& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the specified Windows 7 or Windows 10 bring your own license (BYOL)
         * image into Amazon WorkSpaces. The image must be an already licensed EC2 image
         * that is in your AWS account, and you must own the image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportWorkspaceImageOutcome ImportWorkspaceImage(const Model::ImportWorkspaceImageRequest& request) const;

        /**
         * <p>Imports the specified Windows 7 or Windows 10 bring your own license (BYOL)
         * image into Amazon WorkSpaces. The image must be an already licensed EC2 image
         * that is in your AWS account, and you must own the image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportWorkspaceImageOutcomeCallable ImportWorkspaceImageCallable(const Model::ImportWorkspaceImageRequest& request) const;

        /**
         * <p>Imports the specified Windows 7 or Windows 10 bring your own license (BYOL)
         * image into Amazon WorkSpaces. The image must be an already licensed EC2 image
         * that is in your AWS account, and you must own the image. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportWorkspaceImageAsync(const Model::ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable bring your own
         * license (BYOL). </p> <p>The management network interface is connected to a
         * secure Amazon WorkSpaces management network. It is used for interactive
         * streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and to allow
         * Amazon WorkSpaces to manage the WorkSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableManagementCidrRangesOutcome ListAvailableManagementCidrRanges(const Model::ListAvailableManagementCidrRangesRequest& request) const;

        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable bring your own
         * license (BYOL). </p> <p>The management network interface is connected to a
         * secure Amazon WorkSpaces management network. It is used for interactive
         * streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and to allow
         * Amazon WorkSpaces to manage the WorkSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableManagementCidrRangesOutcomeCallable ListAvailableManagementCidrRangesCallable(const Model::ListAvailableManagementCidrRangesRequest& request) const;

        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable bring your own
         * license (BYOL). </p> <p>The management network interface is connected to a
         * secure Amazon WorkSpaces management network. It is used for interactive
         * streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and to allow
         * Amazon WorkSpaces to manage the WorkSpace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableManagementCidrRangesAsync(const Model::ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the configuration of bring your own license (BYOL) for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAccountOutcome ModifyAccount(const Model::ModifyAccountRequest& request) const;

        /**
         * <p>Modifies the configuration of bring your own license (BYOL) for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyAccountOutcomeCallable ModifyAccountCallable(const Model::ModifyAccountRequest& request) const;

        /**
         * <p>Modifies the configuration of bring your own license (BYOL) for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyAccountAsync(const Model::ModifyAccountRequest& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the properties of the specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyClientProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyClientPropertiesOutcome ModifyClientProperties(const Model::ModifyClientPropertiesRequest& request) const;

        /**
         * <p>Modifies the properties of the specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyClientProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyClientPropertiesOutcomeCallable ModifyClientPropertiesCallable(const Model::ModifyClientPropertiesRequest& request) const;

        /**
         * <p>Modifies the properties of the specified Amazon WorkSpaces
         * clients.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyClientProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyClientPropertiesAsync(const Model::ModifyClientPropertiesRequest& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified WorkSpace properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspacePropertiesOutcome ModifyWorkspaceProperties(const Model::ModifyWorkspacePropertiesRequest& request) const;

        /**
         * <p>Modifies the specified WorkSpace properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyWorkspacePropertiesOutcomeCallable ModifyWorkspacePropertiesCallable(const Model::ModifyWorkspacePropertiesRequest& request) const;

        /**
         * <p>Modifies the specified WorkSpace properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyWorkspacePropertiesAsync(const Model::ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the state of the specified WorkSpace.</p> <p>To maintain a WorkSpace
         * without being interrupted, set the WorkSpace state to
         * <code>ADMIN_MAINTENANCE</code>. WorkSpaces in this state do not respond to
         * requests to reboot, stop, start, rebuild, or restore. An AutoStop WorkSpace in
         * this state is not stopped. Users cannot log into a WorkSpace in the
         * <code>ADMIN_MAINTENANCE</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceState">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceStateOutcome ModifyWorkspaceState(const Model::ModifyWorkspaceStateRequest& request) const;

        /**
         * <p>Sets the state of the specified WorkSpace.</p> <p>To maintain a WorkSpace
         * without being interrupted, set the WorkSpace state to
         * <code>ADMIN_MAINTENANCE</code>. WorkSpaces in this state do not respond to
         * requests to reboot, stop, start, rebuild, or restore. An AutoStop WorkSpace in
         * this state is not stopped. Users cannot log into a WorkSpace in the
         * <code>ADMIN_MAINTENANCE</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyWorkspaceStateOutcomeCallable ModifyWorkspaceStateCallable(const Model::ModifyWorkspaceStateRequest& request) const;

        /**
         * <p>Sets the state of the specified WorkSpace.</p> <p>To maintain a WorkSpace
         * without being interrupted, set the WorkSpace state to
         * <code>ADMIN_MAINTENANCE</code>. WorkSpaces in this state do not respond to
         * requests to reboot, stop, start, rebuild, or restore. An AutoStop WorkSpace in
         * this state is not stopped. Users cannot log into a WorkSpace in the
         * <code>ADMIN_MAINTENANCE</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyWorkspaceStateAsync(const Model::ModifyWorkspaceStateRequest& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>You cannot reboot a WorkSpace unless
         * its state is <code>AVAILABLE</code> or <code>UNHEALTHY</code>.</p> <p>This
         * operation is asynchronous and returns before the WorkSpaces have
         * rebooted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebootWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootWorkspacesOutcome RebootWorkspaces(const Model::RebootWorkspacesRequest& request) const;

        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>You cannot reboot a WorkSpace unless
         * its state is <code>AVAILABLE</code> or <code>UNHEALTHY</code>.</p> <p>This
         * operation is asynchronous and returns before the WorkSpaces have
         * rebooted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebootWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootWorkspacesOutcomeCallable RebootWorkspacesCallable(const Model::RebootWorkspacesRequest& request) const;

        /**
         * <p>Reboots the specified WorkSpaces.</p> <p>You cannot reboot a WorkSpace unless
         * its state is <code>AVAILABLE</code> or <code>UNHEALTHY</code>.</p> <p>This
         * operation is asynchronous and returns before the WorkSpaces have
         * rebooted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebootWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootWorkspacesAsync(const Model::RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rebuilds the specified WorkSpace.</p> <p>You cannot rebuild a WorkSpace
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>, or
         * <code>UNHEALTHY</code>.</p> <p>Rebuilding a WorkSpace is a potentially
         * destructive action that can result in the loss of data. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpaces have been completely rebuilt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebuildWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::RebuildWorkspacesOutcome RebuildWorkspaces(const Model::RebuildWorkspacesRequest& request) const;

        /**
         * <p>Rebuilds the specified WorkSpace.</p> <p>You cannot rebuild a WorkSpace
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>, or
         * <code>UNHEALTHY</code>.</p> <p>Rebuilding a WorkSpace is a potentially
         * destructive action that can result in the loss of data. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpaces have been completely rebuilt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebuildWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebuildWorkspacesOutcomeCallable RebuildWorkspacesCallable(const Model::RebuildWorkspacesRequest& request) const;

        /**
         * <p>Rebuilds the specified WorkSpace.</p> <p>You cannot rebuild a WorkSpace
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>, or
         * <code>UNHEALTHY</code>.</p> <p>Rebuilding a WorkSpace is a potentially
         * destructive action that can result in the loss of data. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpaces have been completely rebuilt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebuildWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebuildWorkspacesAsync(const Model::RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more rules from the specified IP access control
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RevokeIpRules">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokeIpRulesOutcome RevokeIpRules(const Model::RevokeIpRulesRequest& request) const;

        /**
         * <p>Removes one or more rules from the specified IP access control
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RevokeIpRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokeIpRulesOutcomeCallable RevokeIpRulesCallable(const Model::RevokeIpRulesRequest& request) const;

        /**
         * <p>Removes one or more rules from the specified IP access control
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RevokeIpRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokeIpRulesAsync(const Model::RevokeIpRulesRequest& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the specified WorkSpaces.</p> <p>You cannot start a WorkSpace unless
         * it has a running mode of <code>AutoStop</code> and a state of
         * <code>STOPPED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StartWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkspacesOutcome StartWorkspaces(const Model::StartWorkspacesRequest& request) const;

        /**
         * <p>Starts the specified WorkSpaces.</p> <p>You cannot start a WorkSpace unless
         * it has a running mode of <code>AutoStop</code> and a state of
         * <code>STOPPED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StartWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartWorkspacesOutcomeCallable StartWorkspacesCallable(const Model::StartWorkspacesRequest& request) const;

        /**
         * <p>Starts the specified WorkSpaces.</p> <p>You cannot start a WorkSpace unless
         * it has a running mode of <code>AutoStop</code> and a state of
         * <code>STOPPED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StartWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartWorkspacesAsync(const Model::StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stops the specified WorkSpaces.</p> <p>You cannot stop a WorkSpace unless it
         * has a running mode of <code>AutoStop</code> and a state of
         * <code>AVAILABLE</code>, <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
         * <code>ERROR</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StopWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkspacesOutcome StopWorkspaces(const Model::StopWorkspacesRequest& request) const;

        /**
         * <p> Stops the specified WorkSpaces.</p> <p>You cannot stop a WorkSpace unless it
         * has a running mode of <code>AutoStop</code> and a state of
         * <code>AVAILABLE</code>, <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
         * <code>ERROR</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StopWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopWorkspacesOutcomeCallable StopWorkspacesCallable(const Model::StopWorkspacesRequest& request) const;

        /**
         * <p> Stops the specified WorkSpaces.</p> <p>You cannot stop a WorkSpace unless it
         * has a running mode of <code>AutoStop</code> and a state of
         * <code>AVAILABLE</code>, <code>IMPAIRED</code>, <code>UNHEALTHY</code>, or
         * <code>ERROR</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/StopWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopWorkspacesAsync(const Model::StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p> <p>Terminating a WorkSpace is a
         * permanent action and cannot be undone. The user's data is destroyed. If you need
         * to archive any user data, contact Amazon Web Services before terminating the
         * WorkSpace.</p> <p>You can terminate a WorkSpace that is in any state except
         * <code>SUSPENDED</code>.</p> <p>This operation is asynchronous and returns before
         * the WorkSpaces have been completely terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateWorkspacesOutcome TerminateWorkspaces(const Model::TerminateWorkspacesRequest& request) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p> <p>Terminating a WorkSpace is a
         * permanent action and cannot be undone. The user's data is destroyed. If you need
         * to archive any user data, contact Amazon Web Services before terminating the
         * WorkSpace.</p> <p>You can terminate a WorkSpace that is in any state except
         * <code>SUSPENDED</code>.</p> <p>This operation is asynchronous and returns before
         * the WorkSpaces have been completely terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateWorkspacesOutcomeCallable TerminateWorkspacesCallable(const Model::TerminateWorkspacesRequest& request) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p> <p>Terminating a WorkSpace is a
         * permanent action and cannot be undone. The user's data is destroyed. If you need
         * to archive any user data, contact Amazon Web Services before terminating the
         * WorkSpace.</p> <p>You can terminate a WorkSpace that is in any state except
         * <code>SUSPENDED</code>.</p> <p>This operation is asynchronous and returns before
         * the WorkSpaces have been completely terminated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateWorkspacesAsync(const Model::TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the current rules of the specified IP access control group with the
         * specified rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateRulesOfIpGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRulesOfIpGroupOutcome UpdateRulesOfIpGroup(const Model::UpdateRulesOfIpGroupRequest& request) const;

        /**
         * <p>Replaces the current rules of the specified IP access control group with the
         * specified rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateRulesOfIpGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRulesOfIpGroupOutcomeCallable UpdateRulesOfIpGroupCallable(const Model::UpdateRulesOfIpGroupRequest& request) const;

        /**
         * <p>Replaces the current rules of the specified IP access control group with the
         * specified rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateRulesOfIpGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRulesOfIpGroupAsync(const Model::UpdateRulesOfIpGroupRequest& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateIpGroupsAsyncHelper(const Model::AssociateIpGroupsRequest& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeIpRulesAsyncHelper(const Model::AuthorizeIpRulesRequest& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyWorkspaceImageAsyncHelper(const Model::CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIpGroupAsyncHelper(const Model::CreateIpGroupRequest& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkspacesAsyncHelper(const Model::CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIpGroupAsyncHelper(const Model::DeleteIpGroupRequest& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkspaceImageAsyncHelper(const Model::DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAsyncHelper(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountModificationsAsyncHelper(const Model::DescribeAccountModificationsRequest& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClientPropertiesAsyncHelper(const Model::DescribeClientPropertiesRequest& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIpGroupsAsyncHelper(const Model::DescribeIpGroupsRequest& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceBundlesAsyncHelper(const Model::DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceDirectoriesAsyncHelper(const Model::DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceImagesAsyncHelper(const Model::DescribeWorkspaceImagesRequest& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspacesAsyncHelper(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspacesConnectionStatusAsyncHelper(const Model::DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateIpGroupsAsyncHelper(const Model::DisassociateIpGroupsRequest& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportWorkspaceImageAsyncHelper(const Model::ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAvailableManagementCidrRangesAsyncHelper(const Model::ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyAccountAsyncHelper(const Model::ModifyAccountRequest& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyClientPropertiesAsyncHelper(const Model::ModifyClientPropertiesRequest& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyWorkspacePropertiesAsyncHelper(const Model::ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyWorkspaceStateAsyncHelper(const Model::ModifyWorkspaceStateRequest& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootWorkspacesAsyncHelper(const Model::RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebuildWorkspacesAsyncHelper(const Model::RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeIpRulesAsyncHelper(const Model::RevokeIpRulesRequest& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartWorkspacesAsyncHelper(const Model::StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopWorkspacesAsyncHelper(const Model::StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateWorkspacesAsyncHelper(const Model::TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRulesOfIpGroupAsyncHelper(const Model::UpdateRulesOfIpGroupRequest& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkSpaces
} // namespace Aws
