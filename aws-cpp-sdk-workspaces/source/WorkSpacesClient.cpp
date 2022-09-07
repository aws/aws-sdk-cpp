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

#include <aws/workspaces/WorkSpacesClient.h>
#include <aws/workspaces/WorkSpacesEndpoint.h>
#include <aws/workspaces/WorkSpacesErrorMarshaller.h>
#include <aws/workspaces/model/AssociateConnectionAliasRequest.h>
#include <aws/workspaces/model/AssociateIpGroupsRequest.h>
#include <aws/workspaces/model/AuthorizeIpRulesRequest.h>
#include <aws/workspaces/model/CopyWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateConnectClientAddInRequest.h>
#include <aws/workspaces/model/CreateConnectionAliasRequest.h>
#include <aws/workspaces/model/CreateIpGroupRequest.h>
#include <aws/workspaces/model/CreateTagsRequest.h>
#include <aws/workspaces/model/CreateUpdatedWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateWorkspaceBundleRequest.h>
#include <aws/workspaces/model/CreateWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateWorkspacesRequest.h>
#include <aws/workspaces/model/DeleteClientBrandingRequest.h>
#include <aws/workspaces/model/DeleteConnectClientAddInRequest.h>
#include <aws/workspaces/model/DeleteConnectionAliasRequest.h>
#include <aws/workspaces/model/DeleteIpGroupRequest.h>
#include <aws/workspaces/model/DeleteTagsRequest.h>
#include <aws/workspaces/model/DeleteWorkspaceBundleRequest.h>
#include <aws/workspaces/model/DeleteWorkspaceImageRequest.h>
#include <aws/workspaces/model/DeregisterWorkspaceDirectoryRequest.h>
#include <aws/workspaces/model/DescribeAccountRequest.h>
#include <aws/workspaces/model/DescribeAccountModificationsRequest.h>
#include <aws/workspaces/model/DescribeClientBrandingRequest.h>
#include <aws/workspaces/model/DescribeClientPropertiesRequest.h>
#include <aws/workspaces/model/DescribeConnectClientAddInsRequest.h>
#include <aws/workspaces/model/DescribeConnectionAliasPermissionsRequest.h>
#include <aws/workspaces/model/DescribeConnectionAliasesRequest.h>
#include <aws/workspaces/model/DescribeIpGroupsRequest.h>
#include <aws/workspaces/model/DescribeTagsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceImagePermissionsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceImagesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceSnapshotsRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusRequest.h>
#include <aws/workspaces/model/DisassociateConnectionAliasRequest.h>
#include <aws/workspaces/model/DisassociateIpGroupsRequest.h>
#include <aws/workspaces/model/ImportClientBrandingRequest.h>
#include <aws/workspaces/model/ImportWorkspaceImageRequest.h>
#include <aws/workspaces/model/ListAvailableManagementCidrRangesRequest.h>
#include <aws/workspaces/model/MigrateWorkspaceRequest.h>
#include <aws/workspaces/model/ModifyAccountRequest.h>
#include <aws/workspaces/model/ModifyClientPropertiesRequest.h>
#include <aws/workspaces/model/ModifySamlPropertiesRequest.h>
#include <aws/workspaces/model/ModifySelfservicePermissionsRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceAccessPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceCreationPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceStateRequest.h>
#include <aws/workspaces/model/RebootWorkspacesRequest.h>
#include <aws/workspaces/model/RebuildWorkspacesRequest.h>
#include <aws/workspaces/model/RegisterWorkspaceDirectoryRequest.h>
#include <aws/workspaces/model/RestoreWorkspaceRequest.h>
#include <aws/workspaces/model/RevokeIpRulesRequest.h>
#include <aws/workspaces/model/StartWorkspacesRequest.h>
#include <aws/workspaces/model/StopWorkspacesRequest.h>
#include <aws/workspaces/model/TerminateWorkspacesRequest.h>
#include <aws/workspaces/model/UpdateConnectClientAddInRequest.h>
#include <aws/workspaces/model/UpdateConnectionAliasPermissionRequest.h>
#include <aws/workspaces/model/UpdateRulesOfIpGroupRequest.h>
#include <aws/workspaces/model/UpdateWorkspaceBundleRequest.h>
#include <aws/workspaces/model/UpdateWorkspaceImagePermissionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpaces;
using namespace Aws::WorkSpaces::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "workspaces";
static const char* ALLOCATION_TAG = "WorkSpacesClient";

WorkSpacesClient::WorkSpacesClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::~WorkSpacesClient()
{
}

void WorkSpacesClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkSpaces");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WorkSpacesEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WorkSpacesClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateConnectionAliasOutcome WorkSpacesClient::AssociateConnectionAlias(const AssociateConnectionAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateConnectionAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateConnectionAliasOutcomeCallable WorkSpacesClient::AssociateConnectionAliasCallable(const AssociateConnectionAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateConnectionAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateConnectionAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientAssociateConnectionAliasAsyncHelper(WorkSpacesClient const * const clientThis, const AssociateConnectionAliasRequest& request, const AssociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateConnectionAlias(request), context);
}

void WorkSpacesClient::AssociateConnectionAliasAsync(const AssociateConnectionAliasRequest& request, const AssociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientAssociateConnectionAliasAsyncHelper( this, request, handler, context ); } );
}

