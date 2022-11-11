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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/chime/ChimeClient.h>
#include <aws/chime/ChimeErrorMarshaller.h>
#include <aws/chime/ChimeEndpointProvider.h>
#include <aws/chime/model/AssociatePhoneNumberWithUserRequest.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorRequest.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorGroupRequest.h>
#include <aws/chime/model/AssociateSigninDelegateGroupsWithAccountRequest.h>
#include <aws/chime/model/BatchCreateAttendeeRequest.h>
#include <aws/chime/model/BatchCreateChannelMembershipRequest.h>
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
#include <aws/chime/model/CreateMediaCapturePipelineRequest.h>
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
#include <aws/chime/model/DeleteMediaCapturePipelineRequest.h>
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
#include <aws/chime/model/GetMediaCapturePipelineRequest.h>
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
#include <aws/chime/model/ListMediaCapturePipelinesRequest.h>
#include <aws/chime/model/ListMeetingTagsRequest.h>
#include <aws/chime/model/ListMeetingsRequest.h>
#include <aws/chime/model/ListPhoneNumberOrdersRequest.h>
#include <aws/chime/model/ListPhoneNumbersRequest.h>
#include <aws/chime/model/ListProxySessionsRequest.h>
#include <aws/chime/model/ListRoomMembershipsRequest.h>
#include <aws/chime/model/ListRoomsRequest.h>
#include <aws/chime/model/ListSipMediaApplicationsRequest.h>
#include <aws/chime/model/ListSipRulesRequest.h>
#include <aws/chime/model/ListSupportedPhoneNumberCountriesRequest.h>
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
#include <aws/chime/model/StartMeetingTranscriptionRequest.h>
#include <aws/chime/model/StopMeetingTranscriptionRequest.h>
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
#include <aws/chime/model/UpdateSipMediaApplicationCallRequest.h>
#include <aws/chime/model/UpdateSipRuleRequest.h>
#include <aws/chime/model/UpdateUserRequest.h>
#include <aws/chime/model/UpdateUserSettingsRequest.h>
#include <aws/chime/model/UpdateVoiceConnectorRequest.h>
#include <aws/chime/model/UpdateVoiceConnectorGroupRequest.h>
#include <aws/chime/model/ValidateE911AddressRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Chime;
using namespace Aws::Chime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ChimeClient::SERVICE_NAME = "chime";
const char* ChimeClient::ALLOCATION_TAG = "ChimeClient";

ChimeClient::ChimeClient(const Chime::ChimeClientConfiguration& clientConfiguration,
                         std::shared_ptr<ChimeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const AWSCredentials& credentials,
                         std::shared_ptr<ChimeEndpointProviderBase> endpointProvider,
                         const Chime::ChimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<ChimeEndpointProviderBase> endpointProvider,
                         const Chime::ChimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ChimeClient::ChimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const AWSCredentials& credentials,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ChimeClient::ChimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ChimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ChimeClient::~ChimeClient()
{
}

std::shared_ptr<ChimeEndpointProviderBase>& ChimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ChimeClient::init(const Chime::ChimeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Chime");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ChimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociatePhoneNumberWithUserOutcome ChimeClient::AssociatePhoneNumberWithUser(const AssociatePhoneNumberWithUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePhoneNumberWithUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumberWithUser", "Required field: AccountId has invalid value");
    return AssociatePhoneNumberWithUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePhoneNumberWithUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  ss.str("?operation=associate-phone-number");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return AssociatePhoneNumberWithUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePhoneNumberWithUser(request), context);
    } );
}

AssociatePhoneNumbersWithVoiceConnectorOutcome ChimeClient::AssociatePhoneNumbersWithVoiceConnector(const AssociatePhoneNumbersWithVoiceConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePhoneNumbersWithVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePhoneNumbersWithVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  ss.str("?operation=associate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return AssociatePhoneNumbersWithVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePhoneNumbersWithVoiceConnector(request), context);
    } );
}

AssociatePhoneNumbersWithVoiceConnectorGroupOutcome ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroup(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociatePhoneNumbersWithVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociatePhoneNumbersWithVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociatePhoneNumbersWithVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  ss.str("?operation=associate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return AssociatePhoneNumbersWithVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociatePhoneNumbersWithVoiceConnectorGroup(request), context);
    } );
}

AssociateSigninDelegateGroupsWithAccountOutcome ChimeClient::AssociateSigninDelegateGroupsWithAccount(const AssociateSigninDelegateGroupsWithAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateSigninDelegateGroupsWithAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateSigninDelegateGroupsWithAccount", "Required field: AccountId, is not set");
    return AssociateSigninDelegateGroupsWithAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("AssociateSigninDelegateGroupsWithAccount", "Required field: AccountId has invalid value");
    return AssociateSigninDelegateGroupsWithAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateSigninDelegateGroupsWithAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  ss.str("?operation=associate-signin-delegate-groups");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return AssociateSigninDelegateGroupsWithAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateSigninDelegateGroupsWithAccount(request), context);
    } );
}

BatchCreateAttendeeOutcome ChimeClient::BatchCreateAttendee(const BatchCreateAttendeeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateAttendee", "Required field: MeetingId, is not set");
    return BatchCreateAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
  ss.str("?operation=batch-create");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchCreateAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateAttendee(request), context);
    } );
}

BatchCreateChannelMembershipOutcome ChimeClient::BatchCreateChannelMembership(const BatchCreateChannelMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateChannelMembership", "Required field: ChannelArn, is not set");
    return BatchCreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), BatchCreateChannelMembershipOutcome(addPrefixErr.value()));
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  ss.str("?operation=batch-create");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchCreateChannelMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateChannelMembershipOutcomeCallable ChimeClient::BatchCreateChannelMembershipCallable(const BatchCreateChannelMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateChannelMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateChannelMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::BatchCreateChannelMembershipAsync(const BatchCreateChannelMembershipRequest& request, const BatchCreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateChannelMembership(request), context);
    } );
}

BatchCreateRoomMembershipOutcome ChimeClient::BatchCreateRoomMembership(const BatchCreateRoomMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("BatchCreateRoomMembership", "Required field: AccountId has invalid value");
    return BatchCreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  ss.str("?operation=batch-create");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchCreateRoomMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCreateRoomMembership(request), context);
    } );
}

BatchDeletePhoneNumberOutcome ChimeClient::BatchDeletePhoneNumber(const BatchDeletePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  ss.str("?operation=batch-delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchDeletePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeletePhoneNumber(request), context);
    } );
}

BatchSuspendUserOutcome ChimeClient::BatchSuspendUser(const BatchSuspendUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchSuspendUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchSuspendUser", "Required field: AccountId, is not set");
    return BatchSuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("BatchSuspendUser", "Required field: AccountId has invalid value");
    return BatchSuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchSuspendUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  ss.str("?operation=suspend");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchSuspendUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchSuspendUser(request), context);
    } );
}

BatchUnsuspendUserOutcome ChimeClient::BatchUnsuspendUser(const BatchUnsuspendUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUnsuspendUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUnsuspendUser", "Required field: AccountId, is not set");
    return BatchUnsuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("BatchUnsuspendUser", "Required field: AccountId has invalid value");
    return BatchUnsuspendUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUnsuspendUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  ss.str("?operation=unsuspend");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchUnsuspendUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchUnsuspendUser(request), context);
    } );
}

