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
#include <aws/chime/ChimeClient.h>
#include <aws/chime/ChimeEndpoint.h>
#include <aws/chime/ChimeErrorMarshaller.h>
#include <aws/chime/model/BatchSuspendUserRequest.h>
#include <aws/chime/model/BatchUnsuspendUserRequest.h>
#include <aws/chime/model/BatchUpdateUserRequest.h>
#include <aws/chime/model/CreateAccountRequest.h>
#include <aws/chime/model/DeleteAccountRequest.h>
#include <aws/chime/model/GetAccountRequest.h>
#include <aws/chime/model/GetAccountSettingsRequest.h>
#include <aws/chime/model/GetUserRequest.h>
#include <aws/chime/model/InviteUsersRequest.h>
#include <aws/chime/model/ListAccountsRequest.h>
#include <aws/chime/model/ListUsersRequest.h>
#include <aws/chime/model/LogoutUserRequest.h>
#include <aws/chime/model/ResetPersonalPINRequest.h>
#include <aws/chime/model/UpdateAccountRequest.h>
#include <aws/chime/model/UpdateAccountSettingsRequest.h>
#include <aws/chime/model/UpdateUserRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Chime;
using namespace Aws::Chime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "chime";
static const char* ALLOCATION_TAG = "ChimeClient";


ChimeClient::ChimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeClient::ChimeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeClient::ChimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeClient::~ChimeClient()
{
}

void ChimeClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ChimeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchSuspendUserOutcome ChimeClient::BatchSuspendUser(const BatchSuspendUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=suspend");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchSuspendUserOutcome(BatchSuspendUserResult(outcome.GetResult()));
  }
  else
  {
    return BatchSuspendUserOutcome(outcome.GetError());
  }
}

BatchSuspendUserOutcomeCallable ChimeClient::BatchSuspendUserCallable(const BatchSuspendUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchSuspendUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchSuspendUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchSuspendUserAsync(const BatchSuspendUserRequest& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchSuspendUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::BatchSuspendUserAsyncHelper(const BatchSuspendUserRequest& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchSuspendUser(request), context);
}

BatchUnsuspendUserOutcome ChimeClient::BatchUnsuspendUser(const BatchUnsuspendUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=unsuspend");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchUnsuspendUserOutcome(BatchUnsuspendUserResult(outcome.GetResult()));
  }
  else
  {
    return BatchUnsuspendUserOutcome(outcome.GetError());
  }
}

BatchUnsuspendUserOutcomeCallable ChimeClient::BatchUnsuspendUserCallable(const BatchUnsuspendUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUnsuspendUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUnsuspendUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchUnsuspendUserAsync(const BatchUnsuspendUserRequest& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUnsuspendUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::BatchUnsuspendUserAsyncHelper(const BatchUnsuspendUserRequest& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUnsuspendUser(request), context);
}

BatchUpdateUserOutcome ChimeClient::BatchUpdateUser(const BatchUpdateUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchUpdateUserOutcome(BatchUpdateUserResult(outcome.GetResult()));
  }
  else
  {
    return BatchUpdateUserOutcome(outcome.GetError());
  }
}

BatchUpdateUserOutcomeCallable ChimeClient::BatchUpdateUserCallable(const BatchUpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchUpdateUserAsync(const BatchUpdateUserRequest& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpdateUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::BatchUpdateUserAsyncHelper(const BatchUpdateUserRequest& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpdateUser(request), context);
}

CreateAccountOutcome ChimeClient::CreateAccount(const CreateAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAccountOutcome(CreateAccountResult(outcome.GetResult()));
  }
  else
  {
    return CreateAccountOutcome(outcome.GetError());
  }
}

CreateAccountOutcomeCallable ChimeClient::CreateAccountCallable(const CreateAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAccountAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateAccountAsyncHelper(const CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAccount(request), context);
}

DeleteAccountOutcome ChimeClient::DeleteAccount(const DeleteAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAccountOutcome(DeleteAccountResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAccountOutcome(outcome.GetError());
  }
}

DeleteAccountOutcomeCallable ChimeClient::DeleteAccountCallable(const DeleteAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccountAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteAccountAsyncHelper(const DeleteAccountRequest& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccount(request), context);
}

GetAccountOutcome ChimeClient::GetAccount(const GetAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAccountOutcome(GetAccountResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountOutcome(outcome.GetError());
  }
}

GetAccountOutcomeCallable ChimeClient::GetAccountCallable(const GetAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetAccountAsync(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetAccountAsyncHelper(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccount(request), context);
}

GetAccountSettingsOutcome ChimeClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAccountSettingsOutcome(GetAccountSettingsResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountSettingsOutcome(outcome.GetError());
  }
}