AssociateIpGroupsOutcome WorkSpacesClient::AssociateIpGroups(const AssociateIpGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateIpGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateIpGroupsOutcomeCallable WorkSpacesClient::AssociateIpGroupsCallable(const AssociateIpGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateIpGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateIpGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientAssociateIpGroupsAsyncHelper(WorkSpacesClient const * const clientThis, const AssociateIpGroupsRequest& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateIpGroups(request), context);
}

void WorkSpacesClient::AssociateIpGroupsAsync(const AssociateIpGroupsRequest& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientAssociateIpGroupsAsyncHelper( this, request, handler, context ); } );
}

AuthorizeIpRulesOutcome WorkSpacesClient::AuthorizeIpRules(const AuthorizeIpRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AuthorizeIpRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AuthorizeIpRulesOutcomeCallable WorkSpacesClient::AuthorizeIpRulesCallable(const AuthorizeIpRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeIpRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeIpRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientAuthorizeIpRulesAsyncHelper(WorkSpacesClient const * const clientThis, const AuthorizeIpRulesRequest& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AuthorizeIpRules(request), context);
}

void WorkSpacesClient::AuthorizeIpRulesAsync(const AuthorizeIpRulesRequest& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientAuthorizeIpRulesAsyncHelper( this, request, handler, context ); } );
}

CopyWorkspaceImageOutcome WorkSpacesClient::CopyWorkspaceImage(const CopyWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CopyWorkspaceImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopyWorkspaceImageOutcomeCallable WorkSpacesClient::CopyWorkspaceImageCallable(const CopyWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCopyWorkspaceImageAsyncHelper(WorkSpacesClient const * const clientThis, const CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopyWorkspaceImage(request), context);
}

void WorkSpacesClient::CopyWorkspaceImageAsync(const CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCopyWorkspaceImageAsyncHelper( this, request, handler, context ); } );
}

CreateConnectClientAddInOutcome WorkSpacesClient::CreateConnectClientAddIn(const CreateConnectClientAddInRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConnectClientAddInOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectClientAddInOutcomeCallable WorkSpacesClient::CreateConnectClientAddInCallable(const CreateConnectClientAddInRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectClientAddInOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectClientAddIn(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateConnectClientAddInAsyncHelper(WorkSpacesClient const * const clientThis, const CreateConnectClientAddInRequest& request, const CreateConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnectClientAddIn(request), context);
}

void WorkSpacesClient::CreateConnectClientAddInAsync(const CreateConnectClientAddInRequest& request, const CreateConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateConnectClientAddInAsyncHelper( this, request, handler, context ); } );
}

CreateConnectionAliasOutcome WorkSpacesClient::CreateConnectionAlias(const CreateConnectionAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConnectionAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionAliasOutcomeCallable WorkSpacesClient::CreateConnectionAliasCallable(const CreateConnectionAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectionAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateConnectionAliasAsyncHelper(WorkSpacesClient const * const clientThis, const CreateConnectionAliasRequest& request, const CreateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnectionAlias(request), context);
}

void WorkSpacesClient::CreateConnectionAliasAsync(const CreateConnectionAliasRequest& request, const CreateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateConnectionAliasAsyncHelper( this, request, handler, context ); } );
}

CreateIpGroupOutcome WorkSpacesClient::CreateIpGroup(const CreateIpGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateIpGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIpGroupOutcomeCallable WorkSpacesClient::CreateIpGroupCallable(const CreateIpGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIpGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIpGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateIpGroupAsyncHelper(WorkSpacesClient const * const clientThis, const CreateIpGroupRequest& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIpGroup(request), context);
}

void WorkSpacesClient::CreateIpGroupAsync(const CreateIpGroupRequest& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateIpGroupAsyncHelper( this, request, handler, context ); } );
}

CreateTagsOutcome WorkSpacesClient::CreateTags(const CreateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTagsOutcomeCallable WorkSpacesClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateTagsAsyncHelper(WorkSpacesClient const * const clientThis, const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTags(request), context);
}

void WorkSpacesClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateTagsAsyncHelper( this, request, handler, context ); } );
}

CreateUpdatedWorkspaceImageOutcome WorkSpacesClient::CreateUpdatedWorkspaceImage(const CreateUpdatedWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUpdatedWorkspaceImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUpdatedWorkspaceImageOutcomeCallable WorkSpacesClient::CreateUpdatedWorkspaceImageCallable(const CreateUpdatedWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUpdatedWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUpdatedWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateUpdatedWorkspaceImageAsyncHelper(WorkSpacesClient const * const clientThis, const CreateUpdatedWorkspaceImageRequest& request, const CreateUpdatedWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUpdatedWorkspaceImage(request), context);
}

void WorkSpacesClient::CreateUpdatedWorkspaceImageAsync(const CreateUpdatedWorkspaceImageRequest& request, const CreateUpdatedWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateUpdatedWorkspaceImageAsyncHelper( this, request, handler, context ); } );
}

CreateWorkspaceBundleOutcome WorkSpacesClient::CreateWorkspaceBundle(const CreateWorkspaceBundleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkspaceBundleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceBundleOutcomeCallable WorkSpacesClient::CreateWorkspaceBundleCallable(const CreateWorkspaceBundleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspaceBundleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspaceBundle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateWorkspaceBundleAsyncHelper(WorkSpacesClient const * const clientThis, const CreateWorkspaceBundleRequest& request, const CreateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkspaceBundle(request), context);
}

void WorkSpacesClient::CreateWorkspaceBundleAsync(const CreateWorkspaceBundleRequest& request, const CreateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateWorkspaceBundleAsyncHelper( this, request, handler, context ); } );
}