BatchUpdatePhoneNumberOutcome ChimeClient::BatchUpdatePhoneNumber(const BatchUpdatePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  ss.str("?operation=batch-update");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return BatchUpdatePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchUpdatePhoneNumber(request), context);
    } );
}

BatchUpdateUserOutcome ChimeClient::BatchUpdateUser(const BatchUpdateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateUser", "Required field: AccountId, is not set");
    return BatchUpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateUser", "Required field: AccountId has invalid value");
    return BatchUpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  return BatchUpdateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchUpdateUser(request), context);
    } );
}

CreateAccountOutcome ChimeClient::CreateAccount(const CreateAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  return CreateAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccount(request), context);
    } );
}

CreateAppInstanceOutcome ChimeClient::CreateAppInstance(const CreateAppInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateAppInstanceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances");
  return CreateAppInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAppInstance(request), context);
    } );
}

CreateAppInstanceAdminOutcome ChimeClient::CreateAppInstanceAdmin(const CreateAppInstanceAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppInstanceAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAppInstanceAdmin", "Required field: AppInstanceArn, is not set");
    return CreateAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppInstanceAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateAppInstanceAdminOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admins");
  return CreateAppInstanceAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAppInstanceAdmin(request), context);
    } );
}

CreateAppInstanceUserOutcome ChimeClient::CreateAppInstanceUser(const CreateAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateAppInstanceUserOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instance-users");
  return CreateAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAppInstanceUser(request), context);
    } );
}

CreateAttendeeOutcome ChimeClient::CreateAttendee(const CreateAttendeeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAttendee", "Required field: MeetingId, is not set");
    return CreateAttendeeOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
  return CreateAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAttendee(request), context);
    } );
}

CreateBotOutcome ChimeClient::CreateBot(const CreateBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBot", "Required field: AccountId, is not set");
    return CreateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateBot", "Required field: AccountId has invalid value");
    return CreateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  return CreateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBot(request), context);
    } );
}

CreateChannelOutcome ChimeClient::CreateChannel(const CreateChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateChannelOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  return CreateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateChannel(request), context);
    } );
}

CreateChannelBanOutcome ChimeClient::CreateChannelBan(const CreateChannelBanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelBan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelBan", "Required field: ChannelArn, is not set");
    return CreateChannelBanOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannelBan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateChannelBanOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bans");
  return CreateChannelBanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateChannelBan(request), context);
    } );
}

CreateChannelMembershipOutcome ChimeClient::CreateChannelMembership(const CreateChannelMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelMembership", "Required field: ChannelArn, is not set");
    return CreateChannelMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateChannelMembershipOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  return CreateChannelMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateChannelMembership(request), context);
    } );
}

CreateChannelModeratorOutcome ChimeClient::CreateChannelModerator(const CreateChannelModeratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelModerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelModerator", "Required field: ChannelArn, is not set");
    return CreateChannelModeratorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannelModerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), CreateChannelModeratorOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/moderators");
  return CreateChannelModeratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateChannelModerator(request), context);
    } );
}

CreateMediaCapturePipelineOutcome ChimeClient::CreateMediaCapturePipeline(const CreateMediaCapturePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/media-capture-pipelines");
  return CreateMediaCapturePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMediaCapturePipelineOutcomeCallable ChimeClient::CreateMediaCapturePipelineCallable(const CreateMediaCapturePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMediaCapturePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMediaCapturePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::CreateMediaCapturePipelineAsync(const CreateMediaCapturePipelineRequest& request, const CreateMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMediaCapturePipeline(request), context);
    } );
}

CreateMeetingOutcome ChimeClient::CreateMeeting(const CreateMeetingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings");
  return CreateMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMeeting(request), context);
    } );
}

CreateMeetingDialOutOutcome ChimeClient::CreateMeetingDialOut(const CreateMeetingDialOutRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMeetingDialOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMeetingDialOut", "Required field: MeetingId, is not set");
    return CreateMeetingDialOutOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMeetingDialOut, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dial-outs");
  return CreateMeetingDialOutOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMeetingDialOut(request), context);
    } );
}

CreateMeetingWithAttendeesOutcome ChimeClient::CreateMeetingWithAttendees(const CreateMeetingWithAttendeesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMeetingWithAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMeetingWithAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings");
  ss.str("?operation=create-attendees");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return CreateMeetingWithAttendeesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMeetingWithAttendees(request), context);
    } );
}

CreatePhoneNumberOrderOutcome ChimeClient::CreatePhoneNumberOrder(const CreatePhoneNumberOrderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  return CreatePhoneNumberOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePhoneNumberOrder(request), context);
    } );
}

CreateProxySessionOutcome ChimeClient::CreateProxySession(const CreateProxySessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProxySession", "Required field: VoiceConnectorId, is not set");
    return CreateProxySessionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions");
  return CreateProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProxySession(request), context);
    } );
}

CreateRoomOutcome ChimeClient::CreateRoom(const CreateRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoom", "Required field: AccountId, is not set");
    return CreateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateRoom", "Required field: AccountId has invalid value");
    return CreateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms");
  return CreateRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRoom(request), context);
    } );
}

CreateRoomMembershipOutcome ChimeClient::CreateRoomMembership(const CreateRoomMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateRoomMembership", "Required field: AccountId has invalid value");
    return CreateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  return CreateRoomMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRoomMembership(request), context);
    } );
}

CreateSipMediaApplicationOutcome ChimeClient::CreateSipMediaApplication(const CreateSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  return CreateSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSipMediaApplication(request), context);
    } );
}

CreateSipMediaApplicationCallOutcome ChimeClient::CreateSipMediaApplicationCall(const CreateSipMediaApplicationCallRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSipMediaApplicationCall", "Required field: SipMediaApplicationId, is not set");
    return CreateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/calls");
  return CreateSipMediaApplicationCallOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSipMediaApplicationCall(request), context);
    } );
}

CreateSipRuleOutcome ChimeClient::CreateSipRule(const CreateSipRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  return CreateSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSipRule(request), context);
    } );
}

CreateUserOutcome ChimeClient::CreateUser(const CreateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: AccountId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: AccountId has invalid value");
    return CreateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  ss.str("?operation=create");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return CreateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateUser(request), context);
    } );
}

CreateVoiceConnectorOutcome ChimeClient::CreateVoiceConnector(const CreateVoiceConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  return CreateVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVoiceConnector(request), context);
    } );
}

CreateVoiceConnectorGroupOutcome ChimeClient::CreateVoiceConnectorGroup(const CreateVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  return CreateVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVoiceConnectorGroup(request), context);
    } );
}

DeleteAccountOutcome ChimeClient::DeleteAccount(const DeleteAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccount", "Required field: AccountId, is not set");
    return DeleteAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteAccount", "Required field: AccountId has invalid value");
    return DeleteAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  return DeleteAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccount(request), context);
    } );
}

DeleteAppInstanceOutcome ChimeClient::DeleteAppInstance(const DeleteAppInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstance", "Required field: AppInstanceArn, is not set");
    return DeleteAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAppInstanceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  return DeleteAppInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppInstance(request), context);
    } );
}

DeleteAppInstanceAdminOutcome ChimeClient::DeleteAppInstanceAdmin(const DeleteAppInstanceAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppInstanceAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppInstanceAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAppInstanceAdminOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admins/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceAdminArn());
  return DeleteAppInstanceAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppInstanceAdmin(request), context);
    } );
}

