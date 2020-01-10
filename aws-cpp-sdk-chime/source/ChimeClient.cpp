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

#include <aws/chime/ChimeClient.h>
#include <aws/chime/ChimeEndpoint.h>
#include <aws/chime/ChimeErrorMarshaller.h>
#include <aws/chime/model/AssociatePhoneNumberWithUserRequest.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorRequest.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorGroupRequest.h>
#include <aws/chime/model/AssociateSigninDelegateGroupsWithAccountRequest.h>
#include <aws/chime/model/BatchCreateAttendeeRequest.h>
#include <aws/chime/model/BatchCreateRoomMembershipRequest.h>
#include <aws/chime/model/BatchDeletePhoneNumberRequest.h>
#include <aws/chime/model/BatchSuspendUserRequest.h>
#include <aws/chime/model/BatchUnsuspendUserRequest.h>
#include <aws/chime/model/BatchUpdatePhoneNumberRequest.h>
#include <aws/chime/model/BatchUpdateUserRequest.h>
#include <aws/chime/model/CreateAccountRequest.h>
#include <aws/chime/model/CreateAttendeeRequest.h>
#include <aws/chime/model/CreateBotRequest.h>
#include <aws/chime/model/CreateMeetingRequest.h>
#include <aws/chime/model/CreatePhoneNumberOrderRequest.h>
#include <aws/chime/model/CreateRoomRequest.h>
#include <aws/chime/model/CreateRoomMembershipRequest.h>
#include <aws/chime/model/CreateUserRequest.h>
#include <aws/chime/model/CreateVoiceConnectorRequest.h>
#include <aws/chime/model/CreateVoiceConnectorGroupRequest.h>
#include <aws/chime/model/DeleteAccountRequest.h>
#include <aws/chime/model/DeleteAttendeeRequest.h>
#include <aws/chime/model/DeleteEventsConfigurationRequest.h>
#include <aws/chime/model/DeleteMeetingRequest.h>
#include <aws/chime/model/DeletePhoneNumberRequest.h>
#include <aws/chime/model/DeleteRoomRequest.h>
#include <aws/chime/model/DeleteRoomMembershipRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorGroupRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorOriginationRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorTerminationRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime/model/DisassociatePhoneNumberFromUserRequest.h>
#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorRequest.h>
#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorGroupRequest.h>
#include <aws/chime/model/DisassociateSigninDelegateGroupsFromAccountRequest.h>
#include <aws/chime/model/GetAccountRequest.h>
#include <aws/chime/model/GetAccountSettingsRequest.h>
#include <aws/chime/model/GetAttendeeRequest.h>
#include <aws/chime/model/GetBotRequest.h>
#include <aws/chime/model/GetEventsConfigurationRequest.h>
#include <aws/chime/model/GetMeetingRequest.h>
#include <aws/chime/model/GetPhoneNumberRequest.h>
#include <aws/chime/model/GetPhoneNumberOrderRequest.h>
#include <aws/chime/model/GetRoomRequest.h>
#include <aws/chime/model/GetUserRequest.h>
#include <aws/chime/model/GetUserSettingsRequest.h>
#include <aws/chime/model/GetVoiceConnectorRequest.h>
#include <aws/chime/model/GetVoiceConnectorGroupRequest.h>
#include <aws/chime/model/GetVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime/model/GetVoiceConnectorOriginationRequest.h>
#include <aws/chime/model/GetVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime/model/GetVoiceConnectorTerminationRequest.h>
#include <aws/chime/model/GetVoiceConnectorTerminationHealthRequest.h>
#include <aws/chime/model/InviteUsersRequest.h>
#include <aws/chime/model/ListAccountsRequest.h>
#include <aws/chime/model/ListAttendeesRequest.h>
#include <aws/chime/model/ListBotsRequest.h>
#include <aws/chime/model/ListMeetingsRequest.h>
#include <aws/chime/model/ListPhoneNumberOrdersRequest.h>
#include <aws/chime/model/ListPhoneNumbersRequest.h>
#include <aws/chime/model/ListRoomMembershipsRequest.h>
#include <aws/chime/model/ListRoomsRequest.h>
#include <aws/chime/model/ListUsersRequest.h>
#include <aws/chime/model/ListVoiceConnectorGroupsRequest.h>
#include <aws/chime/model/ListVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime/model/ListVoiceConnectorsRequest.h>
#include <aws/chime/model/LogoutUserRequest.h>
#include <aws/chime/model/PutEventsConfigurationRequest.h>
#include <aws/chime/model/PutVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime/model/PutVoiceConnectorOriginationRequest.h>
#include <aws/chime/model/PutVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime/model/PutVoiceConnectorTerminationRequest.h>
#include <aws/chime/model/PutVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime/model/RegenerateSecurityTokenRequest.h>
#include <aws/chime/model/ResetPersonalPINRequest.h>
#include <aws/chime/model/RestorePhoneNumberRequest.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/chime/model/UpdateAccountRequest.h>
#include <aws/chime/model/UpdateAccountSettingsRequest.h>
#include <aws/chime/model/UpdateBotRequest.h>
#include <aws/chime/model/UpdateGlobalSettingsRequest.h>
#include <aws/chime/model/UpdatePhoneNumberRequest.h>
#include <aws/chime/model/UpdatePhoneNumberSettingsRequest.h>
#include <aws/chime/model/UpdateRoomRequest.h>
#include <aws/chime/model/UpdateRoomMembershipRequest.h>
#include <aws/chime/model/UpdateUserRequest.h>
#include <aws/chime/model/UpdateUserSettingsRequest.h>
#include <aws/chime/model/UpdateVoiceConnectorRequest.h>
#include <aws/chime/model/UpdateVoiceConnectorGroupRequest.h>

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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ChimeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ChimeClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociatePhoneNumberWithUserOutcome ChimeClient::AssociatePhoneNumberWithUser(const AssociatePhoneNumberWithUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberWithUser", "Required field: AccountId, is not set");
    return AssociatePhoneNumberWithUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberWithUser", "Required field: UserId, is not set");
    return AssociatePhoneNumberWithUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-phone-number");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociatePhoneNumberWithUserOutcome(AssociatePhoneNumberWithUserResult(outcome.GetResult()));
  }
  else
  {
    return AssociatePhoneNumberWithUserOutcome(outcome.GetError());
  }
}

AssociatePhoneNumberWithUserOutcomeCallable ChimeClient::AssociatePhoneNumberWithUserCallable(const AssociatePhoneNumberWithUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePhoneNumberWithUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePhoneNumberWithUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::AssociatePhoneNumberWithUserAsync(const AssociatePhoneNumberWithUserRequest& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePhoneNumberWithUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::AssociatePhoneNumberWithUserAsyncHelper(const AssociatePhoneNumberWithUserRequest& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePhoneNumberWithUser(request), context);
}

AssociatePhoneNumbersWithVoiceConnectorOutcome ChimeClient::AssociatePhoneNumbersWithVoiceConnector(const AssociatePhoneNumbersWithVoiceConnectorRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-phone-numbers");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociatePhoneNumbersWithVoiceConnectorOutcome(AssociatePhoneNumbersWithVoiceConnectorResult(outcome.GetResult()));
  }
  else
  {
    return AssociatePhoneNumbersWithVoiceConnectorOutcome(outcome.GetError());
  }
}

AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable ChimeClient::AssociatePhoneNumbersWithVoiceConnectorCallable(const AssociatePhoneNumbersWithVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePhoneNumbersWithVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePhoneNumbersWithVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::AssociatePhoneNumbersWithVoiceConnectorAsync(const AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePhoneNumbersWithVoiceConnectorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::AssociatePhoneNumbersWithVoiceConnectorAsyncHelper(const AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePhoneNumbersWithVoiceConnector(request), context);
}

AssociatePhoneNumbersWithVoiceConnectorGroupOutcome ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroup(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const
{
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-phone-numbers");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(AssociatePhoneNumbersWithVoiceConnectorGroupResult(outcome.GetResult()));
  }
  else
  {
    return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(outcome.GetError());
  }
}

AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroupCallable(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociatePhoneNumbersWithVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociatePhoneNumbersWithVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroupAsync(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociatePhoneNumbersWithVoiceConnectorGroupAsyncHelper( request, handler, context ); } );
}

void ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroupAsyncHelper(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociatePhoneNumbersWithVoiceConnectorGroup(request), context);
}

AssociateSigninDelegateGroupsWithAccountOutcome ChimeClient::AssociateSigninDelegateGroupsWithAccount(const AssociateSigninDelegateGroupsWithAccountRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateSigninDelegateGroupsWithAccount", "Required field: AccountId, is not set");
    return AssociateSigninDelegateGroupsWithAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-signin-delegate-groups");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateSigninDelegateGroupsWithAccountOutcome(AssociateSigninDelegateGroupsWithAccountResult(outcome.GetResult()));
  }
  else
  {
    return AssociateSigninDelegateGroupsWithAccountOutcome(outcome.GetError());
  }
}

AssociateSigninDelegateGroupsWithAccountOutcomeCallable ChimeClient::AssociateSigninDelegateGroupsWithAccountCallable(const AssociateSigninDelegateGroupsWithAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSigninDelegateGroupsWithAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSigninDelegateGroupsWithAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::AssociateSigninDelegateGroupsWithAccountAsync(const AssociateSigninDelegateGroupsWithAccountRequest& request, const AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSigninDelegateGroupsWithAccountAsyncHelper( request, handler, context ); } );
}

void ChimeClient::AssociateSigninDelegateGroupsWithAccountAsyncHelper(const AssociateSigninDelegateGroupsWithAccountRequest& request, const AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSigninDelegateGroupsWithAccount(request), context);
}

BatchCreateAttendeeOutcome ChimeClient::BatchCreateAttendee(const BatchCreateAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateAttendee", "Required field: MeetingId, is not set");
    return BatchCreateAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-create");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchCreateAttendeeOutcome(BatchCreateAttendeeResult(outcome.GetResult()));
  }
  else
  {
    return BatchCreateAttendeeOutcome(outcome.GetError());
  }
}

BatchCreateAttendeeOutcomeCallable ChimeClient::BatchCreateAttendeeCallable(const BatchCreateAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchCreateAttendeeAsync(const BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreateAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeClient::BatchCreateAttendeeAsyncHelper(const BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreateAttendee(request), context);
}

BatchCreateRoomMembershipOutcome ChimeClient::BatchCreateRoomMembership(const BatchCreateRoomMembershipRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateRoomMembership", "Required field: AccountId, is not set");
    return BatchCreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateRoomMembership", "Required field: RoomId, is not set");
    return BatchCreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-create");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchCreateRoomMembershipOutcome(BatchCreateRoomMembershipResult(outcome.GetResult()));
  }
  else
  {
    return BatchCreateRoomMembershipOutcome(outcome.GetError());
  }
}

BatchCreateRoomMembershipOutcomeCallable ChimeClient::BatchCreateRoomMembershipCallable(const BatchCreateRoomMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateRoomMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateRoomMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchCreateRoomMembershipAsync(const BatchCreateRoomMembershipRequest& request, const BatchCreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreateRoomMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeClient::BatchCreateRoomMembershipAsyncHelper(const BatchCreateRoomMembershipRequest& request, const BatchCreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreateRoomMembership(request), context);
}

BatchDeletePhoneNumberOutcome ChimeClient::BatchDeletePhoneNumber(const BatchDeletePhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-delete");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDeletePhoneNumberOutcome(BatchDeletePhoneNumberResult(outcome.GetResult()));
  }
  else
  {
    return BatchDeletePhoneNumberOutcome(outcome.GetError());
  }
}

BatchDeletePhoneNumberOutcomeCallable ChimeClient::BatchDeletePhoneNumberCallable(const BatchDeletePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeletePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeletePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchDeletePhoneNumberAsync(const BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeletePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ChimeClient::BatchDeletePhoneNumberAsyncHelper(const BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeletePhoneNumber(request), context);
}

BatchSuspendUserOutcome ChimeClient::BatchSuspendUser(const BatchSuspendUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchSuspendUser", "Required field: AccountId, is not set");
    return BatchSuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=suspend");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUnsuspendUser", "Required field: AccountId, is not set");
    return BatchUnsuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=unsuspend");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

BatchUpdatePhoneNumberOutcome ChimeClient::BatchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-update");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchUpdatePhoneNumberOutcome(BatchUpdatePhoneNumberResult(outcome.GetResult()));
  }
  else
  {
    return BatchUpdatePhoneNumberOutcome(outcome.GetError());
  }
}

BatchUpdatePhoneNumberOutcomeCallable ChimeClient::BatchUpdatePhoneNumberCallable(const BatchUpdatePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdatePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdatePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchUpdatePhoneNumberAsync(const BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpdatePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ChimeClient::BatchUpdatePhoneNumberAsyncHelper(const BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpdatePhoneNumber(request), context);
}

BatchUpdateUserOutcome ChimeClient::BatchUpdateUser(const BatchUpdateUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateUser", "Required field: AccountId, is not set");
    return BatchUpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

CreateAttendeeOutcome ChimeClient::CreateAttendee(const CreateAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAttendee", "Required field: MeetingId, is not set");
    return CreateAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAttendeeOutcome(CreateAttendeeResult(outcome.GetResult()));
  }
  else
  {
    return CreateAttendeeOutcome(outcome.GetError());
  }
}

CreateAttendeeOutcomeCallable ChimeClient::CreateAttendeeCallable(const CreateAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateAttendeeAsync(const CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateAttendeeAsyncHelper(const CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAttendee(request), context);
}

CreateBotOutcome ChimeClient::CreateBot(const CreateBotRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBot", "Required field: AccountId, is not set");
    return CreateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBotOutcome(CreateBotResult(outcome.GetResult()));
  }
  else
  {
    return CreateBotOutcome(outcome.GetError());
  }
}

CreateBotOutcomeCallable ChimeClient::CreateBotCallable(const CreateBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateBotAsync(const CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBotAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateBotAsyncHelper(const CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBot(request), context);
}

CreateMeetingOutcome ChimeClient::CreateMeeting(const CreateMeetingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMeetingOutcome(CreateMeetingResult(outcome.GetResult()));
  }
  else
  {
    return CreateMeetingOutcome(outcome.GetError());
  }
}

CreateMeetingOutcomeCallable ChimeClient::CreateMeetingCallable(const CreateMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateMeetingAsync(const CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateMeetingAsyncHelper(const CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMeeting(request), context);
}

CreatePhoneNumberOrderOutcome ChimeClient::CreatePhoneNumberOrder(const CreatePhoneNumberOrderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-number-orders";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePhoneNumberOrderOutcome(CreatePhoneNumberOrderResult(outcome.GetResult()));
  }
  else
  {
    return CreatePhoneNumberOrderOutcome(outcome.GetError());
  }
}

CreatePhoneNumberOrderOutcomeCallable ChimeClient::CreatePhoneNumberOrderCallable(const CreatePhoneNumberOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePhoneNumberOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePhoneNumberOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreatePhoneNumberOrderAsync(const CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePhoneNumberOrderAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreatePhoneNumberOrderAsyncHelper(const CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePhoneNumberOrder(request), context);
}

CreateRoomOutcome ChimeClient::CreateRoom(const CreateRoomRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoom", "Required field: AccountId, is not set");
    return CreateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRoomOutcome(CreateRoomResult(outcome.GetResult()));
  }
  else
  {
    return CreateRoomOutcome(outcome.GetError());
  }
}

CreateRoomOutcomeCallable ChimeClient::CreateRoomCallable(const CreateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateRoomAsync(const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRoomAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateRoomAsyncHelper(const CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoom(request), context);
}

CreateRoomMembershipOutcome ChimeClient::CreateRoomMembership(const CreateRoomMembershipRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoomMembership", "Required field: AccountId, is not set");
    return CreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoomMembership", "Required field: RoomId, is not set");
    return CreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRoomMembershipOutcome(CreateRoomMembershipResult(outcome.GetResult()));
  }
  else
  {
    return CreateRoomMembershipOutcome(outcome.GetError());
  }
}

CreateRoomMembershipOutcomeCallable ChimeClient::CreateRoomMembershipCallable(const CreateRoomMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRoomMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoomMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateRoomMembershipAsync(const CreateRoomMembershipRequest& request, const CreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRoomMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateRoomMembershipAsyncHelper(const CreateRoomMembershipRequest& request, const CreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoomMembership(request), context);
}

CreateUserOutcome ChimeClient::CreateUser(const CreateUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: AccountId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=create");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUserOutcome(CreateUserResult(outcome.GetResult()));
  }
  else
  {
    return CreateUserOutcome(outcome.GetError());
  }
}

CreateUserOutcomeCallable ChimeClient::CreateUserCallable(const CreateUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateUserAsyncHelper(const CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUser(request), context);
}

CreateVoiceConnectorOutcome ChimeClient::CreateVoiceConnector(const CreateVoiceConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVoiceConnectorOutcome(CreateVoiceConnectorResult(outcome.GetResult()));
  }
  else
  {
    return CreateVoiceConnectorOutcome(outcome.GetError());
  }
}