CreateWorkspaceImageOutcome WorkSpacesClient::CreateWorkspaceImage(const CreateWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkspaceImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspaceImageOutcomeCallable WorkSpacesClient::CreateWorkspaceImageCallable(const CreateWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateWorkspaceImageAsyncHelper(WorkSpacesClient const * const clientThis, const CreateWorkspaceImageRequest& request, const CreateWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkspaceImage(request), context);
}

void WorkSpacesClient::CreateWorkspaceImageAsync(const CreateWorkspaceImageRequest& request, const CreateWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateWorkspaceImageAsyncHelper( this, request, handler, context ); } );
}

CreateWorkspacesOutcome WorkSpacesClient::CreateWorkspaces(const CreateWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkspacesOutcomeCallable WorkSpacesClient::CreateWorkspacesCallable(const CreateWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientCreateWorkspacesAsyncHelper(WorkSpacesClient const * const clientThis, const CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateWorkspaces(request), context);
}

void WorkSpacesClient::CreateWorkspacesAsync(const CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientCreateWorkspacesAsyncHelper( this, request, handler, context ); } );
}

DeleteClientBrandingOutcome WorkSpacesClient::DeleteClientBranding(const DeleteClientBrandingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteClientBrandingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteClientBrandingOutcomeCallable WorkSpacesClient::DeleteClientBrandingCallable(const DeleteClientBrandingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClientBrandingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClientBranding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeleteClientBrandingAsyncHelper(WorkSpacesClient const * const clientThis, const DeleteClientBrandingRequest& request, const DeleteClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteClientBranding(request), context);
}

void WorkSpacesClient::DeleteClientBrandingAsync(const DeleteClientBrandingRequest& request, const DeleteClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeleteClientBrandingAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectClientAddInOutcome WorkSpacesClient::DeleteConnectClientAddIn(const DeleteConnectClientAddInRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectClientAddInOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectClientAddInOutcomeCallable WorkSpacesClient::DeleteConnectClientAddInCallable(const DeleteConnectClientAddInRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectClientAddInOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnectClientAddIn(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeleteConnectClientAddInAsyncHelper(WorkSpacesClient const * const clientThis, const DeleteConnectClientAddInRequest& request, const DeleteConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnectClientAddIn(request), context);
}

void WorkSpacesClient::DeleteConnectClientAddInAsync(const DeleteConnectClientAddInRequest& request, const DeleteConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeleteConnectClientAddInAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectionAliasOutcome WorkSpacesClient::DeleteConnectionAlias(const DeleteConnectionAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConnectionAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionAliasOutcomeCallable WorkSpacesClient::DeleteConnectionAliasCallable(const DeleteConnectionAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnectionAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeleteConnectionAliasAsyncHelper(WorkSpacesClient const * const clientThis, const DeleteConnectionAliasRequest& request, const DeleteConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnectionAlias(request), context);
}

void WorkSpacesClient::DeleteConnectionAliasAsync(const DeleteConnectionAliasRequest& request, const DeleteConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeleteConnectionAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteIpGroupOutcome WorkSpacesClient::DeleteIpGroup(const DeleteIpGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIpGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteIpGroupOutcomeCallable WorkSpacesClient::DeleteIpGroupCallable(const DeleteIpGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIpGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIpGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeleteIpGroupAsyncHelper(WorkSpacesClient const * const clientThis, const DeleteIpGroupRequest& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIpGroup(request), context);
}

void WorkSpacesClient::DeleteIpGroupAsync(const DeleteIpGroupRequest& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeleteIpGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteTagsOutcome WorkSpacesClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTagsOutcomeCallable WorkSpacesClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeleteTagsAsyncHelper(WorkSpacesClient const * const clientThis, const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTags(request), context);
}

void WorkSpacesClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeleteTagsAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkspaceBundleOutcome WorkSpacesClient::DeleteWorkspaceBundle(const DeleteWorkspaceBundleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkspaceBundleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceBundleOutcomeCallable WorkSpacesClient::DeleteWorkspaceBundleCallable(const DeleteWorkspaceBundleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkspaceBundleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkspaceBundle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeleteWorkspaceBundleAsyncHelper(WorkSpacesClient const * const clientThis, const DeleteWorkspaceBundleRequest& request, const DeleteWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkspaceBundle(request), context);
}

void WorkSpacesClient::DeleteWorkspaceBundleAsync(const DeleteWorkspaceBundleRequest& request, const DeleteWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeleteWorkspaceBundleAsyncHelper( this, request, handler, context ); } );
}

DeleteWorkspaceImageOutcome WorkSpacesClient::DeleteWorkspaceImage(const DeleteWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteWorkspaceImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkspaceImageOutcomeCallable WorkSpacesClient::DeleteWorkspaceImageCallable(const DeleteWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeleteWorkspaceImageAsyncHelper(WorkSpacesClient const * const clientThis, const DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteWorkspaceImage(request), context);
}

void WorkSpacesClient::DeleteWorkspaceImageAsync(const DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeleteWorkspaceImageAsyncHelper( this, request, handler, context ); } );
}

DeregisterWorkspaceDirectoryOutcome WorkSpacesClient::DeregisterWorkspaceDirectory(const DeregisterWorkspaceDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterWorkspaceDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterWorkspaceDirectoryOutcomeCallable WorkSpacesClient::DeregisterWorkspaceDirectoryCallable(const DeregisterWorkspaceDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterWorkspaceDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterWorkspaceDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDeregisterWorkspaceDirectoryAsyncHelper(WorkSpacesClient const * const clientThis, const DeregisterWorkspaceDirectoryRequest& request, const DeregisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterWorkspaceDirectory(request), context);
}

void WorkSpacesClient::DeregisterWorkspaceDirectoryAsync(const DeregisterWorkspaceDirectoryRequest& request, const DeregisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDeregisterWorkspaceDirectoryAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountOutcome WorkSpacesClient::DescribeAccount(const DescribeAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountOutcomeCallable WorkSpacesClient::DescribeAccountCallable(const DescribeAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeAccountAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccount(request), context);
}

void WorkSpacesClient::DescribeAccountAsync(const DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeAccountAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountModificationsOutcome WorkSpacesClient::DescribeAccountModifications(const DescribeAccountModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountModificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountModificationsOutcomeCallable WorkSpacesClient::DescribeAccountModificationsCallable(const DescribeAccountModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeAccountModificationsAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeAccountModificationsRequest& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountModifications(request), context);
}

void WorkSpacesClient::DescribeAccountModificationsAsync(const DescribeAccountModificationsRequest& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeAccountModificationsAsyncHelper( this, request, handler, context ); } );
}

DescribeClientBrandingOutcome WorkSpacesClient::DescribeClientBranding(const DescribeClientBrandingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClientBrandingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClientBrandingOutcomeCallable WorkSpacesClient::DescribeClientBrandingCallable(const DescribeClientBrandingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientBrandingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientBranding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeClientBrandingAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeClientBrandingRequest& request, const DescribeClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClientBranding(request), context);
}

void WorkSpacesClient::DescribeClientBrandingAsync(const DescribeClientBrandingRequest& request, const DescribeClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeClientBrandingAsyncHelper( this, request, handler, context ); } );
}

DescribeClientPropertiesOutcome WorkSpacesClient::DescribeClientProperties(const DescribeClientPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClientPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClientPropertiesOutcomeCallable WorkSpacesClient::DescribeClientPropertiesCallable(const DescribeClientPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeClientPropertiesAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeClientPropertiesRequest& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClientProperties(request), context);
}

void WorkSpacesClient::DescribeClientPropertiesAsync(const DescribeClientPropertiesRequest& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeClientPropertiesAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectClientAddInsOutcome WorkSpacesClient::DescribeConnectClientAddIns(const DescribeConnectClientAddInsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConnectClientAddInsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectClientAddInsOutcomeCallable WorkSpacesClient::DescribeConnectClientAddInsCallable(const DescribeConnectClientAddInsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectClientAddInsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectClientAddIns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeConnectClientAddInsAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeConnectClientAddInsRequest& request, const DescribeConnectClientAddInsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnectClientAddIns(request), context);
}

void WorkSpacesClient::DescribeConnectClientAddInsAsync(const DescribeConnectClientAddInsRequest& request, const DescribeConnectClientAddInsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeConnectClientAddInsAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectionAliasPermissionsOutcome WorkSpacesClient::DescribeConnectionAliasPermissions(const DescribeConnectionAliasPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConnectionAliasPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionAliasPermissionsOutcomeCallable WorkSpacesClient::DescribeConnectionAliasPermissionsCallable(const DescribeConnectionAliasPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionAliasPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectionAliasPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeConnectionAliasPermissionsAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeConnectionAliasPermissionsRequest& request, const DescribeConnectionAliasPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnectionAliasPermissions(request), context);
}

void WorkSpacesClient::DescribeConnectionAliasPermissionsAsync(const DescribeConnectionAliasPermissionsRequest& request, const DescribeConnectionAliasPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeConnectionAliasPermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectionAliasesOutcome WorkSpacesClient::DescribeConnectionAliases(const DescribeConnectionAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConnectionAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectionAliasesOutcomeCallable WorkSpacesClient::DescribeConnectionAliasesCallable(const DescribeConnectionAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectionAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeConnectionAliasesAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeConnectionAliasesRequest& request, const DescribeConnectionAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnectionAliases(request), context);
}

void WorkSpacesClient::DescribeConnectionAliasesAsync(const DescribeConnectionAliasesRequest& request, const DescribeConnectionAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeConnectionAliasesAsyncHelper( this, request, handler, context ); } );
}

DescribeIpGroupsOutcome WorkSpacesClient::DescribeIpGroups(const DescribeIpGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeIpGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeIpGroupsOutcomeCallable WorkSpacesClient::DescribeIpGroupsCallable(const DescribeIpGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIpGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeIpGroupsAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeIpGroupsRequest& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIpGroups(request), context);
}

void WorkSpacesClient::DescribeIpGroupsAsync(const DescribeIpGroupsRequest& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeIpGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeTagsOutcome WorkSpacesClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTagsOutcomeCallable WorkSpacesClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeTagsAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTags(request), context);
}

void WorkSpacesClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeTagsAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkspaceBundlesOutcome WorkSpacesClient::DescribeWorkspaceBundles(const DescribeWorkspaceBundlesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkspaceBundlesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceBundlesOutcomeCallable WorkSpacesClient::DescribeWorkspaceBundlesCallable(const DescribeWorkspaceBundlesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceBundlesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceBundles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeWorkspaceBundlesAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkspaceBundles(request), context);
}

void WorkSpacesClient::DescribeWorkspaceBundlesAsync(const DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeWorkspaceBundlesAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkspaceDirectoriesOutcome WorkSpacesClient::DescribeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkspaceDirectoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceDirectoriesOutcomeCallable WorkSpacesClient::DescribeWorkspaceDirectoriesCallable(const DescribeWorkspaceDirectoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceDirectoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceDirectories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeWorkspaceDirectoriesAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkspaceDirectories(request), context);
}

void WorkSpacesClient::DescribeWorkspaceDirectoriesAsync(const DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeWorkspaceDirectoriesAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkspaceImagePermissionsOutcome WorkSpacesClient::DescribeWorkspaceImagePermissions(const DescribeWorkspaceImagePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkspaceImagePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceImagePermissionsOutcomeCallable WorkSpacesClient::DescribeWorkspaceImagePermissionsCallable(const DescribeWorkspaceImagePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceImagePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceImagePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeWorkspaceImagePermissionsAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeWorkspaceImagePermissionsRequest& request, const DescribeWorkspaceImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkspaceImagePermissions(request), context);
}

void WorkSpacesClient::DescribeWorkspaceImagePermissionsAsync(const DescribeWorkspaceImagePermissionsRequest& request, const DescribeWorkspaceImagePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeWorkspaceImagePermissionsAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkspaceImagesOutcome WorkSpacesClient::DescribeWorkspaceImages(const DescribeWorkspaceImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkspaceImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceImagesOutcomeCallable WorkSpacesClient::DescribeWorkspaceImagesCallable(const DescribeWorkspaceImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeWorkspaceImagesAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeWorkspaceImagesRequest& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkspaceImages(request), context);
}

void WorkSpacesClient::DescribeWorkspaceImagesAsync(const DescribeWorkspaceImagesRequest& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeWorkspaceImagesAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkspaceSnapshotsOutcome WorkSpacesClient::DescribeWorkspaceSnapshots(const DescribeWorkspaceSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkspaceSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspaceSnapshotsOutcomeCallable WorkSpacesClient::DescribeWorkspaceSnapshotsCallable(const DescribeWorkspaceSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeWorkspaceSnapshotsAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeWorkspaceSnapshotsRequest& request, const DescribeWorkspaceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkspaceSnapshots(request), context);
}

void WorkSpacesClient::DescribeWorkspaceSnapshotsAsync(const DescribeWorkspaceSnapshotsRequest& request, const DescribeWorkspaceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeWorkspaceSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkspacesOutcome WorkSpacesClient::DescribeWorkspaces(const DescribeWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspacesOutcomeCallable WorkSpacesClient::DescribeWorkspacesCallable(const DescribeWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeWorkspacesAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkspaces(request), context);
}

void WorkSpacesClient::DescribeWorkspacesAsync(const DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeWorkspacesAsyncHelper( this, request, handler, context ); } );
}

DescribeWorkspacesConnectionStatusOutcome WorkSpacesClient::DescribeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeWorkspacesConnectionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorkspacesConnectionStatusOutcomeCallable WorkSpacesClient::DescribeWorkspacesConnectionStatusCallable(const DescribeWorkspacesConnectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspacesConnectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspacesConnectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDescribeWorkspacesConnectionStatusAsyncHelper(WorkSpacesClient const * const clientThis, const DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeWorkspacesConnectionStatus(request), context);
}

void WorkSpacesClient::DescribeWorkspacesConnectionStatusAsync(const DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDescribeWorkspacesConnectionStatusAsyncHelper( this, request, handler, context ); } );
}

DisassociateConnectionAliasOutcome WorkSpacesClient::DisassociateConnectionAlias(const DisassociateConnectionAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateConnectionAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateConnectionAliasOutcomeCallable WorkSpacesClient::DisassociateConnectionAliasCallable(const DisassociateConnectionAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateConnectionAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateConnectionAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDisassociateConnectionAliasAsyncHelper(WorkSpacesClient const * const clientThis, const DisassociateConnectionAliasRequest& request, const DisassociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateConnectionAlias(request), context);
}

void WorkSpacesClient::DisassociateConnectionAliasAsync(const DisassociateConnectionAliasRequest& request, const DisassociateConnectionAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDisassociateConnectionAliasAsyncHelper( this, request, handler, context ); } );
}

DisassociateIpGroupsOutcome WorkSpacesClient::DisassociateIpGroups(const DisassociateIpGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateIpGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateIpGroupsOutcomeCallable WorkSpacesClient::DisassociateIpGroupsCallable(const DisassociateIpGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateIpGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateIpGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientDisassociateIpGroupsAsyncHelper(WorkSpacesClient const * const clientThis, const DisassociateIpGroupsRequest& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateIpGroups(request), context);
}

void WorkSpacesClient::DisassociateIpGroupsAsync(const DisassociateIpGroupsRequest& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientDisassociateIpGroupsAsyncHelper( this, request, handler, context ); } );
}

ImportClientBrandingOutcome WorkSpacesClient::ImportClientBranding(const ImportClientBrandingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportClientBrandingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportClientBrandingOutcomeCallable WorkSpacesClient::ImportClientBrandingCallable(const ImportClientBrandingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportClientBrandingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportClientBranding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientImportClientBrandingAsyncHelper(WorkSpacesClient const * const clientThis, const ImportClientBrandingRequest& request, const ImportClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportClientBranding(request), context);
}

void WorkSpacesClient::ImportClientBrandingAsync(const ImportClientBrandingRequest& request, const ImportClientBrandingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientImportClientBrandingAsyncHelper( this, request, handler, context ); } );
}

ImportWorkspaceImageOutcome WorkSpacesClient::ImportWorkspaceImage(const ImportWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportWorkspaceImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportWorkspaceImageOutcomeCallable WorkSpacesClient::ImportWorkspaceImageCallable(const ImportWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientImportWorkspaceImageAsyncHelper(WorkSpacesClient const * const clientThis, const ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportWorkspaceImage(request), context);
}

void WorkSpacesClient::ImportWorkspaceImageAsync(const ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientImportWorkspaceImageAsyncHelper( this, request, handler, context ); } );
}

ListAvailableManagementCidrRangesOutcome WorkSpacesClient::ListAvailableManagementCidrRanges(const ListAvailableManagementCidrRangesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailableManagementCidrRangesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableManagementCidrRangesOutcomeCallable WorkSpacesClient::ListAvailableManagementCidrRangesCallable(const ListAvailableManagementCidrRangesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableManagementCidrRangesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableManagementCidrRanges(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientListAvailableManagementCidrRangesAsyncHelper(WorkSpacesClient const * const clientThis, const ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAvailableManagementCidrRanges(request), context);
}

void WorkSpacesClient::ListAvailableManagementCidrRangesAsync(const ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientListAvailableManagementCidrRangesAsyncHelper( this, request, handler, context ); } );
}

MigrateWorkspaceOutcome WorkSpacesClient::MigrateWorkspace(const MigrateWorkspaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return MigrateWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

MigrateWorkspaceOutcomeCallable WorkSpacesClient::MigrateWorkspaceCallable(const MigrateWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MigrateWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MigrateWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientMigrateWorkspaceAsyncHelper(WorkSpacesClient const * const clientThis, const MigrateWorkspaceRequest& request, const MigrateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->MigrateWorkspace(request), context);
}

void WorkSpacesClient::MigrateWorkspaceAsync(const MigrateWorkspaceRequest& request, const MigrateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientMigrateWorkspaceAsyncHelper( this, request, handler, context ); } );
}

