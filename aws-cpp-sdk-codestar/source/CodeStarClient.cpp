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

#include <aws/codestar/CodeStarClient.h>
#include <aws/codestar/CodeStarEndpoint.h>
#include <aws/codestar/CodeStarErrorMarshaller.h>
#include <aws/codestar/model/AssociateTeamMemberRequest.h>
#include <aws/codestar/model/CreateProjectRequest.h>
#include <aws/codestar/model/CreateUserProfileRequest.h>
#include <aws/codestar/model/DeleteProjectRequest.h>
#include <aws/codestar/model/DeleteUserProfileRequest.h>
#include <aws/codestar/model/DescribeProjectRequest.h>
#include <aws/codestar/model/DescribeUserProfileRequest.h>
#include <aws/codestar/model/DisassociateTeamMemberRequest.h>
#include <aws/codestar/model/ListProjectsRequest.h>
#include <aws/codestar/model/ListResourcesRequest.h>
#include <aws/codestar/model/ListTagsForProjectRequest.h>
#include <aws/codestar/model/ListTeamMembersRequest.h>
#include <aws/codestar/model/ListUserProfilesRequest.h>
#include <aws/codestar/model/TagProjectRequest.h>
#include <aws/codestar/model/UntagProjectRequest.h>
#include <aws/codestar/model/UpdateProjectRequest.h>
#include <aws/codestar/model/UpdateTeamMemberRequest.h>
#include <aws/codestar/model/UpdateUserProfileRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeStar;
using namespace Aws::CodeStar::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codestar";
static const char* ALLOCATION_TAG = "CodeStarClient";

CodeStarClient::CodeStarClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeStarClient::CodeStarClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeStarClient::CodeStarClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeStarErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeStarClient::~CodeStarClient()
{
}

void CodeStarClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeStar");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeStarEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeStarClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateTeamMemberOutcome CodeStarClient::AssociateTeamMember(const AssociateTeamMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateTeamMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateTeamMemberOutcomeCallable CodeStarClient::AssociateTeamMemberCallable(const AssociateTeamMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateTeamMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateTeamMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientAssociateTeamMemberAsyncHelper(CodeStarClient const * const clientThis, const AssociateTeamMemberRequest& request, const AssociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateTeamMember(request), context);
}

void CodeStarClient::AssociateTeamMemberAsync(const AssociateTeamMemberRequest& request, const AssociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientAssociateTeamMemberAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome CodeStarClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable CodeStarClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientCreateProjectAsyncHelper(CodeStarClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void CodeStarClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

CreateUserProfileOutcome CodeStarClient::CreateUserProfile(const CreateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserProfileOutcomeCallable CodeStarClient::CreateUserProfileCallable(const CreateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientCreateUserProfileAsyncHelper(CodeStarClient const * const clientThis, const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUserProfile(request), context);
}

void CodeStarClient::CreateUserProfileAsync(const CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientCreateUserProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome CodeStarClient::DeleteProject(const DeleteProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable CodeStarClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientDeleteProjectAsyncHelper(CodeStarClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void CodeStarClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteUserProfileOutcome CodeStarClient::DeleteUserProfile(const DeleteUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserProfileOutcomeCallable CodeStarClient::DeleteUserProfileCallable(const DeleteUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientDeleteUserProfileAsyncHelper(CodeStarClient const * const clientThis, const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUserProfile(request), context);
}

void CodeStarClient::DeleteUserProfileAsync(const DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientDeleteUserProfileAsyncHelper( this, request, handler, context ); } );
}

DescribeProjectOutcome CodeStarClient::DescribeProject(const DescribeProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable CodeStarClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientDescribeProjectAsyncHelper(CodeStarClient const * const clientThis, const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProject(request), context);
}

void CodeStarClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientDescribeProjectAsyncHelper( this, request, handler, context ); } );
}

DescribeUserProfileOutcome CodeStarClient::DescribeUserProfile(const DescribeUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserProfileOutcomeCallable CodeStarClient::DescribeUserProfileCallable(const DescribeUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientDescribeUserProfileAsyncHelper(CodeStarClient const * const clientThis, const DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUserProfile(request), context);
}

void CodeStarClient::DescribeUserProfileAsync(const DescribeUserProfileRequest& request, const DescribeUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientDescribeUserProfileAsyncHelper( this, request, handler, context ); } );
}

DisassociateTeamMemberOutcome CodeStarClient::DisassociateTeamMember(const DisassociateTeamMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateTeamMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTeamMemberOutcomeCallable CodeStarClient::DisassociateTeamMemberCallable(const DisassociateTeamMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateTeamMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateTeamMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientDisassociateTeamMemberAsyncHelper(CodeStarClient const * const clientThis, const DisassociateTeamMemberRequest& request, const DisassociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateTeamMember(request), context);
}

void CodeStarClient::DisassociateTeamMemberAsync(const DisassociateTeamMemberRequest& request, const DisassociateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientDisassociateTeamMemberAsyncHelper( this, request, handler, context ); } );
}

