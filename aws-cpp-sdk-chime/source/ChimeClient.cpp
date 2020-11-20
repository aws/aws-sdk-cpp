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
#include <aws/chime/model/CreateAppInstanceRequest.h>
#include <aws/chime/model/CreateAppInstanceAdminRequest.h>
#include <aws/chime/model/CreateAppInstanceUserRequest.h>
#include <aws/chime/model/CreateAttendeeRequest.h>
#include <aws/chime/model/CreateBotRequest.h>
#include <aws/chime/model/CreateChannelRequest.h>
#include <aws/chime/model/CreateChannelBanRequest.h>
#include <aws/chime/model/CreateChannelMembershipRequest.h>
#include <aws/chime/model/CreateChannelModeratorRequest.h>
#include <aws/chime/model/CreateMeetingRequest.h>
#include <aws/chime/model/CreateMeetingDialOutRequest.h>
#include <aws/chime/model/CreateMeetingWithAttendeesRequest.h>
#include <aws/chime/model/CreatePhoneNumberOrderRequest.h>
#include <aws/chime/model/CreateProxySessionRequest.h>
#include <aws/chime/model/CreateRoomRequest.h>
#include <aws/chime/model/CreateRoomMembershipRequest.h>
#include <aws/chime/model/CreateSipMediaApplicationRequest.h>
#include <aws/chime/model/CreateSipMediaApplicationCallRequest.h>
#include <aws/chime/model/CreateSipRuleRequest.h>
#include <aws/chime/model/CreateUserRequest.h>
#include <aws/chime/model/CreateVoiceConnectorRequest.h>
#include <aws/chime/model/CreateVoiceConnectorGroupRequest.h>
#include <aws/chime/model/DeleteAccountRequest.h>
#include <aws/chime/model/DeleteAppInstanceRequest.h>
#include <aws/chime/model/DeleteAppInstanceAdminRequest.h>
#include <aws/chime/model/DeleteAppInstanceStreamingConfigurationsRequest.h>
#include <aws/chime/model/DeleteAppInstanceUserRequest.h>
#include <aws/chime/model/DeleteAttendeeRequest.h>
#include <aws/chime/model/DeleteChannelRequest.h>
#include <aws/chime/model/DeleteChannelBanRequest.h>
#include <aws/chime/model/DeleteChannelMembershipRequest.h>
#include <aws/chime/model/DeleteChannelMessageRequest.h>
#include <aws/chime/model/DeleteChannelModeratorRequest.h>
#include <aws/chime/model/DeleteEventsConfigurationRequest.h>
#include <aws/chime/model/DeleteMeetingRequest.h>
#include <aws/chime/model/DeletePhoneNumberRequest.h>
#include <aws/chime/model/DeleteProxySessionRequest.h>
#include <aws/chime/model/DeleteRoomRequest.h>
#include <aws/chime/model/DeleteRoomMembershipRequest.h>
#include <aws/chime/model/DeleteSipMediaApplicationRequest.h>
#include <aws/chime/model/DeleteSipRuleRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorGroupRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorOriginationRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorProxyRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorTerminationRequest.h>
#include <aws/chime/model/DeleteVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime/model/DescribeAppInstanceRequest.h>
#include <aws/chime/model/DescribeAppInstanceAdminRequest.h>
#include <aws/chime/model/DescribeAppInstanceUserRequest.h>
#include <aws/chime/model/DescribeChannelRequest.h>
#include <aws/chime/model/DescribeChannelBanRequest.h>
#include <aws/chime/model/DescribeChannelMembershipRequest.h>
#include <aws/chime/model/DescribeChannelMembershipForAppInstanceUserRequest.h>
#include <aws/chime/model/DescribeChannelModeratedByAppInstanceUserRequest.h>
#include <aws/chime/model/DescribeChannelModeratorRequest.h>
#include <aws/chime/model/DisassociatePhoneNumberFromUserRequest.h>
#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorRequest.h>
#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorGroupRequest.h>
#include <aws/chime/model/DisassociateSigninDelegateGroupsFromAccountRequest.h>
#include <aws/chime/model/GetAccountRequest.h>
#include <aws/chime/model/GetAccountSettingsRequest.h>
#include <aws/chime/model/GetAppInstanceRetentionSettingsRequest.h>
#include <aws/chime/model/GetAppInstanceStreamingConfigurationsRequest.h>
#include <aws/chime/model/GetAttendeeRequest.h>
#include <aws/chime/model/GetBotRequest.h>
#include <aws/chime/model/GetChannelMessageRequest.h>
#include <aws/chime/model/GetEventsConfigurationRequest.h>
#include <aws/chime/model/GetMeetingRequest.h>
#include <aws/chime/model/GetMessagingSessionEndpointRequest.h>
#include <aws/chime/model/GetPhoneNumberRequest.h>
#include <aws/chime/model/GetPhoneNumberOrderRequest.h>
#include <aws/chime/model/GetProxySessionRequest.h>
#include <aws/chime/model/GetRetentionSettingsRequest.h>
#include <aws/chime/model/GetRoomRequest.h>
#include <aws/chime/model/GetSipMediaApplicationRequest.h>
#include <aws/chime/model/GetSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/chime/model/GetSipRuleRequest.h>
#include <aws/chime/model/GetUserRequest.h>
#include <aws/chime/model/GetUserSettingsRequest.h>
#include <aws/chime/model/GetVoiceConnectorRequest.h>
#include <aws/chime/model/GetVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime/model/GetVoiceConnectorGroupRequest.h>
#include <aws/chime/model/GetVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime/model/GetVoiceConnectorOriginationRequest.h>
#include <aws/chime/model/GetVoiceConnectorProxyRequest.h>
#include <aws/chime/model/GetVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime/model/GetVoiceConnectorTerminationRequest.h>
#include <aws/chime/model/GetVoiceConnectorTerminationHealthRequest.h>
#include <aws/chime/model/InviteUsersRequest.h>
#include <aws/chime/model/ListAccountsRequest.h>
#include <aws/chime/model/ListAppInstanceAdminsRequest.h>
#include <aws/chime/model/ListAppInstanceUsersRequest.h>
#include <aws/chime/model/ListAppInstancesRequest.h>
#include <aws/chime/model/ListAttendeeTagsRequest.h>
#include <aws/chime/model/ListAttendeesRequest.h>
#include <aws/chime/model/ListBotsRequest.h>
#include <aws/chime/model/ListChannelBansRequest.h>
#include <aws/chime/model/ListChannelMembershipsRequest.h>
#include <aws/chime/model/ListChannelMembershipsForAppInstanceUserRequest.h>
#include <aws/chime/model/ListChannelMessagesRequest.h>
#include <aws/chime/model/ListChannelModeratorsRequest.h>
#include <aws/chime/model/ListChannelsRequest.h>
#include <aws/chime/model/ListChannelsModeratedByAppInstanceUserRequest.h>
#include <aws/chime/model/ListMeetingTagsRequest.h>
#include <aws/chime/model/ListMeetingsRequest.h>
#include <aws/chime/model/ListPhoneNumberOrdersRequest.h>
#include <aws/chime/model/ListPhoneNumbersRequest.h>
#include <aws/chime/model/ListProxySessionsRequest.h>
#include <aws/chime/model/ListRoomMembershipsRequest.h>
#include <aws/chime/model/ListRoomsRequest.h>
#include <aws/chime/model/ListSipMediaApplicationsRequest.h>
#include <aws/chime/model/ListSipRulesRequest.h>
#include <aws/chime/model/ListTagsForResourceRequest.h>
#include <aws/chime/model/ListUsersRequest.h>
#include <aws/chime/model/ListVoiceConnectorGroupsRequest.h>
#include <aws/chime/model/ListVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime/model/ListVoiceConnectorsRequest.h>
#include <aws/chime/model/LogoutUserRequest.h>
#include <aws/chime/model/PutAppInstanceRetentionSettingsRequest.h>
#include <aws/chime/model/PutAppInstanceStreamingConfigurationsRequest.h>
#include <aws/chime/model/PutEventsConfigurationRequest.h>
#include <aws/chime/model/PutRetentionSettingsRequest.h>
#include <aws/chime/model/PutSipMediaApplicationLoggingConfigurationRequest.h>
#include <aws/chime/model/PutVoiceConnectorEmergencyCallingConfigurationRequest.h>
#include <aws/chime/model/PutVoiceConnectorLoggingConfigurationRequest.h>
#include <aws/chime/model/PutVoiceConnectorOriginationRequest.h>
#include <aws/chime/model/PutVoiceConnectorProxyRequest.h>
#include <aws/chime/model/PutVoiceConnectorStreamingConfigurationRequest.h>
#include <aws/chime/model/PutVoiceConnectorTerminationRequest.h>
#include <aws/chime/model/PutVoiceConnectorTerminationCredentialsRequest.h>
#include <aws/chime/model/RedactChannelMessageRequest.h>
#include <aws/chime/model/RedactConversationMessageRequest.h>
#include <aws/chime/model/RedactRoomMessageRequest.h>
#include <aws/chime/model/RegenerateSecurityTokenRequest.h>
#include <aws/chime/model/ResetPersonalPINRequest.h>
#include <aws/chime/model/RestorePhoneNumberRequest.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersRequest.h>
#include <aws/chime/model/SendChannelMessageRequest.h>
#include <aws/chime/model/TagAttendeeRequest.h>
#include <aws/chime/model/TagMeetingRequest.h>
#include <aws/chime/model/TagResourceRequest.h>
#include <aws/chime/model/UntagAttendeeRequest.h>
#include <aws/chime/model/UntagMeetingRequest.h>
#include <aws/chime/model/UntagResourceRequest.h>
#include <aws/chime/model/UpdateAccountRequest.h>
#include <aws/chime/model/UpdateAccountSettingsRequest.h>
#include <aws/chime/model/UpdateAppInstanceRequest.h>
#include <aws/chime/model/UpdateAppInstanceUserRequest.h>
#include <aws/chime/model/UpdateBotRequest.h>
#include <aws/chime/model/UpdateChannelRequest.h>
#include <aws/chime/model/UpdateChannelMessageRequest.h>
#include <aws/chime/model/UpdateChannelReadMarkerRequest.h>
#include <aws/chime/model/UpdateGlobalSettingsRequest.h>
#include <aws/chime/model/UpdatePhoneNumberRequest.h>
#include <aws/chime/model/UpdatePhoneNumberSettingsRequest.h>
#include <aws/chime/model/UpdateProxySessionRequest.h>
#include <aws/chime/model/UpdateRoomRequest.h>
#include <aws/chime/model/UpdateRoomMembershipRequest.h>
#include <aws/chime/model/UpdateSipMediaApplicationRequest.h>
#include <aws/chime/model/UpdateSipRuleRequest.h>
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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeClient::ChimeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeClient::ChimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("Chime");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = ChimeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void ChimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-phone-number");
  uri.SetQueryString(ss.str());
  return AssociatePhoneNumberWithUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-phone-numbers");
  uri.SetQueryString(ss.str());
  return AssociatePhoneNumbersWithVoiceConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-phone-numbers");
  uri.SetQueryString(ss.str());
  return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=associate-signin-delegate-groups");
  uri.SetQueryString(ss.str());
  return AssociateSigninDelegateGroupsWithAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-create");
  uri.SetQueryString(ss.str());
  return BatchCreateAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-create");
  uri.SetQueryString(ss.str());
  return BatchCreateRoomMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-numbers";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-delete");
  uri.SetQueryString(ss.str());
  return BatchDeletePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=suspend");
  uri.SetQueryString(ss.str());
  return BatchSuspendUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=unsuspend");
  uri.SetQueryString(ss.str());
  return BatchUnsuspendUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-numbers";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=batch-update");
  uri.SetQueryString(ss.str());
  return BatchUpdatePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchUpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateAppInstanceOutcome ChimeClient::CreateAppInstance(const CreateAppInstanceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAppInstance", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppInstanceOutcomeCallable ChimeClient::CreateAppInstanceCallable(const CreateAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateAppInstanceAsync(const CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppInstanceAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateAppInstanceAsyncHelper(const CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAppInstance(request), context);
}