ModifyAccountOutcome WorkSpacesClient::ModifyAccount(const ModifyAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyAccountOutcomeCallable WorkSpacesClient::ModifyAccountCallable(const ModifyAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifyAccountAsyncHelper(WorkSpacesClient const * const clientThis, const ModifyAccountRequest& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyAccount(request), context);
}

void WorkSpacesClient::ModifyAccountAsync(const ModifyAccountRequest& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifyAccountAsyncHelper( this, request, handler, context ); } );
}

ModifyClientPropertiesOutcome WorkSpacesClient::ModifyClientProperties(const ModifyClientPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyClientPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyClientPropertiesOutcomeCallable WorkSpacesClient::ModifyClientPropertiesCallable(const ModifyClientPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClientPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClientProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifyClientPropertiesAsyncHelper(WorkSpacesClient const * const clientThis, const ModifyClientPropertiesRequest& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyClientProperties(request), context);
}

void WorkSpacesClient::ModifyClientPropertiesAsync(const ModifyClientPropertiesRequest& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifyClientPropertiesAsyncHelper( this, request, handler, context ); } );
}

ModifySamlPropertiesOutcome WorkSpacesClient::ModifySamlProperties(const ModifySamlPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifySamlPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifySamlPropertiesOutcomeCallable WorkSpacesClient::ModifySamlPropertiesCallable(const ModifySamlPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifySamlPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifySamlProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifySamlPropertiesAsyncHelper(WorkSpacesClient const * const clientThis, const ModifySamlPropertiesRequest& request, const ModifySamlPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifySamlProperties(request), context);
}

void WorkSpacesClient::ModifySamlPropertiesAsync(const ModifySamlPropertiesRequest& request, const ModifySamlPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifySamlPropertiesAsyncHelper( this, request, handler, context ); } );
}

