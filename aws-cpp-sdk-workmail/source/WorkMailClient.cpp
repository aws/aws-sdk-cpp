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

#include <aws/workmail/WorkMailClient.h>
#include <aws/workmail/WorkMailEndpoint.h>
#include <aws/workmail/WorkMailErrorMarshaller.h>
#include <aws/workmail/model/AssociateDelegateToResourceRequest.h>
#include <aws/workmail/model/AssociateMemberToGroupRequest.h>
#include <aws/workmail/model/CreateAliasRequest.h>
#include <aws/workmail/model/CreateGroupRequest.h>
#include <aws/workmail/model/CreateResourceRequest.h>
#include <aws/workmail/model/CreateUserRequest.h>
#include <aws/workmail/model/DeleteAliasRequest.h>
#include <aws/workmail/model/DeleteGroupRequest.h>
#include <aws/workmail/model/DeleteMailboxPermissionsRequest.h>
#include <aws/workmail/model/DeleteResourceRequest.h>
#include <aws/workmail/model/DeleteUserRequest.h>
#include <aws/workmail/model/DeregisterFromWorkMailRequest.h>
#include <aws/workmail/model/DescribeGroupRequest.h>
#include <aws/workmail/model/DescribeOrganizationRequest.h>
#include <aws/workmail/model/DescribeResourceRequest.h>
#include <aws/workmail/model/DescribeUserRequest.h>
#include <aws/workmail/model/DisassociateDelegateFromResourceRequest.h>
#include <aws/workmail/model/DisassociateMemberFromGroupRequest.h>
#include <aws/workmail/model/GetMailboxDetailsRequest.h>
#include <aws/workmail/model/ListAliasesRequest.h>
#include <aws/workmail/model/ListGroupMembersRequest.h>
#include <aws/workmail/model/ListGroupsRequest.h>
#include <aws/workmail/model/ListMailboxPermissionsRequest.h>
#include <aws/workmail/model/ListOrganizationsRequest.h>
#include <aws/workmail/model/ListResourceDelegatesRequest.h>
#include <aws/workmail/model/ListResourcesRequest.h>
#include <aws/workmail/model/ListUsersRequest.h>
#include <aws/workmail/model/PutMailboxPermissionsRequest.h>
#include <aws/workmail/model/RegisterToWorkMailRequest.h>
#include <aws/workmail/model/ResetPasswordRequest.h>
#include <aws/workmail/model/UpdateMailboxQuotaRequest.h>
#include <aws/workmail/model/UpdatePrimaryEmailAddressRequest.h>
#include <aws/workmail/model/UpdateResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkMail;
using namespace Aws::WorkMail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "workmail";
static const char* ALLOCATION_TAG = "WorkMailClient";


WorkMailClient::WorkMailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailClient::WorkMailClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailClient::WorkMailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<WorkMailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailClient::~WorkMailClient()
{
}

void WorkMailClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WorkMailEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WorkMailClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateDelegateToResourceOutcome WorkMailClient::AssociateDelegateToResource(const AssociateDelegateToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDelegateToResourceOutcome(AssociateDelegateToResourceResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDelegateToResourceOutcome(outcome.GetError());
  }
}

AssociateDelegateToResourceOutcomeCallable WorkMailClient::AssociateDelegateToResourceCallable(const AssociateDelegateToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDelegateToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDelegateToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::AssociateDelegateToResourceAsync(const AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDelegateToResourceAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::AssociateDelegateToResourceAsyncHelper(const AssociateDelegateToResourceRequest& request, const AssociateDelegateToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDelegateToResource(request), context);
}

AssociateMemberToGroupOutcome WorkMailClient::AssociateMemberToGroup(const AssociateMemberToGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateMemberToGroupOutcome(AssociateMemberToGroupResult(outcome.GetResult()));
  }
  else
  {
    return AssociateMemberToGroupOutcome(outcome.GetError());
  }
}