CreateVoiceConnectorOutcomeCallable ChimeClient::CreateVoiceConnectorCallable(const CreateVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateVoiceConnectorAsync(const CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVoiceConnectorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateVoiceConnectorAsyncHelper(const CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVoiceConnector(request), context);
}

CreateVoiceConnectorGroupOutcome ChimeClient::CreateVoiceConnectorGroup(const CreateVoiceConnectorGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVoiceConnectorGroupOutcome(CreateVoiceConnectorGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateVoiceConnectorGroupOutcome(outcome.GetError());
  }
}

CreateVoiceConnectorGroupOutcomeCallable ChimeClient::CreateVoiceConnectorGroupCallable(const CreateVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateVoiceConnectorGroupAsync(const CreateVoiceConnectorGroupRequest& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVoiceConnectorGroupAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateVoiceConnectorGroupAsyncHelper(const CreateVoiceConnectorGroupRequest& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVoiceConnectorGroup(request), context);
}

DeleteAccountOutcome ChimeClient::DeleteAccount(const DeleteAccountRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccount", "Required field: AccountId, is not set");
    return DeleteAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
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

DeleteAttendeeOutcome ChimeClient::DeleteAttendee(const DeleteAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: MeetingId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttendee", "Required field: AttendeeId, is not set");
    return DeleteAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees/";
  ss << request.GetAttendeeId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAttendeeOutcome(NoResult());
  }
  else
  {
    return DeleteAttendeeOutcome(outcome.GetError());
  }
}

DeleteAttendeeOutcomeCallable ChimeClient::DeleteAttendeeCallable(const DeleteAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteAttendeeAsync(const DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteAttendeeAsyncHelper(const DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAttendee(request), context);
}

DeleteEventsConfigurationOutcome ChimeClient::DeleteEventsConfiguration(const DeleteEventsConfigurationRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventsConfiguration", "Required field: AccountId, is not set");
    return DeleteEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventsConfiguration", "Required field: BotId, is not set");
    return DeleteEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/events-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEventsConfigurationOutcome(NoResult());
  }
  else
  {
    return DeleteEventsConfigurationOutcome(outcome.GetError());
  }
}

DeleteEventsConfigurationOutcomeCallable ChimeClient::DeleteEventsConfigurationCallable(const DeleteEventsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteEventsConfigurationAsync(const DeleteEventsConfigurationRequest& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEventsConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteEventsConfigurationAsyncHelper(const DeleteEventsConfigurationRequest& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEventsConfiguration(request), context);
}

DeleteMeetingOutcome ChimeClient::DeleteMeeting(const DeleteMeetingRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMeeting", "Required field: MeetingId, is not set");
    return DeleteMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMeetingOutcome(NoResult());
  }
  else
  {
    return DeleteMeetingOutcome(outcome.GetError());
  }
}

DeleteMeetingOutcomeCallable ChimeClient::DeleteMeetingCallable(const DeleteMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteMeetingAsync(const DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteMeetingAsyncHelper(const DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMeeting(request), context);
}

DeletePhoneNumberOutcome ChimeClient::DeletePhoneNumber(const DeletePhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DeletePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePhoneNumberOutcome(NoResult());
  }
  else
  {
    return DeletePhoneNumberOutcome(outcome.GetError());
  }
}

DeletePhoneNumberOutcomeCallable ChimeClient::DeletePhoneNumberCallable(const DeletePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeletePhoneNumberAsync(const DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeletePhoneNumberAsyncHelper(const DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePhoneNumber(request), context);
}

DeleteRoomOutcome ChimeClient::DeleteRoom(const DeleteRoomRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoom", "Required field: AccountId, is not set");
    return DeleteRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoom", "Required field: RoomId, is not set");
    return DeleteRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRoomOutcome(NoResult());
  }
  else
  {
    return DeleteRoomOutcome(outcome.GetError());
  }
}

DeleteRoomOutcomeCallable ChimeClient::DeleteRoomCallable(const DeleteRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteRoomAsync(const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoomAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteRoomAsyncHelper(const DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoom(request), context);
}

DeleteRoomMembershipOutcome ChimeClient::DeleteRoomMembership(const DeleteRoomMembershipRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoomMembership", "Required field: AccountId, is not set");
    return DeleteRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoomMembership", "Required field: RoomId, is not set");
    return DeleteRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoomMembership", "Required field: MemberId, is not set");
    return DeleteRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships/";
  ss << request.GetMemberId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRoomMembershipOutcome(NoResult());
  }
  else
  {
    return DeleteRoomMembershipOutcome(outcome.GetError());
  }
}

DeleteRoomMembershipOutcomeCallable ChimeClient::DeleteRoomMembershipCallable(const DeleteRoomMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRoomMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoomMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteRoomMembershipAsync(const DeleteRoomMembershipRequest& request, const DeleteRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRoomMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteRoomMembershipAsyncHelper(const DeleteRoomMembershipRequest& request, const DeleteRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoomMembership(request), context);
}

DeleteVoiceConnectorOutcome ChimeClient::DeleteVoiceConnector(const DeleteVoiceConnectorRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVoiceConnectorOutcome(NoResult());
  }
  else
  {
    return DeleteVoiceConnectorOutcome(outcome.GetError());
  }
}

DeleteVoiceConnectorOutcomeCallable ChimeClient::DeleteVoiceConnectorCallable(const DeleteVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorAsync(const DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorAsyncHelper(const DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnector(request), context);
}

DeleteVoiceConnectorGroupOutcome ChimeClient::DeleteVoiceConnectorGroup(const DeleteVoiceConnectorGroupRequest& request) const
{
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DeleteVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVoiceConnectorGroupOutcome(NoResult());
  }
  else
  {
    return DeleteVoiceConnectorGroupOutcome(outcome.GetError());
  }
}

DeleteVoiceConnectorGroupOutcomeCallable ChimeClient::DeleteVoiceConnectorGroupCallable(const DeleteVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorGroupAsync(const DeleteVoiceConnectorGroupRequest& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorGroupAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorGroupAsyncHelper(const DeleteVoiceConnectorGroupRequest& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnectorGroup(request), context);
}

DeleteVoiceConnectorOriginationOutcome ChimeClient::DeleteVoiceConnectorOrigination(const DeleteVoiceConnectorOriginationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/origination";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVoiceConnectorOriginationOutcome(NoResult());
  }
  else
  {
    return DeleteVoiceConnectorOriginationOutcome(outcome.GetError());
  }
}

DeleteVoiceConnectorOriginationOutcomeCallable ChimeClient::DeleteVoiceConnectorOriginationCallable(const DeleteVoiceConnectorOriginationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorOriginationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorOrigination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorOriginationAsync(const DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorOriginationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorOriginationAsyncHelper(const DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnectorOrigination(request), context);
}

DeleteVoiceConnectorStreamingConfigurationOutcome ChimeClient::DeleteVoiceConnectorStreamingConfiguration(const DeleteVoiceConnectorStreamingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/streaming-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVoiceConnectorStreamingConfigurationOutcome(NoResult());
  }
  else
  {
    return DeleteVoiceConnectorStreamingConfigurationOutcome(outcome.GetError());
  }
}

DeleteVoiceConnectorStreamingConfigurationOutcomeCallable ChimeClient::DeleteVoiceConnectorStreamingConfigurationCallable(const DeleteVoiceConnectorStreamingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorStreamingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorStreamingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorStreamingConfigurationAsync(const DeleteVoiceConnectorStreamingConfigurationRequest& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorStreamingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorStreamingConfigurationAsyncHelper(const DeleteVoiceConnectorStreamingConfigurationRequest& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnectorStreamingConfiguration(request), context);
}

DeleteVoiceConnectorTerminationOutcome ChimeClient::DeleteVoiceConnectorTermination(const DeleteVoiceConnectorTerminationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVoiceConnectorTerminationOutcome(NoResult());
  }
  else
  {
    return DeleteVoiceConnectorTerminationOutcome(outcome.GetError());
  }
}

DeleteVoiceConnectorTerminationOutcomeCallable ChimeClient::DeleteVoiceConnectorTerminationCallable(const DeleteVoiceConnectorTerminationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorTerminationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorTermination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorTerminationAsync(const DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorTerminationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorTerminationAsyncHelper(const DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnectorTermination(request), context);
}

DeleteVoiceConnectorTerminationCredentialsOutcome ChimeClient::DeleteVoiceConnectorTerminationCredentials(const DeleteVoiceConnectorTerminationCredentialsRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=delete");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVoiceConnectorTerminationCredentialsOutcome(NoResult());
  }
  else
  {
    return DeleteVoiceConnectorTerminationCredentialsOutcome(outcome.GetError());
  }
}

DeleteVoiceConnectorTerminationCredentialsOutcomeCallable ChimeClient::DeleteVoiceConnectorTerminationCredentialsCallable(const DeleteVoiceConnectorTerminationCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorTerminationCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorTerminationCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorTerminationCredentialsAsync(const DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorTerminationCredentialsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorTerminationCredentialsAsyncHelper(const DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnectorTerminationCredentials(request), context);
}

DisassociatePhoneNumberFromUserOutcome ChimeClient::DisassociatePhoneNumberFromUser(const DisassociatePhoneNumberFromUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberFromUser", "Required field: AccountId, is not set");
    return DisassociatePhoneNumberFromUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberFromUser", "Required field: UserId, is not set");
    return DisassociatePhoneNumberFromUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-phone-number");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociatePhoneNumberFromUserOutcome(DisassociatePhoneNumberFromUserResult(outcome.GetResult()));
  }
  else
  {
    return DisassociatePhoneNumberFromUserOutcome(outcome.GetError());
  }
}

DisassociatePhoneNumberFromUserOutcomeCallable ChimeClient::DisassociatePhoneNumberFromUserCallable(const DisassociatePhoneNumberFromUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePhoneNumberFromUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePhoneNumberFromUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DisassociatePhoneNumberFromUserAsync(const DisassociatePhoneNumberFromUserRequest& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociatePhoneNumberFromUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DisassociatePhoneNumberFromUserAsyncHelper(const DisassociatePhoneNumberFromUserRequest& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociatePhoneNumberFromUser(request), context);
}

DisassociatePhoneNumbersFromVoiceConnectorOutcome ChimeClient::DisassociatePhoneNumbersFromVoiceConnector(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-phone-numbers");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociatePhoneNumbersFromVoiceConnectorOutcome(DisassociatePhoneNumbersFromVoiceConnectorResult(outcome.GetResult()));
  }
  else
  {
    return DisassociatePhoneNumbersFromVoiceConnectorOutcome(outcome.GetError());
  }
}

DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorCallable(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePhoneNumbersFromVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePhoneNumbersFromVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorAsync(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociatePhoneNumbersFromVoiceConnectorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorAsyncHelper(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociatePhoneNumbersFromVoiceConnector(request), context);
}

DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroup(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const
{
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-phone-numbers");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(DisassociatePhoneNumbersFromVoiceConnectorGroupResult(outcome.GetResult()));
  }
  else
  {
    return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(outcome.GetError());
  }
}

DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociatePhoneNumbersFromVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociatePhoneNumbersFromVoiceConnectorGroupAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroupAsyncHelper(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociatePhoneNumbersFromVoiceConnectorGroup(request), context);
}

DisassociateSigninDelegateGroupsFromAccountOutcome ChimeClient::DisassociateSigninDelegateGroupsFromAccount(const DisassociateSigninDelegateGroupsFromAccountRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateSigninDelegateGroupsFromAccount", "Required field: AccountId, is not set");
    return DisassociateSigninDelegateGroupsFromAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-signin-delegate-groups");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateSigninDelegateGroupsFromAccountOutcome(DisassociateSigninDelegateGroupsFromAccountResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateSigninDelegateGroupsFromAccountOutcome(outcome.GetError());
  }
}

DisassociateSigninDelegateGroupsFromAccountOutcomeCallable ChimeClient::DisassociateSigninDelegateGroupsFromAccountCallable(const DisassociateSigninDelegateGroupsFromAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSigninDelegateGroupsFromAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSigninDelegateGroupsFromAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DisassociateSigninDelegateGroupsFromAccountAsync(const DisassociateSigninDelegateGroupsFromAccountRequest& request, const DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSigninDelegateGroupsFromAccountAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DisassociateSigninDelegateGroupsFromAccountAsyncHelper(const DisassociateSigninDelegateGroupsFromAccountRequest& request, const DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSigninDelegateGroupsFromAccount(request), context);
}

GetAccountOutcome ChimeClient::GetAccount(const GetAccountRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccount", "Required field: AccountId, is not set");
    return GetAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccountSettings", "Required field: AccountId, is not set");
    return GetAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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

GetAttendeeOutcome ChimeClient::GetAttendee(const GetAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: MeetingId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttendee", "Required field: AttendeeId, is not set");
    return GetAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees/";
  ss << request.GetAttendeeId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAttendeeOutcome(GetAttendeeResult(outcome.GetResult()));
  }
  else
  {
    return GetAttendeeOutcome(outcome.GetError());
  }
}

GetAttendeeOutcomeCallable ChimeClient::GetAttendeeCallable(const GetAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetAttendeeAsync(const GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetAttendeeAsyncHelper(const GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAttendee(request), context);
}

GetBotOutcome ChimeClient::GetBot(const GetBotRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: AccountId, is not set");
    return GetBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: BotId, is not set");
    return GetBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBotOutcome(GetBotResult(outcome.GetResult()));
  }
  else
  {
    return GetBotOutcome(outcome.GetError());
  }
}

GetBotOutcomeCallable ChimeClient::GetBotCallable(const GetBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetBotAsync(const GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBotAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetBotAsyncHelper(const GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBot(request), context);
}

GetEventsConfigurationOutcome ChimeClient::GetEventsConfiguration(const GetEventsConfigurationRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventsConfiguration", "Required field: AccountId, is not set");
    return GetEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventsConfiguration", "Required field: BotId, is not set");
    return GetEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/events-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEventsConfigurationOutcome(GetEventsConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetEventsConfigurationOutcome(outcome.GetError());
  }
}

GetEventsConfigurationOutcomeCallable ChimeClient::GetEventsConfigurationCallable(const GetEventsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetEventsConfigurationAsync(const GetEventsConfigurationRequest& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEventsConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetEventsConfigurationAsyncHelper(const GetEventsConfigurationRequest& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEventsConfiguration(request), context);
}

GetGlobalSettingsOutcome ChimeClient::GetGlobalSettings() const
{
  Aws::StringStream ss;
  ss << m_uri << "/settings";
  JsonOutcome outcome = MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetGlobalSettings");
  if(outcome.IsSuccess())
  {
    return GetGlobalSettingsOutcome(GetGlobalSettingsResult(outcome.GetResult()));
  }
  else
  {
    return GetGlobalSettingsOutcome(outcome.GetError());
  }
}

GetGlobalSettingsOutcomeCallable ChimeClient::GetGlobalSettingsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetGlobalSettings(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->GetGlobalSettingsAsyncHelper( handler, context ); } );
}

void ChimeClient::GetGlobalSettingsAsyncHelper(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, GetGlobalSettings(), context);
}

GetMeetingOutcome ChimeClient::GetMeeting(const GetMeetingRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMeeting", "Required field: MeetingId, is not set");
    return GetMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMeetingOutcome(GetMeetingResult(outcome.GetResult()));
  }
  else
  {
    return GetMeetingOutcome(outcome.GetError());
  }
}