ModifySelfservicePermissionsOutcome WorkSpacesClient::ModifySelfservicePermissions(const ModifySelfservicePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifySelfservicePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifySelfservicePermissionsOutcomeCallable WorkSpacesClient::ModifySelfservicePermissionsCallable(const ModifySelfservicePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifySelfservicePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifySelfservicePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifySelfservicePermissionsAsyncHelper(WorkSpacesClient const * const clientThis, const ModifySelfservicePermissionsRequest& request, const ModifySelfservicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifySelfservicePermissions(request), context);
}

void WorkSpacesClient::ModifySelfservicePermissionsAsync(const ModifySelfservicePermissionsRequest& request, const ModifySelfservicePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifySelfservicePermissionsAsyncHelper( this, request, handler, context ); } );
}

ModifyWorkspaceAccessPropertiesOutcome WorkSpacesClient::ModifyWorkspaceAccessProperties(const ModifyWorkspaceAccessPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyWorkspaceAccessPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspaceAccessPropertiesOutcomeCallable WorkSpacesClient::ModifyWorkspaceAccessPropertiesCallable(const ModifyWorkspaceAccessPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyWorkspaceAccessPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyWorkspaceAccessProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifyWorkspaceAccessPropertiesAsyncHelper(WorkSpacesClient const * const clientThis, const ModifyWorkspaceAccessPropertiesRequest& request, const ModifyWorkspaceAccessPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyWorkspaceAccessProperties(request), context);
}

void WorkSpacesClient::ModifyWorkspaceAccessPropertiesAsync(const ModifyWorkspaceAccessPropertiesRequest& request, const ModifyWorkspaceAccessPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifyWorkspaceAccessPropertiesAsyncHelper( this, request, handler, context ); } );
}