AssociateMemberToGroupOutcomeCallable WorkMailClient::AssociateMemberToGroupCallable(const AssociateMemberToGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateMemberToGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateMemberToGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::AssociateMemberToGroupAsync(const AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateMemberToGroupAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::AssociateMemberToGroupAsyncHelper(const AssociateMemberToGroupRequest& request, const AssociateMemberToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateMemberToGroup(request), context);
}

CreateAliasOutcome WorkMailClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAliasOutcome(CreateAliasResult(outcome.GetResult()));
  }
  else
  {
    return CreateAliasOutcome(outcome.GetError());
  }
}

CreateAliasOutcomeCallable WorkMailClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAliasAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::CreateAliasAsyncHelper(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlias(request), context);
}

CreateGroupOutcome WorkMailClient::CreateGroup(const CreateGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateGroupOutcome(CreateGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateGroupOutcome(outcome.GetError());
  }
}

CreateGroupOutcomeCallable WorkMailClient::CreateGroupCallable(const CreateGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateGroupAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::CreateGroupAsyncHelper(const CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateGroup(request), context);
}

CreateResourceOutcome WorkMailClient::CreateResource(const CreateResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateResourceOutcome(CreateResourceResult(outcome.GetResult()));
  }
  else
  {
    return CreateResourceOutcome(outcome.GetError());
  }
}

CreateResourceOutcomeCallable WorkMailClient::CreateResourceCallable(const CreateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateResourceAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::CreateResourceAsyncHelper(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResource(request), context);
}

CreateUserOutcome WorkMailClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserOutcome(CreateUserResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserOutcome(outcome.GetError());
  }
}

CreateUserOutcomeCallable WorkMailClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeleteAliasOutcome WorkMailClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAliasOutcome(DeleteAliasResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAliasOutcome(outcome.GetError());
  }
}

DeleteAliasOutcomeCallable WorkMailClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAliasAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DeleteAliasAsyncHelper(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlias(request), context);
}

DeleteGroupOutcome WorkMailClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGroupOutcome(DeleteGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteGroupOutcome(outcome.GetError());
  }
}

DeleteGroupOutcomeCallable WorkMailClient::DeleteGroupCallable(const DeleteGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGroupAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DeleteGroupAsyncHelper(const DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGroup(request), context);
}

DeleteMailboxPermissionsOutcome WorkMailClient::DeleteMailboxPermissions(const DeleteMailboxPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMailboxPermissionsOutcome(DeleteMailboxPermissionsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMailboxPermissionsOutcome(outcome.GetError());
  }
}

DeleteMailboxPermissionsOutcomeCallable WorkMailClient::DeleteMailboxPermissionsCallable(const DeleteMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteMailboxPermissionsAsync(const DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMailboxPermissionsAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DeleteMailboxPermissionsAsyncHelper(const DeleteMailboxPermissionsRequest& request, const DeleteMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMailboxPermissions(request), context);
}

DeleteResourceOutcome WorkMailClient::DeleteResource(const DeleteResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteResourceOutcome(DeleteResourceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteResourceOutcome(outcome.GetError());
  }
}

DeleteResourceOutcomeCallable WorkMailClient::DeleteResourceCallable(const DeleteResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourceAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DeleteResourceAsyncHelper(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResource(request), context);
}

DeleteUserOutcome WorkMailClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUserOutcome(DeleteUserResult(outcome.GetResult()));
  }
  else
  {
    return DeleteUserOutcome(outcome.GetError());
  }
}

DeleteUserOutcomeCallable WorkMailClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DeregisterFromWorkMailOutcome WorkMailClient::DeregisterFromWorkMail(const DeregisterFromWorkMailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterFromWorkMailOutcome(DeregisterFromWorkMailResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterFromWorkMailOutcome(outcome.GetError());
  }
}

