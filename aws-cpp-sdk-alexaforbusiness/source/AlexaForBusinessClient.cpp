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
#include <aws/alexaforbusiness/AlexaForBusinessClient.h>
#include <aws/alexaforbusiness/AlexaForBusinessEndpoint.h>
#include <aws/alexaforbusiness/AlexaForBusinessErrorMarshaller.h>
#include <aws/alexaforbusiness/model/AssociateContactWithAddressBookRequest.h>
#include <aws/alexaforbusiness/model/AssociateDeviceWithRoomRequest.h>
#include <aws/alexaforbusiness/model/AssociateSkillGroupWithRoomRequest.h>
#include <aws/alexaforbusiness/model/CreateAddressBookRequest.h>
#include <aws/alexaforbusiness/model/CreateContactRequest.h>
#include <aws/alexaforbusiness/model/CreateProfileRequest.h>
#include <aws/alexaforbusiness/model/CreateRoomRequest.h>
#include <aws/alexaforbusiness/model/CreateSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/CreateUserRequest.h>
#include <aws/alexaforbusiness/model/DeleteAddressBookRequest.h>
#include <aws/alexaforbusiness/model/DeleteContactRequest.h>
#include <aws/alexaforbusiness/model/DeleteProfileRequest.h>
#include <aws/alexaforbusiness/model/DeleteRoomRequest.h>
#include <aws/alexaforbusiness/model/DeleteRoomSkillParameterRequest.h>
#include <aws/alexaforbusiness/model/DeleteSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/DeleteUserRequest.h>
#include <aws/alexaforbusiness/model/DisassociateContactFromAddressBookRequest.h>
#include <aws/alexaforbusiness/model/DisassociateDeviceFromRoomRequest.h>
#include <aws/alexaforbusiness/model/DisassociateSkillGroupFromRoomRequest.h>
#include <aws/alexaforbusiness/model/GetAddressBookRequest.h>
#include <aws/alexaforbusiness/model/GetContactRequest.h>
#include <aws/alexaforbusiness/model/GetDeviceRequest.h>
#include <aws/alexaforbusiness/model/GetProfileRequest.h>
#include <aws/alexaforbusiness/model/GetRoomRequest.h>
#include <aws/alexaforbusiness/model/GetRoomSkillParameterRequest.h>
#include <aws/alexaforbusiness/model/GetSkillGroupRequest.h>
#include <aws/alexaforbusiness/model/ListDeviceEventsRequest.h>
#include <aws/alexaforbusiness/model/ListSkillsRequest.h>
#include <aws/alexaforbusiness/model/ListTagsRequest.h>
#include <aws/alexaforbusiness/model/PutRoomSkillParameterRequest.h>
#include <aws/alexaforbusiness/model/ResolveRoomRequest.h>
#include <aws/alexaforbusiness/model/RevokeInvitationRequest.h>
#include <aws/alexaforbusiness/model/SearchAddressBooksRequest.h>
#include <aws/alexaforbusiness/model/SearchContactsRequest.h>
#include <aws/alexaforbusiness/model/SearchDevicesRequest.h>
#include <aws/alexaforbusiness/model/SearchProfilesRequest.h>
#include <aws/alexaforbusiness/model/SearchRoomsRequest.h>
#include <aws/alexaforbusiness/model/SearchSkillGroupsRequest.h>
#include <aws/alexaforbusiness/model/SearchUsersRequest.h>
#include <aws/alexaforbusiness/model/SendInvitationRequest.h>
#include <aws/alexaforbusiness/model/StartDeviceSyncRequest.h>
#include <aws/alexaforbusiness/model/TagResourceRequest.h>
#include <aws/alexaforbusiness/model/UntagResourceRequest.h>
#include <aws/alexaforbusiness/model/UpdateAddressBookRequest.h>
#include <aws/alexaforbusiness/model/UpdateContactRequest.h>
#include <aws/alexaforbusiness/model/UpdateDeviceRequest.h>
#include <aws/alexaforbusiness/model/UpdateProfileRequest.h>
#include <aws/alexaforbusiness/model/UpdateRoomRequest.h>
#include <aws/alexaforbusiness/model/UpdateSkillGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AlexaForBusiness;
using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "a4b";
static const char* ALLOCATION_TAG = "AlexaForBusinessClient";


