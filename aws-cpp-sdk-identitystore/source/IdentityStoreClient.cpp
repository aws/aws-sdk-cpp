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

#include <aws/identitystore/IdentityStoreClient.h>
#include <aws/identitystore/IdentityStoreEndpoint.h>
#include <aws/identitystore/IdentityStoreErrorMarshaller.h>
#include <aws/identitystore/model/CreateGroupRequest.h>
#include <aws/identitystore/model/CreateGroupMembershipRequest.h>
#include <aws/identitystore/model/CreateUserRequest.h>
#include <aws/identitystore/model/DeleteGroupRequest.h>
#include <aws/identitystore/model/DeleteGroupMembershipRequest.h>
#include <aws/identitystore/model/DeleteUserRequest.h>
#include <aws/identitystore/model/DescribeGroupRequest.h>
#include <aws/identitystore/model/DescribeGroupMembershipRequest.h>
#include <aws/identitystore/model/DescribeUserRequest.h>
#include <aws/identitystore/model/GetGroupIdRequest.h>
#include <aws/identitystore/model/GetGroupMembershipIdRequest.h>
#include <aws/identitystore/model/GetUserIdRequest.h>
#include <aws/identitystore/model/IsMemberInGroupsRequest.h>
#include <aws/identitystore/model/ListGroupMembershipsRequest.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberRequest.h>
#include <aws/identitystore/model/ListGroupsRequest.h>
#include <aws/identitystore/model/ListUsersRequest.h>
#include <aws/identitystore/model/UpdateGroupRequest.h>
#include <aws/identitystore/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IdentityStore;
using namespace Aws::IdentityStore::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "identitystore";
static const char* ALLOCATION_TAG = "IdentityStoreClient";

IdentityStoreClient::IdentityStoreClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IdentityStoreClient::IdentityStoreClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IdentityStoreClient::IdentityStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IdentityStoreClient::~IdentityStoreClient()
{
}

void IdentityStoreClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("identitystore");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IdentityStoreEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IdentityStoreClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateGroupOutcome IdentityStoreClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcomeCallable IdentityStoreClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientCreateGroupAsyncHelper(IdentityStoreClient const * const clientThis, const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroup(request), context);
}

void IdentityStoreClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientCreateGroupAsyncHelper( this, request, handler, context ); } );
}

CreateGroupMembershipOutcome IdentityStoreClient::CreateGroupMembership(const CreateGroupMembershipRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateGroupMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupMembershipOutcomeCallable IdentityStoreClient::CreateGroupMembershipCallable(const CreateGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientCreateGroupMembershipAsyncHelper(IdentityStoreClient const * const clientThis, const CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGroupMembership(request), context);
}

void IdentityStoreClient::CreateGroupMembershipAsync(const CreateGroupMembershipRequest& request, const CreateGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientCreateGroupMembershipAsyncHelper( this, request, handler, context ); } );
}

CreateUserOutcome IdentityStoreClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserOutcomeCallable IdentityStoreClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientCreateUserAsyncHelper(IdentityStoreClient const * const clientThis, const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUser(request), context);
}

void IdentityStoreClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientCreateUserAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupOutcome IdentityStoreClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcomeCallable IdentityStoreClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientDeleteGroupAsyncHelper(IdentityStoreClient const * const clientThis, const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroup(request), context);
}

void IdentityStoreClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientDeleteGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteGroupMembershipOutcome IdentityStoreClient::DeleteGroupMembership(const DeleteGroupMembershipRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteGroupMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupMembershipOutcomeCallable IdentityStoreClient::DeleteGroupMembershipCallable(const DeleteGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientDeleteGroupMembershipAsyncHelper(IdentityStoreClient const * const clientThis, const DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGroupMembership(request), context);
}

void IdentityStoreClient::DeleteGroupMembershipAsync(const DeleteGroupMembershipRequest& request, const DeleteGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientDeleteGroupMembershipAsyncHelper( this, request, handler, context ); } );
}

DeleteUserOutcome IdentityStoreClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcomeCallable IdentityStoreClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientDeleteUserAsyncHelper(IdentityStoreClient const * const clientThis, const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUser(request), context);
}

void IdentityStoreClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientDeleteUserAsyncHelper( this, request, handler, context ); } );
}

DescribeGroupOutcome IdentityStoreClient::DescribeGroup(const DescribeGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupOutcomeCallable IdentityStoreClient::DescribeGroupCallable(const DescribeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientDescribeGroupAsyncHelper(IdentityStoreClient const * const clientThis, const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGroup(request), context);
}

void IdentityStoreClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientDescribeGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeGroupMembershipOutcome IdentityStoreClient::DescribeGroupMembership(const DescribeGroupMembershipRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeGroupMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupMembershipOutcomeCallable IdentityStoreClient::DescribeGroupMembershipCallable(const DescribeGroupMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroupMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientDescribeGroupMembershipAsyncHelper(IdentityStoreClient const * const clientThis, const DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeGroupMembership(request), context);
}

void IdentityStoreClient::DescribeGroupMembershipAsync(const DescribeGroupMembershipRequest& request, const DescribeGroupMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientDescribeGroupMembershipAsyncHelper( this, request, handler, context ); } );
}

DescribeUserOutcome IdentityStoreClient::DescribeUser(const DescribeUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcomeCallable IdentityStoreClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientDescribeUserAsyncHelper(IdentityStoreClient const * const clientThis, const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeUser(request), context);
}

void IdentityStoreClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientDescribeUserAsyncHelper( this, request, handler, context ); } );
}

GetGroupIdOutcome IdentityStoreClient::GetGroupId(const GetGroupIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGroupIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupIdOutcomeCallable IdentityStoreClient::GetGroupIdCallable(const GetGroupIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientGetGroupIdAsyncHelper(IdentityStoreClient const * const clientThis, const GetGroupIdRequest& request, const GetGroupIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroupId(request), context);
}

void IdentityStoreClient::GetGroupIdAsync(const GetGroupIdRequest& request, const GetGroupIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientGetGroupIdAsyncHelper( this, request, handler, context ); } );
}

GetGroupMembershipIdOutcome IdentityStoreClient::GetGroupMembershipId(const GetGroupMembershipIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetGroupMembershipIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetGroupMembershipIdOutcomeCallable IdentityStoreClient::GetGroupMembershipIdCallable(const GetGroupMembershipIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGroupMembershipIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGroupMembershipId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientGetGroupMembershipIdAsyncHelper(IdentityStoreClient const * const clientThis, const GetGroupMembershipIdRequest& request, const GetGroupMembershipIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGroupMembershipId(request), context);
}

void IdentityStoreClient::GetGroupMembershipIdAsync(const GetGroupMembershipIdRequest& request, const GetGroupMembershipIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientGetGroupMembershipIdAsyncHelper( this, request, handler, context ); } );
}

GetUserIdOutcome IdentityStoreClient::GetUserId(const GetUserIdRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetUserIdOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUserIdOutcomeCallable IdentityStoreClient::GetUserIdCallable(const GetUserIdRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserIdOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserId(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientGetUserIdAsyncHelper(IdentityStoreClient const * const clientThis, const GetUserIdRequest& request, const GetUserIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUserId(request), context);
}

void IdentityStoreClient::GetUserIdAsync(const GetUserIdRequest& request, const GetUserIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientGetUserIdAsyncHelper( this, request, handler, context ); } );
}

IsMemberInGroupsOutcome IdentityStoreClient::IsMemberInGroups(const IsMemberInGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IsMemberInGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IsMemberInGroupsOutcomeCallable IdentityStoreClient::IsMemberInGroupsCallable(const IsMemberInGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IsMemberInGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IsMemberInGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientIsMemberInGroupsAsyncHelper(IdentityStoreClient const * const clientThis, const IsMemberInGroupsRequest& request, const IsMemberInGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IsMemberInGroups(request), context);
}

void IdentityStoreClient::IsMemberInGroupsAsync(const IsMemberInGroupsRequest& request, const IsMemberInGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientIsMemberInGroupsAsyncHelper( this, request, handler, context ); } );
}

ListGroupMembershipsOutcome IdentityStoreClient::ListGroupMemberships(const ListGroupMembershipsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupMembershipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupMembershipsOutcomeCallable IdentityStoreClient::ListGroupMembershipsCallable(const ListGroupMembershipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupMembershipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupMemberships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientListGroupMembershipsAsyncHelper(IdentityStoreClient const * const clientThis, const ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupMemberships(request), context);
}

void IdentityStoreClient::ListGroupMembershipsAsync(const ListGroupMembershipsRequest& request, const ListGroupMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientListGroupMembershipsAsyncHelper( this, request, handler, context ); } );
}

ListGroupMembershipsForMemberOutcome IdentityStoreClient::ListGroupMembershipsForMember(const ListGroupMembershipsForMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupMembershipsForMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupMembershipsForMemberOutcomeCallable IdentityStoreClient::ListGroupMembershipsForMemberCallable(const ListGroupMembershipsForMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupMembershipsForMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupMembershipsForMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientListGroupMembershipsForMemberAsyncHelper(IdentityStoreClient const * const clientThis, const ListGroupMembershipsForMemberRequest& request, const ListGroupMembershipsForMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroupMembershipsForMember(request), context);
}

void IdentityStoreClient::ListGroupMembershipsForMemberAsync(const ListGroupMembershipsForMemberRequest& request, const ListGroupMembershipsForMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientListGroupMembershipsForMemberAsyncHelper( this, request, handler, context ); } );
}

ListGroupsOutcome IdentityStoreClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcomeCallable IdentityStoreClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientListGroupsAsyncHelper(IdentityStoreClient const * const clientThis, const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGroups(request), context);
}

void IdentityStoreClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientListGroupsAsyncHelper( this, request, handler, context ); } );
}

ListUsersOutcome IdentityStoreClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcomeCallable IdentityStoreClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientListUsersAsyncHelper(IdentityStoreClient const * const clientThis, const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListUsers(request), context);
}

void IdentityStoreClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientListUsersAsyncHelper( this, request, handler, context ); } );
}

UpdateGroupOutcome IdentityStoreClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcomeCallable IdentityStoreClient::UpdateGroupCallable(const UpdateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientUpdateGroupAsyncHelper(IdentityStoreClient const * const clientThis, const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGroup(request), context);
}

void IdentityStoreClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientUpdateGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateUserOutcome IdentityStoreClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcomeCallable IdentityStoreClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IdentityStoreClientUpdateUserAsyncHelper(IdentityStoreClient const * const clientThis, const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUser(request), context);
}

void IdentityStoreClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ IdentityStoreClientUpdateUserAsyncHelper( this, request, handler, context ); } );
}