DeregisterFromWorkMailOutcomeCallable WorkMailClient::DeregisterFromWorkMailCallable(const DeregisterFromWorkMailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterFromWorkMailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterFromWorkMail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DeregisterFromWorkMailAsync(const DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterFromWorkMailAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DeregisterFromWorkMailAsyncHelper(const DeregisterFromWorkMailRequest& request, const DeregisterFromWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterFromWorkMail(request), context);
}

DescribeGroupOutcome WorkMailClient::DescribeGroup(const DescribeGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeGroupOutcome(DescribeGroupResult(outcome.GetResult()));
  }
  else
  {
    return DescribeGroupOutcome(outcome.GetError());
  }
}

DescribeGroupOutcomeCallable WorkMailClient::DescribeGroupCallable(const DescribeGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGroupAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DescribeGroupAsyncHelper(const DescribeGroupRequest& request, const DescribeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGroup(request), context);
}

DescribeOrganizationOutcome WorkMailClient::DescribeOrganization(const DescribeOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeOrganizationOutcome(DescribeOrganizationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeOrganizationOutcome(outcome.GetError());
  }
}

DescribeOrganizationOutcomeCallable WorkMailClient::DescribeOrganizationCallable(const DescribeOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeOrganizationAsync(const DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrganizationAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DescribeOrganizationAsyncHelper(const DescribeOrganizationRequest& request, const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrganization(request), context);
}

DescribeResourceOutcome WorkMailClient::DescribeResource(const DescribeResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeResourceOutcome(DescribeResourceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeResourceOutcome(outcome.GetError());
  }
}

DescribeResourceOutcomeCallable WorkMailClient::DescribeResourceCallable(const DescribeResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourceAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DescribeResourceAsyncHelper(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResource(request), context);
}

DescribeUserOutcome WorkMailClient::DescribeUser(const DescribeUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeUserOutcome(DescribeUserResult(outcome.GetResult()));
  }
  else
  {
    return DescribeUserOutcome(outcome.GetError());
  }
}

DescribeUserOutcomeCallable WorkMailClient::DescribeUserCallable(const DescribeUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeUserAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DescribeUserAsyncHelper(const DescribeUserRequest& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeUser(request), context);
}

DisassociateDelegateFromResourceOutcome WorkMailClient::DisassociateDelegateFromResource(const DisassociateDelegateFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDelegateFromResourceOutcome(DisassociateDelegateFromResourceResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDelegateFromResourceOutcome(outcome.GetError());
  }
}