ModifyWorkspaceCreationPropertiesOutcome WorkSpacesClient::ModifyWorkspaceCreationProperties(const ModifyWorkspaceCreationPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyWorkspaceCreationPropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspaceCreationPropertiesOutcomeCallable WorkSpacesClient::ModifyWorkspaceCreationPropertiesCallable(const ModifyWorkspaceCreationPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyWorkspaceCreationPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyWorkspaceCreationProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifyWorkspaceCreationPropertiesAsyncHelper(WorkSpacesClient const * const clientThis, const ModifyWorkspaceCreationPropertiesRequest& request, const ModifyWorkspaceCreationPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyWorkspaceCreationProperties(request), context);
}

void WorkSpacesClient::ModifyWorkspaceCreationPropertiesAsync(const ModifyWorkspaceCreationPropertiesRequest& request, const ModifyWorkspaceCreationPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifyWorkspaceCreationPropertiesAsyncHelper( this, request, handler, context ); } );
}

ModifyWorkspacePropertiesOutcome WorkSpacesClient::ModifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyWorkspacePropertiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspacePropertiesOutcomeCallable WorkSpacesClient::ModifyWorkspacePropertiesCallable(const ModifyWorkspacePropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyWorkspacePropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyWorkspaceProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifyWorkspacePropertiesAsyncHelper(WorkSpacesClient const * const clientThis, const ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyWorkspaceProperties(request), context);
}

