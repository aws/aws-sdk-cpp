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

#include <aws/workspaces/WorkSpacesClient.h>
#include <aws/workspaces/WorkSpacesEndpoint.h>
#include <aws/workspaces/WorkSpacesErrorMarshaller.h>
#include <aws/workspaces/model/AssociateIpGroupsRequest.h>
#include <aws/workspaces/model/AuthorizeIpRulesRequest.h>
#include <aws/workspaces/model/CopyWorkspaceImageRequest.h>
#include <aws/workspaces/model/CreateIpGroupRequest.h>
#include <aws/workspaces/model/CreateTagsRequest.h>
#include <aws/workspaces/model/CreateWorkspacesRequest.h>
#include <aws/workspaces/model/DeleteIpGroupRequest.h>
#include <aws/workspaces/model/DeleteTagsRequest.h>
#include <aws/workspaces/model/DeleteWorkspaceImageRequest.h>
#include <aws/workspaces/model/DescribeAccountRequest.h>
#include <aws/workspaces/model/DescribeAccountModificationsRequest.h>
#include <aws/workspaces/model/DescribeClientPropertiesRequest.h>
#include <aws/workspaces/model/DescribeIpGroupsRequest.h>
#include <aws/workspaces/model/DescribeTagsRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceBundlesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesRequest.h>
#include <aws/workspaces/model/DescribeWorkspaceImagesRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesRequest.h>
#include <aws/workspaces/model/DescribeWorkspacesConnectionStatusRequest.h>
#include <aws/workspaces/model/DisassociateIpGroupsRequest.h>
#include <aws/workspaces/model/ImportWorkspaceImageRequest.h>
#include <aws/workspaces/model/ListAvailableManagementCidrRangesRequest.h>
#include <aws/workspaces/model/ModifyAccountRequest.h>
#include <aws/workspaces/model/ModifyClientPropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspacePropertiesRequest.h>
#include <aws/workspaces/model/ModifyWorkspaceStateRequest.h>
#include <aws/workspaces/model/RebootWorkspacesRequest.h>
#include <aws/workspaces/model/RebuildWorkspacesRequest.h>
#include <aws/workspaces/model/RevokeIpRulesRequest.h>
#include <aws/workspaces/model/StartWorkspacesRequest.h>
#include <aws/workspaces/model/StopWorkspacesRequest.h>
#include <aws/workspaces/model/TerminateWorkspacesRequest.h>
#include <aws/workspaces/model/UpdateRulesOfIpGroupRequest.h>

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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::WorkSpacesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkSpacesErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkSpacesClient::~WorkSpacesClient()
{
}

void WorkSpacesClient::init(const ClientConfiguration& config)
{
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

AssociateIpGroupsOutcome WorkSpacesClient::AssociateIpGroups(const AssociateIpGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateIpGroupsOutcome(AssociateIpGroupsResult(outcome.GetResult()));
  }
  else
  {
    return AssociateIpGroupsOutcome(outcome.GetError());
  }
}

AssociateIpGroupsOutcomeCallable WorkSpacesClient::AssociateIpGroupsCallable(const AssociateIpGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateIpGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateIpGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::AssociateIpGroupsAsync(const AssociateIpGroupsRequest& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateIpGroupsAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::AssociateIpGroupsAsyncHelper(const AssociateIpGroupsRequest& request, const AssociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateIpGroups(request), context);
}

AuthorizeIpRulesOutcome WorkSpacesClient::AuthorizeIpRules(const AuthorizeIpRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AuthorizeIpRulesOutcome(AuthorizeIpRulesResult(outcome.GetResult()));
  }
  else
  {
    return AuthorizeIpRulesOutcome(outcome.GetError());
  }
}