DisassociateDelegateFromResourceOutcomeCallable WorkMailClient::DisassociateDelegateFromResourceCallable(const DisassociateDelegateFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDelegateFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDelegateFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DisassociateDelegateFromResourceAsync(const DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDelegateFromResourceAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DisassociateDelegateFromResourceAsyncHelper(const DisassociateDelegateFromResourceRequest& request, const DisassociateDelegateFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDelegateFromResource(request), context);
}

DisassociateMemberFromGroupOutcome WorkMailClient::DisassociateMemberFromGroup(const DisassociateMemberFromGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateMemberFromGroupOutcome(DisassociateMemberFromGroupResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateMemberFromGroupOutcome(outcome.GetError());
  }
}

DisassociateMemberFromGroupOutcomeCallable WorkMailClient::DisassociateMemberFromGroupCallable(const DisassociateMemberFromGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMemberFromGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMemberFromGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::DisassociateMemberFromGroupAsync(const DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateMemberFromGroupAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::DisassociateMemberFromGroupAsyncHelper(const DisassociateMemberFromGroupRequest& request, const DisassociateMemberFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateMemberFromGroup(request), context);
}

GetMailboxDetailsOutcome WorkMailClient::GetMailboxDetails(const GetMailboxDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMailboxDetailsOutcome(GetMailboxDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GetMailboxDetailsOutcome(outcome.GetError());
  }
}

GetMailboxDetailsOutcomeCallable WorkMailClient::GetMailboxDetailsCallable(const GetMailboxDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMailboxDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMailboxDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::GetMailboxDetailsAsync(const GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMailboxDetailsAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::GetMailboxDetailsAsyncHelper(const GetMailboxDetailsRequest& request, const GetMailboxDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMailboxDetails(request), context);
}

ListAliasesOutcome WorkMailClient::ListAliases(const ListAliasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAliasesOutcome(ListAliasesResult(outcome.GetResult()));
  }
  else
  {
    return ListAliasesOutcome(outcome.GetError());
  }
}

ListAliasesOutcomeCallable WorkMailClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAliasesAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListAliasesAsyncHelper(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAliases(request), context);
}

ListGroupMembersOutcome WorkMailClient::ListGroupMembers(const ListGroupMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGroupMembersOutcome(ListGroupMembersResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupMembersOutcome(outcome.GetError());
  }
}

ListGroupMembersOutcomeCallable WorkMailClient::ListGroupMembersCallable(const ListGroupMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroupMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListGroupMembersAsync(const ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupMembersAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListGroupMembersAsyncHelper(const ListGroupMembersRequest& request, const ListGroupMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroupMembers(request), context);
}

ListGroupsOutcome WorkMailClient::ListGroups(const ListGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListGroupsOutcome(ListGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListGroupsOutcome(outcome.GetError());
  }
}

ListGroupsOutcomeCallable WorkMailClient::ListGroupsCallable(const ListGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGroupsAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListGroupsAsyncHelper(const ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGroups(request), context);
}

ListMailboxPermissionsOutcome WorkMailClient::ListMailboxPermissions(const ListMailboxPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMailboxPermissionsOutcome(ListMailboxPermissionsResult(outcome.GetResult()));
  }
  else
  {
    return ListMailboxPermissionsOutcome(outcome.GetError());
  }
}

ListMailboxPermissionsOutcomeCallable WorkMailClient::ListMailboxPermissionsCallable(const ListMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListMailboxPermissionsAsync(const ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMailboxPermissionsAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListMailboxPermissionsAsyncHelper(const ListMailboxPermissionsRequest& request, const ListMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMailboxPermissions(request), context);
}

ListOrganizationsOutcome WorkMailClient::ListOrganizations(const ListOrganizationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOrganizationsOutcome(ListOrganizationsResult(outcome.GetResult()));
  }
  else
  {
    return ListOrganizationsOutcome(outcome.GetError());
  }
}

ListOrganizationsOutcomeCallable WorkMailClient::ListOrganizationsCallable(const ListOrganizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListOrganizationsAsync(const ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOrganizationsAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListOrganizationsAsyncHelper(const ListOrganizationsRequest& request, const ListOrganizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOrganizations(request), context);
}

ListResourceDelegatesOutcome WorkMailClient::ListResourceDelegates(const ListResourceDelegatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResourceDelegatesOutcome(ListResourceDelegatesResult(outcome.GetResult()));
  }
  else
  {
    return ListResourceDelegatesOutcome(outcome.GetError());
  }
}

ListResourceDelegatesOutcomeCallable WorkMailClient::ListResourceDelegatesCallable(const ListResourceDelegatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceDelegatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceDelegates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListResourceDelegatesAsync(const ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceDelegatesAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListResourceDelegatesAsyncHelper(const ListResourceDelegatesRequest& request, const ListResourceDelegatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceDelegates(request), context);
}

ListResourcesOutcome WorkMailClient::ListResources(const ListResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResourcesOutcome(ListResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListResourcesOutcome(outcome.GetError());
  }
}

ListResourcesOutcomeCallable WorkMailClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourcesAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListResourcesAsyncHelper(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResources(request), context);
}

ListUsersOutcome WorkMailClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUsersOutcome(ListUsersResult(outcome.GetResult()));
  }
  else
  {
    return ListUsersOutcome(outcome.GetError());
  }
}