DeleteAppInstanceStreamingConfigurationsOutcome ChimeClient::DeleteAppInstanceStreamingConfigurations(const DeleteAppInstanceStreamingConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppInstanceStreamingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return DeleteAppInstanceStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppInstanceStreamingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configurations");
  return DeleteAppInstanceStreamingConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppInstanceStreamingConfigurations(request), context);
    } );
}

DeleteAppInstanceUserOutcome ChimeClient::DeleteAppInstanceUser(const DeleteAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DeleteAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteAppInstanceUserOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instance-users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceUserArn());
  return DeleteAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppInstanceUser(request), context);
    } );
}

DeleteAttendeeOutcome ChimeClient::DeleteAttendee(const DeleteAttendeeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
  return DeleteAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAttendee(request), context);
    } );
}

DeleteChannelOutcome ChimeClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelArn, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteChannelOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  return DeleteChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteChannel(request), context);
    } );
}

DeleteChannelBanOutcome ChimeClient::DeleteChannelBan(const DeleteChannelBanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelBan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelBan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteChannelBanOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  return DeleteChannelBanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteChannelBan(request), context);
    } );
}

DeleteChannelMembershipOutcome ChimeClient::DeleteChannelMembership(const DeleteChannelMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteChannelMembershipOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  return DeleteChannelMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteChannelMembership(request), context);
    } );
}

DeleteChannelMessageOutcome ChimeClient::DeleteChannelMessage(const DeleteChannelMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteChannelMessageOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  return DeleteChannelMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteChannelMessage(request), context);
    } );
}

DeleteChannelModeratorOutcome ChimeClient::DeleteChannelModerator(const DeleteChannelModeratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelModerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannelModerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DeleteChannelModeratorOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/moderators/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelModeratorArn());
  return DeleteChannelModeratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteChannelModerator(request), context);
    } );
}

DeleteEventsConfigurationOutcome ChimeClient::DeleteEventsConfiguration(const DeleteEventsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteEventsConfiguration", "Required field: AccountId has invalid value");
    return DeleteEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/events-configuration");
  return DeleteEventsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventsConfiguration(request), context);
    } );
}

DeleteMediaCapturePipelineOutcome ChimeClient::DeleteMediaCapturePipeline(const DeleteMediaCapturePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return DeleteMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/media-capture-pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaPipelineId());
  return DeleteMediaCapturePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMediaCapturePipelineOutcomeCallable ChimeClient::DeleteMediaCapturePipelineCallable(const DeleteMediaCapturePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMediaCapturePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMediaCapturePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::DeleteMediaCapturePipelineAsync(const DeleteMediaCapturePipelineRequest& request, const DeleteMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMediaCapturePipeline(request), context);
    } );
}

DeleteMeetingOutcome ChimeClient::DeleteMeeting(const DeleteMeetingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMeeting", "Required field: MeetingId, is not set");
    return DeleteMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  return DeleteMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMeeting(request), context);
    } );
}

DeletePhoneNumberOutcome ChimeClient::DeletePhoneNumber(const DeletePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePhoneNumber", "Required field: PhoneNumberId, is not set");
    return DeletePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return DeletePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePhoneNumber(request), context);
    } );
}

DeleteProxySessionOutcome ChimeClient::DeleteProxySession(const DeleteProxySessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  return DeleteProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProxySession(request), context);
    } );
}

DeleteRoomOutcome ChimeClient::DeleteRoom(const DeleteRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteRoom", "Required field: AccountId has invalid value");
    return DeleteRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  return DeleteRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRoom(request), context);
    } );
}

DeleteRoomMembershipOutcome ChimeClient::DeleteRoomMembership(const DeleteRoomMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DeleteRoomMembership", "Required field: AccountId has invalid value");
    return DeleteRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  return DeleteRoomMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRoomMembership(request), context);
    } );
}

DeleteSipMediaApplicationOutcome ChimeClient::DeleteSipMediaApplication(const DeleteSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return DeleteSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  return DeleteSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSipMediaApplication(request), context);
    } );
}

DeleteSipRuleOutcome ChimeClient::DeleteSipRule(const DeleteSipRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSipRule", "Required field: SipRuleId, is not set");
    return DeleteSipRuleOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  return DeleteSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSipRule(request), context);
    } );
}

DeleteVoiceConnectorOutcome ChimeClient::DeleteVoiceConnector(const DeleteVoiceConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  return DeleteVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnector(request), context);
    } );
}

DeleteVoiceConnectorEmergencyCallingConfigurationOutcome ChimeClient::DeleteVoiceConnectorEmergencyCallingConfiguration(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  return DeleteVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorEmergencyCallingConfiguration(request), context);
    } );
}

DeleteVoiceConnectorGroupOutcome ChimeClient::DeleteVoiceConnectorGroup(const DeleteVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DeleteVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  return DeleteVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorGroup(request), context);
    } );
}

DeleteVoiceConnectorOriginationOutcome ChimeClient::DeleteVoiceConnectorOrigination(const DeleteVoiceConnectorOriginationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  return DeleteVoiceConnectorOriginationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorOrigination(request), context);
    } );
}

DeleteVoiceConnectorProxyOutcome ChimeClient::DeleteVoiceConnectorProxy(const DeleteVoiceConnectorProxyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  return DeleteVoiceConnectorProxyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorProxy(request), context);
    } );
}

DeleteVoiceConnectorStreamingConfigurationOutcome ChimeClient::DeleteVoiceConnectorStreamingConfiguration(const DeleteVoiceConnectorStreamingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  return DeleteVoiceConnectorStreamingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorStreamingConfiguration(request), context);
    } );
}

DeleteVoiceConnectorTerminationOutcome ChimeClient::DeleteVoiceConnectorTermination(const DeleteVoiceConnectorTerminationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  return DeleteVoiceConnectorTerminationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorTermination(request), context);
    } );
}

DeleteVoiceConnectorTerminationCredentialsOutcome ChimeClient::DeleteVoiceConnectorTerminationCredentials(const DeleteVoiceConnectorTerminationCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return DeleteVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
  ss.str("?operation=delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DeleteVoiceConnectorTerminationCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVoiceConnectorTerminationCredentials(request), context);
    } );
}

DescribeAppInstanceOutcome ChimeClient::DescribeAppInstance(const DescribeAppInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstance", "Required field: AppInstanceArn, is not set");
    return DescribeAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeAppInstanceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  return DescribeAppInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppInstance(request), context);
    } );
}

DescribeAppInstanceAdminOutcome ChimeClient::DescribeAppInstanceAdmin(const DescribeAppInstanceAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAppInstanceAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAppInstanceAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeAppInstanceAdminOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admins/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceAdminArn());
  return DescribeAppInstanceAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppInstanceAdmin(request), context);
    } );
}

DescribeAppInstanceUserOutcome ChimeClient::DescribeAppInstanceUser(const DescribeAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeAppInstanceUserOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instance-users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceUserArn());
  return DescribeAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppInstanceUser(request), context);
    } );
}

DescribeChannelOutcome ChimeClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelArn, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeChannelOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  return DescribeChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChannel(request), context);
    } );
}

DescribeChannelBanOutcome ChimeClient::DescribeChannelBan(const DescribeChannelBanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannelBan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannelBan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeChannelBanOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  return DescribeChannelBanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChannelBan(request), context);
    } );
}

DescribeChannelMembershipOutcome ChimeClient::DescribeChannelMembership(const DescribeChannelMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannelMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeChannelMembershipOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberArn());
  return DescribeChannelMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChannelMembership(request), context);
    } );
}