GetMeetingOutcomeCallable ChimeClient::GetMeetingCallable(const GetMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetMeetingAsync(const GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetMeetingAsyncHelper(const GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMeeting(request), context);
}

GetPhoneNumberOutcome ChimeClient::GetPhoneNumber(const GetPhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPhoneNumber", "Required field: PhoneNumberId, is not set");
    return GetPhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPhoneNumberOutcome(GetPhoneNumberResult(outcome.GetResult()));
  }
  else
  {
    return GetPhoneNumberOutcome(outcome.GetError());
  }
}

GetPhoneNumberOutcomeCallable ChimeClient::GetPhoneNumberCallable(const GetPhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetPhoneNumberAsync(const GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPhoneNumberAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetPhoneNumberAsyncHelper(const GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPhoneNumber(request), context);
}

GetPhoneNumberOrderOutcome ChimeClient::GetPhoneNumberOrder(const GetPhoneNumberOrderRequest& request) const
{
  if (!request.PhoneNumberOrderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPhoneNumberOrder", "Required field: PhoneNumberOrderId, is not set");
    return GetPhoneNumberOrderOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberOrderId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-number-orders/";
  ss << request.GetPhoneNumberOrderId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetPhoneNumberOrderOutcome(GetPhoneNumberOrderResult(outcome.GetResult()));
  }
  else
  {
    return GetPhoneNumberOrderOutcome(outcome.GetError());
  }
}

GetPhoneNumberOrderOutcomeCallable ChimeClient::GetPhoneNumberOrderCallable(const GetPhoneNumberOrderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPhoneNumberOrderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPhoneNumberOrder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetPhoneNumberOrderAsync(const GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPhoneNumberOrderAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetPhoneNumberOrderAsyncHelper(const GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPhoneNumberOrder(request), context);
}

GetPhoneNumberSettingsOutcome ChimeClient::GetPhoneNumberSettings() const
{
  Aws::StringStream ss;
  ss << m_uri << "/settings/phone-number";
  JsonOutcome outcome = MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetPhoneNumberSettings");
  if(outcome.IsSuccess())
  {
    return GetPhoneNumberSettingsOutcome(GetPhoneNumberSettingsResult(outcome.GetResult()));
  }
  else
  {
    return GetPhoneNumberSettingsOutcome(outcome.GetError());
  }
}

GetPhoneNumberSettingsOutcomeCallable ChimeClient::GetPhoneNumberSettingsCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPhoneNumberSettingsOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetPhoneNumberSettings(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->GetPhoneNumberSettingsAsyncHelper( handler, context ); } );
}