void WorkSpacesClient::ModifyWorkspacePropertiesAsync(const ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifyWorkspacePropertiesAsyncHelper( this, request, handler, context ); } );
}

ModifyWorkspaceStateOutcome WorkSpacesClient::ModifyWorkspaceState(const ModifyWorkspaceStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyWorkspaceStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ModifyWorkspaceStateOutcomeCallable WorkSpacesClient::ModifyWorkspaceStateCallable(const ModifyWorkspaceStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyWorkspaceStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyWorkspaceState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientModifyWorkspaceStateAsyncHelper(WorkSpacesClient const * const clientThis, const ModifyWorkspaceStateRequest& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyWorkspaceState(request), context);
}

void WorkSpacesClient::ModifyWorkspaceStateAsync(const ModifyWorkspaceStateRequest& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientModifyWorkspaceStateAsyncHelper( this, request, handler, context ); } );
}

RebootWorkspacesOutcome WorkSpacesClient::RebootWorkspaces(const RebootWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebootWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootWorkspacesOutcomeCallable WorkSpacesClient::RebootWorkspacesCallable(const RebootWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientRebootWorkspacesAsyncHelper(WorkSpacesClient const * const clientThis, const RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootWorkspaces(request), context);
}

void WorkSpacesClient::RebootWorkspacesAsync(const RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientRebootWorkspacesAsyncHelper( this, request, handler, context ); } );
}

RebuildWorkspacesOutcome WorkSpacesClient::RebuildWorkspaces(const RebuildWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RebuildWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebuildWorkspacesOutcomeCallable WorkSpacesClient::RebuildWorkspacesCallable(const RebuildWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebuildWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebuildWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientRebuildWorkspacesAsyncHelper(WorkSpacesClient const * const clientThis, const RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebuildWorkspaces(request), context);
}

void WorkSpacesClient::RebuildWorkspacesAsync(const RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientRebuildWorkspacesAsyncHelper( this, request, handler, context ); } );
}

RegisterWorkspaceDirectoryOutcome WorkSpacesClient::RegisterWorkspaceDirectory(const RegisterWorkspaceDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterWorkspaceDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterWorkspaceDirectoryOutcomeCallable WorkSpacesClient::RegisterWorkspaceDirectoryCallable(const RegisterWorkspaceDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterWorkspaceDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterWorkspaceDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientRegisterWorkspaceDirectoryAsyncHelper(WorkSpacesClient const * const clientThis, const RegisterWorkspaceDirectoryRequest& request, const RegisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterWorkspaceDirectory(request), context);
}

void WorkSpacesClient::RegisterWorkspaceDirectoryAsync(const RegisterWorkspaceDirectoryRequest& request, const RegisterWorkspaceDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientRegisterWorkspaceDirectoryAsyncHelper( this, request, handler, context ); } );
}

RestoreWorkspaceOutcome WorkSpacesClient::RestoreWorkspace(const RestoreWorkspaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreWorkspaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreWorkspaceOutcomeCallable WorkSpacesClient::RestoreWorkspaceCallable(const RestoreWorkspaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreWorkspaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreWorkspace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientRestoreWorkspaceAsyncHelper(WorkSpacesClient const * const clientThis, const RestoreWorkspaceRequest& request, const RestoreWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreWorkspace(request), context);
}

void WorkSpacesClient::RestoreWorkspaceAsync(const RestoreWorkspaceRequest& request, const RestoreWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientRestoreWorkspaceAsyncHelper( this, request, handler, context ); } );
}

RevokeIpRulesOutcome WorkSpacesClient::RevokeIpRules(const RevokeIpRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RevokeIpRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokeIpRulesOutcomeCallable WorkSpacesClient::RevokeIpRulesCallable(const RevokeIpRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeIpRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeIpRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientRevokeIpRulesAsyncHelper(WorkSpacesClient const * const clientThis, const RevokeIpRulesRequest& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RevokeIpRules(request), context);
}

void WorkSpacesClient::RevokeIpRulesAsync(const RevokeIpRulesRequest& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientRevokeIpRulesAsyncHelper( this, request, handler, context ); } );
}