DescribeChannelMembershipForAppInstanceUserOutcome ChimeClient::DescribeChannelMembershipForAppInstanceUser(const DescribeChannelMembershipForAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannelMembershipForAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannelMembershipForAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeChannelMembershipForAppInstanceUserOutcome(addPrefixErr.value()));
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  ss.str("?scope=app-instance-user-membership");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DescribeChannelMembershipForAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChannelMembershipForAppInstanceUser(request), context);
    } );
}

DescribeChannelModeratedByAppInstanceUserOutcome ChimeClient::DescribeChannelModeratedByAppInstanceUser(const DescribeChannelModeratedByAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannelModeratedByAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannelModeratedByAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeChannelModeratedByAppInstanceUserOutcome(addPrefixErr.value()));
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  ss.str("?scope=app-instance-user-moderated-channel");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DescribeChannelModeratedByAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChannelModeratedByAppInstanceUser(request), context);
    } );
}

DescribeChannelModeratorOutcome ChimeClient::DescribeChannelModerator(const DescribeChannelModeratorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannelModerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannelModerator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), DescribeChannelModeratorOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/moderators/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelModeratorArn());
  return DescribeChannelModeratorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeChannelModerator(request), context);
    } );
}

DisassociatePhoneNumberFromUserOutcome ChimeClient::DisassociatePhoneNumberFromUser(const DisassociatePhoneNumberFromUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePhoneNumberFromUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumberFromUser", "Required field: AccountId has invalid value");
    return DisassociatePhoneNumberFromUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePhoneNumberFromUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  ss.str("?operation=disassociate-phone-number");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DisassociatePhoneNumberFromUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociatePhoneNumberFromUser(request), context);
    } );
}

DisassociatePhoneNumbersFromVoiceConnectorOutcome ChimeClient::DisassociatePhoneNumbersFromVoiceConnector(const DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePhoneNumbersFromVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePhoneNumbersFromVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  ss.str("?operation=disassociate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DisassociatePhoneNumbersFromVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociatePhoneNumbersFromVoiceConnector(request), context);
    } );
}

DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroup(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociatePhoneNumbersFromVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociatePhoneNumbersFromVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociatePhoneNumbersFromVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  ss.str("?operation=disassociate-phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociatePhoneNumbersFromVoiceConnectorGroup(request), context);
    } );
}

DisassociateSigninDelegateGroupsFromAccountOutcome ChimeClient::DisassociateSigninDelegateGroupsFromAccount(const DisassociateSigninDelegateGroupsFromAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateSigninDelegateGroupsFromAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateSigninDelegateGroupsFromAccount", "Required field: AccountId, is not set");
    return DisassociateSigninDelegateGroupsFromAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("DisassociateSigninDelegateGroupsFromAccount", "Required field: AccountId has invalid value");
    return DisassociateSigninDelegateGroupsFromAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateSigninDelegateGroupsFromAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  ss.str("?operation=disassociate-signin-delegate-groups");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return DisassociateSigninDelegateGroupsFromAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateSigninDelegateGroupsFromAccount(request), context);
    } );
}

GetAccountOutcome ChimeClient::GetAccount(const GetAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccount", "Required field: AccountId, is not set");
    return GetAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccount", "Required field: AccountId has invalid value");
    return GetAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  return GetAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccount(request), context);
    } );
}

GetAccountSettingsOutcome ChimeClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccountSettings", "Required field: AccountId, is not set");
    return GetAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetAccountSettings", "Required field: AccountId has invalid value");
    return GetAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return GetAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccountSettings(request), context);
    } );
}

GetAppInstanceRetentionSettingsOutcome ChimeClient::GetAppInstanceRetentionSettings(const GetAppInstanceRetentionSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppInstanceRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppInstanceRetentionSettings", "Required field: AppInstanceArn, is not set");
    return GetAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppInstanceRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetAppInstanceRetentionSettingsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/retention-settings");
  return GetAppInstanceRetentionSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppInstanceRetentionSettings(request), context);
    } );
}

GetAppInstanceStreamingConfigurationsOutcome ChimeClient::GetAppInstanceStreamingConfigurations(const GetAppInstanceStreamingConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppInstanceStreamingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppInstanceStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return GetAppInstanceStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppInstanceStreamingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configurations");
  return GetAppInstanceStreamingConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppInstanceStreamingConfigurations(request), context);
    } );
}

GetAttendeeOutcome ChimeClient::GetAttendee(const GetAttendeeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
  return GetAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAttendee(request), context);
    } );
}

GetBotOutcome ChimeClient::GetBot(const GetBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetBot", "Required field: AccountId has invalid value");
    return GetBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  return GetBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBot(request), context);
    } );
}

GetChannelMessageOutcome ChimeClient::GetChannelMessage(const GetChannelMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetChannelMessageOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  return GetChannelMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetChannelMessage(request), context);
    } );
}

GetEventsConfigurationOutcome ChimeClient::GetEventsConfiguration(const GetEventsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetEventsConfiguration", "Required field: AccountId has invalid value");
    return GetEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEventsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/events-configuration");
  return GetEventsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEventsConfiguration(request), context);
    } );
}

GetGlobalSettingsOutcome ChimeClient::GetGlobalSettings() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return GetGlobalSettingsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetGlobalSettings"));
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
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetGlobalSettings(), context);
    } );
}

GetMediaCapturePipelineOutcome ChimeClient::GetMediaCapturePipeline(const GetMediaCapturePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MediaPipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMediaCapturePipeline", "Required field: MediaPipelineId, is not set");
    return GetMediaCapturePipelineOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaPipelineId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMediaCapturePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/media-capture-pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaPipelineId());
  return GetMediaCapturePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMediaCapturePipelineOutcomeCallable ChimeClient::GetMediaCapturePipelineCallable(const GetMediaCapturePipelineRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMediaCapturePipelineOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMediaCapturePipeline(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::GetMediaCapturePipelineAsync(const GetMediaCapturePipelineRequest& request, const GetMediaCapturePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMediaCapturePipeline(request), context);
    } );
}

GetMeetingOutcome ChimeClient::GetMeeting(const GetMeetingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMeeting", "Required field: MeetingId, is not set");
    return GetMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  return GetMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMeeting(request), context);
    } );
}

GetMessagingSessionEndpointOutcome ChimeClient::GetMessagingSessionEndpoint(const GetMessagingSessionEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMessagingSessionEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMessagingSessionEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetMessagingSessionEndpointOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/messaging-session");
  return GetMessagingSessionEndpointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMessagingSessionEndpoint(request), context);
    } );
}

GetPhoneNumberOutcome ChimeClient::GetPhoneNumber(const GetPhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPhoneNumber", "Required field: PhoneNumberId, is not set");
    return GetPhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return GetPhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPhoneNumber(request), context);
    } );
}

GetPhoneNumberOrderOutcome ChimeClient::GetPhoneNumberOrder(const GetPhoneNumberOrderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberOrderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPhoneNumberOrder", "Required field: PhoneNumberOrderId, is not set");
    return GetPhoneNumberOrderOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberOrderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPhoneNumberOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberOrderId());
  return GetPhoneNumberOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPhoneNumberOrder(request), context);
    } );
}

GetPhoneNumberSettingsOutcome ChimeClient::GetPhoneNumberSettings() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  return GetPhoneNumberSettingsOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetPhoneNumberSettings"));
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
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetPhoneNumberSettings(), context);
    } );
}