ListProjectsOutcome CodeStarClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable CodeStarClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientListProjectsAsyncHelper(CodeStarClient const * const clientThis, const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjects(request), context);
}

void CodeStarClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientListProjectsAsyncHelper( this, request, handler, context ); } );
}

ListResourcesOutcome CodeStarClient::ListResources(const ListResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcomeCallable CodeStarClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientListResourcesAsyncHelper(CodeStarClient const * const clientThis, const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResources(request), context);
}

void CodeStarClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientListResourcesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForProjectOutcome CodeStarClient::ListTagsForProject(const ListTagsForProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForProjectOutcomeCallable CodeStarClient::ListTagsForProjectCallable(const ListTagsForProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientListTagsForProjectAsyncHelper(CodeStarClient const * const clientThis, const ListTagsForProjectRequest& request, const ListTagsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForProject(request), context);
}

void CodeStarClient::ListTagsForProjectAsync(const ListTagsForProjectRequest& request, const ListTagsForProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientListTagsForProjectAsyncHelper( this, request, handler, context ); } );
}

ListTeamMembersOutcome CodeStarClient::ListTeamMembers(const ListTeamMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTeamMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTeamMembersOutcomeCallable CodeStarClient::ListTeamMembersCallable(const ListTeamMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTeamMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTeamMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientListTeamMembersAsyncHelper(CodeStarClient const * const clientThis, const ListTeamMembersRequest& request, const ListTeamMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTeamMembers(request), context);
}

void CodeStarClient::ListTeamMembersAsync(const ListTeamMembersRequest& request, const ListTeamMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientListTeamMembersAsyncHelper( this, request, handler, context ); } );
}

ListUserProfilesOutcome CodeStarClient::ListUserProfiles(const ListUserProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUserProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUserProfilesOutcomeCallable CodeStarClient::ListUserProfilesCallable(const ListUserProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUserProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUserProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientListUserProfilesAsyncHelper(CodeStarClient const * const clientThis, const ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUserProfiles(request), context);
}

void CodeStarClient::ListUserProfilesAsync(const ListUserProfilesRequest& request, const ListUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientListUserProfilesAsyncHelper( this, request, handler, context ); } );
}

TagProjectOutcome CodeStarClient::TagProject(const TagProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagProjectOutcomeCallable CodeStarClient::TagProjectCallable(const TagProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientTagProjectAsyncHelper(CodeStarClient const * const clientThis, const TagProjectRequest& request, const TagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagProject(request), context);
}

void CodeStarClient::TagProjectAsync(const TagProjectRequest& request, const TagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientTagProjectAsyncHelper( this, request, handler, context ); } );
}

UntagProjectOutcome CodeStarClient::UntagProject(const UntagProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagProjectOutcomeCallable CodeStarClient::UntagProjectCallable(const UntagProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientUntagProjectAsyncHelper(CodeStarClient const * const clientThis, const UntagProjectRequest& request, const UntagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagProject(request), context);
}

void CodeStarClient::UntagProjectAsync(const UntagProjectRequest& request, const UntagProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientUntagProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectOutcome CodeStarClient::UpdateProject(const UpdateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable CodeStarClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientUpdateProjectAsyncHelper(CodeStarClient const * const clientThis, const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProject(request), context);
}

void CodeStarClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientUpdateProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateTeamMemberOutcome CodeStarClient::UpdateTeamMember(const UpdateTeamMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTeamMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTeamMemberOutcomeCallable CodeStarClient::UpdateTeamMemberCallable(const UpdateTeamMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTeamMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTeamMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientUpdateTeamMemberAsyncHelper(CodeStarClient const * const clientThis, const UpdateTeamMemberRequest& request, const UpdateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTeamMember(request), context);
}

void CodeStarClient::UpdateTeamMemberAsync(const UpdateTeamMemberRequest& request, const UpdateTeamMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientUpdateTeamMemberAsyncHelper( this, request, handler, context ); } );
}

UpdateUserProfileOutcome CodeStarClient::UpdateUserProfile(const UpdateUserProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserProfileOutcomeCallable CodeStarClient::UpdateUserProfileCallable(const UpdateUserProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeStarClientUpdateUserProfileAsyncHelper(CodeStarClient const * const clientThis, const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUserProfile(request), context);
}

void CodeStarClient::UpdateUserProfileAsync(const UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CodeStarClientUpdateUserProfileAsyncHelper( this, request, handler, context ); } );
}

