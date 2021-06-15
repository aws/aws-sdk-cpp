/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces/model/AssociateConnectionAliasResult.h>
#include <aws/workspaces/model/AssociateIpGroupsResult.h>
#include <aws/workspaces/model/AuthorizeIpRulesResult.h>
#include <aws/workspaces/model/CopyWorkspaceImageResult.h>
#include <aws/workspaces/model/CreateConnectionAliasResult.h>
#include <aws/workspaces/model/CreateIpGroupResult.h>
#include <aws/workspaces/model/CreateTagsResult.h>
#include <aws/workspaces/model/CreateWorkspaceBundleResult.h>
#include <aws/workspaces/model/CreateWorkspacesResult.h>
#include <aws/workspaces/model/DeleteConnectionAliasResult.h>
#include <aws/workspaces/model/DeleteIpGroupResult.h>
#include <aws/workspaces/model/DeleteTagsResult.h>
#include <aws/workspaces/model/DeleteWorkspaceBundleResult.h>
#include <aws/workspaces/model/DeleteWorkspaceImageResult.h>
#include <aws/workspaces/model/DeregisterWorkspaceDirectoryResult.h>
#include <aws/workspaces/model/DescribeAccountResult.h>
#include <aws/workspaces/model/DescribeAccountModificationsResult.h>
#include <aws/workspaces/model/DescribeClientPropertiesResult.h>
#include <aws/workspaces/model/DescribeConnectionAliasPermissionsResult.h>
#include <aws/workspaces/model/DescribeConnectionAliasesResult.h>
#include <aws/workspaces/model/DescribeIpGroupsResult.h>
#include <aws/workspaces/model/DescribeTagsResult.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceImagePermissionsResult.h>
#include <aws/workspaces/model/DescribeWorkspaceImagesResult.h>
#include <aws/workspaces/model/DescribeWorkspaceSnapshotsResult.h>
#include <aws/workspaces/model/DescribeWorkspacesResult.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusResult.h>
#include <aws/workspaces/model/DisassociateConnectionAliasResult.h>
#include <aws/workspaces/model/DisassociateIpGroupsResult.h>
#include <aws/workspaces/model/ImportWorkspaceImageResult.h>
#include <aws/workspaces/model/ListAvailableManagementCidrRangesResult.h>
#include <aws/workspaces/model/MigrateWorkspaceResult.h>
#include <aws/workspaces/model/ModifyAccountResult.h>
#include <aws/workspaces/model/ModifyClientPropertiesResult.h>
#include <aws/workspaces/model/ModifySelfservicePermissionsResult.h>
#include <aws/workspaces/model/ModifyWorkspaceAccessPropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspaceCreationPropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesResult.h>
#include <aws/workspaces/model/ModifyWorkspaceStateResult.h>
#include <aws/workspaces/model/RebootWorkspacesResult.h>
#include <aws/workspaces/model/RebuildWorkspacesResult.h>
#include <aws/workspaces/model/RegisterWorkspaceDirectoryResult.h>
#include <aws/workspaces/model/RestoreWorkspaceResult.h>
#include <aws/workspaces/model/RevokeIpRulesResult.h>
#include <aws/workspaces/model/StartWorkspacesResult.h>
#include <aws/workspaces/model/StopWorkspacesResult.h>
#include <aws/workspaces/model/TerminateWorkspacesResult.h>
#include <aws/workspaces/model/UpdateConnectionAliasPermissionResult.h>
#include <aws/workspaces/model/UpdateRulesOfIpGroupResult.h>
#include <aws/workspaces/model/UpdateWorkspaceBundleResult.h>
#include <aws/workspaces/model/UpdateWorkspaceImagePermissionResult.h>
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
        class AssociateConnectionAliasRequest;
        class AssociateIpGroupsRequest;
        class AuthorizeIpRulesRequest;
        class CopyWorkspaceImageRequest;
        class CreateConnectionAliasRequest;
        class CreateIpGroupRequest;
        class CreateTagsRequest;
        class CreateWorkspaceBundleRequest;
        class CreateWorkspacesRequest;
        class DeleteConnectionAliasRequest;
        class DeleteIpGroupRequest;
        class DeleteTagsRequest;
        class DeleteWorkspaceBundleRequest;
        class DeleteWorkspaceImageRequest;
        class DeregisterWorkspaceDirectoryRequest;
        class DescribeAccountRequest;
        class DescribeAccountModificationsRequest;
        class DescribeClientPropertiesRequest;
        class DescribeConnectionAliasPermissionsRequest;
        class DescribeConnectionAliasesRequest;
        class DescribeIpGroupsRequest;
        class DescribeTagsRequest;
        class DescribeWorkspaceBundlesRequest;
        class DescribeWorkspaceDirectoriesRequest;
        class DescribeWorkspaceImagePermissionsRequest;
        class DescribeWorkspaceImagesRequest;
        class DescribeWorkspaceSnapshotsRequest;
        class DescribeWorkspacesRequest;
        class DescribeWorkspacesConnectionStatusRequest;
        class DisassociateConnectionAliasRequest;
        class DisassociateIpGroupsRequest;
        class ImportWorkspaceImageRequest;
        class ListAvailableManagementCidrRangesRequest;
        class MigrateWorkspaceRequest;
        class ModifyAccountRequest;
        class ModifyClientPropertiesRequest;
        class ModifySelfservicePermissionsRequest;
        class ModifyWorkspaceAccessPropertiesRequest;
        class ModifyWorkspaceCreationPropertiesRequest;
        class ModifyWorkspacePropertiesRequest;
        class ModifyWorkspaceStateRequest;
        class RebootWorkspacesRequest;
        class RebuildWorkspacesRequest;
        class RegisterWorkspaceDirectoryRequest;
        class RestoreWorkspaceRequest;
        class RevokeIpRulesRequest;
        class StartWorkspacesRequest;
        class StopWorkspacesRequest;
        class TerminateWorkspacesRequest;
        class UpdateConnectionAliasPermissionRequest;
        class UpdateRulesOfIpGroupRequest;
        class UpdateWorkspaceBundleRequest;
        class UpdateWorkspaceImagePermissionRequest;

        typedef Aws::Utils::Outcome<AssociateConnectionAliasResult, WorkSpacesError> AssociateConnectionAliasOutcome;
        typedef Aws::Utils::Outcome<AssociateIpGroupsResult, WorkSpacesError> AssociateIpGroupsOutcome;
        typedef Aws::Utils::Outcome<AuthorizeIpRulesResult, WorkSpacesError> AuthorizeIpRulesOutcome;
        typedef Aws::Utils::Outcome<CopyWorkspaceImageResult, WorkSpacesError> CopyWorkspaceImageOutcome;
        typedef Aws::Utils::Outcome<CreateConnectionAliasResult, WorkSpacesError> CreateConnectionAliasOutcome;
        typedef Aws::Utils::Outcome<CreateIpGroupResult, WorkSpacesError> CreateIpGroupOutcome;
        typedef Aws::Utils::Outcome<CreateTagsResult, WorkSpacesError> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<CreateWorkspaceBundleResult, WorkSpacesError> CreateWorkspaceBundleOutcome;
        typedef Aws::Utils::Outcome<CreateWorkspacesResult, WorkSpacesError> CreateWorkspacesOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionAliasResult, WorkSpacesError> DeleteConnectionAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteIpGroupResult, WorkSpacesError> DeleteIpGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, WorkSpacesError> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkspaceBundleResult, WorkSpacesError> DeleteWorkspaceBundleOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkspaceImageResult, WorkSpacesError> DeleteWorkspaceImageOutcome;
        typedef Aws::Utils::Outcome<DeregisterWorkspaceDirectoryResult, WorkSpacesError> DeregisterWorkspaceDirectoryOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountResult, WorkSpacesError> DescribeAccountOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountModificationsResult, WorkSpacesError> DescribeAccountModificationsOutcome;
        typedef Aws::Utils::Outcome<DescribeClientPropertiesResult, WorkSpacesError> DescribeClientPropertiesOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionAliasPermissionsResult, WorkSpacesError> DescribeConnectionAliasPermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeConnectionAliasesResult, WorkSpacesError> DescribeConnectionAliasesOutcome;
        typedef Aws::Utils::Outcome<DescribeIpGroupsResult, WorkSpacesError> DescribeIpGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, WorkSpacesError> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceBundlesResult, WorkSpacesError> DescribeWorkspaceBundlesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceDirectoriesResult, WorkSpacesError> DescribeWorkspaceDirectoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceImagePermissionsResult, WorkSpacesError> DescribeWorkspaceImagePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceImagesResult, WorkSpacesError> DescribeWorkspaceImagesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceSnapshotsResult, WorkSpacesError> DescribeWorkspaceSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspacesResult, WorkSpacesError> DescribeWorkspacesOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspacesConnectionStatusResult, WorkSpacesError> DescribeWorkspacesConnectionStatusOutcome;
        typedef Aws::Utils::Outcome<DisassociateConnectionAliasResult, WorkSpacesError> DisassociateConnectionAliasOutcome;
        typedef Aws::Utils::Outcome<DisassociateIpGroupsResult, WorkSpacesError> DisassociateIpGroupsOutcome;
        typedef Aws::Utils::Outcome<ImportWorkspaceImageResult, WorkSpacesError> ImportWorkspaceImageOutcome;
        typedef Aws::Utils::Outcome<ListAvailableManagementCidrRangesResult, WorkSpacesError> ListAvailableManagementCidrRangesOutcome;
        typedef Aws::Utils::Outcome<MigrateWorkspaceResult, WorkSpacesError> MigrateWorkspaceOutcome;
        typedef Aws::Utils::Outcome<ModifyAccountResult, WorkSpacesError> ModifyAccountOutcome;
        typedef Aws::Utils::Outcome<ModifyClientPropertiesResult, WorkSpacesError> ModifyClientPropertiesOutcome;
        typedef Aws::Utils::Outcome<ModifySelfservicePermissionsResult, WorkSpacesError> ModifySelfservicePermissionsOutcome;
        typedef Aws::Utils::Outcome<ModifyWorkspaceAccessPropertiesResult, WorkSpacesError> ModifyWorkspaceAccessPropertiesOutcome;
        typedef Aws::Utils::Outcome<ModifyWorkspaceCreationPropertiesResult, WorkSpacesError> ModifyWorkspaceCreationPropertiesOutcome;
        typedef Aws::Utils::Outcome<ModifyWorkspacePropertiesResult, WorkSpacesError> ModifyWorkspacePropertiesOutcome;
        typedef Aws::Utils::Outcome<ModifyWorkspaceStateResult, WorkSpacesError> ModifyWorkspaceStateOutcome;
        typedef Aws::Utils::Outcome<RebootWorkspacesResult, WorkSpacesError> RebootWorkspacesOutcome;
        typedef Aws::Utils::Outcome<RebuildWorkspacesResult, WorkSpacesError> RebuildWorkspacesOutcome;
        typedef Aws::Utils::Outcome<RegisterWorkspaceDirectoryResult, WorkSpacesError> RegisterWorkspaceDirectoryOutcome;
        typedef Aws::Utils::Outcome<RestoreWorkspaceResult, WorkSpacesError> RestoreWorkspaceOutcome;
        typedef Aws::Utils::Outcome<RevokeIpRulesResult, WorkSpacesError> RevokeIpRulesOutcome;
        typedef Aws::Utils::Outcome<StartWorkspacesResult, WorkSpacesError> StartWorkspacesOutcome;
        typedef Aws::Utils::Outcome<StopWorkspacesResult, WorkSpacesError> StopWorkspacesOutcome;
        typedef Aws::Utils::Outcome<TerminateWorkspacesResult, WorkSpacesError> TerminateWorkspacesOutcome;
        typedef Aws::Utils::Outcome<UpdateConnectionAliasPermissionResult, WorkSpacesError> UpdateConnectionAliasPermissionOutcome;
        typedef Aws::Utils::Outcome<UpdateRulesOfIpGroupResult, WorkSpacesError> UpdateRulesOfIpGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkspaceBundleResult, WorkSpacesError> UpdateWorkspaceBundleOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkspaceImagePermissionResult, WorkSpacesError> UpdateWorkspaceImagePermissionOutcome;

        typedef std::future<AssociateConnectionAliasOutcome> AssociateConnectionAliasOutcomeCallable;
        typedef std::future<AssociateIpGroupsOutcome> AssociateIpGroupsOutcomeCallable;
        typedef std::future<AuthorizeIpRulesOutcome> AuthorizeIpRulesOutcomeCallable;
        typedef std::future<CopyWorkspaceImageOutcome> CopyWorkspaceImageOutcomeCallable;
        typedef std::future<CreateConnectionAliasOutcome> CreateConnectionAliasOutcomeCallable;
        typedef std::future<CreateIpGroupOutcome> CreateIpGroupOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<CreateWorkspaceBundleOutcome> CreateWorkspaceBundleOutcomeCallable;
        typedef std::future<CreateWorkspacesOutcome> CreateWorkspacesOutcomeCallable;
        typedef std::future<DeleteConnectionAliasOutcome> DeleteConnectionAliasOutcomeCallable;
        typedef std::future<DeleteIpGroupOutcome> DeleteIpGroupOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DeleteWorkspaceBundleOutcome> DeleteWorkspaceBundleOutcomeCallable;
        typedef std::future<DeleteWorkspaceImageOutcome> DeleteWorkspaceImageOutcomeCallable;
        typedef std::future<DeregisterWorkspaceDirectoryOutcome> DeregisterWorkspaceDirectoryOutcomeCallable;
        typedef std::future<DescribeAccountOutcome> DescribeAccountOutcomeCallable;
        typedef std::future<DescribeAccountModificationsOutcome> DescribeAccountModificationsOutcomeCallable;
        typedef std::future<DescribeClientPropertiesOutcome> DescribeClientPropertiesOutcomeCallable;
        typedef std::future<DescribeConnectionAliasPermissionsOutcome> DescribeConnectionAliasPermissionsOutcomeCallable;
        typedef std::future<DescribeConnectionAliasesOutcome> DescribeConnectionAliasesOutcomeCallable;
        typedef std::future<DescribeIpGroupsOutcome> DescribeIpGroupsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DescribeWorkspaceBundlesOutcome> DescribeWorkspaceBundlesOutcomeCallable;
        typedef std::future<DescribeWorkspaceDirectoriesOutcome> DescribeWorkspaceDirectoriesOutcomeCallable;
        typedef std::future<DescribeWorkspaceImagePermissionsOutcome> DescribeWorkspaceImagePermissionsOutcomeCallable;
        typedef std::future<DescribeWorkspaceImagesOutcome> DescribeWorkspaceImagesOutcomeCallable;
        typedef std::future<DescribeWorkspaceSnapshotsOutcome> DescribeWorkspaceSnapshotsOutcomeCallable;
        typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
        typedef std::future<DescribeWorkspacesConnectionStatusOutcome> DescribeWorkspacesConnectionStatusOutcomeCallable;
        typedef std::future<DisassociateConnectionAliasOutcome> DisassociateConnectionAliasOutcomeCallable;
        typedef std::future<DisassociateIpGroupsOutcome> DisassociateIpGroupsOutcomeCallable;
        typedef std::future<ImportWorkspaceImageOutcome> ImportWorkspaceImageOutcomeCallable;
        typedef std::future<ListAvailableManagementCidrRangesOutcome> ListAvailableManagementCidrRangesOutcomeCallable;
        typedef std::future<MigrateWorkspaceOutcome> MigrateWorkspaceOutcomeCallable;
        typedef std::future<ModifyAccountOutcome> ModifyAccountOutcomeCallable;
        typedef std::future<ModifyClientPropertiesOutcome> ModifyClientPropertiesOutcomeCallable;
        typedef std::future<ModifySelfservicePermissionsOutcome> ModifySelfservicePermissionsOutcomeCallable;
        typedef std::future<ModifyWorkspaceAccessPropertiesOutcome> ModifyWorkspaceAccessPropertiesOutcomeCallable;
        typedef std::future<ModifyWorkspaceCreationPropertiesOutcome> ModifyWorkspaceCreationPropertiesOutcomeCallable;
        typedef std::future<ModifyWorkspacePropertiesOutcome> ModifyWorkspacePropertiesOutcomeCallable;
        typedef std::future<ModifyWorkspaceStateOutcome> ModifyWorkspaceStateOutcomeCallable;
        typedef std::future<RebootWorkspacesOutcome> RebootWorkspacesOutcomeCallable;
        typedef std::future<RebuildWorkspacesOutcome> RebuildWorkspacesOutcomeCallable;
        typedef std::future<RegisterWorkspaceDirectoryOutcome> RegisterWorkspaceDirectoryOutcomeCallable;
        typedef std::future<RestoreWorkspaceOutcome> RestoreWorkspaceOutcomeCallable;
        typedef std::future<RevokeIpRulesOutcome> RevokeIpRulesOutcomeCallable;
        typedef std::future<StartWorkspacesOutcome> StartWorkspacesOutcomeCallable;
        typedef std::future<StopWorkspacesOutcome> StopWorkspacesOutcomeCallable;
        typedef std::future<TerminateWorkspacesOutcome> TerminateWorkspacesOutcomeCallable;
        typedef std::future<UpdateConnectionAliasPermissionOutcome> UpdateConnectionAliasPermissionOutcomeCallable;
        typedef std::future<UpdateRulesOfIpGroupOutcome> UpdateRulesOfIpGroupOutcomeCallable;
        typedef std::future<UpdateWorkspaceBundleOutcome> UpdateWorkspaceBundleOutcomeCallable;
        typedef std::future<UpdateWorkspaceImagePermissionOutcome> UpdateWorkspaceImagePermissionOutcomeCallable;
} // namespace Model

  class WorkSpacesClient;

    typedef std::function<void(const WorkSpacesClient*, const Model::AssociateConnectionAliasRequest&, const Model::AssociateConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::AssociateIpGroupsRequest&, const Model::AssociateIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::AuthorizeIpRulesRequest&, const Model::AuthorizeIpRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeIpRulesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CopyWorkspaceImageRequest&, const Model::CopyWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateConnectionAliasRequest&, const Model::CreateConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateIpGroupRequest&, const Model::CreateIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateWorkspaceBundleRequest&, const Model::CreateWorkspaceBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceBundleResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::CreateWorkspacesRequest&, const Model::CreateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteConnectionAliasRequest&, const Model::DeleteConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteIpGroupRequest&, const Model::DeleteIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteWorkspaceBundleRequest&, const Model::DeleteWorkspaceBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceBundleResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeleteWorkspaceImageRequest&, const Model::DeleteWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DeregisterWorkspaceDirectoryRequest&, const Model::DeregisterWorkspaceDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterWorkspaceDirectoryResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeAccountRequest&, const Model::DescribeAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeAccountModificationsRequest&, const Model::DescribeAccountModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountModificationsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeClientPropertiesRequest&, const Model::DescribeClientPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeConnectionAliasPermissionsRequest&, const Model::DescribeConnectionAliasPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionAliasPermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeConnectionAliasesRequest&, const Model::DescribeConnectionAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectionAliasesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeIpGroupsRequest&, const Model::DescribeIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceBundlesRequest&, const Model::DescribeWorkspaceBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceBundlesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceDirectoriesRequest&, const Model::DescribeWorkspaceDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceDirectoriesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceImagePermissionsRequest&, const Model::DescribeWorkspaceImagePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceImagePermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceImagesRequest&, const Model::DescribeWorkspaceImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceImagesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspaceSnapshotsRequest&, const Model::DescribeWorkspaceSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceSnapshotsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesRequest&, const Model::DescribeWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DescribeWorkspacesConnectionStatusRequest&, const Model::DescribeWorkspacesConnectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspacesConnectionStatusResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DisassociateConnectionAliasRequest&, const Model::DisassociateConnectionAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectionAliasResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::DisassociateIpGroupsRequest&, const Model::DisassociateIpGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateIpGroupsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ImportWorkspaceImageRequest&, const Model::ImportWorkspaceImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportWorkspaceImageResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ListAvailableManagementCidrRangesRequest&, const Model::ListAvailableManagementCidrRangesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableManagementCidrRangesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::MigrateWorkspaceRequest&, const Model::MigrateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MigrateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyAccountRequest&, const Model::ModifyAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyAccountResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyClientPropertiesRequest&, const Model::ModifyClientPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyClientPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifySelfservicePermissionsRequest&, const Model::ModifySelfservicePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifySelfservicePermissionsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspaceAccessPropertiesRequest&, const Model::ModifyWorkspaceAccessPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspaceAccessPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspaceCreationPropertiesRequest&, const Model::ModifyWorkspaceCreationPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspaceCreationPropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspacePropertiesRequest&, const Model::ModifyWorkspacePropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspacePropertiesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::ModifyWorkspaceStateRequest&, const Model::ModifyWorkspaceStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyWorkspaceStateResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebootWorkspacesRequest&, const Model::RebootWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RebuildWorkspacesRequest&, const Model::RebuildWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebuildWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RegisterWorkspaceDirectoryRequest&, const Model::RegisterWorkspaceDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterWorkspaceDirectoryResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RestoreWorkspaceRequest&, const Model::RestoreWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreWorkspaceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::RevokeIpRulesRequest&, const Model::RevokeIpRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeIpRulesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StartWorkspacesRequest&, const Model::StartWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::StopWorkspacesRequest&, const Model::StopWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::TerminateWorkspacesRequest&, const Model::TerminateWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateWorkspacesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateConnectionAliasPermissionRequest&, const Model::UpdateConnectionAliasPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionAliasPermissionResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateRulesOfIpGroupRequest&, const Model::UpdateRulesOfIpGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRulesOfIpGroupResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateWorkspaceBundleRequest&, const Model::UpdateWorkspaceBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceBundleResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesClient*, const Model::UpdateWorkspaceImagePermissionRequest&, const Model::UpdateWorkspaceImagePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceImagePermissionResponseReceivedHandler;

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


        /**
         * <p>Associates the specified connection alias with the specified directory to
         * enable cross-Region redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConnectionAliasOutcome AssociateConnectionAlias(const Model::AssociateConnectionAliasRequest& request) const;

        /**
         * <p>Associates the specified connection alias with the specified directory to
         * enable cross-Region redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateConnectionAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateConnectionAliasOutcomeCallable AssociateConnectionAliasCallable(const Model::AssociateConnectionAliasRequest& request) const;

        /**
         * <p>Associates the specified connection alias with the specified directory to
         * enable cross-Region redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AssociateConnectionAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateConnectionAliasAsync(const Model::AssociateConnectionAliasRequest& request, const AssociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Copies the specified image from the specified Region to the current Region.
         * For more information about copying images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/copy-custom-image.html">
         * Copy a Custom WorkSpaces Image</a>.</p>  <p>In the China (Ningxia) Region,
         * you can copy images only within the same Region.</p> <p>In the AWS GovCloud
         * (US-West) Region, to copy images to and from other AWS Regions, contact AWS
         * Support.</p>   <p>Before copying a shared image, be sure to
         * verify that it has been shared from the correct AWS account. To determine if an
         * image has been shared and to see the AWS account ID that owns an image, use the
         * <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">DescribeWorkSpaceImages</a>
         * and <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImagePermissions.html">DescribeWorkspaceImagePermissions</a>
         * API operations. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyWorkspaceImageOutcome CopyWorkspaceImage(const Model::CopyWorkspaceImageRequest& request) const;

        /**
         * <p>Copies the specified image from the specified Region to the current Region.
         * For more information about copying images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/copy-custom-image.html">
         * Copy a Custom WorkSpaces Image</a>.</p>  <p>In the China (Ningxia) Region,
         * you can copy images only within the same Region.</p> <p>In the AWS GovCloud
         * (US-West) Region, to copy images to and from other AWS Regions, contact AWS
         * Support.</p>   <p>Before copying a shared image, be sure to
         * verify that it has been shared from the correct AWS account. To determine if an
         * image has been shared and to see the AWS account ID that owns an image, use the
         * <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">DescribeWorkSpaceImages</a>
         * and <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImagePermissions.html">DescribeWorkspaceImagePermissions</a>
         * API operations. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyWorkspaceImageOutcomeCallable CopyWorkspaceImageCallable(const Model::CopyWorkspaceImageRequest& request) const;

        /**
         * <p>Copies the specified image from the specified Region to the current Region.
         * For more information about copying images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/copy-custom-image.html">
         * Copy a Custom WorkSpaces Image</a>.</p>  <p>In the China (Ningxia) Region,
         * you can copy images only within the same Region.</p> <p>In the AWS GovCloud
         * (US-West) Region, to copy images to and from other AWS Regions, contact AWS
         * Support.</p>   <p>Before copying a shared image, be sure to
         * verify that it has been shared from the correct AWS account. To determine if an
         * image has been shared and to see the AWS account ID that owns an image, use the
         * <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImages.html">DescribeWorkSpaceImages</a>
         * and <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaceImagePermissions.html">DescribeWorkspaceImagePermissions</a>
         * API operations. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CopyWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyWorkspaceImageAsync(const Model::CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates the specified connection alias for use with cross-Region redirection.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionAliasOutcome CreateConnectionAlias(const Model::CreateConnectionAliasRequest& request) const;

        /**
         * <p>Creates the specified connection alias for use with cross-Region redirection.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateConnectionAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionAliasOutcomeCallable CreateConnectionAliasCallable(const Model::CreateConnectionAliasRequest& request) const;

        /**
         * <p>Creates the specified connection alias for use with cross-Region redirection.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateConnectionAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAliasAsync(const Model::CreateConnectionAliasRequest& request, const CreateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates the specified WorkSpace bundle. For more information about creating
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/create-custom-bundle.html">
         * Create a Custom WorkSpaces Image and Bundle</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceBundleOutcome CreateWorkspaceBundle(const Model::CreateWorkspaceBundleRequest& request) const;

        /**
         * <p>Creates the specified WorkSpace bundle. For more information about creating
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/create-custom-bundle.html">
         * Create a Custom WorkSpaces Image and Bundle</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaceBundle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspaceBundleOutcomeCallable CreateWorkspaceBundleCallable(const Model::CreateWorkspaceBundleRequest& request) const;

        /**
         * <p>Creates the specified WorkSpace bundle. For more information about creating
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/create-custom-bundle.html">
         * Create a Custom WorkSpaces Image and Bundle</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/CreateWorkspaceBundle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspaceBundleAsync(const Model::CreateWorkspaceBundleRequest& request, const CreateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes the specified connection alias. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p> <b>If
         * you will no longer be using a fully qualified domain name (FQDN) as the
         * registration code for your WorkSpaces users, you must take certain precautions
         * to prevent potential security issues.</b> For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html#cross-region-redirection-security-considerations">
         * Security Considerations if You Stop Using Cross-Region Redirection</a>.</p>
         *   <p>To delete a connection alias that has been shared, the
         * shared account must first disassociate the connection alias from any directories
         * it has been associated with. Then you must unshare the connection alias from the
         * account it has been shared with. You can delete a connection alias only after it
         * is no longer shared with any accounts or associated with any directories.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionAliasOutcome DeleteConnectionAlias(const Model::DeleteConnectionAliasRequest& request) const;

        /**
         * <p>Deletes the specified connection alias. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p> <b>If
         * you will no longer be using a fully qualified domain name (FQDN) as the
         * registration code for your WorkSpaces users, you must take certain precautions
         * to prevent potential security issues.</b> For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html#cross-region-redirection-security-considerations">
         * Security Considerations if You Stop Using Cross-Region Redirection</a>.</p>
         *   <p>To delete a connection alias that has been shared, the
         * shared account must first disassociate the connection alias from any directories
         * it has been associated with. Then you must unshare the connection alias from the
         * account it has been shared with. You can delete a connection alias only after it
         * is no longer shared with any accounts or associated with any directories.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteConnectionAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionAliasOutcomeCallable DeleteConnectionAliasCallable(const Model::DeleteConnectionAliasRequest& request) const;

        /**
         * <p>Deletes the specified connection alias. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p> <b>If
         * you will no longer be using a fully qualified domain name (FQDN) as the
         * registration code for your WorkSpaces users, you must take certain precautions
         * to prevent potential security issues.</b> For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html#cross-region-redirection-security-considerations">
         * Security Considerations if You Stop Using Cross-Region Redirection</a>.</p>
         *   <p>To delete a connection alias that has been shared, the
         * shared account must first disassociate the connection alias from any directories
         * it has been associated with. Then you must unshare the connection alias from the
         * account it has been shared with. You can delete a connection alias only after it
         * is no longer shared with any accounts or associated with any directories.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteConnectionAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAliasAsync(const Model::DeleteConnectionAliasRequest& request, const DeleteConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes the specified WorkSpace bundle. For more information about deleting
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete_bundle.html">
         * Delete a Custom WorkSpaces Bundle or Image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceBundleOutcome DeleteWorkspaceBundle(const Model::DeleteWorkspaceBundleRequest& request) const;

        /**
         * <p>Deletes the specified WorkSpace bundle. For more information about deleting
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete_bundle.html">
         * Delete a Custom WorkSpaces Bundle or Image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceBundle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceBundleOutcomeCallable DeleteWorkspaceBundleCallable(const Model::DeleteWorkspaceBundleRequest& request) const;

        /**
         * <p>Deletes the specified WorkSpace bundle. For more information about deleting
         * WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete_bundle.html">
         * Delete a Custom WorkSpaces Bundle or Image</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceBundle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceBundleAsync(const Model::DeleteWorkspaceBundleRequest& request, const DeleteWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and unshare the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceImageOutcome DeleteWorkspaceImage(const Model::DeleteWorkspaceImageRequest& request) const;

        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and unshare the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceImageOutcomeCallable DeleteWorkspaceImageCallable(const Model::DeleteWorkspaceImageRequest& request) const;

        /**
         * <p>Deletes the specified image from your account. To delete an image, you must
         * first delete any bundles that are associated with the image and unshare the
         * image if it is shared with other accounts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeleteWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceImageAsync(const Model::DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the specified directory. This operation is asynchronous and
         * returns before the WorkSpace directory is deregistered. If any WorkSpaces are
         * registered to this directory, you must remove them before you can deregister the
         * directory.</p>  <p>Simple AD and AD Connector are made available to you
         * free of charge to use with WorkSpaces. If there are no WorkSpaces being used
         * with your Simple AD or AD Connector directory for 30 consecutive days, this
         * directory will be automatically deregistered for use with Amazon WorkSpaces, and
         * you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services
         * pricing terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeregisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterWorkspaceDirectoryOutcome DeregisterWorkspaceDirectory(const Model::DeregisterWorkspaceDirectoryRequest& request) const;

        /**
         * <p>Deregisters the specified directory. This operation is asynchronous and
         * returns before the WorkSpace directory is deregistered. If any WorkSpaces are
         * registered to this directory, you must remove them before you can deregister the
         * directory.</p>  <p>Simple AD and AD Connector are made available to you
         * free of charge to use with WorkSpaces. If there are no WorkSpaces being used
         * with your Simple AD or AD Connector directory for 30 consecutive days, this
         * directory will be automatically deregistered for use with Amazon WorkSpaces, and
         * you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services
         * pricing terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeregisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterWorkspaceDirectoryOutcomeCallable DeregisterWorkspaceDirectoryCallable(const Model::DeregisterWorkspaceDirectoryRequest& request) const;

        /**
         * <p>Deregisters the specified directory. This operation is asynchronous and
         * returns before the WorkSpace directory is deregistered. If any WorkSpaces are
         * registered to this directory, you must remove them before you can deregister the
         * directory.</p>  <p>Simple AD and AD Connector are made available to you
         * free of charge to use with WorkSpaces. If there are no WorkSpaces being used
         * with your Simple AD or AD Connector directory for 30 consecutive days, this
         * directory will be automatically deregistered for use with Amazon WorkSpaces, and
         * you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services
         * pricing terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DeregisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterWorkspaceDirectoryAsync(const Model::DeregisterWorkspaceDirectoryRequest& request, const DeregisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes the configuration of Bring Your Own License
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOutcome DescribeAccount(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves a list that describes the configuration of Bring Your Own License
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountOutcomeCallable DescribeAccountCallable(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves a list that describes the configuration of Bring Your Own License
         * (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAsync(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes modifications to the configuration of Bring
         * Your Own License (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccountModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountModificationsOutcome DescribeAccountModifications(const Model::DescribeAccountModificationsRequest& request) const;

        /**
         * <p>Retrieves a list that describes modifications to the configuration of Bring
         * Your Own License (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeAccountModifications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountModificationsOutcomeCallable DescribeAccountModificationsCallable(const Model::DescribeAccountModificationsRequest& request) const;

        /**
         * <p>Retrieves a list that describes modifications to the configuration of Bring
         * Your Own License (BYOL) for the specified account.</p><p><h3>See Also:</h3>   <a
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
         * <p>Describes the permissions that the owner of a connection alias has granted to
         * another AWS account for the specified connection alias. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliasPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionAliasPermissionsOutcome DescribeConnectionAliasPermissions(const Model::DescribeConnectionAliasPermissionsRequest& request) const;

        /**
         * <p>Describes the permissions that the owner of a connection alias has granted to
         * another AWS account for the specified connection alias. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliasPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionAliasPermissionsOutcomeCallable DescribeConnectionAliasPermissionsCallable(const Model::DescribeConnectionAliasPermissionsRequest& request) const;

        /**
         * <p>Describes the permissions that the owner of a connection alias has granted to
         * another AWS account for the specified connection alias. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliasPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionAliasPermissionsAsync(const Model::DescribeConnectionAliasPermissionsRequest& request, const DescribeConnectionAliasPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list that describes the connection aliases used for cross-Region
         * redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConnectionAliasesOutcome DescribeConnectionAliases(const Model::DescribeConnectionAliasesRequest& request) const;

        /**
         * <p>Retrieves a list that describes the connection aliases used for cross-Region
         * redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConnectionAliasesOutcomeCallable DescribeConnectionAliasesCallable(const Model::DescribeConnectionAliasesRequest& request) const;

        /**
         * <p>Retrieves a list that describes the connection aliases used for cross-Region
         * redirection. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeConnectionAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConnectionAliasesAsync(const Model::DescribeConnectionAliasesRequest& request, const DescribeConnectionAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Describes the available directories that are registered with Amazon
         * WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcome DescribeWorkspaceDirectories(const Model::DescribeWorkspaceDirectoriesRequest& request) const;

        /**
         * <p>Describes the available directories that are registered with Amazon
         * WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceDirectoriesOutcomeCallable DescribeWorkspaceDirectoriesCallable(const Model::DescribeWorkspaceDirectoriesRequest& request) const;

        /**
         * <p>Describes the available directories that are registered with Amazon
         * WorkSpaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceDirectories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceDirectoriesAsync(const Model::DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions that the owner of an image has granted to other AWS
         * accounts for an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImagePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceImagePermissionsOutcome DescribeWorkspaceImagePermissions(const Model::DescribeWorkspaceImagePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions that the owner of an image has granted to other AWS
         * accounts for an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImagePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceImagePermissionsOutcomeCallable DescribeWorkspaceImagePermissionsCallable(const Model::DescribeWorkspaceImagePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions that the owner of an image has granted to other AWS
         * accounts for an image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceImagePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceImagePermissionsAsync(const Model::DescribeWorkspaceImagePermissionsRequest& request, const DescribeWorkspaceImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Describes the snapshots for the specified WorkSpace.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceSnapshotsOutcome DescribeWorkspaceSnapshots(const Model::DescribeWorkspaceSnapshotsRequest& request) const;

        /**
         * <p>Describes the snapshots for the specified WorkSpace.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceSnapshotsOutcomeCallable DescribeWorkspaceSnapshotsCallable(const Model::DescribeWorkspaceSnapshotsRequest& request) const;

        /**
         * <p>Describes the snapshots for the specified WorkSpace.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DescribeWorkspaceSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceSnapshotsAsync(const Model::DescribeWorkspaceSnapshotsRequest& request, const DescribeWorkspaceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disassociates a connection alias from a directory. Disassociating a
         * connection alias disables cross-Region redirection between two directories in
         * different AWS Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateConnectionAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectionAliasOutcome DisassociateConnectionAlias(const Model::DisassociateConnectionAliasRequest& request) const;

        /**
         * <p>Disassociates a connection alias from a directory. Disassociating a
         * connection alias disables cross-Region redirection between two directories in
         * different AWS Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateConnectionAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConnectionAliasOutcomeCallable DisassociateConnectionAliasCallable(const Model::DisassociateConnectionAliasRequest& request) const;

        /**
         * <p>Disassociates a connection alias from a directory. Disassociating a
         * connection alias disables cross-Region redirection between two directories in
         * different AWS Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <p>Before
         * performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DisassociateConnectionAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConnectionAliasAsync(const Model::DisassociateConnectionAliasRequest& request, const DisassociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Imports the specified Windows 10 Bring Your Own License (BYOL) image into
         * Amazon WorkSpaces. The image must be an already licensed Amazon EC2 image that
         * is in your AWS account, and you must own the image. For more information about
         * creating BYOL images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
         * Bring Your Own Windows Desktop Licenses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportWorkspaceImageOutcome ImportWorkspaceImage(const Model::ImportWorkspaceImageRequest& request) const;

        /**
         * <p>Imports the specified Windows 10 Bring Your Own License (BYOL) image into
         * Amazon WorkSpaces. The image must be an already licensed Amazon EC2 image that
         * is in your AWS account, and you must own the image. For more information about
         * creating BYOL images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
         * Bring Your Own Windows Desktop Licenses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportWorkspaceImageOutcomeCallable ImportWorkspaceImageCallable(const Model::ImportWorkspaceImageRequest& request) const;

        /**
         * <p>Imports the specified Windows 10 Bring Your Own License (BYOL) image into
         * Amazon WorkSpaces. The image must be an already licensed Amazon EC2 image that
         * is in your AWS account, and you must own the image. For more information about
         * creating BYOL images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/byol-windows-images.html">
         * Bring Your Own Windows Desktop Licenses</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ImportWorkspaceImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportWorkspaceImageAsync(const Model::ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable Bring Your Own
         * License (BYOL). </p> <p>This operation can be run only by AWS accounts that are
         * enabled for BYOL. If your account isn't enabled for BYOL, you'll receive an
         * <code>AccessDeniedException</code> error.</p> <p>The management network
         * interface is connected to a secure Amazon WorkSpaces management network. It is
         * used for interactive streaming of the WorkSpace desktop to Amazon WorkSpaces
         * clients, and to allow Amazon WorkSpaces to manage the WorkSpace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableManagementCidrRangesOutcome ListAvailableManagementCidrRanges(const Model::ListAvailableManagementCidrRangesRequest& request) const;

        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable Bring Your Own
         * License (BYOL). </p> <p>This operation can be run only by AWS accounts that are
         * enabled for BYOL. If your account isn't enabled for BYOL, you'll receive an
         * <code>AccessDeniedException</code> error.</p> <p>The management network
         * interface is connected to a secure Amazon WorkSpaces management network. It is
         * used for interactive streaming of the WorkSpace desktop to Amazon WorkSpaces
         * clients, and to allow Amazon WorkSpaces to manage the WorkSpace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAvailableManagementCidrRangesOutcomeCallable ListAvailableManagementCidrRangesCallable(const Model::ListAvailableManagementCidrRangesRequest& request) const;

        /**
         * <p>Retrieves a list of IP address ranges, specified as IPv4 CIDR blocks, that
         * you can use for the network management interface when you enable Bring Your Own
         * License (BYOL). </p> <p>This operation can be run only by AWS accounts that are
         * enabled for BYOL. If your account isn't enabled for BYOL, you'll receive an
         * <code>AccessDeniedException</code> error.</p> <p>The management network
         * interface is connected to a secure Amazon WorkSpaces management network. It is
         * used for interactive streaming of the WorkSpace desktop to Amazon WorkSpaces
         * clients, and to allow Amazon WorkSpaces to manage the WorkSpace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ListAvailableManagementCidrRanges">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableManagementCidrRangesAsync(const Model::ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Migrates a WorkSpace from one operating system or bundle type to another,
         * while retaining the data on the user volume.</p> <p>The migration process
         * recreates the WorkSpace by using a new root volume from the target bundle image
         * and the user volume from the last available snapshot of the original WorkSpace.
         * During migration, the original <code>D:\Users\%USERNAME%</code> user profile
         * folder is renamed to <code>D:\Users\%USERNAME%MMddyyTHHmmss%.NotMigrated</code>.
         * A new <code>D:\Users\%USERNAME%\</code> folder is generated by the new OS.
         * Certain files in the old user profile are moved to the new user profile.</p>
         * <p>For available migration scenarios, details about what happens during
         * migration, and best practices, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/migrate-workspaces.html">Migrate
         * a WorkSpace</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/MigrateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::MigrateWorkspaceOutcome MigrateWorkspace(const Model::MigrateWorkspaceRequest& request) const;

        /**
         * <p>Migrates a WorkSpace from one operating system or bundle type to another,
         * while retaining the data on the user volume.</p> <p>The migration process
         * recreates the WorkSpace by using a new root volume from the target bundle image
         * and the user volume from the last available snapshot of the original WorkSpace.
         * During migration, the original <code>D:\Users\%USERNAME%</code> user profile
         * folder is renamed to <code>D:\Users\%USERNAME%MMddyyTHHmmss%.NotMigrated</code>.
         * A new <code>D:\Users\%USERNAME%\</code> folder is generated by the new OS.
         * Certain files in the old user profile are moved to the new user profile.</p>
         * <p>For available migration scenarios, details about what happens during
         * migration, and best practices, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/migrate-workspaces.html">Migrate
         * a WorkSpace</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/MigrateWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MigrateWorkspaceOutcomeCallable MigrateWorkspaceCallable(const Model::MigrateWorkspaceRequest& request) const;

        /**
         * <p>Migrates a WorkSpace from one operating system or bundle type to another,
         * while retaining the data on the user volume.</p> <p>The migration process
         * recreates the WorkSpace by using a new root volume from the target bundle image
         * and the user volume from the last available snapshot of the original WorkSpace.
         * During migration, the original <code>D:\Users\%USERNAME%</code> user profile
         * folder is renamed to <code>D:\Users\%USERNAME%MMddyyTHHmmss%.NotMigrated</code>.
         * A new <code>D:\Users\%USERNAME%\</code> folder is generated by the new OS.
         * Certain files in the old user profile are moved to the new user profile.</p>
         * <p>For available migration scenarios, details about what happens during
         * migration, and best practices, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/migrate-workspaces.html">Migrate
         * a WorkSpace</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/MigrateWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MigrateWorkspaceAsync(const Model::MigrateWorkspaceRequest& request, const MigrateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the configuration of Bring Your Own License (BYOL) for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyAccountOutcome ModifyAccount(const Model::ModifyAccountRequest& request) const;

        /**
         * <p>Modifies the configuration of Bring Your Own License (BYOL) for the specified
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyAccountOutcomeCallable ModifyAccountCallable(const Model::ModifyAccountRequest& request) const;

        /**
         * <p>Modifies the configuration of Bring Your Own License (BYOL) for the specified
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
         * <p>Modifies the self-service WorkSpace management capabilities for your users.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/enable-user-self-service-workspace-management.html">Enable
         * Self-Service WorkSpace Management Capabilities for Your Users</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifySelfservicePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifySelfservicePermissionsOutcome ModifySelfservicePermissions(const Model::ModifySelfservicePermissionsRequest& request) const;

        /**
         * <p>Modifies the self-service WorkSpace management capabilities for your users.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/enable-user-self-service-workspace-management.html">Enable
         * Self-Service WorkSpace Management Capabilities for Your Users</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifySelfservicePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifySelfservicePermissionsOutcomeCallable ModifySelfservicePermissionsCallable(const Model::ModifySelfservicePermissionsRequest& request) const;

        /**
         * <p>Modifies the self-service WorkSpace management capabilities for your users.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/enable-user-self-service-workspace-management.html">Enable
         * Self-Service WorkSpace Management Capabilities for Your Users</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifySelfservicePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifySelfservicePermissionsAsync(const Model::ModifySelfservicePermissionsRequest& request, const ModifySelfservicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies which devices and operating systems users can use to access their
         * WorkSpaces. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html#control-device-access">
         * Control Device Access</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceAccessProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceAccessPropertiesOutcome ModifyWorkspaceAccessProperties(const Model::ModifyWorkspaceAccessPropertiesRequest& request) const;

        /**
         * <p>Specifies which devices and operating systems users can use to access their
         * WorkSpaces. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html#control-device-access">
         * Control Device Access</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceAccessProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyWorkspaceAccessPropertiesOutcomeCallable ModifyWorkspaceAccessPropertiesCallable(const Model::ModifyWorkspaceAccessPropertiesRequest& request) const;

        /**
         * <p>Specifies which devices and operating systems users can use to access their
         * WorkSpaces. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html#control-device-access">
         * Control Device Access</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceAccessProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyWorkspaceAccessPropertiesAsync(const Model::ModifyWorkspaceAccessPropertiesRequest& request, const ModifyWorkspaceAccessPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modify the default properties used to create WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceCreationProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspaceCreationPropertiesOutcome ModifyWorkspaceCreationProperties(const Model::ModifyWorkspaceCreationPropertiesRequest& request) const;

        /**
         * <p>Modify the default properties used to create WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceCreationProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyWorkspaceCreationPropertiesOutcomeCallable ModifyWorkspaceCreationPropertiesCallable(const Model::ModifyWorkspaceCreationPropertiesRequest& request) const;

        /**
         * <p>Modify the default properties used to create WorkSpaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceCreationProperties">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyWorkspaceCreationPropertiesAsync(const Model::ModifyWorkspaceCreationPropertiesRequest& request, const ModifyWorkspaceCreationPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified WorkSpace properties. For important information about
         * how to modify the size of the root and user volumes, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">
         * Modify a WorkSpace</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyWorkspacePropertiesOutcome ModifyWorkspaceProperties(const Model::ModifyWorkspacePropertiesRequest& request) const;

        /**
         * <p>Modifies the specified WorkSpace properties. For important information about
         * how to modify the size of the root and user volumes, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">
         * Modify a WorkSpace</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ModifyWorkspaceProperties">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyWorkspacePropertiesOutcomeCallable ModifyWorkspacePropertiesCallable(const Model::ModifyWorkspacePropertiesRequest& request) const;

        /**
         * <p>Modifies the specified WorkSpace properties. For important information about
         * how to modify the size of the root and user volumes, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">
         * Modify a WorkSpace</a>. </p><p><h3>See Also:</h3>   <a
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
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>,
         * <code>UNHEALTHY</code>, <code>STOPPED</code>, or <code>REBOOTING</code>.</p>
         * <p>Rebuilding a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/reset-workspace.html">Rebuild
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpaces have been completely rebuilt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RebuildWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::RebuildWorkspacesOutcome RebuildWorkspaces(const Model::RebuildWorkspacesRequest& request) const;

        /**
         * <p>Rebuilds the specified WorkSpace.</p> <p>You cannot rebuild a WorkSpace
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>,
         * <code>UNHEALTHY</code>, <code>STOPPED</code>, or <code>REBOOTING</code>.</p>
         * <p>Rebuilding a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
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
         * unless its state is <code>AVAILABLE</code>, <code>ERROR</code>,
         * <code>UNHEALTHY</code>, <code>STOPPED</code>, or <code>REBOOTING</code>.</p>
         * <p>Rebuilding a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
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
         * <p>Registers the specified directory. This operation is asynchronous and returns
         * before the WorkSpace directory is registered. If this is the first time you are
         * registering a directory, you will need to create the workspaces_DefaultRole role
         * before you can register a directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-access-control.html#create-default-role">
         * Creating the workspaces_DefaultRole Role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RegisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterWorkspaceDirectoryOutcome RegisterWorkspaceDirectory(const Model::RegisterWorkspaceDirectoryRequest& request) const;

        /**
         * <p>Registers the specified directory. This operation is asynchronous and returns
         * before the WorkSpace directory is registered. If this is the first time you are
         * registering a directory, you will need to create the workspaces_DefaultRole role
         * before you can register a directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-access-control.html#create-default-role">
         * Creating the workspaces_DefaultRole Role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RegisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterWorkspaceDirectoryOutcomeCallable RegisterWorkspaceDirectoryCallable(const Model::RegisterWorkspaceDirectoryRequest& request) const;

        /**
         * <p>Registers the specified directory. This operation is asynchronous and returns
         * before the WorkSpace directory is registered. If this is the first time you are
         * registering a directory, you will need to create the workspaces_DefaultRole role
         * before you can register a directory. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-access-control.html#create-default-role">
         * Creating the workspaces_DefaultRole Role</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RegisterWorkspaceDirectory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterWorkspaceDirectoryAsync(const Model::RegisterWorkspaceDirectoryRequest& request, const RegisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores the specified WorkSpace to its last known healthy state.</p> <p>You
         * cannot restore a WorkSpace unless its state is <code> AVAILABLE</code>,
         * <code>ERROR</code>, <code>UNHEALTHY</code>, or <code>STOPPED</code>.</p>
         * <p>Restoring a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/restore-workspace.html">Restore
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpace is completely restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RestoreWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreWorkspaceOutcome RestoreWorkspace(const Model::RestoreWorkspaceRequest& request) const;

        /**
         * <p>Restores the specified WorkSpace to its last known healthy state.</p> <p>You
         * cannot restore a WorkSpace unless its state is <code> AVAILABLE</code>,
         * <code>ERROR</code>, <code>UNHEALTHY</code>, or <code>STOPPED</code>.</p>
         * <p>Restoring a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/restore-workspace.html">Restore
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpace is completely restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RestoreWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreWorkspaceOutcomeCallable RestoreWorkspaceCallable(const Model::RestoreWorkspaceRequest& request) const;

        /**
         * <p>Restores the specified WorkSpace to its last known healthy state.</p> <p>You
         * cannot restore a WorkSpace unless its state is <code> AVAILABLE</code>,
         * <code>ERROR</code>, <code>UNHEALTHY</code>, or <code>STOPPED</code>.</p>
         * <p>Restoring a WorkSpace is a potentially destructive action that can result in
         * the loss of data. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/restore-workspace.html">Restore
         * a WorkSpace</a>.</p> <p>This operation is asynchronous and returns before the
         * WorkSpace is completely restored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/RestoreWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreWorkspaceAsync(const Model::RestoreWorkspaceRequest& request, const RestoreWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Terminates the specified WorkSpaces.</p>  <p>Terminating a
         * WorkSpace is a permanent action and cannot be undone. The user's data is
         * destroyed. If you need to archive any user data, contact AWS Support before
         * terminating the WorkSpace.</p>  <p>You can terminate a WorkSpace
         * that is in any state except <code>SUSPENDED</code>.</p> <p>This operation is
         * asynchronous and returns before the WorkSpaces have been completely terminated.
         * After a WorkSpace is terminated, the <code>TERMINATED</code> state is returned
         * only briefly before the WorkSpace directory metadata is cleaned up, so this
         * state is rarely returned. To confirm that a WorkSpace is terminated, check for
         * the WorkSpace ID by using <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
         * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
         * has been successfully terminated.</p>  <p>Simple AD and AD Connector are
         * made available to you free of charge to use with WorkSpaces. If there are no
         * WorkSpaces being used with your Simple AD or AD Connector directory for 30
         * consecutive days, this directory will be automatically deregistered for use with
         * Amazon WorkSpaces, and you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services
         * pricing terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateWorkspacesOutcome TerminateWorkspaces(const Model::TerminateWorkspacesRequest& request) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p>  <p>Terminating a
         * WorkSpace is a permanent action and cannot be undone. The user's data is
         * destroyed. If you need to archive any user data, contact AWS Support before
         * terminating the WorkSpace.</p>  <p>You can terminate a WorkSpace
         * that is in any state except <code>SUSPENDED</code>.</p> <p>This operation is
         * asynchronous and returns before the WorkSpaces have been completely terminated.
         * After a WorkSpace is terminated, the <code>TERMINATED</code> state is returned
         * only briefly before the WorkSpace directory metadata is cleaned up, so this
         * state is rarely returned. To confirm that a WorkSpace is terminated, check for
         * the WorkSpace ID by using <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
         * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
         * has been successfully terminated.</p>  <p>Simple AD and AD Connector are
         * made available to you free of charge to use with WorkSpaces. If there are no
         * WorkSpaces being used with your Simple AD or AD Connector directory for 30
         * consecutive days, this directory will be automatically deregistered for use with
         * Amazon WorkSpaces, and you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services
         * pricing terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateWorkspacesOutcomeCallable TerminateWorkspacesCallable(const Model::TerminateWorkspacesRequest& request) const;

        /**
         * <p>Terminates the specified WorkSpaces.</p>  <p>Terminating a
         * WorkSpace is a permanent action and cannot be undone. The user's data is
         * destroyed. If you need to archive any user data, contact AWS Support before
         * terminating the WorkSpace.</p>  <p>You can terminate a WorkSpace
         * that is in any state except <code>SUSPENDED</code>.</p> <p>This operation is
         * asynchronous and returns before the WorkSpaces have been completely terminated.
         * After a WorkSpace is terminated, the <code>TERMINATED</code> state is returned
         * only briefly before the WorkSpace directory metadata is cleaned up, so this
         * state is rarely returned. To confirm that a WorkSpace is terminated, check for
         * the WorkSpace ID by using <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
         * DescribeWorkSpaces</a>. If the WorkSpace ID isn't returned, then the WorkSpace
         * has been successfully terminated.</p>  <p>Simple AD and AD Connector are
         * made available to you free of charge to use with WorkSpaces. If there are no
         * WorkSpaces being used with your Simple AD or AD Connector directory for 30
         * consecutive days, this directory will be automatically deregistered for use with
         * Amazon WorkSpaces, and you will be charged for this directory as per the <a
         * href="http://aws.amazon.com/directoryservice/pricing/">AWS Directory Services
         * pricing terms</a>.</p> <p>To delete empty directories, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/delete-workspaces-directory.html">
         * Delete the Directory for Your WorkSpaces</a>. If you delete your Simple AD or AD
         * Connector directory, you can always create a new one when you want to start
         * using WorkSpaces again.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TerminateWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateWorkspacesAsync(const Model::TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shares or unshares a connection alias with one account by specifying whether
         * that account has permission to associate the connection alias with a directory.
         * If the association permission is granted, the connection alias is shared with
         * that account. If the association permission is revoked, the connection alias is
         * unshared with the account. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <ul> <li>
         * <p>Before performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> </li> <li> <p>To delete a
         * connection alias that has been shared, the shared account must first
         * disassociate the connection alias from any directories it has been associated
         * with. Then you must unshare the connection alias from the account it has been
         * shared with. You can delete a connection alias only after it is no longer shared
         * with any accounts or associated with any directories.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateConnectionAliasPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionAliasPermissionOutcome UpdateConnectionAliasPermission(const Model::UpdateConnectionAliasPermissionRequest& request) const;

        /**
         * <p>Shares or unshares a connection alias with one account by specifying whether
         * that account has permission to associate the connection alias with a directory.
         * If the association permission is granted, the connection alias is shared with
         * that account. If the association permission is revoked, the connection alias is
         * unshared with the account. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <ul> <li>
         * <p>Before performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> </li> <li> <p>To delete a
         * connection alias that has been shared, the shared account must first
         * disassociate the connection alias from any directories it has been associated
         * with. Then you must unshare the connection alias from the account it has been
         * shared with. You can delete a connection alias only after it is no longer shared
         * with any accounts or associated with any directories.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateConnectionAliasPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectionAliasPermissionOutcomeCallable UpdateConnectionAliasPermissionCallable(const Model::UpdateConnectionAliasPermissionRequest& request) const;

        /**
         * <p>Shares or unshares a connection alias with one account by specifying whether
         * that account has permission to associate the connection alias with a directory.
         * If the association permission is granted, the connection alias is shared with
         * that account. If the association permission is revoked, the connection alias is
         * unshared with the account. For more information, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/cross-region-redirection.html">
         * Cross-Region Redirection for Amazon WorkSpaces</a>.</p>  <ul> <li>
         * <p>Before performing this operation, call <a
         * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeConnectionAliases.html">
         * DescribeConnectionAliases</a> to make sure that the current state of the
         * connection alias is <code>CREATED</code>.</p> </li> <li> <p>To delete a
         * connection alias that has been shared, the shared account must first
         * disassociate the connection alias from any directories it has been associated
         * with. Then you must unshare the connection alias from the account it has been
         * shared with. You can delete a connection alias only after it is no longer shared
         * with any accounts or associated with any directories.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateConnectionAliasPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectionAliasPermissionAsync(const Model::UpdateConnectionAliasPermissionRequest& request, const UpdateConnectionAliasPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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

        /**
         * <p>Updates a WorkSpace bundle with a new image. For more information about
         * updating WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-custom-bundle.html">
         * Update a Custom WorkSpaces Bundle</a>.</p>  <p>Existing WorkSpaces
         * aren't automatically updated when you update the bundle that they're based on.
         * To update existing WorkSpaces that are based on a bundle that you've updated,
         * you must either rebuild the WorkSpaces or delete and recreate them.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceBundleOutcome UpdateWorkspaceBundle(const Model::UpdateWorkspaceBundleRequest& request) const;

        /**
         * <p>Updates a WorkSpace bundle with a new image. For more information about
         * updating WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-custom-bundle.html">
         * Update a Custom WorkSpaces Bundle</a>.</p>  <p>Existing WorkSpaces
         * aren't automatically updated when you update the bundle that they're based on.
         * To update existing WorkSpaces that are based on a bundle that you've updated,
         * you must either rebuild the WorkSpaces or delete and recreate them.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceBundle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceBundleOutcomeCallable UpdateWorkspaceBundleCallable(const Model::UpdateWorkspaceBundleRequest& request) const;

        /**
         * <p>Updates a WorkSpace bundle with a new image. For more information about
         * updating WorkSpace bundles, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-custom-bundle.html">
         * Update a Custom WorkSpaces Bundle</a>.</p>  <p>Existing WorkSpaces
         * aren't automatically updated when you update the bundle that they're based on.
         * To update existing WorkSpaces that are based on a bundle that you've updated,
         * you must either rebuild the WorkSpaces or delete and recreate them.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceBundle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceBundleAsync(const Model::UpdateWorkspaceBundleRequest& request, const UpdateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shares or unshares an image with one account in the same AWS Region by
         * specifying whether that account has permission to copy the image. If the copy
         * image permission is granted, the image is shared with that account. If the copy
         * image permission is revoked, the image is unshared with the account.</p>
         * <p>After an image has been shared, the recipient account can copy the image to
         * other AWS Regions as needed.</p>  <p>In the China (Ningxia) Region, you
         * can copy images only within the same Region.</p> <p>In the AWS GovCloud
         * (US-West) Region, to copy images to and from other AWS Regions, contact AWS
         * Support.</p>  <p>For more information about sharing images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/share-custom-image.html">
         * Share or Unshare a Custom WorkSpaces Image</a>.</p>  <ul> <li> <p>To
         * delete an image that has been shared, you must unshare the image before you
         * delete it.</p> </li> <li> <p>Sharing Bring Your Own License (BYOL) images across
         * AWS accounts isn't supported at this time in the AWS GovCloud (US-West) Region.
         * To share BYOL images across accounts in the AWS GovCloud (US-West) Region,
         * contact AWS Support.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceImagePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceImagePermissionOutcome UpdateWorkspaceImagePermission(const Model::UpdateWorkspaceImagePermissionRequest& request) const;

        /**
         * <p>Shares or unshares an image with one account in the same AWS Region by
         * specifying whether that account has permission to copy the image. If the copy
         * image permission is granted, the image is shared with that account. If the copy
         * image permission is revoked, the image is unshared with the account.</p>
         * <p>After an image has been shared, the recipient account can copy the image to
         * other AWS Regions as needed.</p>  <p>In the China (Ningxia) Region, you
         * can copy images only within the same Region.</p> <p>In the AWS GovCloud
         * (US-West) Region, to copy images to and from other AWS Regions, contact AWS
         * Support.</p>  <p>For more information about sharing images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/share-custom-image.html">
         * Share or Unshare a Custom WorkSpaces Image</a>.</p>  <ul> <li> <p>To
         * delete an image that has been shared, you must unshare the image before you
         * delete it.</p> </li> <li> <p>Sharing Bring Your Own License (BYOL) images across
         * AWS accounts isn't supported at this time in the AWS GovCloud (US-West) Region.
         * To share BYOL images across accounts in the AWS GovCloud (US-West) Region,
         * contact AWS Support.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceImagePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceImagePermissionOutcomeCallable UpdateWorkspaceImagePermissionCallable(const Model::UpdateWorkspaceImagePermissionRequest& request) const;

        /**
         * <p>Shares or unshares an image with one account in the same AWS Region by
         * specifying whether that account has permission to copy the image. If the copy
         * image permission is granted, the image is shared with that account. If the copy
         * image permission is revoked, the image is unshared with the account.</p>
         * <p>After an image has been shared, the recipient account can copy the image to
         * other AWS Regions as needed.</p>  <p>In the China (Ningxia) Region, you
         * can copy images only within the same Region.</p> <p>In the AWS GovCloud
         * (US-West) Region, to copy images to and from other AWS Regions, contact AWS
         * Support.</p>  <p>For more information about sharing images, see <a
         * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/share-custom-image.html">
         * Share or Unshare a Custom WorkSpaces Image</a>.</p>  <ul> <li> <p>To
         * delete an image that has been shared, you must unshare the image before you
         * delete it.</p> </li> <li> <p>Sharing Bring Your Own License (BYOL) images across
         * AWS accounts isn't supported at this time in the AWS GovCloud (US-West) Region.
         * To share BYOL images across accounts in the AWS GovCloud (US-West) Region,
         * contact AWS Support.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UpdateWorkspaceImagePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceImagePermissionAsync(const Model::UpdateWorkspaceImagePermissionRequest& request, const UpdateWorkspaceImagePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateConnectionAliasAsyncHelper(const Model::AssociateConnectionAliasRequest& request, const AssociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateIpGroupsAsyncHelper(const Model::AssociateIpGroupsRequest& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AuthorizeIpRulesAsyncHelper(const Model::AuthorizeIpRulesRequest& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyWorkspaceImageAsyncHelper(const Model::CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectionAliasAsyncHelper(const Model::CreateConnectionAliasRequest& request, const CreateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIpGroupAsyncHelper(const Model::CreateIpGroupRequest& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkspaceBundleAsyncHelper(const Model::CreateWorkspaceBundleRequest& request, const CreateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkspacesAsyncHelper(const Model::CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAliasAsyncHelper(const Model::DeleteConnectionAliasRequest& request, const DeleteConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIpGroupAsyncHelper(const Model::DeleteIpGroupRequest& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkspaceBundleAsyncHelper(const Model::DeleteWorkspaceBundleRequest& request, const DeleteWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkspaceImageAsyncHelper(const Model::DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterWorkspaceDirectoryAsyncHelper(const Model::DeregisterWorkspaceDirectoryRequest& request, const DeregisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAsyncHelper(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountModificationsAsyncHelper(const Model::DescribeAccountModificationsRequest& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClientPropertiesAsyncHelper(const Model::DescribeClientPropertiesRequest& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionAliasPermissionsAsyncHelper(const Model::DescribeConnectionAliasPermissionsRequest& request, const DescribeConnectionAliasPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConnectionAliasesAsyncHelper(const Model::DescribeConnectionAliasesRequest& request, const DescribeConnectionAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIpGroupsAsyncHelper(const Model::DescribeIpGroupsRequest& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceBundlesAsyncHelper(const Model::DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceDirectoriesAsyncHelper(const Model::DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceImagePermissionsAsyncHelper(const Model::DescribeWorkspaceImagePermissionsRequest& request, const DescribeWorkspaceImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceImagesAsyncHelper(const Model::DescribeWorkspaceImagesRequest& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceSnapshotsAsyncHelper(const Model::DescribeWorkspaceSnapshotsRequest& request, const DescribeWorkspaceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspacesAsyncHelper(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspacesConnectionStatusAsyncHelper(const Model::DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateConnectionAliasAsyncHelper(const Model::DisassociateConnectionAliasRequest& request, const DisassociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateIpGroupsAsyncHelper(const Model::DisassociateIpGroupsRequest& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportWorkspaceImageAsyncHelper(const Model::ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAvailableManagementCidrRangesAsyncHelper(const Model::ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MigrateWorkspaceAsyncHelper(const Model::MigrateWorkspaceRequest& request, const MigrateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyAccountAsyncHelper(const Model::ModifyAccountRequest& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyClientPropertiesAsyncHelper(const Model::ModifyClientPropertiesRequest& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifySelfservicePermissionsAsyncHelper(const Model::ModifySelfservicePermissionsRequest& request, const ModifySelfservicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyWorkspaceAccessPropertiesAsyncHelper(const Model::ModifyWorkspaceAccessPropertiesRequest& request, const ModifyWorkspaceAccessPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyWorkspaceCreationPropertiesAsyncHelper(const Model::ModifyWorkspaceCreationPropertiesRequest& request, const ModifyWorkspaceCreationPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyWorkspacePropertiesAsyncHelper(const Model::ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyWorkspaceStateAsyncHelper(const Model::ModifyWorkspaceStateRequest& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootWorkspacesAsyncHelper(const Model::RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebuildWorkspacesAsyncHelper(const Model::RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterWorkspaceDirectoryAsyncHelper(const Model::RegisterWorkspaceDirectoryRequest& request, const RegisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreWorkspaceAsyncHelper(const Model::RestoreWorkspaceRequest& request, const RestoreWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RevokeIpRulesAsyncHelper(const Model::RevokeIpRulesRequest& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartWorkspacesAsyncHelper(const Model::StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopWorkspacesAsyncHelper(const Model::StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateWorkspacesAsyncHelper(const Model::TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConnectionAliasPermissionAsyncHelper(const Model::UpdateConnectionAliasPermissionRequest& request, const UpdateConnectionAliasPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRulesOfIpGroupAsyncHelper(const Model::UpdateRulesOfIpGroupRequest& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkspaceBundleAsyncHelper(const Model::UpdateWorkspaceBundleRequest& request, const UpdateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkspaceImagePermissionAsyncHelper(const Model::UpdateWorkspaceImagePermissionRequest& request, const UpdateWorkspaceImagePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace WorkSpaces
} // namespace Aws