GetProxySessionOutcome ChimeClient::GetProxySession(const GetProxySessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  return GetProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetProxySession(request), context);
    } );
}

GetRetentionSettingsOutcome ChimeClient::GetRetentionSettings(const GetRetentionSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRetentionSettings", "Required field: AccountId, is not set");
    return GetRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetRetentionSettings", "Required field: AccountId has invalid value");
    return GetRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/retention-settings");
  return GetRetentionSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRetentionSettings(request), context);
    } );
}

GetRoomOutcome ChimeClient::GetRoom(const GetRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetRoom", "Required field: AccountId has invalid value");
    return GetRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  return GetRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRoom(request), context);
    } );
}

GetSipMediaApplicationOutcome ChimeClient::GetSipMediaApplication(const GetSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  return GetSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSipMediaApplication(request), context);
    } );
}

GetSipMediaApplicationLoggingConfigurationOutcome ChimeClient::GetSipMediaApplicationLoggingConfiguration(const GetSipMediaApplicationLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return GetSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return GetSipMediaApplicationLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSipMediaApplicationLoggingConfiguration(request), context);
    } );
}

GetSipRuleOutcome ChimeClient::GetSipRule(const GetSipRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSipRule", "Required field: SipRuleId, is not set");
    return GetSipRuleOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  return GetSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSipRule(request), context);
    } );
}

GetUserOutcome ChimeClient::GetUser(const GetUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetUser", "Required field: AccountId has invalid value");
    return GetUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return GetUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUser(request), context);
    } );
}

GetUserSettingsOutcome ChimeClient::GetUserSettings(const GetUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: AccountId has invalid value");
    return GetUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return GetUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetUserSettings(request), context);
    } );
}

GetVoiceConnectorOutcome ChimeClient::GetVoiceConnector(const GetVoiceConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  return GetVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnector(request), context);
    } );
}

GetVoiceConnectorEmergencyCallingConfigurationOutcome ChimeClient::GetVoiceConnectorEmergencyCallingConfiguration(const GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  return GetVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorEmergencyCallingConfiguration(request), context);
    } );
}

GetVoiceConnectorGroupOutcome ChimeClient::GetVoiceConnectorGroup(const GetVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return GetVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  return GetVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorGroup(request), context);
    } );
}

GetVoiceConnectorLoggingConfigurationOutcome ChimeClient::GetVoiceConnectorLoggingConfiguration(const GetVoiceConnectorLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return GetVoiceConnectorLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorLoggingConfiguration(request), context);
    } );
}

GetVoiceConnectorOriginationOutcome ChimeClient::GetVoiceConnectorOrigination(const GetVoiceConnectorOriginationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  return GetVoiceConnectorOriginationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorOrigination(request), context);
    } );
}

GetVoiceConnectorProxyOutcome ChimeClient::GetVoiceConnectorProxy(const GetVoiceConnectorProxyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  return GetVoiceConnectorProxyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorProxy(request), context);
    } );
}

GetVoiceConnectorStreamingConfigurationOutcome ChimeClient::GetVoiceConnectorStreamingConfiguration(const GetVoiceConnectorStreamingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  return GetVoiceConnectorStreamingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorStreamingConfiguration(request), context);
    } );
}

GetVoiceConnectorTerminationOutcome ChimeClient::GetVoiceConnectorTermination(const GetVoiceConnectorTerminationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  return GetVoiceConnectorTerminationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorTermination(request), context);
    } );
}

GetVoiceConnectorTerminationHealthOutcome ChimeClient::GetVoiceConnectorTerminationHealth(const GetVoiceConnectorTerminationHealthRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVoiceConnectorTerminationHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVoiceConnectorTerminationHealth", "Required field: VoiceConnectorId, is not set");
    return GetVoiceConnectorTerminationHealthOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVoiceConnectorTerminationHealth, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/health");
  return GetVoiceConnectorTerminationHealthOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetVoiceConnectorTerminationHealth(request), context);
    } );
}

InviteUsersOutcome ChimeClient::InviteUsers(const InviteUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InviteUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InviteUsers", "Required field: AccountId, is not set");
    return InviteUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("InviteUsers", "Required field: AccountId has invalid value");
    return InviteUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InviteUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  ss.str("?operation=add");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return InviteUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InviteUsers(request), context);
    } );
}

ListAccountsOutcome ChimeClient::ListAccounts(const ListAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts");
  return ListAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccounts(request), context);
    } );
}

ListAppInstanceAdminsOutcome ChimeClient::ListAppInstanceAdmins(const ListAppInstanceAdminsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppInstanceAdmins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppInstanceAdmins", "Required field: AppInstanceArn, is not set");
    return ListAppInstanceAdminsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAppInstanceAdmins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAppInstanceAdminsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admins");
  return ListAppInstanceAdminsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppInstanceAdmins(request), context);
    } );
}

ListAppInstanceUsersOutcome ChimeClient::ListAppInstanceUsers(const ListAppInstanceUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppInstanceUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppInstanceUsers", "Required field: AppInstanceArn, is not set");
    return ListAppInstanceUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAppInstanceUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAppInstanceUsersOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instance-users");
  return ListAppInstanceUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppInstanceUsers(request), context);
    } );
}

ListAppInstancesOutcome ChimeClient::ListAppInstances(const ListAppInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAppInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListAppInstancesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances");
  return ListAppInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppInstances(request), context);
    } );
}

ListAttendeeTagsOutcome ChimeClient::ListAttendeeTags(const ListAttendeeTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAttendeeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAttendeeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListAttendeeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAttendeeTags(request), context);
    } );
}

ListAttendeesOutcome ChimeClient::ListAttendees(const ListAttendeesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttendees", "Required field: MeetingId, is not set");
    return ListAttendeesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAttendees, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees");
  return ListAttendeesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAttendees(request), context);
    } );
}

ListBotsOutcome ChimeClient::ListBots(const ListBotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: AccountId, is not set");
    return ListBotsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListBots", "Required field: AccountId has invalid value");
    return ListBotsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots");
  return ListBotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBots(request), context);
    } );
}

ListChannelBansOutcome ChimeClient::ListChannelBans(const ListChannelBansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelBans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelBans", "Required field: ChannelArn, is not set");
    return ListChannelBansOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelBans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListChannelBansOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bans");
  return ListChannelBansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannelBans(request), context);
    } );
}

ListChannelMembershipsOutcome ChimeClient::ListChannelMemberships(const ListChannelMembershipsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMemberships", "Required field: ChannelArn, is not set");
    return ListChannelMembershipsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListChannelMembershipsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  return ListChannelMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannelMemberships(request), context);
    } );
}

ListChannelMembershipsForAppInstanceUserOutcome ChimeClient::ListChannelMembershipsForAppInstanceUser(const ListChannelMembershipsForAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelMembershipsForAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelMembershipsForAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListChannelMembershipsForAppInstanceUserOutcome(addPrefixErr.value()));
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  ss.str("?scope=app-instance-user-memberships");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListChannelMembershipsForAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannelMembershipsForAppInstanceUser(request), context);
    } );
}

ListChannelMessagesOutcome ChimeClient::ListChannelMessages(const ListChannelMessagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelMessages", "Required field: ChannelArn, is not set");
    return ListChannelMessagesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelMessages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListChannelMessagesOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
  return ListChannelMessagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannelMessages(request), context);
    } );
}