ListUsersOutcomeCallable WorkMailClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

PutMailboxPermissionsOutcome WorkMailClient::PutMailboxPermissions(const PutMailboxPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutMailboxPermissionsOutcome(PutMailboxPermissionsResult(outcome.GetResult()));
  }
  else
  {
    return PutMailboxPermissionsOutcome(outcome.GetError());
  }
}

PutMailboxPermissionsOutcomeCallable WorkMailClient::PutMailboxPermissionsCallable(const PutMailboxPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMailboxPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMailboxPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::PutMailboxPermissionsAsync(const PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutMailboxPermissionsAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::PutMailboxPermissionsAsyncHelper(const PutMailboxPermissionsRequest& request, const PutMailboxPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMailboxPermissions(request), context);
}

RegisterToWorkMailOutcome WorkMailClient::RegisterToWorkMail(const RegisterToWorkMailRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterToWorkMailOutcome(RegisterToWorkMailResult(outcome.GetResult()));
  }
  else
  {
    return RegisterToWorkMailOutcome(outcome.GetError());
  }
}

RegisterToWorkMailOutcomeCallable WorkMailClient::RegisterToWorkMailCallable(const RegisterToWorkMailRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterToWorkMailOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterToWorkMail(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::RegisterToWorkMailAsync(const RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterToWorkMailAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::RegisterToWorkMailAsyncHelper(const RegisterToWorkMailRequest& request, const RegisterToWorkMailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterToWorkMail(request), context);
}

ResetPasswordOutcome WorkMailClient::ResetPassword(const ResetPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResetPasswordOutcome(ResetPasswordResult(outcome.GetResult()));
  }
  else
  {
    return ResetPasswordOutcome(outcome.GetError());
  }
}

ResetPasswordOutcomeCallable WorkMailClient::ResetPasswordCallable(const ResetPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetPasswordAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::ResetPasswordAsyncHelper(const ResetPasswordRequest& request, const ResetPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetPassword(request), context);
}

UpdateMailboxQuotaOutcome WorkMailClient::UpdateMailboxQuota(const UpdateMailboxQuotaRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMailboxQuotaOutcome(UpdateMailboxQuotaResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMailboxQuotaOutcome(outcome.GetError());
  }
}

UpdateMailboxQuotaOutcomeCallable WorkMailClient::UpdateMailboxQuotaCallable(const UpdateMailboxQuotaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMailboxQuotaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMailboxQuota(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateMailboxQuotaAsync(const UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMailboxQuotaAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::UpdateMailboxQuotaAsyncHelper(const UpdateMailboxQuotaRequest& request, const UpdateMailboxQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMailboxQuota(request), context);
}

UpdatePrimaryEmailAddressOutcome WorkMailClient::UpdatePrimaryEmailAddress(const UpdatePrimaryEmailAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePrimaryEmailAddressOutcome(UpdatePrimaryEmailAddressResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePrimaryEmailAddressOutcome(outcome.GetError());
  }
}

UpdatePrimaryEmailAddressOutcomeCallable WorkMailClient::UpdatePrimaryEmailAddressCallable(const UpdatePrimaryEmailAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePrimaryEmailAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePrimaryEmailAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdatePrimaryEmailAddressAsync(const UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePrimaryEmailAddressAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::UpdatePrimaryEmailAddressAsyncHelper(const UpdatePrimaryEmailAddressRequest& request, const UpdatePrimaryEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePrimaryEmailAddress(request), context);
}

UpdateResourceOutcome WorkMailClient::UpdateResource(const UpdateResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateResourceOutcome(UpdateResourceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateResourceOutcome(outcome.GetError());
  }
}

UpdateResourceOutcomeCallable WorkMailClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourceAsyncHelper( request, handler, context ); } );
}

void WorkMailClient::UpdateResourceAsyncHelper(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResource(request), context);
}