StartWorkspacesOutcome WorkSpacesClient::StartWorkspaces(const StartWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartWorkspacesOutcomeCallable WorkSpacesClient::StartWorkspacesCallable(const StartWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientStartWorkspacesAsyncHelper(WorkSpacesClient const * const clientThis, const StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartWorkspaces(request), context);
}

void WorkSpacesClient::StartWorkspacesAsync(const StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientStartWorkspacesAsyncHelper( this, request, handler, context ); } );
}

StopWorkspacesOutcome WorkSpacesClient::StopWorkspaces(const StopWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopWorkspacesOutcomeCallable WorkSpacesClient::StopWorkspacesCallable(const StopWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientStopWorkspacesAsyncHelper(WorkSpacesClient const * const clientThis, const StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopWorkspaces(request), context);
}

void WorkSpacesClient::StopWorkspacesAsync(const StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientStopWorkspacesAsyncHelper( this, request, handler, context ); } );
}

TerminateWorkspacesOutcome WorkSpacesClient::TerminateWorkspaces(const TerminateWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TerminateWorkspacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateWorkspacesOutcomeCallable WorkSpacesClient::TerminateWorkspacesCallable(const TerminateWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientTerminateWorkspacesAsyncHelper(WorkSpacesClient const * const clientThis, const TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TerminateWorkspaces(request), context);
}

void WorkSpacesClient::TerminateWorkspacesAsync(const TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientTerminateWorkspacesAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectClientAddInOutcome WorkSpacesClient::UpdateConnectClientAddIn(const UpdateConnectClientAddInRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConnectClientAddInOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectClientAddInOutcomeCallable WorkSpacesClient::UpdateConnectClientAddInCallable(const UpdateConnectClientAddInRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectClientAddInOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectClientAddIn(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientUpdateConnectClientAddInAsyncHelper(WorkSpacesClient const * const clientThis, const UpdateConnectClientAddInRequest& request, const UpdateConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnectClientAddIn(request), context);
}

void WorkSpacesClient::UpdateConnectClientAddInAsync(const UpdateConnectClientAddInRequest& request, const UpdateConnectClientAddInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientUpdateConnectClientAddInAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectionAliasPermissionOutcome WorkSpacesClient::UpdateConnectionAliasPermission(const UpdateConnectionAliasPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConnectionAliasPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectionAliasPermissionOutcomeCallable WorkSpacesClient::UpdateConnectionAliasPermissionCallable(const UpdateConnectionAliasPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectionAliasPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectionAliasPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientUpdateConnectionAliasPermissionAsyncHelper(WorkSpacesClient const * const clientThis, const UpdateConnectionAliasPermissionRequest& request, const UpdateConnectionAliasPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnectionAliasPermission(request), context);
}

void WorkSpacesClient::UpdateConnectionAliasPermissionAsync(const UpdateConnectionAliasPermissionRequest& request, const UpdateConnectionAliasPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientUpdateConnectionAliasPermissionAsyncHelper( this, request, handler, context ); } );
}

UpdateRulesOfIpGroupOutcome WorkSpacesClient::UpdateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRulesOfIpGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRulesOfIpGroupOutcomeCallable WorkSpacesClient::UpdateRulesOfIpGroupCallable(const UpdateRulesOfIpGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRulesOfIpGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRulesOfIpGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientUpdateRulesOfIpGroupAsyncHelper(WorkSpacesClient const * const clientThis, const UpdateRulesOfIpGroupRequest& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRulesOfIpGroup(request), context);
}

void WorkSpacesClient::UpdateRulesOfIpGroupAsync(const UpdateRulesOfIpGroupRequest& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientUpdateRulesOfIpGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkspaceBundleOutcome WorkSpacesClient::UpdateWorkspaceBundle(const UpdateWorkspaceBundleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWorkspaceBundleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceBundleOutcomeCallable WorkSpacesClient::UpdateWorkspaceBundleCallable(const UpdateWorkspaceBundleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkspaceBundleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkspaceBundle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientUpdateWorkspaceBundleAsyncHelper(WorkSpacesClient const * const clientThis, const UpdateWorkspaceBundleRequest& request, const UpdateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkspaceBundle(request), context);
}

void WorkSpacesClient::UpdateWorkspaceBundleAsync(const UpdateWorkspaceBundleRequest& request, const UpdateWorkspaceBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientUpdateWorkspaceBundleAsyncHelper( this, request, handler, context ); } );
}

UpdateWorkspaceImagePermissionOutcome WorkSpacesClient::UpdateWorkspaceImagePermission(const UpdateWorkspaceImagePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateWorkspaceImagePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkspaceImagePermissionOutcomeCallable WorkSpacesClient::UpdateWorkspaceImagePermissionCallable(const UpdateWorkspaceImagePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWorkspaceImagePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWorkspaceImagePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClientUpdateWorkspaceImagePermissionAsyncHelper(WorkSpacesClient const * const clientThis, const UpdateWorkspaceImagePermissionRequest& request, const UpdateWorkspaceImagePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateWorkspaceImagePermission(request), context);
}

void WorkSpacesClient::UpdateWorkspaceImagePermissionAsync(const UpdateWorkspaceImagePermissionRequest& request, const UpdateWorkspaceImagePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ WorkSpacesClientUpdateWorkspaceImagePermissionAsyncHelper( this, request, handler, context ); } );
}