CreateAppInstanceAdminOutcome ChimeClient::CreateAppInstanceAdmin(const CreateAppInstanceAdminRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAppInstanceAdmin", "Required field: AppInstanceArn, is not set");
    return CreateAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAppInstanceAdmin", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/admins";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAppInstanceAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppInstanceAdminOutcomeCallable ChimeClient::CreateAppInstanceAdminCallable(const CreateAppInstanceAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppInstanceAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppInstanceAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateAppInstanceAdminAsync(const CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppInstanceAdminAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateAppInstanceAdminAsyncHelper(const CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAppInstanceAdmin(request), context);
}

CreateAppInstanceUserOutcome ChimeClient::CreateAppInstanceUser(const CreateAppInstanceUserRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return CreateAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instance-users";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppInstanceUserOutcomeCallable ChimeClient::CreateAppInstanceUserCallable(const CreateAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateAppInstanceUserAsync(const CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateAppInstanceUserAsyncHelper(const CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAppInstanceUser(request), context);
}

CreateAttendeeOutcome ChimeClient::CreateAttendee(const CreateAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAttendee", "Required field: MeetingId, is not set");
    return CreateAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateChannelOutcome ChimeClient::CreateChannel(const CreateChannelRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateChannel", "Invalid DNS host: " << uri.GetAuthority());
      return CreateChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable ChimeClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateChannelAsyncHelper(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannel(request), context);
}

CreateChannelBanOutcome ChimeClient::CreateChannelBan(const CreateChannelBanRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelBan", "Required field: ChannelArn, is not set");
    return CreateChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateChannelBan", "Invalid DNS host: " << uri.GetAuthority());
      return CreateChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/bans";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateChannelBanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelBanOutcomeCallable ChimeClient::CreateChannelBanCallable(const CreateChannelBanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelBanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannelBan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateChannelBanAsync(const CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelBanAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateChannelBanAsyncHelper(const CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannelBan(request), context);
}

CreateChannelMembershipOutcome ChimeClient::CreateChannelMembership(const CreateChannelMembershipRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelMembership", "Required field: ChannelArn, is not set");
    return CreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateChannelMembership", "Invalid DNS host: " << uri.GetAuthority());
      return CreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateChannelMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelMembershipOutcomeCallable ChimeClient::CreateChannelMembershipCallable(const CreateChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateChannelMembershipAsync(const CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateChannelMembershipAsyncHelper(const CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannelMembership(request), context);
}

CreateChannelModeratorOutcome ChimeClient::CreateChannelModerator(const CreateChannelModeratorRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelModerator", "Required field: ChannelArn, is not set");
    return CreateChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("CreateChannelModerator", "Invalid DNS host: " << uri.GetAuthority());
      return CreateChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/moderators";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateChannelModeratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelModeratorOutcomeCallable ChimeClient::CreateChannelModeratorCallable(const CreateChannelModeratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChannelModeratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChannelModerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateChannelModeratorAsync(const CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChannelModeratorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateChannelModeratorAsyncHelper(const CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChannelModerator(request), context);
}

CreateMeetingOutcome ChimeClient::CreateMeeting(const CreateMeetingRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateMeetingDialOutOutcome ChimeClient::CreateMeetingDialOut(const CreateMeetingDialOutRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMeetingDialOut", "Required field: MeetingId, is not set");
    return CreateMeetingDialOutOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/dial-outs";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateMeetingDialOutOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMeetingDialOutOutcomeCallable ChimeClient::CreateMeetingDialOutCallable(const CreateMeetingDialOutRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeetingDialOutOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMeetingDialOut(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateMeetingDialOutAsync(const CreateMeetingDialOutRequest& request, const CreateMeetingDialOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMeetingDialOutAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateMeetingDialOutAsyncHelper(const CreateMeetingDialOutRequest& request, const CreateMeetingDialOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMeetingDialOut(request), context);
}

CreateMeetingWithAttendeesOutcome ChimeClient::CreateMeetingWithAttendees(const CreateMeetingWithAttendeesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=create-attendees");
  uri.SetQueryString(ss.str());
  return CreateMeetingWithAttendeesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMeetingWithAttendeesOutcomeCallable ChimeClient::CreateMeetingWithAttendeesCallable(const CreateMeetingWithAttendeesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeetingWithAttendeesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMeetingWithAttendees(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateMeetingWithAttendeesAsync(const CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMeetingWithAttendeesAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateMeetingWithAttendeesAsyncHelper(const CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMeetingWithAttendees(request), context);
}

CreatePhoneNumberOrderOutcome ChimeClient::CreatePhoneNumberOrder(const CreatePhoneNumberOrderRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-number-orders";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePhoneNumberOrderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateProxySessionOutcome ChimeClient::CreateProxySession(const CreateProxySessionRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProxySession", "Required field: VoiceConnectorId, is not set");
    return CreateProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/proxy-sessions";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProxySessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProxySessionOutcomeCallable ChimeClient::CreateProxySessionCallable(const CreateProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateProxySessionAsync(const CreateProxySessionRequest& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProxySessionAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateProxySessionAsyncHelper(const CreateProxySessionRequest& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProxySession(request), context);
}

CreateRoomOutcome ChimeClient::CreateRoom(const CreateRoomRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoom", "Required field: AccountId, is not set");
    return CreateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRoomMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateSipMediaApplicationOutcome ChimeClient::CreateSipMediaApplication(const CreateSipMediaApplicationRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateSipMediaApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipMediaApplicationOutcomeCallable ChimeClient::CreateSipMediaApplicationCallable(const CreateSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateSipMediaApplicationAsync(const CreateSipMediaApplicationRequest& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSipMediaApplicationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateSipMediaApplicationAsyncHelper(const CreateSipMediaApplicationRequest& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSipMediaApplication(request), context);
}

CreateSipMediaApplicationCallOutcome ChimeClient::CreateSipMediaApplicationCall(const CreateSipMediaApplicationCallRequest& request) const
{
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSipMediaApplicationCall", "Required field: SipMediaApplicationId, is not set");
    return CreateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications/";
  ss << request.GetSipMediaApplicationId();
  ss << "/calls";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateSipMediaApplicationCallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipMediaApplicationCallOutcomeCallable ChimeClient::CreateSipMediaApplicationCallCallable(const CreateSipMediaApplicationCallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSipMediaApplicationCallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSipMediaApplicationCall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateSipMediaApplicationCallAsync(const CreateSipMediaApplicationCallRequest& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSipMediaApplicationCallAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateSipMediaApplicationCallAsyncHelper(const CreateSipMediaApplicationCallRequest& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSipMediaApplicationCall(request), context);
}

CreateSipRuleOutcome ChimeClient::CreateSipRule(const CreateSipRuleRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-rules";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateSipRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSipRuleOutcomeCallable ChimeClient::CreateSipRuleCallable(const CreateSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateSipRuleAsync(const CreateSipRuleRequest& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSipRuleAsyncHelper( request, handler, context ); } );
}

void ChimeClient::CreateSipRuleAsyncHelper(const CreateSipRuleRequest& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSipRule(request), context);
}

CreateUserOutcome ChimeClient::CreateUser(const CreateUserRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: AccountId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=create");
  uri.SetQueryString(ss.str());
  return CreateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVoiceConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVoiceConnectorGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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

DeleteAppInstanceOutcome ChimeClient::DeleteAppInstance(const DeleteAppInstanceRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstance", "Required field: AppInstanceArn, is not set");
    return DeleteAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAppInstance", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppInstanceOutcomeCallable ChimeClient::DeleteAppInstanceCallable(const DeleteAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteAppInstanceAsync(const DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppInstanceAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteAppInstanceAsyncHelper(const DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAppInstance(request), context);
}

DeleteAppInstanceAdminOutcome ChimeClient::DeleteAppInstanceAdmin(const DeleteAppInstanceAdminRequest& request) const
{
  if (!request.AppInstanceAdminArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceAdmin", "Required field: AppInstanceAdminArn, is not set");
    return DeleteAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceAdminArn]", false));
  }
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceAdmin", "Required field: AppInstanceArn, is not set");
    return DeleteAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAppInstanceAdmin", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/admins/";
  ss << request.GetAppInstanceAdminArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAppInstanceAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppInstanceAdminOutcomeCallable ChimeClient::DeleteAppInstanceAdminCallable(const DeleteAppInstanceAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppInstanceAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppInstanceAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteAppInstanceAdminAsync(const DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppInstanceAdminAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteAppInstanceAdminAsyncHelper(const DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAppInstanceAdmin(request), context);
}

DeleteAppInstanceStreamingConfigurationsOutcome ChimeClient::DeleteAppInstanceStreamingConfigurations(const DeleteAppInstanceStreamingConfigurationsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return DeleteAppInstanceStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/streaming-configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAppInstanceStreamingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppInstanceStreamingConfigurationsOutcomeCallable ChimeClient::DeleteAppInstanceStreamingConfigurationsCallable(const DeleteAppInstanceStreamingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppInstanceStreamingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppInstanceStreamingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteAppInstanceStreamingConfigurationsAsync(const DeleteAppInstanceStreamingConfigurationsRequest& request, const DeleteAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppInstanceStreamingConfigurationsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteAppInstanceStreamingConfigurationsAsyncHelper(const DeleteAppInstanceStreamingConfigurationsRequest& request, const DeleteAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAppInstanceStreamingConfigurations(request), context);
}

DeleteAppInstanceUserOutcome ChimeClient::DeleteAppInstanceUser(const DeleteAppInstanceUserRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DeleteAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instance-users/";
  ss << request.GetAppInstanceUserArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppInstanceUserOutcomeCallable ChimeClient::DeleteAppInstanceUserCallable(const DeleteAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteAppInstanceUserAsync(const DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteAppInstanceUserAsyncHelper(const DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAppInstanceUser(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees/";
  ss << request.GetAttendeeId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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

DeleteChannelOutcome ChimeClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelArn, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteChannel", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable ChimeClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteChannelAsyncHelper(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannel(request), context);
}

DeleteChannelBanOutcome ChimeClient::DeleteChannelBan(const DeleteChannelBanRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: ChannelArn, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Required field: MemberArn, is not set");
    return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteChannelBan", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/bans/";
  ss << request.GetMemberArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteChannelBanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelBanOutcomeCallable ChimeClient::DeleteChannelBanCallable(const DeleteChannelBanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelBanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelBan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteChannelBanAsync(const DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelBanAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteChannelBanAsyncHelper(const DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelBan(request), context);
}

DeleteChannelMembershipOutcome ChimeClient::DeleteChannelMembership(const DeleteChannelMembershipRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: ChannelArn, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Required field: MemberArn, is not set");
    return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteChannelMembership", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/memberships/";
  ss << request.GetMemberArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteChannelMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelMembershipOutcomeCallable ChimeClient::DeleteChannelMembershipCallable(const DeleteChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteChannelMembershipAsync(const DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteChannelMembershipAsyncHelper(const DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelMembership(request), context);
}

DeleteChannelMessageOutcome ChimeClient::DeleteChannelMessage(const DeleteChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: ChannelArn, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Required field: MessageId, is not set");
    return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteChannelMessage", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/messages/";
  ss << request.GetMessageId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelMessageOutcomeCallable ChimeClient::DeleteChannelMessageCallable(const DeleteChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteChannelMessageAsync(const DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteChannelMessageAsyncHelper(const DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelMessage(request), context);
}

DeleteChannelModeratorOutcome ChimeClient::DeleteChannelModerator(const DeleteChannelModeratorRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChannelArn, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelModeratorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Required field: ChannelModeratorArn, is not set");
    return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelModeratorArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DeleteChannelModerator", "Invalid DNS host: " << uri.GetAuthority());
      return DeleteChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/moderators/";
  ss << request.GetChannelModeratorArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteChannelModeratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelModeratorOutcomeCallable ChimeClient::DeleteChannelModeratorCallable(const DeleteChannelModeratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteChannelModeratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteChannelModerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteChannelModeratorAsync(const DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteChannelModeratorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteChannelModeratorAsyncHelper(const DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteChannelModerator(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/events-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteEventsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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

DeleteProxySessionOutcome ChimeClient::DeleteProxySession(const DeleteProxySessionRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProxySession", "Required field: VoiceConnectorId, is not set");
    return DeleteProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProxySession", "Required field: ProxySessionId, is not set");
    return DeleteProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProxySessionId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/proxy-sessions/";
  ss << request.GetProxySessionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProxySessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProxySessionOutcomeCallable ChimeClient::DeleteProxySessionCallable(const DeleteProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteProxySessionAsync(const DeleteProxySessionRequest& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProxySessionAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteProxySessionAsyncHelper(const DeleteProxySessionRequest& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProxySession(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships/";
  ss << request.GetMemberId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRoomMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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

DeleteSipMediaApplicationOutcome ChimeClient::DeleteSipMediaApplication(const DeleteSipMediaApplicationRequest& request) const
{
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return DeleteSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications/";
  ss << request.GetSipMediaApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSipMediaApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSipMediaApplicationOutcomeCallable ChimeClient::DeleteSipMediaApplicationCallable(const DeleteSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteSipMediaApplicationAsync(const DeleteSipMediaApplicationRequest& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSipMediaApplicationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteSipMediaApplicationAsyncHelper(const DeleteSipMediaApplicationRequest& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSipMediaApplication(request), context);
}

DeleteSipRuleOutcome ChimeClient::DeleteSipRule(const DeleteSipRuleRequest& request) const
{
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSipRule", "Required field: SipRuleId, is not set");
    return DeleteSipRuleOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-rules/";
  ss << request.GetSipRuleId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteSipRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSipRuleOutcomeCallable ChimeClient::DeleteSipRuleCallable(const DeleteSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteSipRuleAsync(const DeleteSipRuleRequest& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSipRuleAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteSipRuleAsyncHelper(const DeleteSipRuleRequest& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSipRule(request), context);
}

DeleteVoiceConnectorOutcome ChimeClient::DeleteVoiceConnector(const DeleteVoiceConnectorRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVoiceConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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

DeleteVoiceConnectorEmergencyCallingConfigurationOutcome ChimeClient::DeleteVoiceConnectorEmergencyCallingConfiguration(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/emergency-calling-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable ChimeClient::DeleteVoiceConnectorEmergencyCallingConfigurationCallable(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorEmergencyCallingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorEmergencyCallingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorEmergencyCallingConfigurationAsync(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorEmergencyCallingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorEmergencyCallingConfigurationAsyncHelper(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnectorEmergencyCallingConfiguration(request), context);
}

DeleteVoiceConnectorGroupOutcome ChimeClient::DeleteVoiceConnectorGroup(const DeleteVoiceConnectorGroupRequest& request) const
{
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DeleteVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVoiceConnectorGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/origination";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVoiceConnectorOriginationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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

DeleteVoiceConnectorProxyOutcome ChimeClient::DeleteVoiceConnectorProxy(const DeleteVoiceConnectorProxyRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/programmable-numbers/proxy";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVoiceConnectorProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVoiceConnectorProxyOutcomeCallable ChimeClient::DeleteVoiceConnectorProxyCallable(const DeleteVoiceConnectorProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVoiceConnectorProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVoiceConnectorProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteVoiceConnectorProxyAsync(const DeleteVoiceConnectorProxyRequest& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVoiceConnectorProxyAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DeleteVoiceConnectorProxyAsyncHelper(const DeleteVoiceConnectorProxyRequest& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVoiceConnectorProxy(request), context);
}

DeleteVoiceConnectorStreamingConfigurationOutcome ChimeClient::DeleteVoiceConnectorStreamingConfiguration(const DeleteVoiceConnectorStreamingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/streaming-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVoiceConnectorStreamingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVoiceConnectorTerminationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=delete");
  uri.SetQueryString(ss.str());
  return DeleteVoiceConnectorTerminationCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

DescribeAppInstanceOutcome ChimeClient::DescribeAppInstance(const DescribeAppInstanceRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstance", "Required field: AppInstanceArn, is not set");
    return DescribeAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeAppInstance", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppInstanceOutcomeCallable ChimeClient::DescribeAppInstanceCallable(const DescribeAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeAppInstanceAsync(const DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAppInstanceAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeAppInstanceAsyncHelper(const DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAppInstance(request), context);
}

DescribeAppInstanceAdminOutcome ChimeClient::DescribeAppInstanceAdmin(const DescribeAppInstanceAdminRequest& request) const
{
  if (!request.AppInstanceAdminArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceAdmin", "Required field: AppInstanceAdminArn, is not set");
    return DescribeAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceAdminArn]", false));
  }
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceAdmin", "Required field: AppInstanceArn, is not set");
    return DescribeAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeAppInstanceAdmin", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/admins/";
  ss << request.GetAppInstanceAdminArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAppInstanceAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppInstanceAdminOutcomeCallable ChimeClient::DescribeAppInstanceAdminCallable(const DescribeAppInstanceAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppInstanceAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppInstanceAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeAppInstanceAdminAsync(const DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAppInstanceAdminAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeAppInstanceAdminAsyncHelper(const DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAppInstanceAdmin(request), context);
}

DescribeAppInstanceUserOutcome ChimeClient::DescribeAppInstanceUser(const DescribeAppInstanceUserRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instance-users/";
  ss << request.GetAppInstanceUserArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppInstanceUserOutcomeCallable ChimeClient::DescribeAppInstanceUserCallable(const DescribeAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeAppInstanceUserAsync(const DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeAppInstanceUserAsyncHelper(const DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAppInstanceUser(request), context);
}

DescribeChannelOutcome ChimeClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelArn, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeChannel", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable ChimeClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeChannelAsyncHelper(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannel(request), context);
}

DescribeChannelBanOutcome ChimeClient::DescribeChannelBan(const DescribeChannelBanRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: ChannelArn, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Required field: MemberArn, is not set");
    return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeChannelBan", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/bans/";
  ss << request.GetMemberArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeChannelBanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelBanOutcomeCallable ChimeClient::DescribeChannelBanCallable(const DescribeChannelBanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelBanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelBan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeChannelBanAsync(const DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelBanAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeChannelBanAsyncHelper(const DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelBan(request), context);
}

DescribeChannelMembershipOutcome ChimeClient::DescribeChannelMembership(const DescribeChannelMembershipRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: ChannelArn, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MemberArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Required field: MemberArn, is not set");
    return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeChannelMembership", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/memberships/";
  ss << request.GetMemberArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeChannelMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelMembershipOutcomeCallable ChimeClient::DescribeChannelMembershipCallable(const DescribeChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeChannelMembershipAsync(const DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelMembershipAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeChannelMembershipAsyncHelper(const DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelMembership(request), context);
}

DescribeChannelMembershipForAppInstanceUserOutcome ChimeClient::DescribeChannelMembershipForAppInstanceUser(const DescribeChannelMembershipForAppInstanceUserRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: ChannelArn, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeChannelMembershipForAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeChannelMembershipForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?scope=app-instance-user-membership");
  uri.SetQueryString(ss.str());
  return DescribeChannelMembershipForAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelMembershipForAppInstanceUserOutcomeCallable ChimeClient::DescribeChannelMembershipForAppInstanceUserCallable(const DescribeChannelMembershipForAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelMembershipForAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelMembershipForAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeChannelMembershipForAppInstanceUserAsync(const DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelMembershipForAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeChannelMembershipForAppInstanceUserAsyncHelper(const DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelMembershipForAppInstanceUser(request), context);
}

DescribeChannelModeratedByAppInstanceUserOutcome ChimeClient::DescribeChannelModeratedByAppInstanceUser(const DescribeChannelModeratedByAppInstanceUserRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: ChannelArn, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeChannelModeratedByAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeChannelModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?scope=app-instance-user-moderated-channel");
  uri.SetQueryString(ss.str());
  return DescribeChannelModeratedByAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelModeratedByAppInstanceUserOutcomeCallable ChimeClient::DescribeChannelModeratedByAppInstanceUserCallable(const DescribeChannelModeratedByAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelModeratedByAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelModeratedByAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeChannelModeratedByAppInstanceUserAsync(const DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelModeratedByAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeChannelModeratedByAppInstanceUserAsyncHelper(const DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelModeratedByAppInstanceUser(request), context);
}

DescribeChannelModeratorOutcome ChimeClient::DescribeChannelModerator(const DescribeChannelModeratorRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChannelArn, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.ChannelModeratorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Required field: ChannelModeratorArn, is not set");
    return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelModeratorArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DescribeChannelModerator", "Invalid DNS host: " << uri.GetAuthority());
      return DescribeChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/moderators/";
  ss << request.GetChannelModeratorArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeChannelModeratorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelModeratorOutcomeCallable ChimeClient::DescribeChannelModeratorCallable(const DescribeChannelModeratorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeChannelModeratorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeChannelModerator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DescribeChannelModeratorAsync(const DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeChannelModeratorAsyncHelper( request, handler, context ); } );
}

void ChimeClient::DescribeChannelModeratorAsyncHelper(const DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeChannelModerator(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-phone-number");
  uri.SetQueryString(ss.str());
  return DisassociatePhoneNumberFromUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-phone-numbers");
  uri.SetQueryString(ss.str());
  return DisassociatePhoneNumbersFromVoiceConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-phone-numbers");
  uri.SetQueryString(ss.str());
  return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=disassociate-signin-delegate-groups");
  uri.SetQueryString(ss.str());
  return DisassociateSigninDelegateGroupsFromAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

GetAppInstanceRetentionSettingsOutcome ChimeClient::GetAppInstanceRetentionSettings(const GetAppInstanceRetentionSettingsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppInstanceRetentionSettings", "Required field: AppInstanceArn, is not set");
    return GetAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetAppInstanceRetentionSettings", "Invalid DNS host: " << uri.GetAuthority());
      return GetAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/retention-settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAppInstanceRetentionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppInstanceRetentionSettingsOutcomeCallable ChimeClient::GetAppInstanceRetentionSettingsCallable(const GetAppInstanceRetentionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppInstanceRetentionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppInstanceRetentionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetAppInstanceRetentionSettingsAsync(const GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppInstanceRetentionSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetAppInstanceRetentionSettingsAsyncHelper(const GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAppInstanceRetentionSettings(request), context);
}

GetAppInstanceStreamingConfigurationsOutcome ChimeClient::GetAppInstanceStreamingConfigurations(const GetAppInstanceStreamingConfigurationsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppInstanceStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return GetAppInstanceStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/streaming-configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAppInstanceStreamingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppInstanceStreamingConfigurationsOutcomeCallable ChimeClient::GetAppInstanceStreamingConfigurationsCallable(const GetAppInstanceStreamingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppInstanceStreamingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppInstanceStreamingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetAppInstanceStreamingConfigurationsAsync(const GetAppInstanceStreamingConfigurationsRequest& request, const GetAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAppInstanceStreamingConfigurationsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetAppInstanceStreamingConfigurationsAsyncHelper(const GetAppInstanceStreamingConfigurationsRequest& request, const GetAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAppInstanceStreamingConfigurations(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees/";
  ss << request.GetAttendeeId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

GetChannelMessageOutcome ChimeClient::GetChannelMessage(const GetChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: ChannelArn, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelMessage", "Required field: MessageId, is not set");
    return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetChannelMessage", "Invalid DNS host: " << uri.GetAuthority());
      return GetChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/messages/";
  ss << request.GetMessageId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChannelMessageOutcomeCallable ChimeClient::GetChannelMessageCallable(const GetChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetChannelMessageAsync(const GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetChannelMessageAsyncHelper(const GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChannelMessage(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/events-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetEventsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ss << m_baseUri << "/settings";
  return GetGlobalSettingsOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetGlobalSettings"));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

GetMessagingSessionEndpointOutcome ChimeClient::GetMessagingSessionEndpoint(const GetMessagingSessionEndpointRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("GetMessagingSessionEndpoint", "Invalid DNS host: " << uri.GetAuthority());
      return GetMessagingSessionEndpointOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/endpoints/messaging-session";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetMessagingSessionEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMessagingSessionEndpointOutcomeCallable ChimeClient::GetMessagingSessionEndpointCallable(const GetMessagingSessionEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMessagingSessionEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMessagingSessionEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetMessagingSessionEndpointAsync(const GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMessagingSessionEndpointAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetMessagingSessionEndpointAsyncHelper(const GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMessagingSessionEndpoint(request), context);
}

GetPhoneNumberOutcome ChimeClient::GetPhoneNumber(const GetPhoneNumberRequest& request) const
{
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPhoneNumber", "Required field: PhoneNumberId, is not set");
    return GetPhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetPhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-number-orders/";
  ss << request.GetPhoneNumberOrderId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetPhoneNumberOrderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ss << m_baseUri << "/settings/phone-number";
  return GetPhoneNumberSettingsOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetPhoneNumberSettings"));
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

GetProxySessionOutcome ChimeClient::GetProxySession(const GetProxySessionRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProxySession", "Required field: VoiceConnectorId, is not set");
    return GetProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProxySession", "Required field: ProxySessionId, is not set");
    return GetProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProxySessionId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/proxy-sessions/";
  ss << request.GetProxySessionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetProxySessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProxySessionOutcomeCallable ChimeClient::GetProxySessionCallable(const GetProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetProxySessionAsync(const GetProxySessionRequest& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProxySessionAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetProxySessionAsyncHelper(const GetProxySessionRequest& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProxySession(request), context);
}

GetRetentionSettingsOutcome ChimeClient::GetRetentionSettings(const GetRetentionSettingsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRetentionSettings", "Required field: AccountId, is not set");
    return GetRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/retention-settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRetentionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRetentionSettingsOutcomeCallable ChimeClient::GetRetentionSettingsCallable(const GetRetentionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRetentionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRetentionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetRetentionSettingsAsync(const GetRetentionSettingsRequest& request, const GetRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRetentionSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetRetentionSettingsAsyncHelper(const GetRetentionSettingsRequest& request, const GetRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRetentionSettings(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

GetSipMediaApplicationOutcome ChimeClient::GetSipMediaApplication(const GetSipMediaApplicationRequest& request) const
{
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications/";
  ss << request.GetSipMediaApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSipMediaApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSipMediaApplicationOutcomeCallable ChimeClient::GetSipMediaApplicationCallable(const GetSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetSipMediaApplicationAsync(const GetSipMediaApplicationRequest& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSipMediaApplicationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetSipMediaApplicationAsyncHelper(const GetSipMediaApplicationRequest& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSipMediaApplication(request), context);
}

GetSipMediaApplicationLoggingConfigurationOutcome ChimeClient::GetSipMediaApplicationLoggingConfiguration(const GetSipMediaApplicationLoggingConfigurationRequest& request) const
{
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications/";
  ss << request.GetSipMediaApplicationId();
  ss << "/logging-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSipMediaApplicationLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSipMediaApplicationLoggingConfigurationOutcomeCallable ChimeClient::GetSipMediaApplicationLoggingConfigurationCallable(const GetSipMediaApplicationLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSipMediaApplicationLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSipMediaApplicationLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetSipMediaApplicationLoggingConfigurationAsync(const GetSipMediaApplicationLoggingConfigurationRequest& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSipMediaApplicationLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetSipMediaApplicationLoggingConfigurationAsyncHelper(const GetSipMediaApplicationLoggingConfigurationRequest& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSipMediaApplicationLoggingConfiguration(request), context);
}

GetSipRuleOutcome ChimeClient::GetSipRule(const GetSipRuleRequest& request) const
{
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipRule", "Required field: SipRuleId, is not set");
    return GetSipRuleOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-rules/";
  ss << request.GetSipRuleId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSipRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSipRuleOutcomeCallable ChimeClient::GetSipRuleCallable(const GetSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetSipRuleAsync(const GetSipRuleRequest& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSipRuleAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetSipRuleAsyncHelper(const GetSipRuleRequest& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSipRule(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

GetVoiceConnectorEmergencyCallingConfigurationOutcome ChimeClient::GetVoiceConnectorEmergencyCallingConfiguration(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/emergency-calling-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable ChimeClient::GetVoiceConnectorEmergencyCallingConfigurationCallable(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorEmergencyCallingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorEmergencyCallingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorEmergencyCallingConfigurationAsync(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorEmergencyCallingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorEmergencyCallingConfigurationAsyncHelper(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorEmergencyCallingConfiguration(request), context);
}

GetVoiceConnectorGroupOutcome ChimeClient::GetVoiceConnectorGroup(const GetVoiceConnectorGroupRequest& request) const
{
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return GetVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/logging-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/origination";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorOriginationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

GetVoiceConnectorProxyOutcome ChimeClient::GetVoiceConnectorProxy(const GetVoiceConnectorProxyRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/programmable-numbers/proxy";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVoiceConnectorProxyOutcomeCallable ChimeClient::GetVoiceConnectorProxyCallable(const GetVoiceConnectorProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVoiceConnectorProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVoiceConnectorProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetVoiceConnectorProxyAsync(const GetVoiceConnectorProxyRequest& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVoiceConnectorProxyAsyncHelper( request, handler, context ); } );
}

void ChimeClient::GetVoiceConnectorProxyAsyncHelper(const GetVoiceConnectorProxyRequest& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVoiceConnectorProxy(request), context);
}

GetVoiceConnectorStreamingConfigurationOutcome ChimeClient::GetVoiceConnectorStreamingConfiguration(const GetVoiceConnectorStreamingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/streaming-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorStreamingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorTerminationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/health";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVoiceConnectorTerminationHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=add");
  uri.SetQueryString(ss.str());
  return InviteUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

ListAppInstanceAdminsOutcome ChimeClient::ListAppInstanceAdmins(const ListAppInstanceAdminsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppInstanceAdmins", "Required field: AppInstanceArn, is not set");
    return ListAppInstanceAdminsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAppInstanceAdmins", "Invalid DNS host: " << uri.GetAuthority());
      return ListAppInstanceAdminsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/admins";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAppInstanceAdminsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppInstanceAdminsOutcomeCallable ChimeClient::ListAppInstanceAdminsCallable(const ListAppInstanceAdminsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppInstanceAdminsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppInstanceAdmins(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListAppInstanceAdminsAsync(const ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAppInstanceAdminsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListAppInstanceAdminsAsyncHelper(const ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAppInstanceAdmins(request), context);
}

ListAppInstanceUsersOutcome ChimeClient::ListAppInstanceUsers(const ListAppInstanceUsersRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppInstanceUsers", "Required field: AppInstanceArn, is not set");
    return ListAppInstanceUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAppInstanceUsers", "Invalid DNS host: " << uri.GetAuthority());
      return ListAppInstanceUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instance-users";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAppInstanceUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppInstanceUsersOutcomeCallable ChimeClient::ListAppInstanceUsersCallable(const ListAppInstanceUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppInstanceUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppInstanceUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListAppInstanceUsersAsync(const ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAppInstanceUsersAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListAppInstanceUsersAsyncHelper(const ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAppInstanceUsers(request), context);
}

ListAppInstancesOutcome ChimeClient::ListAppInstances(const ListAppInstancesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListAppInstances", "Invalid DNS host: " << uri.GetAuthority());
      return ListAppInstancesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAppInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppInstancesOutcomeCallable ChimeClient::ListAppInstancesCallable(const ListAppInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListAppInstancesAsync(const ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAppInstancesAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListAppInstancesAsyncHelper(const ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAppInstances(request), context);
}

ListAttendeeTagsOutcome ChimeClient::ListAttendeeTags(const ListAttendeeTagsRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttendeeTags", "Required field: MeetingId, is not set");
    return ListAttendeeTagsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttendeeTags", "Required field: AttendeeId, is not set");
    return ListAttendeeTagsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees/";
  ss << request.GetAttendeeId();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAttendeeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAttendeeTagsOutcomeCallable ChimeClient::ListAttendeeTagsCallable(const ListAttendeeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAttendeeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAttendeeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListAttendeeTagsAsync(const ListAttendeeTagsRequest& request, const ListAttendeeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAttendeeTagsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListAttendeeTagsAsyncHelper(const ListAttendeeTagsRequest& request, const ListAttendeeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAttendeeTags(request), context);
}

ListAttendeesOutcome ChimeClient::ListAttendees(const ListAttendeesRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttendees", "Required field: MeetingId, is not set");
    return ListAttendeesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAttendeesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListBotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

ListChannelBansOutcome ChimeClient::ListChannelBans(const ListChannelBansRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelBans", "Required field: ChannelArn, is not set");
    return ListChannelBansOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListChannelBans", "Invalid DNS host: " << uri.GetAuthority());
      return ListChannelBansOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/bans";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListChannelBansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelBansOutcomeCallable ChimeClient::ListChannelBansCallable(const ListChannelBansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelBansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelBans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListChannelBansAsync(const ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelBansAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListChannelBansAsyncHelper(const ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelBans(request), context);
}

ListChannelMembershipsOutcome ChimeClient::ListChannelMemberships(const ListChannelMembershipsRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMemberships", "Required field: ChannelArn, is not set");
    return ListChannelMembershipsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListChannelMemberships", "Invalid DNS host: " << uri.GetAuthority());
      return ListChannelMembershipsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListChannelMembershipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelMembershipsOutcomeCallable ChimeClient::ListChannelMembershipsCallable(const ListChannelMembershipsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelMembershipsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelMemberships(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListChannelMembershipsAsync(const ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelMembershipsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListChannelMembershipsAsyncHelper(const ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelMemberships(request), context);
}

ListChannelMembershipsForAppInstanceUserOutcome ChimeClient::ListChannelMembershipsForAppInstanceUser(const ListChannelMembershipsForAppInstanceUserRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListChannelMembershipsForAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return ListChannelMembershipsForAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?scope=app-instance-user-memberships");
  uri.SetQueryString(ss.str());
  return ListChannelMembershipsForAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelMembershipsForAppInstanceUserOutcomeCallable ChimeClient::ListChannelMembershipsForAppInstanceUserCallable(const ListChannelMembershipsForAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelMembershipsForAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelMembershipsForAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListChannelMembershipsForAppInstanceUserAsync(const ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelMembershipsForAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListChannelMembershipsForAppInstanceUserAsyncHelper(const ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelMembershipsForAppInstanceUser(request), context);
}

ListChannelMessagesOutcome ChimeClient::ListChannelMessages(const ListChannelMessagesRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMessages", "Required field: ChannelArn, is not set");
    return ListChannelMessagesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListChannelMessages", "Invalid DNS host: " << uri.GetAuthority());
      return ListChannelMessagesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/messages";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListChannelMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelMessagesOutcomeCallable ChimeClient::ListChannelMessagesCallable(const ListChannelMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListChannelMessagesAsync(const ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelMessagesAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListChannelMessagesAsyncHelper(const ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelMessages(request), context);
}

ListChannelModeratorsOutcome ChimeClient::ListChannelModerators(const ListChannelModeratorsRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelModerators", "Required field: ChannelArn, is not set");
    return ListChannelModeratorsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListChannelModerators", "Invalid DNS host: " << uri.GetAuthority());
      return ListChannelModeratorsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/moderators";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListChannelModeratorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelModeratorsOutcomeCallable ChimeClient::ListChannelModeratorsCallable(const ListChannelModeratorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelModeratorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelModerators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListChannelModeratorsAsync(const ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelModeratorsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListChannelModeratorsAsyncHelper(const ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelModerators(request), context);
}

ListChannelsOutcome ChimeClient::ListChannels(const ListChannelsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: AppInstanceArn, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListChannels", "Invalid DNS host: " << uri.GetAuthority());
      return ListChannelsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListChannelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable ChimeClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListChannelsAsyncHelper(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannels(request), context);
}

ListChannelsModeratedByAppInstanceUserOutcome ChimeClient::ListChannelsModeratedByAppInstanceUser(const ListChannelsModeratedByAppInstanceUserRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("ListChannelsModeratedByAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return ListChannelsModeratedByAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?scope=app-instance-user-moderated-channels");
  uri.SetQueryString(ss.str());
  return ListChannelsModeratedByAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsModeratedByAppInstanceUserOutcomeCallable ChimeClient::ListChannelsModeratedByAppInstanceUserCallable(const ListChannelsModeratedByAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChannelsModeratedByAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChannelsModeratedByAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListChannelsModeratedByAppInstanceUserAsync(const ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChannelsModeratedByAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListChannelsModeratedByAppInstanceUserAsyncHelper(const ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChannelsModeratedByAppInstanceUser(request), context);
}

ListMeetingTagsOutcome ChimeClient::ListMeetingTags(const ListMeetingTagsRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMeetingTags", "Required field: MeetingId, is not set");
    return ListMeetingTagsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListMeetingTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMeetingTagsOutcomeCallable ChimeClient::ListMeetingTagsCallable(const ListMeetingTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMeetingTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMeetingTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListMeetingTagsAsync(const ListMeetingTagsRequest& request, const ListMeetingTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMeetingTagsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListMeetingTagsAsyncHelper(const ListMeetingTagsRequest& request, const ListMeetingTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMeetingTags(request), context);
}

ListMeetingsOutcome ChimeClient::ListMeetings(const ListMeetingsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListMeetingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-number-orders";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPhoneNumberOrdersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-numbers";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPhoneNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

ListProxySessionsOutcome ChimeClient::ListProxySessions(const ListProxySessionsRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProxySessions", "Required field: VoiceConnectorId, is not set");
    return ListProxySessionsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/proxy-sessions";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProxySessionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProxySessionsOutcomeCallable ChimeClient::ListProxySessionsCallable(const ListProxySessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProxySessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProxySessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListProxySessionsAsync(const ListProxySessionsRequest& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProxySessionsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListProxySessionsAsyncHelper(const ListProxySessionsRequest& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProxySessions(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRoomMembershipsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRoomsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

ListSipMediaApplicationsOutcome ChimeClient::ListSipMediaApplications(const ListSipMediaApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSipMediaApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSipMediaApplicationsOutcomeCallable ChimeClient::ListSipMediaApplicationsCallable(const ListSipMediaApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSipMediaApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSipMediaApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListSipMediaApplicationsAsync(const ListSipMediaApplicationsRequest& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSipMediaApplicationsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListSipMediaApplicationsAsyncHelper(const ListSipMediaApplicationsRequest& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSipMediaApplications(request), context);
}

ListSipRulesOutcome ChimeClient::ListSipRules(const ListSipRulesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-rules";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListSipRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSipRulesOutcomeCallable ChimeClient::ListSipRulesCallable(const ListSipRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSipRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSipRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListSipRulesAsync(const ListSipRulesRequest& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSipRulesAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListSipRulesAsyncHelper(const ListSipRulesRequest& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSipRules(request), context);
}

ListTagsForResourceOutcome ChimeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ChimeClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ChimeClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListUsersOutcome ChimeClient::ListUsers(const ListUsersRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVoiceConnectorGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVoiceConnectorTerminationCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListVoiceConnectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=logout");
  uri.SetQueryString(ss.str());
  return LogoutUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

PutAppInstanceRetentionSettingsOutcome ChimeClient::PutAppInstanceRetentionSettings(const PutAppInstanceRetentionSettingsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAppInstanceRetentionSettings", "Required field: AppInstanceArn, is not set");
    return PutAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutAppInstanceRetentionSettings", "Invalid DNS host: " << uri.GetAuthority());
      return PutAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/retention-settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAppInstanceRetentionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAppInstanceRetentionSettingsOutcomeCallable ChimeClient::PutAppInstanceRetentionSettingsCallable(const PutAppInstanceRetentionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppInstanceRetentionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppInstanceRetentionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutAppInstanceRetentionSettingsAsync(const PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAppInstanceRetentionSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutAppInstanceRetentionSettingsAsyncHelper(const PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAppInstanceRetentionSettings(request), context);
}

PutAppInstanceStreamingConfigurationsOutcome ChimeClient::PutAppInstanceStreamingConfigurations(const PutAppInstanceStreamingConfigurationsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAppInstanceStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return PutAppInstanceStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  ss << "/streaming-configurations";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutAppInstanceStreamingConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAppInstanceStreamingConfigurationsOutcomeCallable ChimeClient::PutAppInstanceStreamingConfigurationsCallable(const PutAppInstanceStreamingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppInstanceStreamingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppInstanceStreamingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutAppInstanceStreamingConfigurationsAsync(const PutAppInstanceStreamingConfigurationsRequest& request, const PutAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutAppInstanceStreamingConfigurationsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutAppInstanceStreamingConfigurationsAsyncHelper(const PutAppInstanceStreamingConfigurationsRequest& request, const PutAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutAppInstanceStreamingConfigurations(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  ss << "/events-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutEventsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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

PutRetentionSettingsOutcome ChimeClient::PutRetentionSettings(const PutRetentionSettingsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRetentionSettings", "Required field: AccountId, is not set");
    return PutRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/retention-settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutRetentionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutRetentionSettingsOutcomeCallable ChimeClient::PutRetentionSettingsCallable(const PutRetentionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRetentionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRetentionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutRetentionSettingsAsync(const PutRetentionSettingsRequest& request, const PutRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRetentionSettingsAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutRetentionSettingsAsyncHelper(const PutRetentionSettingsRequest& request, const PutRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRetentionSettings(request), context);
}

PutSipMediaApplicationLoggingConfigurationOutcome ChimeClient::PutSipMediaApplicationLoggingConfiguration(const PutSipMediaApplicationLoggingConfigurationRequest& request) const
{
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return PutSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications/";
  ss << request.GetSipMediaApplicationId();
  ss << "/logging-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutSipMediaApplicationLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutSipMediaApplicationLoggingConfigurationOutcomeCallable ChimeClient::PutSipMediaApplicationLoggingConfigurationCallable(const PutSipMediaApplicationLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutSipMediaApplicationLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutSipMediaApplicationLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutSipMediaApplicationLoggingConfigurationAsync(const PutSipMediaApplicationLoggingConfigurationRequest& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutSipMediaApplicationLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutSipMediaApplicationLoggingConfigurationAsyncHelper(const PutSipMediaApplicationLoggingConfigurationRequest& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutSipMediaApplicationLoggingConfiguration(request), context);
}

PutVoiceConnectorEmergencyCallingConfigurationOutcome ChimeClient::PutVoiceConnectorEmergencyCallingConfiguration(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/emergency-calling-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable ChimeClient::PutVoiceConnectorEmergencyCallingConfigurationCallable(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorEmergencyCallingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorEmergencyCallingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutVoiceConnectorEmergencyCallingConfigurationAsync(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutVoiceConnectorEmergencyCallingConfigurationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutVoiceConnectorEmergencyCallingConfigurationAsyncHelper(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutVoiceConnectorEmergencyCallingConfiguration(request), context);
}

PutVoiceConnectorLoggingConfigurationOutcome ChimeClient::PutVoiceConnectorLoggingConfiguration(const PutVoiceConnectorLoggingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/logging-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutVoiceConnectorLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/origination";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutVoiceConnectorOriginationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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

PutVoiceConnectorProxyOutcome ChimeClient::PutVoiceConnectorProxy(const PutVoiceConnectorProxyRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/programmable-numbers/proxy";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutVoiceConnectorProxyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutVoiceConnectorProxyOutcomeCallable ChimeClient::PutVoiceConnectorProxyCallable(const PutVoiceConnectorProxyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutVoiceConnectorProxyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutVoiceConnectorProxy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::PutVoiceConnectorProxyAsync(const PutVoiceConnectorProxyRequest& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutVoiceConnectorProxyAsyncHelper( request, handler, context ); } );
}

void ChimeClient::PutVoiceConnectorProxyAsyncHelper(const PutVoiceConnectorProxyRequest& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutVoiceConnectorProxy(request), context);
}

PutVoiceConnectorStreamingConfigurationOutcome ChimeClient::PutVoiceConnectorStreamingConfiguration(const PutVoiceConnectorStreamingConfigurationRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/streaming-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutVoiceConnectorStreamingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutVoiceConnectorTerminationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/termination/credentials";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=put");
  uri.SetQueryString(ss.str());
  return PutVoiceConnectorTerminationCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

RedactChannelMessageOutcome ChimeClient::RedactChannelMessage(const RedactChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: ChannelArn, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Required field: MessageId, is not set");
    return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("RedactChannelMessage", "Invalid DNS host: " << uri.GetAuthority());
      return RedactChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/messages/";
  ss << request.GetMessageId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=redact");
  uri.SetQueryString(ss.str());
  return RedactChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RedactChannelMessageOutcomeCallable ChimeClient::RedactChannelMessageCallable(const RedactChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RedactChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RedactChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::RedactChannelMessageAsync(const RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RedactChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeClient::RedactChannelMessageAsyncHelper(const RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RedactChannelMessage(request), context);
}

RedactConversationMessageOutcome ChimeClient::RedactConversationMessage(const RedactConversationMessageRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactConversationMessage", "Required field: AccountId, is not set");
    return RedactConversationMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.ConversationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactConversationMessage", "Required field: ConversationId, is not set");
    return RedactConversationMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConversationId]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactConversationMessage", "Required field: MessageId, is not set");
    return RedactConversationMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/conversations/";
  ss << request.GetConversationId();
  ss << "/messages/";
  ss << request.GetMessageId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=redact");
  uri.SetQueryString(ss.str());
  return RedactConversationMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RedactConversationMessageOutcomeCallable ChimeClient::RedactConversationMessageCallable(const RedactConversationMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RedactConversationMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RedactConversationMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::RedactConversationMessageAsync(const RedactConversationMessageRequest& request, const RedactConversationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RedactConversationMessageAsyncHelper( request, handler, context ); } );
}

void ChimeClient::RedactConversationMessageAsyncHelper(const RedactConversationMessageRequest& request, const RedactConversationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RedactConversationMessage(request), context);
}

RedactRoomMessageOutcome ChimeClient::RedactRoomMessage(const RedactRoomMessageRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactRoomMessage", "Required field: AccountId, is not set");
    return RedactRoomMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.RoomIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactRoomMessage", "Required field: RoomId, is not set");
    return RedactRoomMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoomId]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RedactRoomMessage", "Required field: MessageId, is not set");
    return RedactRoomMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/messages/";
  ss << request.GetMessageId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=redact");
  uri.SetQueryString(ss.str());
  return RedactRoomMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RedactRoomMessageOutcomeCallable ChimeClient::RedactRoomMessageCallable(const RedactRoomMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RedactRoomMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RedactRoomMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::RedactRoomMessageAsync(const RedactRoomMessageRequest& request, const RedactRoomMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RedactRoomMessageAsyncHelper( request, handler, context ); } );
}

void ChimeClient::RedactRoomMessageAsyncHelper(const RedactRoomMessageRequest& request, const RedactRoomMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RedactRoomMessage(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=regenerate-security-token");
  uri.SetQueryString(ss.str());
  return RegenerateSecurityTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=reset-personal-pin");
  uri.SetQueryString(ss.str());
  return ResetPersonalPINOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=restore");
  uri.SetQueryString(ss.str());
  return RestorePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/search";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?type=phone-numbers");
  uri.SetQueryString(ss.str());
  return SearchAvailablePhoneNumbersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

SendChannelMessageOutcome ChimeClient::SendChannelMessage(const SendChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendChannelMessage", "Required field: ChannelArn, is not set");
    return SendChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("SendChannelMessage", "Invalid DNS host: " << uri.GetAuthority());
      return SendChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/messages";
  uri.SetPath(uri.GetPath() + ss.str());
  return SendChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendChannelMessageOutcomeCallable ChimeClient::SendChannelMessageCallable(const SendChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::SendChannelMessageAsync(const SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SendChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeClient::SendChannelMessageAsyncHelper(const SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SendChannelMessage(request), context);
}

TagAttendeeOutcome ChimeClient::TagAttendee(const TagAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagAttendee", "Required field: MeetingId, is not set");
    return TagAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagAttendee", "Required field: AttendeeId, is not set");
    return TagAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees/";
  ss << request.GetAttendeeId();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=add");
  uri.SetQueryString(ss.str());
  return TagAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagAttendeeOutcomeCallable ChimeClient::TagAttendeeCallable(const TagAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::TagAttendeeAsync(const TagAttendeeRequest& request, const TagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeClient::TagAttendeeAsyncHelper(const TagAttendeeRequest& request, const TagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagAttendee(request), context);
}

TagMeetingOutcome ChimeClient::TagMeeting(const TagMeetingRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagMeeting", "Required field: MeetingId, is not set");
    return TagMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=add");
  uri.SetQueryString(ss.str());
  return TagMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagMeetingOutcomeCallable ChimeClient::TagMeetingCallable(const TagMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::TagMeetingAsync(const TagMeetingRequest& request, const TagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeClient::TagMeetingAsyncHelper(const TagMeetingRequest& request, const TagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagMeeting(request), context);
}

TagResourceOutcome ChimeClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=tag-resource");
  uri.SetQueryString(ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ChimeClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagAttendeeOutcome ChimeClient::UntagAttendee(const UntagAttendeeRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagAttendee", "Required field: MeetingId, is not set");
    return UntagAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  if (!request.AttendeeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagAttendee", "Required field: AttendeeId, is not set");
    return UntagAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttendeeId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/attendees/";
  ss << request.GetAttendeeId();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=delete");
  uri.SetQueryString(ss.str());
  return UntagAttendeeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagAttendeeOutcomeCallable ChimeClient::UntagAttendeeCallable(const UntagAttendeeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagAttendeeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagAttendee(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UntagAttendeeAsync(const UntagAttendeeRequest& request, const UntagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagAttendeeAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UntagAttendeeAsyncHelper(const UntagAttendeeRequest& request, const UntagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagAttendee(request), context);
}

UntagMeetingOutcome ChimeClient::UntagMeeting(const UntagMeetingRequest& request) const
{
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagMeeting", "Required field: MeetingId, is not set");
    return UntagMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/meetings/";
  ss << request.GetMeetingId();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=delete");
  uri.SetQueryString(ss.str());
  return UntagMeetingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagMeetingOutcomeCallable ChimeClient::UntagMeetingCallable(const UntagMeetingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagMeetingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagMeeting(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UntagMeetingAsync(const UntagMeetingRequest& request, const UntagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagMeetingAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UntagMeetingAsyncHelper(const UntagMeetingRequest& request, const UntagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagMeeting(request), context);
}

UntagResourceOutcome ChimeClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=untag-resource");
  uri.SetQueryString(ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ChimeClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAccountOutcome ChimeClient::UpdateAccount(const UpdateAccountRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccount", "Required field: AccountId, is not set");
    return UpdateAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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

UpdateAppInstanceOutcome ChimeClient::UpdateAppInstance(const UpdateAppInstanceRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstance", "Required field: AppInstanceArn, is not set");
    return UpdateAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateAppInstance", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instances/";
  ss << request.GetAppInstanceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppInstanceOutcomeCallable ChimeClient::UpdateAppInstanceCallable(const UpdateAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateAppInstanceAsync(const UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAppInstanceAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateAppInstanceAsyncHelper(const UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAppInstance(request), context);
}

UpdateAppInstanceUserOutcome ChimeClient::UpdateAppInstanceUser(const UpdateAppInstanceUserRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return UpdateAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("identity-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateAppInstanceUser", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/app-instance-users/";
  ss << request.GetAppInstanceUserArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppInstanceUserOutcomeCallable ChimeClient::UpdateAppInstanceUserCallable(const UpdateAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateAppInstanceUserAsync(const UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAppInstanceUserAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateAppInstanceUserAsyncHelper(const UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAppInstanceUser(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/bots/";
  ss << request.GetBotId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateBotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

UpdateChannelOutcome ChimeClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelArn, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateChannel", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateChannelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable ChimeClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateChannelAsyncHelper(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannel(request), context);
}

UpdateChannelMessageOutcome ChimeClient::UpdateChannelMessage(const UpdateChannelMessageRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: ChannelArn, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Required field: MessageId, is not set");
    return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateChannelMessage", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/messages/";
  ss << request.GetMessageId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateChannelMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelMessageOutcomeCallable ChimeClient::UpdateChannelMessageCallable(const UpdateChannelMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannelMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateChannelMessageAsync(const UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelMessageAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateChannelMessageAsyncHelper(const UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannelMessage(request), context);
}

UpdateChannelReadMarkerOutcome ChimeClient::UpdateChannelReadMarker(const UpdateChannelReadMarkerRequest& request) const
{
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelReadMarker", "Required field: ChannelArn, is not set");
    return UpdateChannelReadMarkerOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("messaging-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("UpdateChannelReadMarker", "Invalid DNS host: " << uri.GetAuthority());
      return UpdateChannelReadMarkerOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/channels/";
  ss << request.GetChannelArn();
  ss << "/readMarker";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateChannelReadMarkerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelReadMarkerOutcomeCallable ChimeClient::UpdateChannelReadMarkerCallable(const UpdateChannelReadMarkerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChannelReadMarkerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChannelReadMarker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateChannelReadMarkerAsync(const UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChannelReadMarkerAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateChannelReadMarkerAsyncHelper(const UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChannelReadMarker(request), context);
}

UpdateGlobalSettingsOutcome ChimeClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateGlobalSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/phone-numbers/";
  ss << request.GetPhoneNumberId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdatePhoneNumberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/settings/phone-number";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdatePhoneNumberSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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

UpdateProxySessionOutcome ChimeClient::UpdateProxySession(const UpdateProxySessionRequest& request) const
{
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProxySession", "Required field: VoiceConnectorId, is not set");
    return UpdateProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  if (!request.ProxySessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProxySession", "Required field: ProxySessionId, is not set");
    return UpdateProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProxySessionId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  ss << "/proxy-sessions/";
  ss << request.GetProxySessionId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateProxySessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProxySessionOutcomeCallable ChimeClient::UpdateProxySessionCallable(const UpdateProxySessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProxySessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProxySession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateProxySessionAsync(const UpdateProxySessionRequest& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProxySessionAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateProxySessionAsyncHelper(const UpdateProxySessionRequest& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProxySession(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRoomOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/rooms/";
  ss << request.GetRoomId();
  ss << "/memberships/";
  ss << request.GetMemberId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRoomMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

UpdateSipMediaApplicationOutcome ChimeClient::UpdateSipMediaApplication(const UpdateSipMediaApplicationRequest& request) const
{
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return UpdateSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-media-applications/";
  ss << request.GetSipMediaApplicationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateSipMediaApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSipMediaApplicationOutcomeCallable ChimeClient::UpdateSipMediaApplicationCallable(const UpdateSipMediaApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSipMediaApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSipMediaApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateSipMediaApplicationAsync(const UpdateSipMediaApplicationRequest& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSipMediaApplicationAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateSipMediaApplicationAsyncHelper(const UpdateSipMediaApplicationRequest& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSipMediaApplication(request), context);
}

UpdateSipRuleOutcome ChimeClient::UpdateSipRule(const UpdateSipRuleRequest& request) const
{
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipRule", "Required field: SipRuleId, is not set");
    return UpdateSipRuleOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/sip-rules/";
  ss << request.GetSipRuleId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateSipRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSipRuleOutcomeCallable ChimeClient::UpdateSipRuleCallable(const UpdateSipRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSipRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSipRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateSipRuleAsync(const UpdateSipRuleRequest& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSipRuleAsyncHelper( request, handler, context ); } );
}

void ChimeClient::UpdateSipRuleAsyncHelper(const UpdateSipRuleRequest& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSipRule(request), context);
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/accounts/";
  ss << request.GetAccountId();
  ss << "/users/";
  ss << request.GetUserId();
  ss << "/settings";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateUserSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connectors/";
  ss << request.GetVoiceConnectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVoiceConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/voice-connector-groups/";
  ss << request.GetVoiceConnectorGroupId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVoiceConnectorGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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