ListChannelModeratorsOutcome ChimeClient::ListChannelModerators(const ListChannelModeratorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelModerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelModerators", "Required field: ChannelArn, is not set");
    return ListChannelModeratorsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelModerators, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListChannelModeratorsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/moderators");
  return ListChannelModeratorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannelModerators(request), context);
    } );
}

ListChannelsOutcome ChimeClient::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: AppInstanceArn, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListChannelsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  return ListChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannels(request), context);
    } );
}

ListChannelsModeratedByAppInstanceUserOutcome ChimeClient::ListChannelsModeratedByAppInstanceUser(const ListChannelsModeratedByAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelsModeratedByAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannelsModeratedByAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), ListChannelsModeratedByAppInstanceUserOutcome(addPrefixErr.value()));
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  ss.str("?scope=app-instance-user-moderated-channels");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ListChannelsModeratedByAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListChannelsModeratedByAppInstanceUser(request), context);
    } );
}

ListMediaCapturePipelinesOutcome ChimeClient::ListMediaCapturePipelines(const ListMediaCapturePipelinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMediaCapturePipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMediaCapturePipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/media-capture-pipelines");
  return ListMediaCapturePipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMediaCapturePipelinesOutcomeCallable ChimeClient::ListMediaCapturePipelinesCallable(const ListMediaCapturePipelinesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMediaCapturePipelinesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMediaCapturePipelines(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListMediaCapturePipelinesAsync(const ListMediaCapturePipelinesRequest& request, const ListMediaCapturePipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMediaCapturePipelines(request), context);
    } );
}

ListMeetingTagsOutcome ChimeClient::ListMeetingTags(const ListMeetingTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMeetingTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMeetingTags", "Required field: MeetingId, is not set");
    return ListMeetingTagsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMeetingTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListMeetingTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMeetingTags(request), context);
    } );
}

ListMeetingsOutcome ChimeClient::ListMeetings(const ListMeetingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMeetings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMeetings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings");
  return ListMeetingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMeetings(request), context);
    } );
}

ListPhoneNumberOrdersOutcome ChimeClient::ListPhoneNumberOrders(const ListPhoneNumberOrdersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumberOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumberOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-orders");
  return ListPhoneNumberOrdersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPhoneNumberOrders(request), context);
    } );
}

ListPhoneNumbersOutcome ChimeClient::ListPhoneNumbers(const ListPhoneNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers");
  return ListPhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPhoneNumbers(request), context);
    } );
}

ListProxySessionsOutcome ChimeClient::ListProxySessions(const ListProxySessionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProxySessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProxySessions", "Required field: VoiceConnectorId, is not set");
    return ListProxySessionsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProxySessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions");
  return ListProxySessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProxySessions(request), context);
    } );
}

ListRoomMembershipsOutcome ChimeClient::ListRoomMemberships(const ListRoomMembershipsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoomMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListRoomMemberships", "Required field: AccountId has invalid value");
    return ListRoomMembershipsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoomMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships");
  return ListRoomMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRoomMemberships(request), context);
    } );
}

ListRoomsOutcome ChimeClient::ListRooms(const ListRoomsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRooms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRooms", "Required field: AccountId, is not set");
    return ListRoomsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListRooms", "Required field: AccountId has invalid value");
    return ListRoomsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRooms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms");
  return ListRoomsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRooms(request), context);
    } );
}

ListSipMediaApplicationsOutcome ChimeClient::ListSipMediaApplications(const ListSipMediaApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSipMediaApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSipMediaApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications");
  return ListSipMediaApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSipMediaApplications(request), context);
    } );
}

ListSipRulesOutcome ChimeClient::ListSipRules(const ListSipRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSipRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSipRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules");
  return ListSipRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSipRules(request), context);
    } );
}

ListSupportedPhoneNumberCountriesOutcome ChimeClient::ListSupportedPhoneNumberCountries(const ListSupportedPhoneNumberCountriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSupportedPhoneNumberCountries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProductTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSupportedPhoneNumberCountries", "Required field: ProductType, is not set");
    return ListSupportedPhoneNumberCountriesOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSupportedPhoneNumberCountries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-number-countries");
  return ListSupportedPhoneNumberCountriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSupportedPhoneNumberCountriesOutcomeCallable ChimeClient::ListSupportedPhoneNumberCountriesCallable(const ListSupportedPhoneNumberCountriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSupportedPhoneNumberCountriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSupportedPhoneNumberCountries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ListSupportedPhoneNumberCountriesAsync(const ListSupportedPhoneNumberCountriesRequest& request, const ListSupportedPhoneNumberCountriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSupportedPhoneNumberCountries(request), context);
    } );
}

ListTagsForResourceOutcome ChimeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListUsersOutcome ChimeClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AccountId has invalid value");
    return ListUsersOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUsers(request), context);
    } );
}

ListVoiceConnectorGroupsOutcome ChimeClient::ListVoiceConnectorGroups(const ListVoiceConnectorGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectorGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectorGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups");
  return ListVoiceConnectorGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVoiceConnectorGroups(request), context);
    } );
}

ListVoiceConnectorTerminationCredentialsOutcome ChimeClient::ListVoiceConnectorTerminationCredentials(const ListVoiceConnectorTerminationCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return ListVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
  return ListVoiceConnectorTerminationCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVoiceConnectorTerminationCredentials(request), context);
    } );
}

ListVoiceConnectorsOutcome ChimeClient::ListVoiceConnectors(const ListVoiceConnectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVoiceConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVoiceConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors");
  return ListVoiceConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVoiceConnectors(request), context);
    } );
}

LogoutUserOutcome ChimeClient::LogoutUser(const LogoutUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, LogoutUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("LogoutUser", "Required field: AccountId has invalid value");
    return LogoutUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, LogoutUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  ss.str("?operation=logout");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return LogoutUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, LogoutUser(request), context);
    } );
}

PutAppInstanceRetentionSettingsOutcome ChimeClient::PutAppInstanceRetentionSettings(const PutAppInstanceRetentionSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAppInstanceRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAppInstanceRetentionSettings", "Required field: AppInstanceArn, is not set");
    return PutAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAppInstanceRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutAppInstanceRetentionSettingsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/retention-settings");
  return PutAppInstanceRetentionSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAppInstanceRetentionSettings(request), context);
    } );
}

PutAppInstanceStreamingConfigurationsOutcome ChimeClient::PutAppInstanceStreamingConfigurations(const PutAppInstanceStreamingConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAppInstanceStreamingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAppInstanceStreamingConfigurations", "Required field: AppInstanceArn, is not set");
    return PutAppInstanceStreamingConfigurationsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAppInstanceStreamingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configurations");
  return PutAppInstanceStreamingConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAppInstanceStreamingConfigurations(request), context);
    } );
}

PutEventsConfigurationOutcome ChimeClient::PutEventsConfiguration(const PutEventsConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEventsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutEventsConfiguration", "Required field: AccountId has invalid value");
    return PutEventsConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEventsConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/events-configuration");
  return PutEventsConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutEventsConfiguration(request), context);
    } );
}

PutRetentionSettingsOutcome ChimeClient::PutRetentionSettings(const PutRetentionSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRetentionSettings", "Required field: AccountId, is not set");
    return PutRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("PutRetentionSettings", "Required field: AccountId has invalid value");
    return PutRetentionSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRetentionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/retention-settings");
  return PutRetentionSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRetentionSettings(request), context);
    } );
}