void ChimeClient::GetPhoneNumberSettingsAsyncHelper(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, GetPhoneNumberSettings(), context);
}

GetRoomOutcome ChimeClient::GetRoom(const GetRoomRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoom", "Required field: AccountId, is not set");
    return GetRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoom", "Required field: RoomId, is not set");
    return GetRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRoomOutcome(GetRoomResult(outcome.GetResult()));
  }
  else
  {
    return GetRoomOutcome(outcome.GetError());
  }
}

GetRoomOutcomeCallable ChimeClient::GetRoomCallable(const GetRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetRoomAsync(const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoomAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetRoomAsyncHelper(const GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoom(request), context);
}

GetUserOutcome ChimeClient::GetUser(const GetUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: AccountId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: UserId, is not set");
    return GetUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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

GetUserSettingsOutcome ChimeClient::GetUserSettings(const GetUserSettingsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: AccountId, is not set");
    return GetUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: UserId, is not set");
    return GetUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUserSettingsOutcome(GetUserSettingsResult(outcome.GetResult()));
  }
  else
  {
    return GetUserSettingsOutcome(outcome.GetError());
  }
}

GetUserSettingsOutcomeCallable ChimeClient::GetUserSettingsCallable(const GetUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetUserSettingsAsync(const GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUserSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetUserSettingsAsyncHelper(const GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUserSettings(request), context);
}

GetVoiceConnectorOutcome ChimeClient::GetVoiceConnector(const GetVoiceConnectorRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceConnectorOutcome(GetVoiceConnectorResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceConnectorOutcome(outcome.GetError());
  }
}

GetVoiceConnectorOutcomeCallable ChimeClient::GetVoiceConnectorCallable(const GetVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorAsync(const GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorAsyncHelper(const GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnector(request), context);
}

GetVoiceConnectorGroupOutcome ChimeClient::GetVoiceConnectorGroup(const GetVoiceConnectorGroupRequest& request) const
{
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return GetVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceConnectorGroupOutcome(GetVoiceConnectorGroupResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceConnectorGroupOutcome(outcome.GetError());
  }
}

GetVoiceConnectorGroupOutcomeCallable ChimeClient::GetVoiceConnectorGroupCallable(const GetVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorGroupAsync(const GetVoiceConnectorGroupRequest& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorGroupAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorGroupAsyncHelper(const GetVoiceConnectorGroupRequest& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorGroup(request), context);
}

GetVoiceConnectorLoggingConfigurationOutcome ChimeClient::GetVoiceConnectorLoggingConfiguration(const GetVoiceConnectorLoggingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/logging-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceConnectorLoggingConfigurationOutcome(GetVoiceConnectorLoggingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceConnectorLoggingConfigurationOutcome(outcome.GetError());
  }
}

GetVoiceConnectorLoggingConfigurationOutcomeCallable ChimeClient::GetVoiceConnectorLoggingConfigurationCallable(const GetVoiceConnectorLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorLoggingConfigurationAsync(const GetVoiceConnectorLoggingConfigurationRequest& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorLoggingConfigurationAsyncHelper(const GetVoiceConnectorLoggingConfigurationRequest& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorLoggingConfiguration(request), context);
}

GetVoiceConnectorOriginationOutcome ChimeClient::GetVoiceConnectorOrigination(const GetVoiceConnectorOriginationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/origination";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceConnectorOriginationOutcome(GetVoiceConnectorOriginationResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceConnectorOriginationOutcome(outcome.GetError());
  }
}

GetVoiceConnectorOriginationOutcomeCallable ChimeClient::GetVoiceConnectorOriginationCallable(const GetVoiceConnectorOriginationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorOriginationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorOrigination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorOriginationAsync(const GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorOriginationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorOriginationAsyncHelper(const GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorOrigination(request), context);
}

GetVoiceConnectorStreamingConfigurationOutcome ChimeClient::GetVoiceConnectorStreamingConfiguration(const GetVoiceConnectorStreamingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/streaming-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceConnectorStreamingConfigurationOutcome(GetVoiceConnectorStreamingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceConnectorStreamingConfigurationOutcome(outcome.GetError());
  }
}

GetVoiceConnectorStreamingConfigurationOutcomeCallable ChimeClient::GetVoiceConnectorStreamingConfigurationCallable(const GetVoiceConnectorStreamingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorStreamingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorStreamingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorStreamingConfigurationAsync(const GetVoiceConnectorStreamingConfigurationRequest& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorStreamingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorStreamingConfigurationAsyncHelper(const GetVoiceConnectorStreamingConfigurationRequest& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorStreamingConfiguration(request), context);
}

GetVoiceConnectorTerminationOutcome ChimeClient::GetVoiceConnectorTermination(const GetVoiceConnectorTerminationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceConnectorTerminationOutcome(GetVoiceConnectorTerminationResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceConnectorTerminationOutcome(outcome.GetError());
  }
}

GetVoiceConnectorTerminationOutcomeCallable ChimeClient::GetVoiceConnectorTerminationCallable(const GetVoiceConnectorTerminationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorTerminationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorTermination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorTerminationAsync(const GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorTerminationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorTerminationAsyncHelper(const GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorTermination(request), context);
}

GetVoiceConnectorTerminationHealthOutcome ChimeClient::GetVoiceConnectorTerminationHealth(const GetVoiceConnectorTerminationHealthRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTerminationHealth", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationHealthOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/health";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVoiceConnectorTerminationHealthOutcome(GetVoiceConnectorTerminationHealthResult(outcome.GetResult()));
  }
  else
  {
    return GetVoiceConnectorTerminationHealthOutcome(outcome.GetError());
  }
}

GetVoiceConnectorTerminationHealthOutcomeCallable ChimeClient::GetVoiceConnectorTerminationHealthCallable(const GetVoiceConnectorTerminationHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorTerminationHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorTerminationHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorTerminationHealthAsync(const GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorTerminationHealthAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorTerminationHealthAsyncHelper(const GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorTerminationHealth(request), context);
}

InviteUsersOutcome ChimeClient::InviteUsers(const InviteUsersRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InviteUsers", "Required field: AccountId, is not set");
    return InviteUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=add");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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

ListAttendeesOutcome ChimeClient::ListAttendees(const ListAttendeesRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttendees", "Required field: MeetingId, is not set");
    return ListAttendeesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAttendeesOutcome(ListAttendeesResult(outcome.GetResult()));
  }
  else
  {
    return ListAttendeesOutcome(outcome.GetError());
  }
}

ListAttendeesOutcomeCallable ChimeClient::ListAttendeesCallable(const ListAttendeesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttendeesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttendees(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListAttendeesAsync(const ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttendeesAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListAttendeesAsyncHelper(const ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttendees(request), context);
}

ListBotsOutcome ChimeClient::ListBots(const ListBotsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: AccountId, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBotsOutcome(ListBotsResult(outcome.GetResult()));
  }
  else
  {
    return ListBotsOutcome(outcome.GetError());
  }
}

ListBotsOutcomeCallable ChimeClient::ListBotsCallable(const ListBotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListBotsAsync(const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBotsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListBotsAsyncHelper(const ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBots(request), context);
}

ListMeetingsOutcome ChimeClient::ListMeetings(const ListMeetingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meetings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMeetingsOutcome(ListMeetingsResult(outcome.GetResult()));
  }
  else
  {
    return ListMeetingsOutcome(outcome.GetError());
  }
}

ListMeetingsOutcomeCallable ChimeClient::ListMeetingsCallable(const ListMeetingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMeetingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMeetings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListMeetingsAsync(const ListMeetingsRequest& request, const ListMeetingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMeetingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListMeetingsAsyncHelper(const ListMeetingsRequest& request, const ListMeetingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMeetings(request), context);
}

ListPhoneNumberOrdersOutcome ChimeClient::ListPhoneNumberOrders(const ListPhoneNumberOrdersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-number-orders";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPhoneNumberOrdersOutcome(ListPhoneNumberOrdersResult(outcome.GetResult()));
  }
  else
  {
    return ListPhoneNumberOrdersOutcome(outcome.GetError());
  }
}

ListPhoneNumberOrdersOutcomeCallable ChimeClient::ListPhoneNumberOrdersCallable(const ListPhoneNumberOrdersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumberOrdersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumberOrders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListPhoneNumberOrdersAsync(const ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPhoneNumberOrdersAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListPhoneNumberOrdersAsyncHelper(const ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPhoneNumberOrders(request), context);
}

ListPhoneNumbersOutcome ChimeClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPhoneNumbersOutcome(ListPhoneNumbersResult(outcome.GetResult()));
  }
  else
  {
    return ListPhoneNumbersOutcome(outcome.GetError());
  }
}

ListPhoneNumbersOutcomeCallable ChimeClient::ListPhoneNumbersCallable(const ListPhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListPhoneNumbersAsync(const ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPhoneNumbersAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListPhoneNumbersAsyncHelper(const ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPhoneNumbers(request), context);
}

ListRoomMembershipsOutcome ChimeClient::ListRoomMemberships(const ListRoomMembershipsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoomMemberships", "Required field: AccountId, is not set");
    return ListRoomMembershipsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoomMemberships", "Required field: RoomId, is not set");
    return ListRoomMembershipsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRoomMembershipsOutcome(ListRoomMembershipsResult(outcome.GetResult()));
  }
  else
  {
    return ListRoomMembershipsOutcome(outcome.GetError());
  }
}

ListRoomMembershipsOutcomeCallable ChimeClient::ListRoomMembershipsCallable(const ListRoomMembershipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoomMembershipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoomMemberships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListRoomMembershipsAsync(const ListRoomMembershipsRequest& request, const ListRoomMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoomMembershipsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListRoomMembershipsAsyncHelper(const ListRoomMembershipsRequest& request, const ListRoomMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoomMemberships(request), context);
}

ListRoomsOutcome ChimeClient::ListRooms(const ListRoomsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRooms", "Required field: AccountId, is not set");
    return ListRoomsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRoomsOutcome(ListRoomsResult(outcome.GetResult()));
  }
  else
  {
    return ListRoomsOutcome(outcome.GetError());
  }
}

ListRoomsOutcomeCallable ChimeClient::ListRoomsCallable(const ListRoomsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoomsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRooms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListRoomsAsync(const ListRoomsRequest& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoomsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListRoomsAsyncHelper(const ListRoomsRequest& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRooms(request), context);
}

ListUsersOutcome ChimeClient::ListUsers(const ListUsersRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
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

ListVoiceConnectorGroupsOutcome ChimeClient::ListVoiceConnectorGroups(const ListVoiceConnectorGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVoiceConnectorGroupsOutcome(ListVoiceConnectorGroupsResult(outcome.GetResult()));
  }
  else
  {
    return ListVoiceConnectorGroupsOutcome(outcome.GetError());
  }
}

ListVoiceConnectorGroupsOutcomeCallable ChimeClient::ListVoiceConnectorGroupsCallable(const ListVoiceConnectorGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVoiceConnectorGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVoiceConnectorGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListVoiceConnectorGroupsAsync(const ListVoiceConnectorGroupsRequest& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVoiceConnectorGroupsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListVoiceConnectorGroupsAsyncHelper(const ListVoiceConnectorGroupsRequest& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVoiceConnectorGroups(request), context);
}

ListVoiceConnectorTerminationCredentialsOutcome ChimeClient::ListVoiceConnectorTerminationCredentials(const ListVoiceConnectorTerminationCredentialsRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return ListVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVoiceConnectorTerminationCredentialsOutcome(ListVoiceConnectorTerminationCredentialsResult(outcome.GetResult()));
  }
  else
  {
    return ListVoiceConnectorTerminationCredentialsOutcome(outcome.GetError());
  }
}

ListVoiceConnectorTerminationCredentialsOutcomeCallable ChimeClient::ListVoiceConnectorTerminationCredentialsCallable(const ListVoiceConnectorTerminationCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVoiceConnectorTerminationCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVoiceConnectorTerminationCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListVoiceConnectorTerminationCredentialsAsync(const ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVoiceConnectorTerminationCredentialsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListVoiceConnectorTerminationCredentialsAsyncHelper(const ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVoiceConnectorTerminationCredentials(request), context);
}

ListVoiceConnectorsOutcome ChimeClient::ListVoiceConnectors(const ListVoiceConnectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVoiceConnectorsOutcome(ListVoiceConnectorsResult(outcome.GetResult()));
  }
  else
  {
    return ListVoiceConnectorsOutcome(outcome.GetError());
  }
}

ListVoiceConnectorsOutcomeCallable ChimeClient::ListVoiceConnectorsCallable(const ListVoiceConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVoiceConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVoiceConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListVoiceConnectorsAsync(const ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVoiceConnectorsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListVoiceConnectorsAsyncHelper(const ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVoiceConnectors(request), context);
}

LogoutUserOutcome ChimeClient::LogoutUser(const LogoutUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("LogoutUser", "Required field: AccountId, is not set");
    return LogoutUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("LogoutUser", "Required field: UserId, is not set");
    return LogoutUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=logout");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

PutEventsConfigurationOutcome ChimeClient::PutEventsConfiguration(const PutEventsConfigurationRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEventsConfiguration", "Required field: AccountId, is not set");
    return PutEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEventsConfiguration", "Required field: BotId, is not set");
    return PutEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/events-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutEventsConfigurationOutcome(PutEventsConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutEventsConfigurationOutcome(outcome.GetError());
  }
}

PutEventsConfigurationOutcomeCallable ChimeClient::PutEventsConfigurationCallable(const PutEventsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutEventsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutEventsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutEventsConfigurationAsync(const PutEventsConfigurationRequest& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutEventsConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutEventsConfigurationAsyncHelper(const PutEventsConfigurationRequest& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutEventsConfiguration(request), context);
}

PutVoiceConnectorLoggingConfigurationOutcome ChimeClient::PutVoiceConnectorLoggingConfiguration(const PutVoiceConnectorLoggingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/logging-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutVoiceConnectorLoggingConfigurationOutcome(PutVoiceConnectorLoggingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutVoiceConnectorLoggingConfigurationOutcome(outcome.GetError());
  }
}

PutVoiceConnectorLoggingConfigurationOutcomeCallable ChimeClient::PutVoiceConnectorLoggingConfigurationCallable(const PutVoiceConnectorLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutVoiceConnectorLoggingConfigurationAsync(const PutVoiceConnectorLoggingConfigurationRequest& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutVoiceConnectorLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutVoiceConnectorLoggingConfigurationAsyncHelper(const PutVoiceConnectorLoggingConfigurationRequest& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutVoiceConnectorLoggingConfiguration(request), context);
}

PutVoiceConnectorOriginationOutcome ChimeClient::PutVoiceConnectorOrigination(const PutVoiceConnectorOriginationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/origination";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutVoiceConnectorOriginationOutcome(PutVoiceConnectorOriginationResult(outcome.GetResult()));
  }
  else
  {
    return PutVoiceConnectorOriginationOutcome(outcome.GetError());
  }
}

PutVoiceConnectorOriginationOutcomeCallable ChimeClient::PutVoiceConnectorOriginationCallable(const PutVoiceConnectorOriginationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorOriginationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorOrigination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutVoiceConnectorOriginationAsync(const PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutVoiceConnectorOriginationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutVoiceConnectorOriginationAsyncHelper(const PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutVoiceConnectorOrigination(request), context);
}

PutVoiceConnectorStreamingConfigurationOutcome ChimeClient::PutVoiceConnectorStreamingConfiguration(const PutVoiceConnectorStreamingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/streaming-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutVoiceConnectorStreamingConfigurationOutcome(PutVoiceConnectorStreamingConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return PutVoiceConnectorStreamingConfigurationOutcome(outcome.GetError());
  }
}

PutVoiceConnectorStreamingConfigurationOutcomeCallable ChimeClient::PutVoiceConnectorStreamingConfigurationCallable(const PutVoiceConnectorStreamingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorStreamingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorStreamingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutVoiceConnectorStreamingConfigurationAsync(const PutVoiceConnectorStreamingConfigurationRequest& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutVoiceConnectorStreamingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutVoiceConnectorStreamingConfigurationAsyncHelper(const PutVoiceConnectorStreamingConfigurationRequest& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutVoiceConnectorStreamingConfiguration(request), context);
}

PutVoiceConnectorTerminationOutcome ChimeClient::PutVoiceConnectorTermination(const PutVoiceConnectorTerminationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutVoiceConnectorTerminationOutcome(PutVoiceConnectorTerminationResult(outcome.GetResult()));
  }
  else
  {
    return PutVoiceConnectorTerminationOutcome(outcome.GetError());
  }
}

PutVoiceConnectorTerminationOutcomeCallable ChimeClient::PutVoiceConnectorTerminationCallable(const PutVoiceConnectorTerminationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorTerminationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorTermination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutVoiceConnectorTerminationAsync(const PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutVoiceConnectorTerminationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutVoiceConnectorTerminationAsyncHelper(const PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutVoiceConnectorTermination(request), context);
}

PutVoiceConnectorTerminationCredentialsOutcome ChimeClient::PutVoiceConnectorTerminationCredentials(const PutVoiceConnectorTerminationCredentialsRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=put");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutVoiceConnectorTerminationCredentialsOutcome(NoResult());
  }
  else
  {
    return PutVoiceConnectorTerminationCredentialsOutcome(outcome.GetError());
  }
}

PutVoiceConnectorTerminationCredentialsOutcomeCallable ChimeClient::PutVoiceConnectorTerminationCredentialsCallable(const PutVoiceConnectorTerminationCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorTerminationCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorTerminationCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutVoiceConnectorTerminationCredentialsAsync(const PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutVoiceConnectorTerminationCredentialsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutVoiceConnectorTerminationCredentialsAsyncHelper(const PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutVoiceConnectorTerminationCredentials(request), context);
}

RegenerateSecurityTokenOutcome ChimeClient::RegenerateSecurityToken(const RegenerateSecurityTokenRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegenerateSecurityToken", "Required field: AccountId, is not set");
    return RegenerateSecurityTokenOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegenerateSecurityToken", "Required field: BotId, is not set");
    return RegenerateSecurityTokenOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=regenerate-security-token");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegenerateSecurityTokenOutcome(RegenerateSecurityTokenResult(outcome.GetResult()));
  }
  else
  {
    return RegenerateSecurityTokenOutcome(outcome.GetError());
  }
}

RegenerateSecurityTokenOutcomeCallable ChimeClient::RegenerateSecurityTokenCallable(const RegenerateSecurityTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegenerateSecurityTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegenerateSecurityToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::RegenerateSecurityTokenAsync(const RegenerateSecurityTokenRequest& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegenerateSecurityTokenAsyncHelper( request, handler, context ); } );
}

void ChimeClient::RegenerateSecurityTokenAsyncHelper(const RegenerateSecurityTokenRequest& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegenerateSecurityToken(request), context);
}

ResetPersonalPINOutcome ChimeClient::ResetPersonalPIN(const ResetPersonalPINRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetPersonalPIN", "Required field: AccountId, is not set");
    return ResetPersonalPINOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetPersonalPIN", "Required field: UserId, is not set");
    return ResetPersonalPINOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=reset-personal-pin");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

RestorePhoneNumberOutcome ChimeClient::RestorePhoneNumber(const RestorePhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestorePhoneNumber", "Required field: PhoneNumberId, is not set");
    return RestorePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=restore");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RestorePhoneNumberOutcome(RestorePhoneNumberResult(outcome.GetResult()));
  }
  else
  {
    return RestorePhoneNumberOutcome(outcome.GetError());
  }
}

RestorePhoneNumberOutcomeCallable ChimeClient::RestorePhoneNumberCallable(const RestorePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestorePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestorePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::RestorePhoneNumberAsync(const RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RestorePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ChimeClient::RestorePhoneNumberAsyncHelper(const RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RestorePhoneNumber(request), context);
}

SearchAvailablePhoneNumbersOutcome ChimeClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/search";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?type=phone-numbers");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SearchAvailablePhoneNumbersOutcome(SearchAvailablePhoneNumbersResult(outcome.GetResult()));
  }
  else
  {
    return SearchAvailablePhoneNumbersOutcome(outcome.GetError());
  }
}

SearchAvailablePhoneNumbersOutcomeCallable ChimeClient::SearchAvailablePhoneNumbersCallable(const SearchAvailablePhoneNumbersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchAvailablePhoneNumbersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchAvailablePhoneNumbers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::SearchAvailablePhoneNumbersAsync(const SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchAvailablePhoneNumbersAsyncHelper( request, handler, context ); } );
}

void ChimeClient::SearchAvailablePhoneNumbersAsyncHelper(const SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchAvailablePhoneNumbers(request), context);
}

UpdateAccountOutcome ChimeClient::UpdateAccount(const UpdateAccountRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccount", "Required field: AccountId, is not set");
    return UpdateAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
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

UpdateBotOutcome ChimeClient::UpdateBot(const UpdateBotRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: AccountId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.BotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: BotId, is not set");
    return UpdateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBotOutcome(UpdateBotResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBotOutcome(outcome.GetError());
  }
}

UpdateBotOutcomeCallable ChimeClient::UpdateBotCallable(const UpdateBotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateBotAsync(const UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBotAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateBotAsyncHelper(const UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBot(request), context);
}

UpdateGlobalSettingsOutcome ChimeClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGlobalSettingsOutcome(NoResult());
  }
  else
  {
    return UpdateGlobalSettingsOutcome(outcome.GetError());
  }
}

UpdateGlobalSettingsOutcomeCallable ChimeClient::UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGlobalSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateGlobalSettingsAsyncHelper(const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGlobalSettings(request), context);
}

UpdatePhoneNumberOutcome ChimeClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePhoneNumber", "Required field: PhoneNumberId, is not set");
    return UpdatePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePhoneNumberOutcome(UpdatePhoneNumberResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePhoneNumberOutcome(outcome.GetError());
  }
}

UpdatePhoneNumberOutcomeCallable ChimeClient::UpdatePhoneNumberCallable(const UpdatePhoneNumberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePhoneNumberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePhoneNumber(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdatePhoneNumberAsync(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePhoneNumberAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdatePhoneNumberAsyncHelper(const UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePhoneNumber(request), context);
}

UpdatePhoneNumberSettingsOutcome ChimeClient::UpdatePhoneNumberSettings(const UpdatePhoneNumberSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/settings/phone-number";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePhoneNumberSettingsOutcome(NoResult());
  }
  else
  {
    return UpdatePhoneNumberSettingsOutcome(outcome.GetError());
  }
}

UpdatePhoneNumberSettingsOutcomeCallable ChimeClient::UpdatePhoneNumberSettingsCallable(const UpdatePhoneNumberSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePhoneNumberSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePhoneNumberSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdatePhoneNumberSettingsAsync(const UpdatePhoneNumberSettingsRequest& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePhoneNumberSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdatePhoneNumberSettingsAsyncHelper(const UpdatePhoneNumberSettingsRequest& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePhoneNumberSettings(request), context);
}

UpdateRoomOutcome ChimeClient::UpdateRoom(const UpdateRoomRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoom", "Required field: AccountId, is not set");
    return UpdateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoom", "Required field: RoomId, is not set");
    return UpdateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRoomOutcome(UpdateRoomResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRoomOutcome(outcome.GetError());
  }
}

UpdateRoomOutcomeCallable ChimeClient::UpdateRoomCallable(const UpdateRoomRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoomOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoom(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateRoomAsync(const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoomAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateRoomAsyncHelper(const UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoom(request), context);
}

UpdateRoomMembershipOutcome ChimeClient::UpdateRoomMembership(const UpdateRoomMembershipRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoomMembership", "Required field: AccountId, is not set");
    return UpdateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoomMembership", "Required field: RoomId, is not set");
    return UpdateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoomMembership", "Required field: MemberId, is not set");
    return UpdateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships/";
  ss << request.GetMemberId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRoomMembershipOutcome(UpdateRoomMembershipResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRoomMembershipOutcome(outcome.GetError());
  }
}

UpdateRoomMembershipOutcomeCallable ChimeClient::UpdateRoomMembershipCallable(const UpdateRoomMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRoomMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoomMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateRoomMembershipAsync(const UpdateRoomMembershipRequest& request, const UpdateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRoomMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateRoomMembershipAsyncHelper(const UpdateRoomMembershipRequest& request, const UpdateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoomMembership(request), context);
}

UpdateUserOutcome ChimeClient::UpdateUser(const UpdateUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: AccountId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

UpdateUserSettingsOutcome ChimeClient::UpdateUserSettings(const UpdateUserSettingsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: AccountId, is not set");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: UserId, is not set");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUserSettingsOutcome(NoResult());
  }
  else
  {
    return UpdateUserSettingsOutcome(outcome.GetError());
  }
}

UpdateUserSettingsOutcomeCallable ChimeClient::UpdateUserSettingsCallable(const UpdateUserSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUserSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUserSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateUserSettingsAsync(const UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUserSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateUserSettingsAsyncHelper(const UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUserSettings(request), context);
}

UpdateVoiceConnectorOutcome ChimeClient::UpdateVoiceConnector(const UpdateVoiceConnectorRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return UpdateVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVoiceConnectorOutcome(UpdateVoiceConnectorResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVoiceConnectorOutcome(outcome.GetError());
  }
}

UpdateVoiceConnectorOutcomeCallable ChimeClient::UpdateVoiceConnectorCallable(const UpdateVoiceConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateVoiceConnectorAsync(const UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVoiceConnectorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateVoiceConnectorAsyncHelper(const UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVoiceConnector(request), context);
}

UpdateVoiceConnectorGroupOutcome ChimeClient::UpdateVoiceConnectorGroup(const UpdateVoiceConnectorGroupRequest& request) const
{
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return UpdateVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVoiceConnectorGroupOutcome(UpdateVoiceConnectorGroupResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVoiceConnectorGroupOutcome(outcome.GetError());
  }
}

UpdateVoiceConnectorGroupOutcomeCallable ChimeClient::UpdateVoiceConnectorGroupCallable(const UpdateVoiceConnectorGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVoiceConnectorGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVoiceConnectorGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateVoiceConnectorGroupAsync(const UpdateVoiceConnectorGroupRequest& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVoiceConnectorGroupAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateVoiceConnectorGroupAsyncHelper(const UpdateVoiceConnectorGroupRequest& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVoiceConnectorGroup(request), context);
}