GetAccountSettingsOutcomeCallable ChimeClient::GetAccountSettingsCallable(const GetAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetAccountSettingsAsync(const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetAccountSettingsAsyncHelper(const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccountSettings(request), context);
}

GetUserOutcome ChimeClient::GetUser(const GetUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserOutcome(GetUserResult(outcome.GetResult()));
  }
  else
  {
    return GetUserOutcome(outcome.GetError());
  }
}

GetUserOutcomeCallable ChimeClient::GetUserCallable(const GetUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetUserAsync(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetUserAsyncHelper(const GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUser(request), context);
}

InviteUsersOutcome ChimeClient::InviteUsers(const InviteUsersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=add");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InviteUsersOutcome(InviteUsersResult(outcome.GetResult()));
  }
  else
  {
    return InviteUsersOutcome(outcome.GetError());
  }
}

InviteUsersOutcomeCallable ChimeClient::InviteUsersCallable(const InviteUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InviteUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InviteUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::InviteUsersAsync(const InviteUsersRequest& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InviteUsersAsyncHelper( request, handler, context ); } );
}

void ChimeClient::InviteUsersAsyncHelper(const InviteUsersRequest& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InviteUsers(request), context);
}

ListAccountsOutcome ChimeClient::ListAccounts(const ListAccountsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAccountsOutcome(ListAccountsResult(outcome.GetResult()));
  }
  else
  {
    return ListAccountsOutcome(outcome.GetError());
  }
}

ListAccountsOutcomeCallable ChimeClient::ListAccountsCallable(const ListAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListAccountsAsync(const ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAccountsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListAccountsAsyncHelper(const ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAccounts(request), context);
}

ListUsersOutcome ChimeClient::ListUsers(const ListUsersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUsersOutcome(ListUsersResult(outcome.GetResult()));
  }
  else
  {
    return ListUsersOutcome(outcome.GetError());
  }
}

ListUsersOutcomeCallable ChimeClient::ListUsersCallable(const ListUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsersAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListUsersAsyncHelper(const ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsers(request), context);
}

LogoutUserOutcome ChimeClient::LogoutUser(const LogoutUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=logout");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return LogoutUserOutcome(LogoutUserResult(outcome.GetResult()));
  }
  else
  {
    return LogoutUserOutcome(outcome.GetError());
  }
}

LogoutUserOutcomeCallable ChimeClient::LogoutUserCallable(const LogoutUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LogoutUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LogoutUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::LogoutUserAsync(const LogoutUserRequest& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->LogoutUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::LogoutUserAsyncHelper(const LogoutUserRequest& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, LogoutUser(request), context);
}

ResetPersonalPINOutcome ChimeClient::ResetPersonalPIN(const ResetPersonalPINRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=reset-personal-pin");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResetPersonalPINOutcome(ResetPersonalPINResult(outcome.GetResult()));
  }
  else
  {
    return ResetPersonalPINOutcome(outcome.GetError());
  }
}

ResetPersonalPINOutcomeCallable ChimeClient::ResetPersonalPINCallable(const ResetPersonalPINRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetPersonalPINOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetPersonalPIN(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ResetPersonalPINAsync(const ResetPersonalPINRequest& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetPersonalPINAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ResetPersonalPINAsyncHelper(const ResetPersonalPINRequest& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetPersonalPIN(request), context);
}

UpdateAccountOutcome ChimeClient::UpdateAccount(const UpdateAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAccountOutcome(UpdateAccountResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAccountOutcome(outcome.GetError());
  }
}

UpdateAccountOutcomeCallable ChimeClient::UpdateAccountCallable(const UpdateAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateAccountAsync(const UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAccountAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateAccountAsyncHelper(const UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccount(request), context);
}

UpdateAccountSettingsOutcome ChimeClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAccountSettingsOutcome(UpdateAccountSettingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAccountSettingsOutcome(outcome.GetError());
  }
}

UpdateAccountSettingsOutcomeCallable ChimeClient::UpdateAccountSettingsCallable(const UpdateAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateAccountSettingsAsync(const UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAccountSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateAccountSettingsAsyncHelper(const UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccountSettings(request), context);
}

UpdateUserOutcome ChimeClient::UpdateUser(const UpdateUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/console/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserOutcome(UpdateUserResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUserOutcome(outcome.GetError());
  }
}

UpdateUserOutcomeCallable ChimeClient::UpdateUserCallable(const UpdateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateUserAsyncHelper(const UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUser(request), context);
}