PutSipMediaApplicationLoggingConfigurationOutcome ChimeClient::PutSipMediaApplicationLoggingConfiguration(const PutSipMediaApplicationLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSipMediaApplicationLoggingConfiguration", "Required field: SipMediaApplicationId, is not set");
    return PutSipMediaApplicationLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutSipMediaApplicationLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return PutSipMediaApplicationLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutSipMediaApplicationLoggingConfiguration(request), context);
    } );
}

PutVoiceConnectorEmergencyCallingConfigurationOutcome ChimeClient::PutVoiceConnectorEmergencyCallingConfiguration(const PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorEmergencyCallingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorEmergencyCallingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorEmergencyCallingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling-configuration");
  return PutVoiceConnectorEmergencyCallingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorEmergencyCallingConfiguration(request), context);
    } );
}

PutVoiceConnectorLoggingConfigurationOutcome ChimeClient::PutVoiceConnectorLoggingConfiguration(const PutVoiceConnectorLoggingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorLoggingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorLoggingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorLoggingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging-configuration");
  return PutVoiceConnectorLoggingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorLoggingConfiguration(request), context);
    } );
}

PutVoiceConnectorOriginationOutcome ChimeClient::PutVoiceConnectorOrigination(const PutVoiceConnectorOriginationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorOrigination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorOriginationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorOrigination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/origination");
  return PutVoiceConnectorOriginationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorOrigination(request), context);
    } );
}

PutVoiceConnectorProxyOutcome ChimeClient::PutVoiceConnectorProxy(const PutVoiceConnectorProxyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorProxy", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorProxyOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorProxy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/programmable-numbers/proxy");
  return PutVoiceConnectorProxyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorProxy(request), context);
    } );
}

PutVoiceConnectorStreamingConfigurationOutcome ChimeClient::PutVoiceConnectorStreamingConfiguration(const PutVoiceConnectorStreamingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorStreamingConfiguration", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorStreamingConfigurationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorStreamingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-configuration");
  return PutVoiceConnectorStreamingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorStreamingConfiguration(request), context);
    } );
}

PutVoiceConnectorTerminationOutcome ChimeClient::PutVoiceConnectorTermination(const PutVoiceConnectorTerminationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTermination", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorTermination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination");
  return PutVoiceConnectorTerminationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorTermination(request), context);
    } );
}

PutVoiceConnectorTerminationCredentialsOutcome ChimeClient::PutVoiceConnectorTerminationCredentials(const PutVoiceConnectorTerminationCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutVoiceConnectorTerminationCredentials", "Required field: VoiceConnectorId, is not set");
    return PutVoiceConnectorTerminationCredentialsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutVoiceConnectorTerminationCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/termination/credentials");
  ss.str("?operation=put");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return PutVoiceConnectorTerminationCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutVoiceConnectorTerminationCredentials(request), context);
    } );
}

RedactChannelMessageOutcome ChimeClient::RedactChannelMessage(const RedactChannelMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RedactChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RedactChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), RedactChannelMessageOutcome(addPrefixErr.value()));
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  ss.str("?operation=redact");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RedactChannelMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RedactChannelMessage(request), context);
    } );
}

RedactConversationMessageOutcome ChimeClient::RedactConversationMessage(const RedactConversationMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RedactConversationMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("RedactConversationMessage", "Required field: AccountId has invalid value");
    return RedactConversationMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RedactConversationMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/conversations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConversationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  ss.str("?operation=redact");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RedactConversationMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RedactConversationMessage(request), context);
    } );
}

RedactRoomMessageOutcome ChimeClient::RedactRoomMessage(const RedactRoomMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RedactRoomMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("RedactRoomMessage", "Required field: AccountId has invalid value");
    return RedactRoomMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RedactRoomMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  ss.str("?operation=redact");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RedactRoomMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RedactRoomMessage(request), context);
    } );
}

RegenerateSecurityTokenOutcome ChimeClient::RegenerateSecurityToken(const RegenerateSecurityTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegenerateSecurityToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("RegenerateSecurityToken", "Required field: AccountId has invalid value");
    return RegenerateSecurityTokenOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegenerateSecurityToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  ss.str("?operation=regenerate-security-token");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RegenerateSecurityTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegenerateSecurityToken(request), context);
    } );
}

ResetPersonalPINOutcome ChimeClient::ResetPersonalPIN(const ResetPersonalPINRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetPersonalPIN, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("ResetPersonalPIN", "Required field: AccountId has invalid value");
    return ResetPersonalPINOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetPersonalPIN, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  ss.str("?operation=reset-personal-pin");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return ResetPersonalPINOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetPersonalPIN(request), context);
    } );
}

RestorePhoneNumberOutcome ChimeClient::RestorePhoneNumber(const RestorePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestorePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestorePhoneNumber", "Required field: PhoneNumberId, is not set");
    return RestorePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestorePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  ss.str("?operation=restore");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return RestorePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RestorePhoneNumber(request), context);
    } );
}

SearchAvailablePhoneNumbersOutcome ChimeClient::SearchAvailablePhoneNumbers(const SearchAvailablePhoneNumbersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAvailablePhoneNumbers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/search");
  ss.str("?type=phone-numbers");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return SearchAvailablePhoneNumbersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchAvailablePhoneNumbers(request), context);
    } );
}

SendChannelMessageOutcome ChimeClient::SendChannelMessage(const SendChannelMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SendChannelMessage", "Required field: ChannelArn, is not set");
    return SendChannelMessageOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SendChannelMessageOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages");
  return SendChannelMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendChannelMessage(request), context);
    } );
}

StartMeetingTranscriptionOutcome ChimeClient::StartMeetingTranscription(const StartMeetingTranscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMeetingTranscription", "Required field: MeetingId, is not set");
    return StartMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/transcription");
  ss.str("?operation=start");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return StartMeetingTranscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMeetingTranscriptionOutcomeCallable ChimeClient::StartMeetingTranscriptionCallable(const StartMeetingTranscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMeetingTranscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMeetingTranscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::StartMeetingTranscriptionAsync(const StartMeetingTranscriptionRequest& request, const StartMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartMeetingTranscription(request), context);
    } );
}

StopMeetingTranscriptionOutcome ChimeClient::StopMeetingTranscription(const StopMeetingTranscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopMeetingTranscription", "Required field: MeetingId, is not set");
    return StopMeetingTranscriptionOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopMeetingTranscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/transcription");
  ss.str("?operation=stop");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return StopMeetingTranscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMeetingTranscriptionOutcomeCallable ChimeClient::StopMeetingTranscriptionCallable(const StopMeetingTranscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMeetingTranscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMeetingTranscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::StopMeetingTranscriptionAsync(const StopMeetingTranscriptionRequest& request, const StopMeetingTranscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopMeetingTranscription(request), context);
    } );
}

TagAttendeeOutcome ChimeClient::TagAttendee(const TagAttendeeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=add");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return TagAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagAttendee(request), context);
    } );
}

TagMeetingOutcome ChimeClient::TagMeeting(const TagMeetingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagMeeting", "Required field: MeetingId, is not set");
    return TagMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=add");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return TagMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagMeeting(request), context);
    } );
}

TagResourceOutcome ChimeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=tag-resource");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagAttendeeOutcome ChimeClient::UntagAttendee(const UntagAttendeeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagAttendee, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attendees/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttendeeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return UntagAttendeeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagAttendee(request), context);
    } );
}