AuthorizeIpRulesOutcomeCallable WorkSpacesClient::AuthorizeIpRulesCallable(const AuthorizeIpRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AuthorizeIpRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AuthorizeIpRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::AuthorizeIpRulesAsync(const AuthorizeIpRulesRequest& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AuthorizeIpRulesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::AuthorizeIpRulesAsyncHelper(const AuthorizeIpRulesRequest& request, const AuthorizeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AuthorizeIpRules(request), context);
}

CopyWorkspaceImageOutcome WorkSpacesClient::CopyWorkspaceImage(const CopyWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CopyWorkspaceImageOutcome(CopyWorkspaceImageResult(outcome.GetResult()));
  }
  else
  {
    return CopyWorkspaceImageOutcome(outcome.GetError());
  }
}

CopyWorkspaceImageOutcomeCallable WorkSpacesClient::CopyWorkspaceImageCallable(const CopyWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopyWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopyWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::CopyWorkspaceImageAsync(const CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CopyWorkspaceImageAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::CopyWorkspaceImageAsyncHelper(const CopyWorkspaceImageRequest& request, const CopyWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopyWorkspaceImage(request), context);
}

CreateIpGroupOutcome WorkSpacesClient::CreateIpGroup(const CreateIpGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateIpGroupOutcome(CreateIpGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateIpGroupOutcome(outcome.GetError());
  }
}

CreateIpGroupOutcomeCallable WorkSpacesClient::CreateIpGroupCallable(const CreateIpGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIpGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIpGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::CreateIpGroupAsync(const CreateIpGroupRequest& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIpGroupAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::CreateIpGroupAsyncHelper(const CreateIpGroupRequest& request, const CreateIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIpGroup(request), context);
}

CreateTagsOutcome WorkSpacesClient::CreateTags(const CreateTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTagsOutcome(CreateTagsResult(outcome.GetResult()));
  }
  else
  {
    return CreateTagsOutcome(outcome.GetError());
  }
}

CreateTagsOutcomeCallable WorkSpacesClient::CreateTagsCallable(const CreateTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::CreateTagsAsync(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTagsAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::CreateTagsAsyncHelper(const CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTags(request), context);
}

CreateWorkspacesOutcome WorkSpacesClient::CreateWorkspaces(const CreateWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateWorkspacesOutcome(CreateWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return CreateWorkspacesOutcome(outcome.GetError());
  }
}

CreateWorkspacesOutcomeCallable WorkSpacesClient::CreateWorkspacesCallable(const CreateWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::CreateWorkspacesAsync(const CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateWorkspacesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::CreateWorkspacesAsyncHelper(const CreateWorkspacesRequest& request, const CreateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateWorkspaces(request), context);
}

DeleteIpGroupOutcome WorkSpacesClient::DeleteIpGroup(const DeleteIpGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteIpGroupOutcome(DeleteIpGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIpGroupOutcome(outcome.GetError());
  }
}

DeleteIpGroupOutcomeCallable WorkSpacesClient::DeleteIpGroupCallable(const DeleteIpGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIpGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIpGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DeleteIpGroupAsync(const DeleteIpGroupRequest& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIpGroupAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DeleteIpGroupAsyncHelper(const DeleteIpGroupRequest& request, const DeleteIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIpGroup(request), context);
}

DeleteTagsOutcome WorkSpacesClient::DeleteTags(const DeleteTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTagsOutcome(DeleteTagsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTagsOutcome(outcome.GetError());
  }
}

DeleteTagsOutcomeCallable WorkSpacesClient::DeleteTagsCallable(const DeleteTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagsAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DeleteTagsAsyncHelper(const DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTags(request), context);
}

DeleteWorkspaceImageOutcome WorkSpacesClient::DeleteWorkspaceImage(const DeleteWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteWorkspaceImageOutcome(DeleteWorkspaceImageResult(outcome.GetResult()));
  }
  else
  {
    return DeleteWorkspaceImageOutcome(outcome.GetError());
  }
}

DeleteWorkspaceImageOutcomeCallable WorkSpacesClient::DeleteWorkspaceImageCallable(const DeleteWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DeleteWorkspaceImageAsync(const DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteWorkspaceImageAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DeleteWorkspaceImageAsyncHelper(const DeleteWorkspaceImageRequest& request, const DeleteWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteWorkspaceImage(request), context);
}

DescribeAccountOutcome WorkSpacesClient::DescribeAccount(const DescribeAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAccountOutcome(DescribeAccountResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAccountOutcome(outcome.GetError());
  }
}

DescribeAccountOutcomeCallable WorkSpacesClient::DescribeAccountCallable(const DescribeAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeAccountAsync(const DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeAccountAsyncHelper(const DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccount(request), context);
}

DescribeAccountModificationsOutcome WorkSpacesClient::DescribeAccountModifications(const DescribeAccountModificationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAccountModificationsOutcome(DescribeAccountModificationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAccountModificationsOutcome(outcome.GetError());
  }
}

DescribeAccountModificationsOutcomeCallable WorkSpacesClient::DescribeAccountModificationsCallable(const DescribeAccountModificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountModificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountModifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeAccountModificationsAsync(const DescribeAccountModificationsRequest& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountModificationsAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeAccountModificationsAsyncHelper(const DescribeAccountModificationsRequest& request, const DescribeAccountModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountModifications(request), context);
}

DescribeClientPropertiesOutcome WorkSpacesClient::DescribeClientProperties(const DescribeClientPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeClientPropertiesOutcome(DescribeClientPropertiesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeClientPropertiesOutcome(outcome.GetError());
  }
}

DescribeClientPropertiesOutcomeCallable WorkSpacesClient::DescribeClientPropertiesCallable(const DescribeClientPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeClientPropertiesAsync(const DescribeClientPropertiesRequest& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClientPropertiesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeClientPropertiesAsyncHelper(const DescribeClientPropertiesRequest& request, const DescribeClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClientProperties(request), context);
}

DescribeIpGroupsOutcome WorkSpacesClient::DescribeIpGroups(const DescribeIpGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeIpGroupsOutcome(DescribeIpGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIpGroupsOutcome(outcome.GetError());
  }
}

DescribeIpGroupsOutcomeCallable WorkSpacesClient::DescribeIpGroupsCallable(const DescribeIpGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIpGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIpGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeIpGroupsAsync(const DescribeIpGroupsRequest& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIpGroupsAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeIpGroupsAsyncHelper(const DescribeIpGroupsRequest& request, const DescribeIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIpGroups(request), context);
}

DescribeTagsOutcome WorkSpacesClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable WorkSpacesClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DescribeWorkspaceBundlesOutcome WorkSpacesClient::DescribeWorkspaceBundles(const DescribeWorkspaceBundlesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspaceBundlesOutcome(DescribeWorkspaceBundlesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspaceBundlesOutcome(outcome.GetError());
  }
}

DescribeWorkspaceBundlesOutcomeCallable WorkSpacesClient::DescribeWorkspaceBundlesCallable(const DescribeWorkspaceBundlesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceBundlesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceBundles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeWorkspaceBundlesAsync(const DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkspaceBundlesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeWorkspaceBundlesAsyncHelper(const DescribeWorkspaceBundlesRequest& request, const DescribeWorkspaceBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspaceBundles(request), context);
}

DescribeWorkspaceDirectoriesOutcome WorkSpacesClient::DescribeWorkspaceDirectories(const DescribeWorkspaceDirectoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspaceDirectoriesOutcome(DescribeWorkspaceDirectoriesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspaceDirectoriesOutcome(outcome.GetError());
  }
}

DescribeWorkspaceDirectoriesOutcomeCallable WorkSpacesClient::DescribeWorkspaceDirectoriesCallable(const DescribeWorkspaceDirectoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceDirectoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceDirectories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeWorkspaceDirectoriesAsync(const DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkspaceDirectoriesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeWorkspaceDirectoriesAsyncHelper(const DescribeWorkspaceDirectoriesRequest& request, const DescribeWorkspaceDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspaceDirectories(request), context);
}

DescribeWorkspaceImagesOutcome WorkSpacesClient::DescribeWorkspaceImages(const DescribeWorkspaceImagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspaceImagesOutcome(DescribeWorkspaceImagesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspaceImagesOutcome(outcome.GetError());
  }
}

DescribeWorkspaceImagesOutcomeCallable WorkSpacesClient::DescribeWorkspaceImagesCallable(const DescribeWorkspaceImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspaceImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaceImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeWorkspaceImagesAsync(const DescribeWorkspaceImagesRequest& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkspaceImagesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeWorkspaceImagesAsyncHelper(const DescribeWorkspaceImagesRequest& request, const DescribeWorkspaceImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspaceImages(request), context);
}

DescribeWorkspacesOutcome WorkSpacesClient::DescribeWorkspaces(const DescribeWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspacesOutcome(DescribeWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspacesOutcome(outcome.GetError());
  }
}

DescribeWorkspacesOutcomeCallable WorkSpacesClient::DescribeWorkspacesCallable(const DescribeWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeWorkspacesAsync(const DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkspacesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeWorkspacesAsyncHelper(const DescribeWorkspacesRequest& request, const DescribeWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspaces(request), context);
}

DescribeWorkspacesConnectionStatusOutcome WorkSpacesClient::DescribeWorkspacesConnectionStatus(const DescribeWorkspacesConnectionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeWorkspacesConnectionStatusOutcome(DescribeWorkspacesConnectionStatusResult(outcome.GetResult()));
  }
  else
  {
    return DescribeWorkspacesConnectionStatusOutcome(outcome.GetError());
  }
}

DescribeWorkspacesConnectionStatusOutcomeCallable WorkSpacesClient::DescribeWorkspacesConnectionStatusCallable(const DescribeWorkspacesConnectionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeWorkspacesConnectionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeWorkspacesConnectionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DescribeWorkspacesConnectionStatusAsync(const DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeWorkspacesConnectionStatusAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DescribeWorkspacesConnectionStatusAsyncHelper(const DescribeWorkspacesConnectionStatusRequest& request, const DescribeWorkspacesConnectionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeWorkspacesConnectionStatus(request), context);
}

DisassociateIpGroupsOutcome WorkSpacesClient::DisassociateIpGroups(const DisassociateIpGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateIpGroupsOutcome(DisassociateIpGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateIpGroupsOutcome(outcome.GetError());
  }
}

DisassociateIpGroupsOutcomeCallable WorkSpacesClient::DisassociateIpGroupsCallable(const DisassociateIpGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateIpGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateIpGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::DisassociateIpGroupsAsync(const DisassociateIpGroupsRequest& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateIpGroupsAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::DisassociateIpGroupsAsyncHelper(const DisassociateIpGroupsRequest& request, const DisassociateIpGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateIpGroups(request), context);
}

ImportWorkspaceImageOutcome WorkSpacesClient::ImportWorkspaceImage(const ImportWorkspaceImageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportWorkspaceImageOutcome(ImportWorkspaceImageResult(outcome.GetResult()));
  }
  else
  {
    return ImportWorkspaceImageOutcome(outcome.GetError());
  }
}

ImportWorkspaceImageOutcomeCallable WorkSpacesClient::ImportWorkspaceImageCallable(const ImportWorkspaceImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportWorkspaceImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportWorkspaceImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::ImportWorkspaceImageAsync(const ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportWorkspaceImageAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::ImportWorkspaceImageAsyncHelper(const ImportWorkspaceImageRequest& request, const ImportWorkspaceImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportWorkspaceImage(request), context);
}

ListAvailableManagementCidrRangesOutcome WorkSpacesClient::ListAvailableManagementCidrRanges(const ListAvailableManagementCidrRangesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAvailableManagementCidrRangesOutcome(ListAvailableManagementCidrRangesResult(outcome.GetResult()));
  }
  else
  {
    return ListAvailableManagementCidrRangesOutcome(outcome.GetError());
  }
}

ListAvailableManagementCidrRangesOutcomeCallable WorkSpacesClient::ListAvailableManagementCidrRangesCallable(const ListAvailableManagementCidrRangesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableManagementCidrRangesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableManagementCidrRanges(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::ListAvailableManagementCidrRangesAsync(const ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAvailableManagementCidrRangesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::ListAvailableManagementCidrRangesAsyncHelper(const ListAvailableManagementCidrRangesRequest& request, const ListAvailableManagementCidrRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAvailableManagementCidrRanges(request), context);
}

ModifyAccountOutcome WorkSpacesClient::ModifyAccount(const ModifyAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyAccountOutcome(ModifyAccountResult(outcome.GetResult()));
  }
  else
  {
    return ModifyAccountOutcome(outcome.GetError());
  }
}

ModifyAccountOutcomeCallable WorkSpacesClient::ModifyAccountCallable(const ModifyAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::ModifyAccountAsync(const ModifyAccountRequest& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyAccountAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::ModifyAccountAsyncHelper(const ModifyAccountRequest& request, const ModifyAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyAccount(request), context);
}

ModifyClientPropertiesOutcome WorkSpacesClient::ModifyClientProperties(const ModifyClientPropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyClientPropertiesOutcome(ModifyClientPropertiesResult(outcome.GetResult()));
  }
  else
  {
    return ModifyClientPropertiesOutcome(outcome.GetError());
  }
}

ModifyClientPropertiesOutcomeCallable WorkSpacesClient::ModifyClientPropertiesCallable(const ModifyClientPropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyClientPropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyClientProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::ModifyClientPropertiesAsync(const ModifyClientPropertiesRequest& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyClientPropertiesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::ModifyClientPropertiesAsyncHelper(const ModifyClientPropertiesRequest& request, const ModifyClientPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyClientProperties(request), context);
}

ModifyWorkspacePropertiesOutcome WorkSpacesClient::ModifyWorkspaceProperties(const ModifyWorkspacePropertiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyWorkspacePropertiesOutcome(ModifyWorkspacePropertiesResult(outcome.GetResult()));
  }
  else
  {
    return ModifyWorkspacePropertiesOutcome(outcome.GetError());
  }
}

ModifyWorkspacePropertiesOutcomeCallable WorkSpacesClient::ModifyWorkspacePropertiesCallable(const ModifyWorkspacePropertiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyWorkspacePropertiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyWorkspaceProperties(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::ModifyWorkspacePropertiesAsync(const ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyWorkspacePropertiesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::ModifyWorkspacePropertiesAsyncHelper(const ModifyWorkspacePropertiesRequest& request, const ModifyWorkspacePropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyWorkspaceProperties(request), context);
}

ModifyWorkspaceStateOutcome WorkSpacesClient::ModifyWorkspaceState(const ModifyWorkspaceStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ModifyWorkspaceStateOutcome(ModifyWorkspaceStateResult(outcome.GetResult()));
  }
  else
  {
    return ModifyWorkspaceStateOutcome(outcome.GetError());
  }
}

ModifyWorkspaceStateOutcomeCallable WorkSpacesClient::ModifyWorkspaceStateCallable(const ModifyWorkspaceStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyWorkspaceStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyWorkspaceState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::ModifyWorkspaceStateAsync(const ModifyWorkspaceStateRequest& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyWorkspaceStateAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::ModifyWorkspaceStateAsyncHelper(const ModifyWorkspaceStateRequest& request, const ModifyWorkspaceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyWorkspaceState(request), context);
}

RebootWorkspacesOutcome WorkSpacesClient::RebootWorkspaces(const RebootWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RebootWorkspacesOutcome(RebootWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return RebootWorkspacesOutcome(outcome.GetError());
  }
}

RebootWorkspacesOutcomeCallable WorkSpacesClient::RebootWorkspacesCallable(const RebootWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::RebootWorkspacesAsync(const RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebootWorkspacesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::RebootWorkspacesAsyncHelper(const RebootWorkspacesRequest& request, const RebootWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootWorkspaces(request), context);
}

RebuildWorkspacesOutcome WorkSpacesClient::RebuildWorkspaces(const RebuildWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RebuildWorkspacesOutcome(RebuildWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return RebuildWorkspacesOutcome(outcome.GetError());
  }
}

RebuildWorkspacesOutcomeCallable WorkSpacesClient::RebuildWorkspacesCallable(const RebuildWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebuildWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebuildWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::RebuildWorkspacesAsync(const RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RebuildWorkspacesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::RebuildWorkspacesAsyncHelper(const RebuildWorkspacesRequest& request, const RebuildWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebuildWorkspaces(request), context);
}

RevokeIpRulesOutcome WorkSpacesClient::RevokeIpRules(const RevokeIpRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RevokeIpRulesOutcome(RevokeIpRulesResult(outcome.GetResult()));
  }
  else
  {
    return RevokeIpRulesOutcome(outcome.GetError());
  }
}

RevokeIpRulesOutcomeCallable WorkSpacesClient::RevokeIpRulesCallable(const RevokeIpRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeIpRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeIpRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::RevokeIpRulesAsync(const RevokeIpRulesRequest& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeIpRulesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::RevokeIpRulesAsyncHelper(const RevokeIpRulesRequest& request, const RevokeIpRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeIpRules(request), context);
}

StartWorkspacesOutcome WorkSpacesClient::StartWorkspaces(const StartWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartWorkspacesOutcome(StartWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return StartWorkspacesOutcome(outcome.GetError());
  }
}

StartWorkspacesOutcomeCallable WorkSpacesClient::StartWorkspacesCallable(const StartWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::StartWorkspacesAsync(const StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartWorkspacesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::StartWorkspacesAsyncHelper(const StartWorkspacesRequest& request, const StartWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartWorkspaces(request), context);
}

StopWorkspacesOutcome WorkSpacesClient::StopWorkspaces(const StopWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopWorkspacesOutcome(StopWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return StopWorkspacesOutcome(outcome.GetError());
  }
}

StopWorkspacesOutcomeCallable WorkSpacesClient::StopWorkspacesCallable(const StopWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::StopWorkspacesAsync(const StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopWorkspacesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::StopWorkspacesAsyncHelper(const StopWorkspacesRequest& request, const StopWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopWorkspaces(request), context);
}

TerminateWorkspacesOutcome WorkSpacesClient::TerminateWorkspaces(const TerminateWorkspacesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TerminateWorkspacesOutcome(TerminateWorkspacesResult(outcome.GetResult()));
  }
  else
  {
    return TerminateWorkspacesOutcome(outcome.GetError());
  }
}

TerminateWorkspacesOutcomeCallable WorkSpacesClient::TerminateWorkspacesCallable(const TerminateWorkspacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateWorkspacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateWorkspaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::TerminateWorkspacesAsync(const TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateWorkspacesAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::TerminateWorkspacesAsyncHelper(const TerminateWorkspacesRequest& request, const TerminateWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateWorkspaces(request), context);
}

UpdateRulesOfIpGroupOutcome WorkSpacesClient::UpdateRulesOfIpGroup(const UpdateRulesOfIpGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRulesOfIpGroupOutcome(UpdateRulesOfIpGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRulesOfIpGroupOutcome(outcome.GetError());
  }
}

UpdateRulesOfIpGroupOutcomeCallable WorkSpacesClient::UpdateRulesOfIpGroupCallable(const UpdateRulesOfIpGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRulesOfIpGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRulesOfIpGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkSpacesClient::UpdateRulesOfIpGroupAsync(const UpdateRulesOfIpGroupRequest& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRulesOfIpGroupAsyncHelper( request, handler, context ); } );
}

void WorkSpacesClient::UpdateRulesOfIpGroupAsyncHelper(const UpdateRulesOfIpGroupRequest& request, const UpdateRulesOfIpGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRulesOfIpGroup(request), context);
}