AlexaForBusinessClient::AlexaForBusinessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::AlexaForBusinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AlexaForBusinessErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AlexaForBusinessClient::~AlexaForBusinessClient()
{
}

void AlexaForBusinessClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << AlexaForBusinessEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AssociateContactWithAddressBookOutcome AlexaForBusinessClient::AssociateContactWithAddressBook(const AssociateContactWithAddressBookRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateContactWithAddressBookOutcome(AssociateContactWithAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return AssociateContactWithAddressBookOutcome(outcome.GetError());
  }
}

AssociateContactWithAddressBookOutcomeCallable AlexaForBusinessClient::AssociateContactWithAddressBookCallable(const AssociateContactWithAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateContactWithAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateContactWithAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateContactWithAddressBookAsync(const AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateContactWithAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateContactWithAddressBookAsyncHelper(const AssociateContactWithAddressBookRequest& request, const AssociateContactWithAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateContactWithAddressBook(request), context);
}

AssociateDeviceWithRoomOutcome AlexaForBusinessClient::AssociateDeviceWithRoom(const AssociateDeviceWithRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDeviceWithRoomOutcome(AssociateDeviceWithRoomResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDeviceWithRoomOutcome(outcome.GetError());
  }
}

AssociateDeviceWithRoomOutcomeCallable AlexaForBusinessClient::AssociateDeviceWithRoomCallable(const AssociateDeviceWithRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDeviceWithRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDeviceWithRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateDeviceWithRoomAsync(const AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDeviceWithRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateDeviceWithRoomAsyncHelper(const AssociateDeviceWithRoomRequest& request, const AssociateDeviceWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDeviceWithRoom(request), context);
}

AssociateSkillGroupWithRoomOutcome AlexaForBusinessClient::AssociateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateSkillGroupWithRoomOutcome(AssociateSkillGroupWithRoomResult(outcome.GetResult()));
  }
  else
  {
    return AssociateSkillGroupWithRoomOutcome(outcome.GetError());
  }
}