UntagMeetingOutcome ChimeClient::UntagMeeting(const UntagMeetingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MeetingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagMeeting", "Required field: MeetingId, is not set");
    return UntagMeetingOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MeetingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagMeeting, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/meetings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMeetingId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=delete");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return UntagMeetingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagMeeting(request), context);
    } );
}

UntagResourceOutcome ChimeClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  ss.str("?operation=untag-resource");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAccountOutcome ChimeClient::UpdateAccount(const UpdateAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccount", "Required field: AccountId, is not set");
    return UpdateAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateAccount", "Required field: AccountId has invalid value");
    return UpdateAccountOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  return UpdateAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAccount(request), context);
    } );
}

UpdateAccountSettingsOutcome ChimeClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AccountId has invalid value");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAccountSettings(request), context);
    } );
}

UpdateAppInstanceOutcome ChimeClient::UpdateAppInstance(const UpdateAppInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstance", "Required field: AppInstanceArn, is not set");
    return UpdateAppInstanceOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAppInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateAppInstanceOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instances/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceArn());
  return UpdateAppInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAppInstance(request), context);
    } );
}

UpdateAppInstanceUserOutcome ChimeClient::UpdateAppInstanceUser(const UpdateAppInstanceUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return UpdateAppInstanceUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAppInstanceUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("identity-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateAppInstanceUserOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/app-instance-users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppInstanceUserArn());
  return UpdateAppInstanceUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAppInstanceUser(request), context);
    } );
}

UpdateBotOutcome ChimeClient::UpdateBot(const UpdateBotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateBot", "Required field: AccountId has invalid value");
    return UpdateBotOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/bots/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBotId());
  return UpdateBotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBot(request), context);
    } );
}

UpdateChannelOutcome ChimeClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelArn, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateChannelOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  return UpdateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateChannel(request), context);
    } );
}

UpdateChannelMessageOutcome ChimeClient::UpdateChannelMessage(const UpdateChannelMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannelMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateChannelMessageOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  return UpdateChannelMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateChannelMessage(request), context);
    } );
}

UpdateChannelReadMarkerOutcome ChimeClient::UpdateChannelReadMarker(const UpdateChannelReadMarkerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannelReadMarker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelReadMarker", "Required field: ChannelArn, is not set");
    return UpdateChannelReadMarkerOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannelReadMarker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("messaging-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), UpdateChannelReadMarkerOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readMarker");
  return UpdateChannelReadMarkerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateChannelReadMarker(request), context);
    } );
}

UpdateGlobalSettingsOutcome ChimeClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateGlobalSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateGlobalSettings(request), context);
    } );
}

UpdatePhoneNumberOutcome ChimeClient::UpdatePhoneNumber(const UpdatePhoneNumberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PhoneNumberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePhoneNumber", "Required field: PhoneNumberId, is not set");
    return UpdatePhoneNumberOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PhoneNumberId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePhoneNumber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/phone-numbers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPhoneNumberId());
  return UpdatePhoneNumberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePhoneNumber(request), context);
    } );
}

UpdatePhoneNumberSettingsOutcome ChimeClient::UpdatePhoneNumberSettings(const UpdatePhoneNumberSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePhoneNumberSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings/phone-number");
  return UpdatePhoneNumberSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdatePhoneNumberSettings(request), context);
    } );
}

UpdateProxySessionOutcome ChimeClient::UpdateProxySession(const UpdateProxySessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProxySession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/proxy-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProxySessionId());
  return UpdateProxySessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProxySession(request), context);
    } );
}

UpdateRoomOutcome ChimeClient::UpdateRoom(const UpdateRoomRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateRoom", "Required field: AccountId has invalid value");
    return UpdateRoomOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoom, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  return UpdateRoomOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRoom(request), context);
    } );
}

UpdateRoomMembershipOutcome ChimeClient::UpdateRoomMembership(const UpdateRoomMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateRoomMembership", "Required field: AccountId has invalid value");
    return UpdateRoomMembershipOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoomMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rooms/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoomId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/memberships/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  return UpdateRoomMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRoomMembership(request), context);
    } );
}

UpdateSipMediaApplicationOutcome ChimeClient::UpdateSipMediaApplication(const UpdateSipMediaApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplication", "Required field: SipMediaApplicationId, is not set");
    return UpdateSipMediaApplicationOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSipMediaApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  return UpdateSipMediaApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSipMediaApplication(request), context);
    } );
}

UpdateSipMediaApplicationCallOutcome ChimeClient::UpdateSipMediaApplicationCall(const UpdateSipMediaApplicationCallRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipMediaApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplicationCall", "Required field: SipMediaApplicationId, is not set");
    return UpdateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipMediaApplicationId]", false));
  }
  if (!request.TransactionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipMediaApplicationCall", "Required field: TransactionId, is not set");
    return UpdateSipMediaApplicationCallOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransactionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSipMediaApplicationCall, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-media-applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipMediaApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/calls/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTransactionId());
  return UpdateSipMediaApplicationCallOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSipMediaApplicationCallOutcomeCallable ChimeClient::UpdateSipMediaApplicationCallCallable(const UpdateSipMediaApplicationCallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSipMediaApplicationCallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSipMediaApplicationCall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::UpdateSipMediaApplicationCallAsync(const UpdateSipMediaApplicationCallRequest& request, const UpdateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSipMediaApplicationCall(request), context);
    } );
}

UpdateSipRuleOutcome ChimeClient::UpdateSipRule(const UpdateSipRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SipRuleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSipRule", "Required field: SipRuleId, is not set");
    return UpdateSipRuleOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SipRuleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSipRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sip-rules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSipRuleId());
  return UpdateSipRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSipRule(request), context);
    } );
}

UpdateUserOutcome ChimeClient::UpdateUser(const UpdateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: AccountId has invalid value");
    return UpdateUserOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  return UpdateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUser(request), context);
    } );
}

UpdateUserSettingsOutcome ChimeClient::UpdateUserSettings(const UpdateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  if (request.GetAccountId().size() != 12 || request.GetAccountId().find_first_not_of("0123456789") != Aws::String::npos)
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: AccountId has invalid value");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "AccountId is invalid", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateUserSettings(request), context);
    } );
}

UpdateVoiceConnectorOutcome ChimeClient::UpdateVoiceConnector(const UpdateVoiceConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnector", "Required field: VoiceConnectorId, is not set");
    return UpdateVoiceConnectorOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connectors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorId());
  return UpdateVoiceConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVoiceConnector(request), context);
    } );
}

UpdateVoiceConnectorGroupOutcome ChimeClient::UpdateVoiceConnectorGroup(const UpdateVoiceConnectorGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.VoiceConnectorGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVoiceConnectorGroup", "Required field: VoiceConnectorGroupId, is not set");
    return UpdateVoiceConnectorGroupOutcome(Aws::Client::AWSError<ChimeErrors>(ChimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VoiceConnectorGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVoiceConnectorGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/voice-connector-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVoiceConnectorGroupId());
  return UpdateVoiceConnectorGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVoiceConnectorGroup(request), context);
    } );
}

ValidateE911AddressOutcome ChimeClient::ValidateE911Address(const ValidateE911AddressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidateE911Address, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidateE911Address, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/emergency-calling/address");
  return ValidateE911AddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidateE911AddressOutcomeCallable ChimeClient::ValidateE911AddressCallable(const ValidateE911AddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidateE911AddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidateE911Address(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeClient::ValidateE911AddressAsync(const ValidateE911AddressRequest& request, const ValidateE911AddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidateE911Address(request), context);
    } );
}