AssociateSkillGroupWithRoomOutcomeCallable AlexaForBusinessClient::AssociateSkillGroupWithRoomCallable(const AssociateSkillGroupWithRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSkillGroupWithRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSkillGroupWithRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::AssociateSkillGroupWithRoomAsync(const AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSkillGroupWithRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::AssociateSkillGroupWithRoomAsyncHelper(const AssociateSkillGroupWithRoomRequest& request, const AssociateSkillGroupWithRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSkillGroupWithRoom(request), context);
}

CreateAddressBookOutcome AlexaForBusinessClient::CreateAddressBook(const CreateAddressBookRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAddressBookOutcome(CreateAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return CreateAddressBookOutcome(outcome.GetError());
  }
}

CreateAddressBookOutcomeCallable AlexaForBusinessClient::CreateAddressBookCallable(const CreateAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateAddressBookAsync(const CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateAddressBookAsyncHelper(const CreateAddressBookRequest& request, const CreateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAddressBook(request), context);
}

CreateContactOutcome AlexaForBusinessClient::CreateContact(const CreateContactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateContactOutcome(CreateContactResult(outcome.GetResult()));
  }
  else
  {
    return CreateContactOutcome(outcome.GetError());
  }
}

CreateContactOutcomeCallable AlexaForBusinessClient::CreateContactCallable(const CreateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateContactAsync(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateContactAsyncHelper(const CreateContactRequest& request, const CreateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateContact(request), context);
}

CreateProfileOutcome AlexaForBusinessClient::CreateProfile(const CreateProfileRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProfileOutcome(CreateProfileResult(outcome.GetResult()));
  }
  else
  {
    return CreateProfileOutcome(outcome.GetError());
  }
}

CreateProfileOutcomeCallable AlexaForBusinessClient::CreateProfileCallable(const CreateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateProfileAsync(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateProfileAsyncHelper(const CreateProfileRequest& request, const CreateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProfile(request), context);
}

CreateRoomOutcome AlexaForBusinessClient::CreateRoom(const CreateRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRoomOutcome(CreateRoomResult(outcome.GetResult()));
  }
  else
  {
    return CreateRoomOutcome(outcome.GetError());
  }
}

CreateRoomOutcomeCallable AlexaForBusinessClient::CreateRoomCallable(const CreateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateRoomAsync(const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateRoomAsyncHelper(const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoom(request), context);
}

CreateSkillGroupOutcome AlexaForBusinessClient::CreateSkillGroup(const CreateSkillGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSkillGroupOutcome(CreateSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateSkillGroupOutcome(outcome.GetError());
  }
}

CreateSkillGroupOutcomeCallable AlexaForBusinessClient::CreateSkillGroupCallable(const CreateSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateSkillGroupAsync(const CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateSkillGroupAsyncHelper(const CreateSkillGroupRequest& request, const CreateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSkillGroup(request), context);
}

CreateUserOutcome AlexaForBusinessClient::CreateUser(const CreateUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
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

CreateUserOutcomeCallable AlexaForBusinessClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

DeleteAddressBookOutcome AlexaForBusinessClient::DeleteAddressBook(const DeleteAddressBookRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAddressBookOutcome(DeleteAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAddressBookOutcome(outcome.GetError());
  }
}

DeleteAddressBookOutcomeCallable AlexaForBusinessClient::DeleteAddressBookCallable(const DeleteAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteAddressBookAsync(const DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteAddressBookAsyncHelper(const DeleteAddressBookRequest& request, const DeleteAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAddressBook(request), context);
}

DeleteContactOutcome AlexaForBusinessClient::DeleteContact(const DeleteContactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteContactOutcome(DeleteContactResult(outcome.GetResult()));
  }
  else
  {
    return DeleteContactOutcome(outcome.GetError());
  }
}

DeleteContactOutcomeCallable AlexaForBusinessClient::DeleteContactCallable(const DeleteContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteContactAsync(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteContactAsyncHelper(const DeleteContactRequest& request, const DeleteContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteContact(request), context);
}

DeleteProfileOutcome AlexaForBusinessClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProfileOutcome(DeleteProfileResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProfileOutcome(outcome.GetError());
  }
}

DeleteProfileOutcomeCallable AlexaForBusinessClient::DeleteProfileCallable(const DeleteProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteProfileAsync(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteProfileAsyncHelper(const DeleteProfileRequest& request, const DeleteProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProfile(request), context);
}

DeleteRoomOutcome AlexaForBusinessClient::DeleteRoom(const DeleteRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRoomOutcome(DeleteRoomResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRoomOutcome(outcome.GetError());
  }
}

DeleteRoomOutcomeCallable AlexaForBusinessClient::DeleteRoomCallable(const DeleteRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteRoomAsync(const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteRoomAsyncHelper(const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoom(request), context);
}

DeleteRoomSkillParameterOutcome AlexaForBusinessClient::DeleteRoomSkillParameter(const DeleteRoomSkillParameterRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRoomSkillParameterOutcome(DeleteRoomSkillParameterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRoomSkillParameterOutcome(outcome.GetError());
  }
}

DeleteRoomSkillParameterOutcomeCallable AlexaForBusinessClient::DeleteRoomSkillParameterCallable(const DeleteRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteRoomSkillParameterAsync(const DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoomSkillParameterAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteRoomSkillParameterAsyncHelper(const DeleteRoomSkillParameterRequest& request, const DeleteRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoomSkillParameter(request), context);
}

DeleteSkillGroupOutcome AlexaForBusinessClient::DeleteSkillGroup(const DeleteSkillGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteSkillGroupOutcome(DeleteSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSkillGroupOutcome(outcome.GetError());
  }
}

DeleteSkillGroupOutcomeCallable AlexaForBusinessClient::DeleteSkillGroupCallable(const DeleteSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteSkillGroupAsync(const DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteSkillGroupAsyncHelper(const DeleteSkillGroupRequest& request, const DeleteSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSkillGroup(request), context);
}

DeleteUserOutcome AlexaForBusinessClient::DeleteUser(const DeleteUserRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
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

DeleteUserOutcomeCallable AlexaForBusinessClient::DeleteUserCallable(const DeleteUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUserAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DeleteUserAsyncHelper(const DeleteUserRequest& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUser(request), context);
}

DisassociateContactFromAddressBookOutcome AlexaForBusinessClient::DisassociateContactFromAddressBook(const DisassociateContactFromAddressBookRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateContactFromAddressBookOutcome(DisassociateContactFromAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateContactFromAddressBookOutcome(outcome.GetError());
  }
}

DisassociateContactFromAddressBookOutcomeCallable AlexaForBusinessClient::DisassociateContactFromAddressBookCallable(const DisassociateContactFromAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateContactFromAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateContactFromAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateContactFromAddressBookAsync(const DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateContactFromAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateContactFromAddressBookAsyncHelper(const DisassociateContactFromAddressBookRequest& request, const DisassociateContactFromAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateContactFromAddressBook(request), context);
}

DisassociateDeviceFromRoomOutcome AlexaForBusinessClient::DisassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDeviceFromRoomOutcome(DisassociateDeviceFromRoomResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDeviceFromRoomOutcome(outcome.GetError());
  }
}

DisassociateDeviceFromRoomOutcomeCallable AlexaForBusinessClient::DisassociateDeviceFromRoomCallable(const DisassociateDeviceFromRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDeviceFromRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDeviceFromRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateDeviceFromRoomAsync(const DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDeviceFromRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateDeviceFromRoomAsyncHelper(const DisassociateDeviceFromRoomRequest& request, const DisassociateDeviceFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDeviceFromRoom(request), context);
}

DisassociateSkillGroupFromRoomOutcome AlexaForBusinessClient::DisassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateSkillGroupFromRoomOutcome(DisassociateSkillGroupFromRoomResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateSkillGroupFromRoomOutcome(outcome.GetError());
  }
}

DisassociateSkillGroupFromRoomOutcomeCallable AlexaForBusinessClient::DisassociateSkillGroupFromRoomCallable(const DisassociateSkillGroupFromRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSkillGroupFromRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSkillGroupFromRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::DisassociateSkillGroupFromRoomAsync(const DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSkillGroupFromRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::DisassociateSkillGroupFromRoomAsyncHelper(const DisassociateSkillGroupFromRoomRequest& request, const DisassociateSkillGroupFromRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSkillGroupFromRoom(request), context);
}

GetAddressBookOutcome AlexaForBusinessClient::GetAddressBook(const GetAddressBookRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAddressBookOutcome(GetAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return GetAddressBookOutcome(outcome.GetError());
  }
}

GetAddressBookOutcomeCallable AlexaForBusinessClient::GetAddressBookCallable(const GetAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetAddressBookAsync(const GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetAddressBookAsyncHelper(const GetAddressBookRequest& request, const GetAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAddressBook(request), context);
}

GetContactOutcome AlexaForBusinessClient::GetContact(const GetContactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetContactOutcome(GetContactResult(outcome.GetResult()));
  }
  else
  {
    return GetContactOutcome(outcome.GetError());
  }
}

GetContactOutcomeCallable AlexaForBusinessClient::GetContactCallable(const GetContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetContactAsync(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetContactAsyncHelper(const GetContactRequest& request, const GetContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetContact(request), context);
}

GetDeviceOutcome AlexaForBusinessClient::GetDevice(const GetDeviceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeviceOutcome(GetDeviceResult(outcome.GetResult()));
  }
  else
  {
    return GetDeviceOutcome(outcome.GetError());
  }
}

GetDeviceOutcomeCallable AlexaForBusinessClient::GetDeviceCallable(const GetDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeviceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetDeviceAsyncHelper(const GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevice(request), context);
}

GetProfileOutcome AlexaForBusinessClient::GetProfile(const GetProfileRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetProfileOutcome(GetProfileResult(outcome.GetResult()));
  }
  else
  {
    return GetProfileOutcome(outcome.GetError());
  }
}

GetProfileOutcomeCallable AlexaForBusinessClient::GetProfileCallable(const GetProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetProfileAsync(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetProfileAsyncHelper(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProfile(request), context);
}

GetRoomOutcome AlexaForBusinessClient::GetRoom(const GetRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRoomOutcome(GetRoomResult(outcome.GetResult()));
  }
  else
  {
    return GetRoomOutcome(outcome.GetError());
  }
}

GetRoomOutcomeCallable AlexaForBusinessClient::GetRoomCallable(const GetRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetRoomAsync(const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetRoomAsyncHelper(const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoom(request), context);
}

GetRoomSkillParameterOutcome AlexaForBusinessClient::GetRoomSkillParameter(const GetRoomSkillParameterRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRoomSkillParameterOutcome(GetRoomSkillParameterResult(outcome.GetResult()));
  }
  else
  {
    return GetRoomSkillParameterOutcome(outcome.GetError());
  }
}

GetRoomSkillParameterOutcomeCallable AlexaForBusinessClient::GetRoomSkillParameterCallable(const GetRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetRoomSkillParameterAsync(const GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoomSkillParameterAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetRoomSkillParameterAsyncHelper(const GetRoomSkillParameterRequest& request, const GetRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoomSkillParameter(request), context);
}

GetSkillGroupOutcome AlexaForBusinessClient::GetSkillGroup(const GetSkillGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSkillGroupOutcome(GetSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetSkillGroupOutcome(outcome.GetError());
  }
}

GetSkillGroupOutcomeCallable AlexaForBusinessClient::GetSkillGroupCallable(const GetSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::GetSkillGroupAsync(const GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::GetSkillGroupAsyncHelper(const GetSkillGroupRequest& request, const GetSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSkillGroup(request), context);
}

ListDeviceEventsOutcome AlexaForBusinessClient::ListDeviceEvents(const ListDeviceEventsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDeviceEventsOutcome(ListDeviceEventsResult(outcome.GetResult()));
  }
  else
  {
    return ListDeviceEventsOutcome(outcome.GetError());
  }
}

ListDeviceEventsOutcomeCallable AlexaForBusinessClient::ListDeviceEventsCallable(const ListDeviceEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeviceEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeviceEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListDeviceEventsAsync(const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDeviceEventsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListDeviceEventsAsyncHelper(const ListDeviceEventsRequest& request, const ListDeviceEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDeviceEvents(request), context);
}

ListSkillsOutcome AlexaForBusinessClient::ListSkills(const ListSkillsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSkillsOutcome(ListSkillsResult(outcome.GetResult()));
  }
  else
  {
    return ListSkillsOutcome(outcome.GetError());
  }
}

ListSkillsOutcomeCallable AlexaForBusinessClient::ListSkillsCallable(const ListSkillsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSkillsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSkills(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListSkillsAsync(const ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSkillsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListSkillsAsyncHelper(const ListSkillsRequest& request, const ListSkillsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSkills(request), context);
}

ListTagsOutcome AlexaForBusinessClient::ListTags(const ListTagsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
}

ListTagsOutcomeCallable AlexaForBusinessClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

PutRoomSkillParameterOutcome AlexaForBusinessClient::PutRoomSkillParameter(const PutRoomSkillParameterRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRoomSkillParameterOutcome(PutRoomSkillParameterResult(outcome.GetResult()));
  }
  else
  {
    return PutRoomSkillParameterOutcome(outcome.GetError());
  }
}

PutRoomSkillParameterOutcomeCallable AlexaForBusinessClient::PutRoomSkillParameterCallable(const PutRoomSkillParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRoomSkillParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRoomSkillParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::PutRoomSkillParameterAsync(const PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRoomSkillParameterAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::PutRoomSkillParameterAsyncHelper(const PutRoomSkillParameterRequest& request, const PutRoomSkillParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRoomSkillParameter(request), context);
}

ResolveRoomOutcome AlexaForBusinessClient::ResolveRoom(const ResolveRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ResolveRoomOutcome(ResolveRoomResult(outcome.GetResult()));
  }
  else
  {
    return ResolveRoomOutcome(outcome.GetError());
  }
}

ResolveRoomOutcomeCallable AlexaForBusinessClient::ResolveRoomCallable(const ResolveRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::ResolveRoomAsync(const ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResolveRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::ResolveRoomAsyncHelper(const ResolveRoomRequest& request, const ResolveRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResolveRoom(request), context);
}

RevokeInvitationOutcome AlexaForBusinessClient::RevokeInvitation(const RevokeInvitationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RevokeInvitationOutcome(RevokeInvitationResult(outcome.GetResult()));
  }
  else
  {
    return RevokeInvitationOutcome(outcome.GetError());
  }
}

RevokeInvitationOutcomeCallable AlexaForBusinessClient::RevokeInvitationCallable(const RevokeInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::RevokeInvitationAsync(const RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeInvitationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::RevokeInvitationAsyncHelper(const RevokeInvitationRequest& request, const RevokeInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeInvitation(request), context);
}

SearchAddressBooksOutcome AlexaForBusinessClient::SearchAddressBooks(const SearchAddressBooksRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchAddressBooksOutcome(SearchAddressBooksResult(outcome.GetResult()));
  }
  else
  {
    return SearchAddressBooksOutcome(outcome.GetError());
  }
}

SearchAddressBooksOutcomeCallable AlexaForBusinessClient::SearchAddressBooksCallable(const SearchAddressBooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAddressBooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAddressBooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchAddressBooksAsync(const SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchAddressBooksAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchAddressBooksAsyncHelper(const SearchAddressBooksRequest& request, const SearchAddressBooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchAddressBooks(request), context);
}

SearchContactsOutcome AlexaForBusinessClient::SearchContacts(const SearchContactsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchContactsOutcome(SearchContactsResult(outcome.GetResult()));
  }
  else
  {
    return SearchContactsOutcome(outcome.GetError());
  }
}

SearchContactsOutcomeCallable AlexaForBusinessClient::SearchContactsCallable(const SearchContactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchContactsAsync(const SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchContactsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchContactsAsyncHelper(const SearchContactsRequest& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchContacts(request), context);
}

SearchDevicesOutcome AlexaForBusinessClient::SearchDevices(const SearchDevicesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchDevicesOutcome(SearchDevicesResult(outcome.GetResult()));
  }
  else
  {
    return SearchDevicesOutcome(outcome.GetError());
  }
}

SearchDevicesOutcomeCallable AlexaForBusinessClient::SearchDevicesCallable(const SearchDevicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDevicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDevices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchDevicesAsync(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchDevicesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchDevicesAsyncHelper(const SearchDevicesRequest& request, const SearchDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchDevices(request), context);
}

SearchProfilesOutcome AlexaForBusinessClient::SearchProfiles(const SearchProfilesRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchProfilesOutcome(SearchProfilesResult(outcome.GetResult()));
  }
  else
  {
    return SearchProfilesOutcome(outcome.GetError());
  }
}

SearchProfilesOutcomeCallable AlexaForBusinessClient::SearchProfilesCallable(const SearchProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchProfilesAsync(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProfilesAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchProfilesAsyncHelper(const SearchProfilesRequest& request, const SearchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProfiles(request), context);
}

SearchRoomsOutcome AlexaForBusinessClient::SearchRooms(const SearchRoomsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchRoomsOutcome(SearchRoomsResult(outcome.GetResult()));
  }
  else
  {
    return SearchRoomsOutcome(outcome.GetError());
  }
}

SearchRoomsOutcomeCallable AlexaForBusinessClient::SearchRoomsCallable(const SearchRoomsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchRoomsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchRooms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchRoomsAsync(const SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchRoomsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchRoomsAsyncHelper(const SearchRoomsRequest& request, const SearchRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchRooms(request), context);
}

SearchSkillGroupsOutcome AlexaForBusinessClient::SearchSkillGroups(const SearchSkillGroupsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchSkillGroupsOutcome(SearchSkillGroupsResult(outcome.GetResult()));
  }
  else
  {
    return SearchSkillGroupsOutcome(outcome.GetError());
  }
}

SearchSkillGroupsOutcomeCallable AlexaForBusinessClient::SearchSkillGroupsCallable(const SearchSkillGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchSkillGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchSkillGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchSkillGroupsAsync(const SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchSkillGroupsAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchSkillGroupsAsyncHelper(const SearchSkillGroupsRequest& request, const SearchSkillGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchSkillGroups(request), context);
}

SearchUsersOutcome AlexaForBusinessClient::SearchUsers(const SearchUsersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchUsersOutcome(SearchUsersResult(outcome.GetResult()));
  }
  else
  {
    return SearchUsersOutcome(outcome.GetError());
  }
}

SearchUsersOutcomeCallable AlexaForBusinessClient::SearchUsersCallable(const SearchUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SearchUsersAsync(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchUsersAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SearchUsersAsyncHelper(const SearchUsersRequest& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchUsers(request), context);
}

SendInvitationOutcome AlexaForBusinessClient::SendInvitation(const SendInvitationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SendInvitationOutcome(SendInvitationResult(outcome.GetResult()));
  }
  else
  {
    return SendInvitationOutcome(outcome.GetError());
  }
}

SendInvitationOutcomeCallable AlexaForBusinessClient::SendInvitationCallable(const SendInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::SendInvitationAsync(const SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendInvitationAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::SendInvitationAsyncHelper(const SendInvitationRequest& request, const SendInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendInvitation(request), context);
}

StartDeviceSyncOutcome AlexaForBusinessClient::StartDeviceSync(const StartDeviceSyncRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDeviceSyncOutcome(StartDeviceSyncResult(outcome.GetResult()));
  }
  else
  {
    return StartDeviceSyncOutcome(outcome.GetError());
  }
}

StartDeviceSyncOutcomeCallable AlexaForBusinessClient::StartDeviceSyncCallable(const StartDeviceSyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeviceSyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeviceSync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::StartDeviceSyncAsync(const StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDeviceSyncAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::StartDeviceSyncAsyncHelper(const StartDeviceSyncRequest& request, const StartDeviceSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDeviceSync(request), context);
}

TagResourceOutcome AlexaForBusinessClient::TagResource(const TagResourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable AlexaForBusinessClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome AlexaForBusinessClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable AlexaForBusinessClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAddressBookOutcome AlexaForBusinessClient::UpdateAddressBook(const UpdateAddressBookRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAddressBookOutcome(UpdateAddressBookResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAddressBookOutcome(outcome.GetError());
  }
}

UpdateAddressBookOutcomeCallable AlexaForBusinessClient::UpdateAddressBookCallable(const UpdateAddressBookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAddressBookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAddressBook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateAddressBookAsync(const UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAddressBookAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateAddressBookAsyncHelper(const UpdateAddressBookRequest& request, const UpdateAddressBookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAddressBook(request), context);
}

UpdateContactOutcome AlexaForBusinessClient::UpdateContact(const UpdateContactRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateContactOutcome(UpdateContactResult(outcome.GetResult()));
  }
  else
  {
    return UpdateContactOutcome(outcome.GetError());
  }
}

UpdateContactOutcomeCallable AlexaForBusinessClient::UpdateContactCallable(const UpdateContactRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateContactAsync(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateContactAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateContactAsyncHelper(const UpdateContactRequest& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateContact(request), context);
}

UpdateDeviceOutcome AlexaForBusinessClient::UpdateDevice(const UpdateDeviceRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeviceOutcome(UpdateDeviceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeviceOutcome(outcome.GetError());
  }
}

UpdateDeviceOutcomeCallable AlexaForBusinessClient::UpdateDeviceCallable(const UpdateDeviceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeviceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDevice(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateDeviceAsync(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeviceAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateDeviceAsyncHelper(const UpdateDeviceRequest& request, const UpdateDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDevice(request), context);
}

UpdateProfileOutcome AlexaForBusinessClient::UpdateProfile(const UpdateProfileRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProfileOutcome(UpdateProfileResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProfileOutcome(outcome.GetError());
  }
}

UpdateProfileOutcomeCallable AlexaForBusinessClient::UpdateProfileCallable(const UpdateProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateProfileAsync(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProfileAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateProfileAsyncHelper(const UpdateProfileRequest& request, const UpdateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProfile(request), context);
}

UpdateRoomOutcome AlexaForBusinessClient::UpdateRoom(const UpdateRoomRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRoomOutcome(UpdateRoomResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRoomOutcome(outcome.GetError());
  }
}

UpdateRoomOutcomeCallable AlexaForBusinessClient::UpdateRoomCallable(const UpdateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateRoomAsync(const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoomAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateRoomAsyncHelper(const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoom(request), context);
}

UpdateSkillGroupOutcome AlexaForBusinessClient::UpdateSkillGroup(const UpdateSkillGroupRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateSkillGroupOutcome(UpdateSkillGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateSkillGroupOutcome(outcome.GetError());
  }
}

UpdateSkillGroupOutcomeCallable AlexaForBusinessClient::UpdateSkillGroupCallable(const UpdateSkillGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSkillGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSkillGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AlexaForBusinessClient::UpdateSkillGroupAsync(const UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSkillGroupAsyncHelper( request, handler, context ); } );
}

void AlexaForBusinessClient::UpdateSkillGroupAsyncHelper(const UpdateSkillGroupRequest& request, const UpdateSkillGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSkillGroup(request), context);
}

