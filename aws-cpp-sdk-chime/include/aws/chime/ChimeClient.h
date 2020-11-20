/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/chime/model/AssociatePhoneNumberWithUserResult.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorResult.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorGroupResult.h>
#include <aws/chime/model/AssociateSigninDelegateGroupsWithAccountResult.h>
#include <aws/chime/model/BatchCreateAttendeeResult.h>
#include <aws/chime/model/BatchCreateRoomMembershipResult.h>
#include <aws/chime/model/BatchDeletePhoneNumberResult.h>
#include <aws/chime/model/BatchSuspendUserResult.h>
#include <aws/chime/model/BatchUnsuspendUserResult.h>
#include <aws/chime/model/BatchUpdatePhoneNumberResult.h>
#include <aws/chime/model/BatchUpdateUserResult.h>
#include <aws/chime/model/CreateAccountResult.h>
#include <aws/chime/model/CreateAppInstanceResult.h>
#include <aws/chime/model/CreateAppInstanceAdminResult.h>
#include <aws/chime/model/CreateAppInstanceUserResult.h>
#include <aws/chime/model/CreateAttendeeResult.h>
#include <aws/chime/model/CreateBotResult.h>
#include <aws/chime/model/CreateChannelResult.h>
#include <aws/chime/model/CreateChannelBanResult.h>
#include <aws/chime/model/CreateChannelMembershipResult.h>
#include <aws/chime/model/CreateChannelModeratorResult.h>
#include <aws/chime/model/CreateMeetingResult.h>
#include <aws/chime/model/CreateMeetingDialOutResult.h>
#include <aws/chime/model/CreateMeetingWithAttendeesResult.h>
#include <aws/chime/model/CreatePhoneNumberOrderResult.h>
#include <aws/chime/model/CreateProxySessionResult.h>
#include <aws/chime/model/CreateRoomResult.h>
#include <aws/chime/model/CreateRoomMembershipResult.h>
#include <aws/chime/model/CreateSipMediaApplicationResult.h>
#include <aws/chime/model/CreateSipMediaApplicationCallResult.h>
#include <aws/chime/model/CreateSipRuleResult.h>
#include <aws/chime/model/CreateUserResult.h>
#include <aws/chime/model/CreateVoiceConnectorResult.h>
#include <aws/chime/model/CreateVoiceConnectorGroupResult.h>
#include <aws/chime/model/DeleteAccountResult.h>
#include <aws/chime/model/DescribeAppInstanceResult.h>
#include <aws/chime/model/DescribeAppInstanceAdminResult.h>
#include <aws/chime/model/DescribeAppInstanceUserResult.h>
#include <aws/chime/model/DescribeChannelResult.h>
#include <aws/chime/model/DescribeChannelBanResult.h>
#include <aws/chime/model/DescribeChannelMembershipResult.h>
#include <aws/chime/model/DescribeChannelMembershipForAppInstanceUserResult.h>
#include <aws/chime/model/DescribeChannelModeratedByAppInstanceUserResult.h>
#include <aws/chime/model/DescribeChannelModeratorResult.h>
#include <aws/chime/model/DisassociatePhoneNumberFromUserResult.h>
#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorResult.h>
#include <aws/chime/model/DisassociatePhoneNumbersFromVoiceConnectorGroupResult.h>
#include <aws/chime/model/DisassociateSigninDelegateGroupsFromAccountResult.h>
#include <aws/chime/model/GetAccountResult.h>
#include <aws/chime/model/GetAccountSettingsResult.h>
#include <aws/chime/model/GetAppInstanceRetentionSettingsResult.h>
#include <aws/chime/model/GetAppInstanceStreamingConfigurationsResult.h>
#include <aws/chime/model/GetAttendeeResult.h>
#include <aws/chime/model/GetBotResult.h>
#include <aws/chime/model/GetChannelMessageResult.h>
#include <aws/chime/model/GetEventsConfigurationResult.h>
#include <aws/chime/model/GetGlobalSettingsResult.h>
#include <aws/chime/model/GetMeetingResult.h>
#include <aws/chime/model/GetMessagingSessionEndpointResult.h>
#include <aws/chime/model/GetPhoneNumberResult.h>
#include <aws/chime/model/GetPhoneNumberOrderResult.h>
#include <aws/chime/model/GetPhoneNumberSettingsResult.h>
#include <aws/chime/model/GetProxySessionResult.h>
#include <aws/chime/model/GetRetentionSettingsResult.h>
#include <aws/chime/model/GetRoomResult.h>
#include <aws/chime/model/GetSipMediaApplicationResult.h>
#include <aws/chime/model/GetSipMediaApplicationLoggingConfigurationResult.h>
#include <aws/chime/model/GetSipRuleResult.h>
#include <aws/chime/model/GetUserResult.h>
#include <aws/chime/model/GetUserSettingsResult.h>
#include <aws/chime/model/GetVoiceConnectorResult.h>
#include <aws/chime/model/GetVoiceConnectorEmergencyCallingConfigurationResult.h>
#include <aws/chime/model/GetVoiceConnectorGroupResult.h>
#include <aws/chime/model/GetVoiceConnectorLoggingConfigurationResult.h>
#include <aws/chime/model/GetVoiceConnectorOriginationResult.h>
#include <aws/chime/model/GetVoiceConnectorProxyResult.h>
#include <aws/chime/model/GetVoiceConnectorStreamingConfigurationResult.h>
#include <aws/chime/model/GetVoiceConnectorTerminationResult.h>
#include <aws/chime/model/GetVoiceConnectorTerminationHealthResult.h>
#include <aws/chime/model/InviteUsersResult.h>
#include <aws/chime/model/ListAccountsResult.h>
#include <aws/chime/model/ListAppInstanceAdminsResult.h>
#include <aws/chime/model/ListAppInstanceUsersResult.h>
#include <aws/chime/model/ListAppInstancesResult.h>
#include <aws/chime/model/ListAttendeeTagsResult.h>
#include <aws/chime/model/ListAttendeesResult.h>
#include <aws/chime/model/ListBotsResult.h>
#include <aws/chime/model/ListChannelBansResult.h>
#include <aws/chime/model/ListChannelMembershipsResult.h>
#include <aws/chime/model/ListChannelMembershipsForAppInstanceUserResult.h>
#include <aws/chime/model/ListChannelMessagesResult.h>
#include <aws/chime/model/ListChannelModeratorsResult.h>
#include <aws/chime/model/ListChannelsResult.h>
#include <aws/chime/model/ListChannelsModeratedByAppInstanceUserResult.h>
#include <aws/chime/model/ListMeetingTagsResult.h>
#include <aws/chime/model/ListMeetingsResult.h>
#include <aws/chime/model/ListPhoneNumberOrdersResult.h>
#include <aws/chime/model/ListPhoneNumbersResult.h>
#include <aws/chime/model/ListProxySessionsResult.h>
#include <aws/chime/model/ListRoomMembershipsResult.h>
#include <aws/chime/model/ListRoomsResult.h>
#include <aws/chime/model/ListSipMediaApplicationsResult.h>
#include <aws/chime/model/ListSipRulesResult.h>
#include <aws/chime/model/ListTagsForResourceResult.h>
#include <aws/chime/model/ListUsersResult.h>
#include <aws/chime/model/ListVoiceConnectorGroupsResult.h>
#include <aws/chime/model/ListVoiceConnectorTerminationCredentialsResult.h>
#include <aws/chime/model/ListVoiceConnectorsResult.h>
#include <aws/chime/model/LogoutUserResult.h>
#include <aws/chime/model/PutAppInstanceRetentionSettingsResult.h>
#include <aws/chime/model/PutAppInstanceStreamingConfigurationsResult.h>
#include <aws/chime/model/PutEventsConfigurationResult.h>
#include <aws/chime/model/PutRetentionSettingsResult.h>
#include <aws/chime/model/PutSipMediaApplicationLoggingConfigurationResult.h>
#include <aws/chime/model/PutVoiceConnectorEmergencyCallingConfigurationResult.h>
#include <aws/chime/model/PutVoiceConnectorLoggingConfigurationResult.h>
#include <aws/chime/model/PutVoiceConnectorOriginationResult.h>
#include <aws/chime/model/PutVoiceConnectorProxyResult.h>
#include <aws/chime/model/PutVoiceConnectorStreamingConfigurationResult.h>
#include <aws/chime/model/PutVoiceConnectorTerminationResult.h>
#include <aws/chime/model/RedactChannelMessageResult.h>
#include <aws/chime/model/RedactConversationMessageResult.h>
#include <aws/chime/model/RedactRoomMessageResult.h>
#include <aws/chime/model/RegenerateSecurityTokenResult.h>
#include <aws/chime/model/ResetPersonalPINResult.h>
#include <aws/chime/model/RestorePhoneNumberResult.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersResult.h>
#include <aws/chime/model/SendChannelMessageResult.h>
#include <aws/chime/model/UpdateAccountResult.h>
#include <aws/chime/model/UpdateAccountSettingsResult.h>
#include <aws/chime/model/UpdateAppInstanceResult.h>
#include <aws/chime/model/UpdateAppInstanceUserResult.h>
#include <aws/chime/model/UpdateBotResult.h>
#include <aws/chime/model/UpdateChannelResult.h>
#include <aws/chime/model/UpdateChannelMessageResult.h>
#include <aws/chime/model/UpdateChannelReadMarkerResult.h>
#include <aws/chime/model/UpdatePhoneNumberResult.h>
#include <aws/chime/model/UpdateProxySessionResult.h>
#include <aws/chime/model/UpdateRoomResult.h>
#include <aws/chime/model/UpdateRoomMembershipResult.h>
#include <aws/chime/model/UpdateSipMediaApplicationResult.h>
#include <aws/chime/model/UpdateSipRuleResult.h>
#include <aws/chime/model/UpdateUserResult.h>
#include <aws/chime/model/UpdateVoiceConnectorResult.h>
#include <aws/chime/model/UpdateVoiceConnectorGroupResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Chime
{

namespace Model
{
        class AssociatePhoneNumberWithUserRequest;
        class AssociatePhoneNumbersWithVoiceConnectorRequest;
        class AssociatePhoneNumbersWithVoiceConnectorGroupRequest;
        class AssociateSigninDelegateGroupsWithAccountRequest;
        class BatchCreateAttendeeRequest;
        class BatchCreateRoomMembershipRequest;
        class BatchDeletePhoneNumberRequest;
        class BatchSuspendUserRequest;
        class BatchUnsuspendUserRequest;
        class BatchUpdatePhoneNumberRequest;
        class BatchUpdateUserRequest;
        class CreateAccountRequest;
        class CreateAppInstanceRequest;
        class CreateAppInstanceAdminRequest;
        class CreateAppInstanceUserRequest;
        class CreateAttendeeRequest;
        class CreateBotRequest;
        class CreateChannelRequest;
        class CreateChannelBanRequest;
        class CreateChannelMembershipRequest;
        class CreateChannelModeratorRequest;
        class CreateMeetingRequest;
        class CreateMeetingDialOutRequest;
        class CreateMeetingWithAttendeesRequest;
        class CreatePhoneNumberOrderRequest;
        class CreateProxySessionRequest;
        class CreateRoomRequest;
        class CreateRoomMembershipRequest;
        class CreateSipMediaApplicationRequest;
        class CreateSipMediaApplicationCallRequest;
        class CreateSipRuleRequest;
        class CreateUserRequest;
        class CreateVoiceConnectorRequest;
        class CreateVoiceConnectorGroupRequest;
        class DeleteAccountRequest;
        class DeleteAppInstanceRequest;
        class DeleteAppInstanceAdminRequest;
        class DeleteAppInstanceStreamingConfigurationsRequest;
        class DeleteAppInstanceUserRequest;
        class DeleteAttendeeRequest;
        class DeleteChannelRequest;
        class DeleteChannelBanRequest;
        class DeleteChannelMembershipRequest;
        class DeleteChannelMessageRequest;
        class DeleteChannelModeratorRequest;
        class DeleteEventsConfigurationRequest;
        class DeleteMeetingRequest;
        class DeletePhoneNumberRequest;
        class DeleteProxySessionRequest;
        class DeleteRoomRequest;
        class DeleteRoomMembershipRequest;
        class DeleteSipMediaApplicationRequest;
        class DeleteSipRuleRequest;
        class DeleteVoiceConnectorRequest;
        class DeleteVoiceConnectorEmergencyCallingConfigurationRequest;
        class DeleteVoiceConnectorGroupRequest;
        class DeleteVoiceConnectorOriginationRequest;
        class DeleteVoiceConnectorProxyRequest;
        class DeleteVoiceConnectorStreamingConfigurationRequest;
        class DeleteVoiceConnectorTerminationRequest;
        class DeleteVoiceConnectorTerminationCredentialsRequest;
        class DescribeAppInstanceRequest;
        class DescribeAppInstanceAdminRequest;
        class DescribeAppInstanceUserRequest;
        class DescribeChannelRequest;
        class DescribeChannelBanRequest;
        class DescribeChannelMembershipRequest;
        class DescribeChannelMembershipForAppInstanceUserRequest;
        class DescribeChannelModeratedByAppInstanceUserRequest;
        class DescribeChannelModeratorRequest;
        class DisassociatePhoneNumberFromUserRequest;
        class DisassociatePhoneNumbersFromVoiceConnectorRequest;
        class DisassociatePhoneNumbersFromVoiceConnectorGroupRequest;
        class DisassociateSigninDelegateGroupsFromAccountRequest;
        class GetAccountRequest;
        class GetAccountSettingsRequest;
        class GetAppInstanceRetentionSettingsRequest;
        class GetAppInstanceStreamingConfigurationsRequest;
        class GetAttendeeRequest;
        class GetBotRequest;
        class GetChannelMessageRequest;
        class GetEventsConfigurationRequest;
        class GetMeetingRequest;
        class GetMessagingSessionEndpointRequest;
        class GetPhoneNumberRequest;
        class GetPhoneNumberOrderRequest;
        class GetProxySessionRequest;
        class GetRetentionSettingsRequest;
        class GetRoomRequest;
        class GetSipMediaApplicationRequest;
        class GetSipMediaApplicationLoggingConfigurationRequest;
        class GetSipRuleRequest;
        class GetUserRequest;
        class GetUserSettingsRequest;
        class GetVoiceConnectorRequest;
        class GetVoiceConnectorEmergencyCallingConfigurationRequest;
        class GetVoiceConnectorGroupRequest;
        class GetVoiceConnectorLoggingConfigurationRequest;
        class GetVoiceConnectorOriginationRequest;
        class GetVoiceConnectorProxyRequest;
        class GetVoiceConnectorStreamingConfigurationRequest;
        class GetVoiceConnectorTerminationRequest;
        class GetVoiceConnectorTerminationHealthRequest;
        class InviteUsersRequest;
        class ListAccountsRequest;
        class ListAppInstanceAdminsRequest;
        class ListAppInstanceUsersRequest;
        class ListAppInstancesRequest;
        class ListAttendeeTagsRequest;
        class ListAttendeesRequest;
        class ListBotsRequest;
        class ListChannelBansRequest;
        class ListChannelMembershipsRequest;
        class ListChannelMembershipsForAppInstanceUserRequest;
        class ListChannelMessagesRequest;
        class ListChannelModeratorsRequest;
        class ListChannelsRequest;
        class ListChannelsModeratedByAppInstanceUserRequest;
        class ListMeetingTagsRequest;
        class ListMeetingsRequest;
        class ListPhoneNumberOrdersRequest;
        class ListPhoneNumbersRequest;
        class ListProxySessionsRequest;
        class ListRoomMembershipsRequest;
        class ListRoomsRequest;
        class ListSipMediaApplicationsRequest;
        class ListSipRulesRequest;
        class ListTagsForResourceRequest;
        class ListUsersRequest;
        class ListVoiceConnectorGroupsRequest;
        class ListVoiceConnectorTerminationCredentialsRequest;
        class ListVoiceConnectorsRequest;
        class LogoutUserRequest;
        class PutAppInstanceRetentionSettingsRequest;
        class PutAppInstanceStreamingConfigurationsRequest;
        class PutEventsConfigurationRequest;
        class PutRetentionSettingsRequest;
        class PutSipMediaApplicationLoggingConfigurationRequest;
        class PutVoiceConnectorEmergencyCallingConfigurationRequest;
        class PutVoiceConnectorLoggingConfigurationRequest;
        class PutVoiceConnectorOriginationRequest;
        class PutVoiceConnectorProxyRequest;
        class PutVoiceConnectorStreamingConfigurationRequest;
        class PutVoiceConnectorTerminationRequest;
        class PutVoiceConnectorTerminationCredentialsRequest;
        class RedactChannelMessageRequest;
        class RedactConversationMessageRequest;
        class RedactRoomMessageRequest;
        class RegenerateSecurityTokenRequest;
        class ResetPersonalPINRequest;
        class RestorePhoneNumberRequest;
        class SearchAvailablePhoneNumbersRequest;
        class SendChannelMessageRequest;
        class TagAttendeeRequest;
        class TagMeetingRequest;
        class TagResourceRequest;
        class UntagAttendeeRequest;
        class UntagMeetingRequest;
        class UntagResourceRequest;
        class UpdateAccountRequest;
        class UpdateAccountSettingsRequest;
        class UpdateAppInstanceRequest;
        class UpdateAppInstanceUserRequest;
        class UpdateBotRequest;
        class UpdateChannelRequest;
        class UpdateChannelMessageRequest;
        class UpdateChannelReadMarkerRequest;
        class UpdateGlobalSettingsRequest;
        class UpdatePhoneNumberRequest;
        class UpdatePhoneNumberSettingsRequest;
        class UpdateProxySessionRequest;
        class UpdateRoomRequest;
        class UpdateRoomMembershipRequest;
        class UpdateSipMediaApplicationRequest;
        class UpdateSipRuleRequest;
        class UpdateUserRequest;
        class UpdateUserSettingsRequest;
        class UpdateVoiceConnectorRequest;
        class UpdateVoiceConnectorGroupRequest;

        typedef Aws::Utils::Outcome<AssociatePhoneNumberWithUserResult, ChimeError> AssociatePhoneNumberWithUserOutcome;
        typedef Aws::Utils::Outcome<AssociatePhoneNumbersWithVoiceConnectorResult, ChimeError> AssociatePhoneNumbersWithVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<AssociatePhoneNumbersWithVoiceConnectorGroupResult, ChimeError> AssociatePhoneNumbersWithVoiceConnectorGroupOutcome;
        typedef Aws::Utils::Outcome<AssociateSigninDelegateGroupsWithAccountResult, ChimeError> AssociateSigninDelegateGroupsWithAccountOutcome;
        typedef Aws::Utils::Outcome<BatchCreateAttendeeResult, ChimeError> BatchCreateAttendeeOutcome;
        typedef Aws::Utils::Outcome<BatchCreateRoomMembershipResult, ChimeError> BatchCreateRoomMembershipOutcome;
        typedef Aws::Utils::Outcome<BatchDeletePhoneNumberResult, ChimeError> BatchDeletePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<BatchSuspendUserResult, ChimeError> BatchSuspendUserOutcome;
        typedef Aws::Utils::Outcome<BatchUnsuspendUserResult, ChimeError> BatchUnsuspendUserOutcome;
        typedef Aws::Utils::Outcome<BatchUpdatePhoneNumberResult, ChimeError> BatchUpdatePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<BatchUpdateUserResult, ChimeError> BatchUpdateUserOutcome;
        typedef Aws::Utils::Outcome<CreateAccountResult, ChimeError> CreateAccountOutcome;
        typedef Aws::Utils::Outcome<CreateAppInstanceResult, ChimeError> CreateAppInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateAppInstanceAdminResult, ChimeError> CreateAppInstanceAdminOutcome;
        typedef Aws::Utils::Outcome<CreateAppInstanceUserResult, ChimeError> CreateAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<CreateAttendeeResult, ChimeError> CreateAttendeeOutcome;
        typedef Aws::Utils::Outcome<CreateBotResult, ChimeError> CreateBotOutcome;
        typedef Aws::Utils::Outcome<CreateChannelResult, ChimeError> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateChannelBanResult, ChimeError> CreateChannelBanOutcome;
        typedef Aws::Utils::Outcome<CreateChannelMembershipResult, ChimeError> CreateChannelMembershipOutcome;
        typedef Aws::Utils::Outcome<CreateChannelModeratorResult, ChimeError> CreateChannelModeratorOutcome;
        typedef Aws::Utils::Outcome<CreateMeetingResult, ChimeError> CreateMeetingOutcome;
        typedef Aws::Utils::Outcome<CreateMeetingDialOutResult, ChimeError> CreateMeetingDialOutOutcome;
        typedef Aws::Utils::Outcome<CreateMeetingWithAttendeesResult, ChimeError> CreateMeetingWithAttendeesOutcome;
        typedef Aws::Utils::Outcome<CreatePhoneNumberOrderResult, ChimeError> CreatePhoneNumberOrderOutcome;
        typedef Aws::Utils::Outcome<CreateProxySessionResult, ChimeError> CreateProxySessionOutcome;
        typedef Aws::Utils::Outcome<CreateRoomResult, ChimeError> CreateRoomOutcome;
        typedef Aws::Utils::Outcome<CreateRoomMembershipResult, ChimeError> CreateRoomMembershipOutcome;
        typedef Aws::Utils::Outcome<CreateSipMediaApplicationResult, ChimeError> CreateSipMediaApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateSipMediaApplicationCallResult, ChimeError> CreateSipMediaApplicationCallOutcome;
        typedef Aws::Utils::Outcome<CreateSipRuleResult, ChimeError> CreateSipRuleOutcome;
        typedef Aws::Utils::Outcome<CreateUserResult, ChimeError> CreateUserOutcome;
        typedef Aws::Utils::Outcome<CreateVoiceConnectorResult, ChimeError> CreateVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<CreateVoiceConnectorGroupResult, ChimeError> CreateVoiceConnectorGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteAccountResult, ChimeError> DeleteAccountOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteAppInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteAppInstanceAdminOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteAppInstanceStreamingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteAttendeeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteChannelBanOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteChannelMembershipOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteChannelMessageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteChannelModeratorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteEventsConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteMeetingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeletePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteProxySessionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteRoomOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteRoomMembershipOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteSipMediaApplicationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteSipRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorEmergencyCallingConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorOriginationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorProxyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorStreamingConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorTerminationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteVoiceConnectorTerminationCredentialsOutcome;
        typedef Aws::Utils::Outcome<DescribeAppInstanceResult, ChimeError> DescribeAppInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeAppInstanceAdminResult, ChimeError> DescribeAppInstanceAdminOutcome;
        typedef Aws::Utils::Outcome<DescribeAppInstanceUserResult, ChimeError> DescribeAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelResult, ChimeError> DescribeChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelBanResult, ChimeError> DescribeChannelBanOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelMembershipResult, ChimeError> DescribeChannelMembershipOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelMembershipForAppInstanceUserResult, ChimeError> DescribeChannelMembershipForAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelModeratedByAppInstanceUserResult, ChimeError> DescribeChannelModeratedByAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<DescribeChannelModeratorResult, ChimeError> DescribeChannelModeratorOutcome;
        typedef Aws::Utils::Outcome<DisassociatePhoneNumberFromUserResult, ChimeError> DisassociatePhoneNumberFromUserOutcome;
        typedef Aws::Utils::Outcome<DisassociatePhoneNumbersFromVoiceConnectorResult, ChimeError> DisassociatePhoneNumbersFromVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<DisassociatePhoneNumbersFromVoiceConnectorGroupResult, ChimeError> DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome;
        typedef Aws::Utils::Outcome<DisassociateSigninDelegateGroupsFromAccountResult, ChimeError> DisassociateSigninDelegateGroupsFromAccountOutcome;
        typedef Aws::Utils::Outcome<GetAccountResult, ChimeError> GetAccountOutcome;
        typedef Aws::Utils::Outcome<GetAccountSettingsResult, ChimeError> GetAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<GetAppInstanceRetentionSettingsResult, ChimeError> GetAppInstanceRetentionSettingsOutcome;
        typedef Aws::Utils::Outcome<GetAppInstanceStreamingConfigurationsResult, ChimeError> GetAppInstanceStreamingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<GetAttendeeResult, ChimeError> GetAttendeeOutcome;
        typedef Aws::Utils::Outcome<GetBotResult, ChimeError> GetBotOutcome;
        typedef Aws::Utils::Outcome<GetChannelMessageResult, ChimeError> GetChannelMessageOutcome;
        typedef Aws::Utils::Outcome<GetEventsConfigurationResult, ChimeError> GetEventsConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetGlobalSettingsResult, ChimeError> GetGlobalSettingsOutcome;
        typedef Aws::Utils::Outcome<GetMeetingResult, ChimeError> GetMeetingOutcome;
        typedef Aws::Utils::Outcome<GetMessagingSessionEndpointResult, ChimeError> GetMessagingSessionEndpointOutcome;
        typedef Aws::Utils::Outcome<GetPhoneNumberResult, ChimeError> GetPhoneNumberOutcome;
        typedef Aws::Utils::Outcome<GetPhoneNumberOrderResult, ChimeError> GetPhoneNumberOrderOutcome;
        typedef Aws::Utils::Outcome<GetPhoneNumberSettingsResult, ChimeError> GetPhoneNumberSettingsOutcome;
        typedef Aws::Utils::Outcome<GetProxySessionResult, ChimeError> GetProxySessionOutcome;
        typedef Aws::Utils::Outcome<GetRetentionSettingsResult, ChimeError> GetRetentionSettingsOutcome;
        typedef Aws::Utils::Outcome<GetRoomResult, ChimeError> GetRoomOutcome;
        typedef Aws::Utils::Outcome<GetSipMediaApplicationResult, ChimeError> GetSipMediaApplicationOutcome;
        typedef Aws::Utils::Outcome<GetSipMediaApplicationLoggingConfigurationResult, ChimeError> GetSipMediaApplicationLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetSipRuleResult, ChimeError> GetSipRuleOutcome;
        typedef Aws::Utils::Outcome<GetUserResult, ChimeError> GetUserOutcome;
        typedef Aws::Utils::Outcome<GetUserSettingsResult, ChimeError> GetUserSettingsOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorResult, ChimeError> GetVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorEmergencyCallingConfigurationResult, ChimeError> GetVoiceConnectorEmergencyCallingConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorGroupResult, ChimeError> GetVoiceConnectorGroupOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorLoggingConfigurationResult, ChimeError> GetVoiceConnectorLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorOriginationResult, ChimeError> GetVoiceConnectorOriginationOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorProxyResult, ChimeError> GetVoiceConnectorProxyOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorStreamingConfigurationResult, ChimeError> GetVoiceConnectorStreamingConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorTerminationResult, ChimeError> GetVoiceConnectorTerminationOutcome;
        typedef Aws::Utils::Outcome<GetVoiceConnectorTerminationHealthResult, ChimeError> GetVoiceConnectorTerminationHealthOutcome;
        typedef Aws::Utils::Outcome<InviteUsersResult, ChimeError> InviteUsersOutcome;
        typedef Aws::Utils::Outcome<ListAccountsResult, ChimeError> ListAccountsOutcome;
        typedef Aws::Utils::Outcome<ListAppInstanceAdminsResult, ChimeError> ListAppInstanceAdminsOutcome;
        typedef Aws::Utils::Outcome<ListAppInstanceUsersResult, ChimeError> ListAppInstanceUsersOutcome;
        typedef Aws::Utils::Outcome<ListAppInstancesResult, ChimeError> ListAppInstancesOutcome;
        typedef Aws::Utils::Outcome<ListAttendeeTagsResult, ChimeError> ListAttendeeTagsOutcome;
        typedef Aws::Utils::Outcome<ListAttendeesResult, ChimeError> ListAttendeesOutcome;
        typedef Aws::Utils::Outcome<ListBotsResult, ChimeError> ListBotsOutcome;
        typedef Aws::Utils::Outcome<ListChannelBansResult, ChimeError> ListChannelBansOutcome;
        typedef Aws::Utils::Outcome<ListChannelMembershipsResult, ChimeError> ListChannelMembershipsOutcome;
        typedef Aws::Utils::Outcome<ListChannelMembershipsForAppInstanceUserResult, ChimeError> ListChannelMembershipsForAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<ListChannelMessagesResult, ChimeError> ListChannelMessagesOutcome;
        typedef Aws::Utils::Outcome<ListChannelModeratorsResult, ChimeError> ListChannelModeratorsOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, ChimeError> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListChannelsModeratedByAppInstanceUserResult, ChimeError> ListChannelsModeratedByAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<ListMeetingTagsResult, ChimeError> ListMeetingTagsOutcome;
        typedef Aws::Utils::Outcome<ListMeetingsResult, ChimeError> ListMeetingsOutcome;
        typedef Aws::Utils::Outcome<ListPhoneNumberOrdersResult, ChimeError> ListPhoneNumberOrdersOutcome;
        typedef Aws::Utils::Outcome<ListPhoneNumbersResult, ChimeError> ListPhoneNumbersOutcome;
        typedef Aws::Utils::Outcome<ListProxySessionsResult, ChimeError> ListProxySessionsOutcome;
        typedef Aws::Utils::Outcome<ListRoomMembershipsResult, ChimeError> ListRoomMembershipsOutcome;
        typedef Aws::Utils::Outcome<ListRoomsResult, ChimeError> ListRoomsOutcome;
        typedef Aws::Utils::Outcome<ListSipMediaApplicationsResult, ChimeError> ListSipMediaApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListSipRulesResult, ChimeError> ListSipRulesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ChimeError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListUsersResult, ChimeError> ListUsersOutcome;
        typedef Aws::Utils::Outcome<ListVoiceConnectorGroupsResult, ChimeError> ListVoiceConnectorGroupsOutcome;
        typedef Aws::Utils::Outcome<ListVoiceConnectorTerminationCredentialsResult, ChimeError> ListVoiceConnectorTerminationCredentialsOutcome;
        typedef Aws::Utils::Outcome<ListVoiceConnectorsResult, ChimeError> ListVoiceConnectorsOutcome;
        typedef Aws::Utils::Outcome<LogoutUserResult, ChimeError> LogoutUserOutcome;
        typedef Aws::Utils::Outcome<PutAppInstanceRetentionSettingsResult, ChimeError> PutAppInstanceRetentionSettingsOutcome;
        typedef Aws::Utils::Outcome<PutAppInstanceStreamingConfigurationsResult, ChimeError> PutAppInstanceStreamingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<PutEventsConfigurationResult, ChimeError> PutEventsConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutRetentionSettingsResult, ChimeError> PutRetentionSettingsOutcome;
        typedef Aws::Utils::Outcome<PutSipMediaApplicationLoggingConfigurationResult, ChimeError> PutSipMediaApplicationLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorEmergencyCallingConfigurationResult, ChimeError> PutVoiceConnectorEmergencyCallingConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorLoggingConfigurationResult, ChimeError> PutVoiceConnectorLoggingConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorOriginationResult, ChimeError> PutVoiceConnectorOriginationOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorProxyResult, ChimeError> PutVoiceConnectorProxyOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorStreamingConfigurationResult, ChimeError> PutVoiceConnectorStreamingConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutVoiceConnectorTerminationResult, ChimeError> PutVoiceConnectorTerminationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> PutVoiceConnectorTerminationCredentialsOutcome;
        typedef Aws::Utils::Outcome<RedactChannelMessageResult, ChimeError> RedactChannelMessageOutcome;
        typedef Aws::Utils::Outcome<RedactConversationMessageResult, ChimeError> RedactConversationMessageOutcome;
        typedef Aws::Utils::Outcome<RedactRoomMessageResult, ChimeError> RedactRoomMessageOutcome;
        typedef Aws::Utils::Outcome<RegenerateSecurityTokenResult, ChimeError> RegenerateSecurityTokenOutcome;
        typedef Aws::Utils::Outcome<ResetPersonalPINResult, ChimeError> ResetPersonalPINOutcome;
        typedef Aws::Utils::Outcome<RestorePhoneNumberResult, ChimeError> RestorePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<SearchAvailablePhoneNumbersResult, ChimeError> SearchAvailablePhoneNumbersOutcome;
        typedef Aws::Utils::Outcome<SendChannelMessageResult, ChimeError> SendChannelMessageOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> TagAttendeeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> TagMeetingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UntagAttendeeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UntagMeetingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAccountResult, ChimeError> UpdateAccountOutcome;
        typedef Aws::Utils::Outcome<UpdateAccountSettingsResult, ChimeError> UpdateAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateAppInstanceResult, ChimeError> UpdateAppInstanceOutcome;
        typedef Aws::Utils::Outcome<UpdateAppInstanceUserResult, ChimeError> UpdateAppInstanceUserOutcome;
        typedef Aws::Utils::Outcome<UpdateBotResult, ChimeError> UpdateBotOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelResult, ChimeError> UpdateChannelOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelMessageResult, ChimeError> UpdateChannelMessageOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelReadMarkerResult, ChimeError> UpdateChannelReadMarkerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UpdateGlobalSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdatePhoneNumberResult, ChimeError> UpdatePhoneNumberOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UpdatePhoneNumberSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateProxySessionResult, ChimeError> UpdateProxySessionOutcome;
        typedef Aws::Utils::Outcome<UpdateRoomResult, ChimeError> UpdateRoomOutcome;
        typedef Aws::Utils::Outcome<UpdateRoomMembershipResult, ChimeError> UpdateRoomMembershipOutcome;
        typedef Aws::Utils::Outcome<UpdateSipMediaApplicationResult, ChimeError> UpdateSipMediaApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateSipRuleResult, ChimeError> UpdateSipRuleOutcome;
        typedef Aws::Utils::Outcome<UpdateUserResult, ChimeError> UpdateUserOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UpdateUserSettingsOutcome;
        typedef Aws::Utils::Outcome<UpdateVoiceConnectorResult, ChimeError> UpdateVoiceConnectorOutcome;
        typedef Aws::Utils::Outcome<UpdateVoiceConnectorGroupResult, ChimeError> UpdateVoiceConnectorGroupOutcome;

        typedef std::future<AssociatePhoneNumberWithUserOutcome> AssociatePhoneNumberWithUserOutcomeCallable;
        typedef std::future<AssociatePhoneNumbersWithVoiceConnectorOutcome> AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable;
        typedef std::future<AssociatePhoneNumbersWithVoiceConnectorGroupOutcome> AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable;
        typedef std::future<AssociateSigninDelegateGroupsWithAccountOutcome> AssociateSigninDelegateGroupsWithAccountOutcomeCallable;
        typedef std::future<BatchCreateAttendeeOutcome> BatchCreateAttendeeOutcomeCallable;
        typedef std::future<BatchCreateRoomMembershipOutcome> BatchCreateRoomMembershipOutcomeCallable;
        typedef std::future<BatchDeletePhoneNumberOutcome> BatchDeletePhoneNumberOutcomeCallable;
        typedef std::future<BatchSuspendUserOutcome> BatchSuspendUserOutcomeCallable;
        typedef std::future<BatchUnsuspendUserOutcome> BatchUnsuspendUserOutcomeCallable;
        typedef std::future<BatchUpdatePhoneNumberOutcome> BatchUpdatePhoneNumberOutcomeCallable;
        typedef std::future<BatchUpdateUserOutcome> BatchUpdateUserOutcomeCallable;
        typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
        typedef std::future<CreateAppInstanceOutcome> CreateAppInstanceOutcomeCallable;
        typedef std::future<CreateAppInstanceAdminOutcome> CreateAppInstanceAdminOutcomeCallable;
        typedef std::future<CreateAppInstanceUserOutcome> CreateAppInstanceUserOutcomeCallable;
        typedef std::future<CreateAttendeeOutcome> CreateAttendeeOutcomeCallable;
        typedef std::future<CreateBotOutcome> CreateBotOutcomeCallable;
        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateChannelBanOutcome> CreateChannelBanOutcomeCallable;
        typedef std::future<CreateChannelMembershipOutcome> CreateChannelMembershipOutcomeCallable;
        typedef std::future<CreateChannelModeratorOutcome> CreateChannelModeratorOutcomeCallable;
        typedef std::future<CreateMeetingOutcome> CreateMeetingOutcomeCallable;
        typedef std::future<CreateMeetingDialOutOutcome> CreateMeetingDialOutOutcomeCallable;
        typedef std::future<CreateMeetingWithAttendeesOutcome> CreateMeetingWithAttendeesOutcomeCallable;
        typedef std::future<CreatePhoneNumberOrderOutcome> CreatePhoneNumberOrderOutcomeCallable;
        typedef std::future<CreateProxySessionOutcome> CreateProxySessionOutcomeCallable;
        typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
        typedef std::future<CreateRoomMembershipOutcome> CreateRoomMembershipOutcomeCallable;
        typedef std::future<CreateSipMediaApplicationOutcome> CreateSipMediaApplicationOutcomeCallable;
        typedef std::future<CreateSipMediaApplicationCallOutcome> CreateSipMediaApplicationCallOutcomeCallable;
        typedef std::future<CreateSipRuleOutcome> CreateSipRuleOutcomeCallable;
        typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
        typedef std::future<CreateVoiceConnectorOutcome> CreateVoiceConnectorOutcomeCallable;
        typedef std::future<CreateVoiceConnectorGroupOutcome> CreateVoiceConnectorGroupOutcomeCallable;
        typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
        typedef std::future<DeleteAppInstanceOutcome> DeleteAppInstanceOutcomeCallable;
        typedef std::future<DeleteAppInstanceAdminOutcome> DeleteAppInstanceAdminOutcomeCallable;
        typedef std::future<DeleteAppInstanceStreamingConfigurationsOutcome> DeleteAppInstanceStreamingConfigurationsOutcomeCallable;
        typedef std::future<DeleteAppInstanceUserOutcome> DeleteAppInstanceUserOutcomeCallable;
        typedef std::future<DeleteAttendeeOutcome> DeleteAttendeeOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeleteChannelBanOutcome> DeleteChannelBanOutcomeCallable;
        typedef std::future<DeleteChannelMembershipOutcome> DeleteChannelMembershipOutcomeCallable;
        typedef std::future<DeleteChannelMessageOutcome> DeleteChannelMessageOutcomeCallable;
        typedef std::future<DeleteChannelModeratorOutcome> DeleteChannelModeratorOutcomeCallable;
        typedef std::future<DeleteEventsConfigurationOutcome> DeleteEventsConfigurationOutcomeCallable;
        typedef std::future<DeleteMeetingOutcome> DeleteMeetingOutcomeCallable;
        typedef std::future<DeletePhoneNumberOutcome> DeletePhoneNumberOutcomeCallable;
        typedef std::future<DeleteProxySessionOutcome> DeleteProxySessionOutcomeCallable;
        typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
        typedef std::future<DeleteRoomMembershipOutcome> DeleteRoomMembershipOutcomeCallable;
        typedef std::future<DeleteSipMediaApplicationOutcome> DeleteSipMediaApplicationOutcomeCallable;
        typedef std::future<DeleteSipRuleOutcome> DeleteSipRuleOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorOutcome> DeleteVoiceConnectorOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorEmergencyCallingConfigurationOutcome> DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorGroupOutcome> DeleteVoiceConnectorGroupOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorOriginationOutcome> DeleteVoiceConnectorOriginationOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorProxyOutcome> DeleteVoiceConnectorProxyOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorStreamingConfigurationOutcome> DeleteVoiceConnectorStreamingConfigurationOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorTerminationOutcome> DeleteVoiceConnectorTerminationOutcomeCallable;
        typedef std::future<DeleteVoiceConnectorTerminationCredentialsOutcome> DeleteVoiceConnectorTerminationCredentialsOutcomeCallable;
        typedef std::future<DescribeAppInstanceOutcome> DescribeAppInstanceOutcomeCallable;
        typedef std::future<DescribeAppInstanceAdminOutcome> DescribeAppInstanceAdminOutcomeCallable;
        typedef std::future<DescribeAppInstanceUserOutcome> DescribeAppInstanceUserOutcomeCallable;
        typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
        typedef std::future<DescribeChannelBanOutcome> DescribeChannelBanOutcomeCallable;
        typedef std::future<DescribeChannelMembershipOutcome> DescribeChannelMembershipOutcomeCallable;
        typedef std::future<DescribeChannelMembershipForAppInstanceUserOutcome> DescribeChannelMembershipForAppInstanceUserOutcomeCallable;
        typedef std::future<DescribeChannelModeratedByAppInstanceUserOutcome> DescribeChannelModeratedByAppInstanceUserOutcomeCallable;
        typedef std::future<DescribeChannelModeratorOutcome> DescribeChannelModeratorOutcomeCallable;
        typedef std::future<DisassociatePhoneNumberFromUserOutcome> DisassociatePhoneNumberFromUserOutcomeCallable;
        typedef std::future<DisassociatePhoneNumbersFromVoiceConnectorOutcome> DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable;
        typedef std::future<DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome> DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable;
        typedef std::future<DisassociateSigninDelegateGroupsFromAccountOutcome> DisassociateSigninDelegateGroupsFromAccountOutcomeCallable;
        typedef std::future<GetAccountOutcome> GetAccountOutcomeCallable;
        typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
        typedef std::future<GetAppInstanceRetentionSettingsOutcome> GetAppInstanceRetentionSettingsOutcomeCallable;
        typedef std::future<GetAppInstanceStreamingConfigurationsOutcome> GetAppInstanceStreamingConfigurationsOutcomeCallable;
        typedef std::future<GetAttendeeOutcome> GetAttendeeOutcomeCallable;
        typedef std::future<GetBotOutcome> GetBotOutcomeCallable;
        typedef std::future<GetChannelMessageOutcome> GetChannelMessageOutcomeCallable;
        typedef std::future<GetEventsConfigurationOutcome> GetEventsConfigurationOutcomeCallable;
        typedef std::future<GetGlobalSettingsOutcome> GetGlobalSettingsOutcomeCallable;
        typedef std::future<GetMeetingOutcome> GetMeetingOutcomeCallable;
        typedef std::future<GetMessagingSessionEndpointOutcome> GetMessagingSessionEndpointOutcomeCallable;
        typedef std::future<GetPhoneNumberOutcome> GetPhoneNumberOutcomeCallable;
        typedef std::future<GetPhoneNumberOrderOutcome> GetPhoneNumberOrderOutcomeCallable;
        typedef std::future<GetPhoneNumberSettingsOutcome> GetPhoneNumberSettingsOutcomeCallable;
        typedef std::future<GetProxySessionOutcome> GetProxySessionOutcomeCallable;
        typedef std::future<GetRetentionSettingsOutcome> GetRetentionSettingsOutcomeCallable;
        typedef std::future<GetRoomOutcome> GetRoomOutcomeCallable;
        typedef std::future<GetSipMediaApplicationOutcome> GetSipMediaApplicationOutcomeCallable;
        typedef std::future<GetSipMediaApplicationLoggingConfigurationOutcome> GetSipMediaApplicationLoggingConfigurationOutcomeCallable;
        typedef std::future<GetSipRuleOutcome> GetSipRuleOutcomeCallable;
        typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
        typedef std::future<GetUserSettingsOutcome> GetUserSettingsOutcomeCallable;
        typedef std::future<GetVoiceConnectorOutcome> GetVoiceConnectorOutcomeCallable;
        typedef std::future<GetVoiceConnectorEmergencyCallingConfigurationOutcome> GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable;
        typedef std::future<GetVoiceConnectorGroupOutcome> GetVoiceConnectorGroupOutcomeCallable;
        typedef std::future<GetVoiceConnectorLoggingConfigurationOutcome> GetVoiceConnectorLoggingConfigurationOutcomeCallable;
        typedef std::future<GetVoiceConnectorOriginationOutcome> GetVoiceConnectorOriginationOutcomeCallable;
        typedef std::future<GetVoiceConnectorProxyOutcome> GetVoiceConnectorProxyOutcomeCallable;
        typedef std::future<GetVoiceConnectorStreamingConfigurationOutcome> GetVoiceConnectorStreamingConfigurationOutcomeCallable;
        typedef std::future<GetVoiceConnectorTerminationOutcome> GetVoiceConnectorTerminationOutcomeCallable;
        typedef std::future<GetVoiceConnectorTerminationHealthOutcome> GetVoiceConnectorTerminationHealthOutcomeCallable;
        typedef std::future<InviteUsersOutcome> InviteUsersOutcomeCallable;
        typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
        typedef std::future<ListAppInstanceAdminsOutcome> ListAppInstanceAdminsOutcomeCallable;
        typedef std::future<ListAppInstanceUsersOutcome> ListAppInstanceUsersOutcomeCallable;
        typedef std::future<ListAppInstancesOutcome> ListAppInstancesOutcomeCallable;
        typedef std::future<ListAttendeeTagsOutcome> ListAttendeeTagsOutcomeCallable;
        typedef std::future<ListAttendeesOutcome> ListAttendeesOutcomeCallable;
        typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
        typedef std::future<ListChannelBansOutcome> ListChannelBansOutcomeCallable;
        typedef std::future<ListChannelMembershipsOutcome> ListChannelMembershipsOutcomeCallable;
        typedef std::future<ListChannelMembershipsForAppInstanceUserOutcome> ListChannelMembershipsForAppInstanceUserOutcomeCallable;
        typedef std::future<ListChannelMessagesOutcome> ListChannelMessagesOutcomeCallable;
        typedef std::future<ListChannelModeratorsOutcome> ListChannelModeratorsOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListChannelsModeratedByAppInstanceUserOutcome> ListChannelsModeratedByAppInstanceUserOutcomeCallable;
        typedef std::future<ListMeetingTagsOutcome> ListMeetingTagsOutcomeCallable;
        typedef std::future<ListMeetingsOutcome> ListMeetingsOutcomeCallable;
        typedef std::future<ListPhoneNumberOrdersOutcome> ListPhoneNumberOrdersOutcomeCallable;
        typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
        typedef std::future<ListProxySessionsOutcome> ListProxySessionsOutcomeCallable;
        typedef std::future<ListRoomMembershipsOutcome> ListRoomMembershipsOutcomeCallable;
        typedef std::future<ListRoomsOutcome> ListRoomsOutcomeCallable;
        typedef std::future<ListSipMediaApplicationsOutcome> ListSipMediaApplicationsOutcomeCallable;
        typedef std::future<ListSipRulesOutcome> ListSipRulesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
        typedef std::future<ListVoiceConnectorGroupsOutcome> ListVoiceConnectorGroupsOutcomeCallable;
        typedef std::future<ListVoiceConnectorTerminationCredentialsOutcome> ListVoiceConnectorTerminationCredentialsOutcomeCallable;
        typedef std::future<ListVoiceConnectorsOutcome> ListVoiceConnectorsOutcomeCallable;
        typedef std::future<LogoutUserOutcome> LogoutUserOutcomeCallable;
        typedef std::future<PutAppInstanceRetentionSettingsOutcome> PutAppInstanceRetentionSettingsOutcomeCallable;
        typedef std::future<PutAppInstanceStreamingConfigurationsOutcome> PutAppInstanceStreamingConfigurationsOutcomeCallable;
        typedef std::future<PutEventsConfigurationOutcome> PutEventsConfigurationOutcomeCallable;
        typedef std::future<PutRetentionSettingsOutcome> PutRetentionSettingsOutcomeCallable;
        typedef std::future<PutSipMediaApplicationLoggingConfigurationOutcome> PutSipMediaApplicationLoggingConfigurationOutcomeCallable;
        typedef std::future<PutVoiceConnectorEmergencyCallingConfigurationOutcome> PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable;
        typedef std::future<PutVoiceConnectorLoggingConfigurationOutcome> PutVoiceConnectorLoggingConfigurationOutcomeCallable;
        typedef std::future<PutVoiceConnectorOriginationOutcome> PutVoiceConnectorOriginationOutcomeCallable;
        typedef std::future<PutVoiceConnectorProxyOutcome> PutVoiceConnectorProxyOutcomeCallable;
        typedef std::future<PutVoiceConnectorStreamingConfigurationOutcome> PutVoiceConnectorStreamingConfigurationOutcomeCallable;
        typedef std::future<PutVoiceConnectorTerminationOutcome> PutVoiceConnectorTerminationOutcomeCallable;
        typedef std::future<PutVoiceConnectorTerminationCredentialsOutcome> PutVoiceConnectorTerminationCredentialsOutcomeCallable;
        typedef std::future<RedactChannelMessageOutcome> RedactChannelMessageOutcomeCallable;
        typedef std::future<RedactConversationMessageOutcome> RedactConversationMessageOutcomeCallable;
        typedef std::future<RedactRoomMessageOutcome> RedactRoomMessageOutcomeCallable;
        typedef std::future<RegenerateSecurityTokenOutcome> RegenerateSecurityTokenOutcomeCallable;
        typedef std::future<ResetPersonalPINOutcome> ResetPersonalPINOutcomeCallable;
        typedef std::future<RestorePhoneNumberOutcome> RestorePhoneNumberOutcomeCallable;
        typedef std::future<SearchAvailablePhoneNumbersOutcome> SearchAvailablePhoneNumbersOutcomeCallable;
        typedef std::future<SendChannelMessageOutcome> SendChannelMessageOutcomeCallable;
        typedef std::future<TagAttendeeOutcome> TagAttendeeOutcomeCallable;
        typedef std::future<TagMeetingOutcome> TagMeetingOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagAttendeeOutcome> UntagAttendeeOutcomeCallable;
        typedef std::future<UntagMeetingOutcome> UntagMeetingOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAccountOutcome> UpdateAccountOutcomeCallable;
        typedef std::future<UpdateAccountSettingsOutcome> UpdateAccountSettingsOutcomeCallable;
        typedef std::future<UpdateAppInstanceOutcome> UpdateAppInstanceOutcomeCallable;
        typedef std::future<UpdateAppInstanceUserOutcome> UpdateAppInstanceUserOutcomeCallable;
        typedef std::future<UpdateBotOutcome> UpdateBotOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
        typedef std::future<UpdateChannelMessageOutcome> UpdateChannelMessageOutcomeCallable;
        typedef std::future<UpdateChannelReadMarkerOutcome> UpdateChannelReadMarkerOutcomeCallable;
        typedef std::future<UpdateGlobalSettingsOutcome> UpdateGlobalSettingsOutcomeCallable;
        typedef std::future<UpdatePhoneNumberOutcome> UpdatePhoneNumberOutcomeCallable;
        typedef std::future<UpdatePhoneNumberSettingsOutcome> UpdatePhoneNumberSettingsOutcomeCallable;
        typedef std::future<UpdateProxySessionOutcome> UpdateProxySessionOutcomeCallable;
        typedef std::future<UpdateRoomOutcome> UpdateRoomOutcomeCallable;
        typedef std::future<UpdateRoomMembershipOutcome> UpdateRoomMembershipOutcomeCallable;
        typedef std::future<UpdateSipMediaApplicationOutcome> UpdateSipMediaApplicationOutcomeCallable;
        typedef std::future<UpdateSipRuleOutcome> UpdateSipRuleOutcomeCallable;
        typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
        typedef std::future<UpdateUserSettingsOutcome> UpdateUserSettingsOutcomeCallable;
        typedef std::future<UpdateVoiceConnectorOutcome> UpdateVoiceConnectorOutcomeCallable;
        typedef std::future<UpdateVoiceConnectorGroupOutcome> UpdateVoiceConnectorGroupOutcomeCallable;
} // namespace Model

  class ChimeClient;

    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumberWithUserRequest&, const Model::AssociatePhoneNumberWithUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumberWithUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumbersWithVoiceConnectorRequest&, const Model::AssociatePhoneNumbersWithVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest&, const Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociateSigninDelegateGroupsWithAccountRequest&, const Model::AssociateSigninDelegateGroupsWithAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchCreateAttendeeRequest&, const Model::BatchCreateAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchCreateRoomMembershipRequest&, const Model::BatchCreateRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchDeletePhoneNumberRequest&, const Model::BatchDeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchSuspendUserRequest&, const Model::BatchSuspendUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchSuspendUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUnsuspendUserRequest&, const Model::BatchUnsuspendUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUnsuspendUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUpdatePhoneNumberRequest&, const Model::BatchUpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchUpdateUserRequest&, const Model::BatchUpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateAccountRequest&, const Model::CreateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateAppInstanceRequest&, const Model::CreateAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateAppInstanceAdminRequest&, const Model::CreateAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateAppInstanceUserRequest&, const Model::CreateAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateAttendeeRequest&, const Model::CreateAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateBotRequest&, const Model::CreateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateChannelBanRequest&, const Model::CreateChannelBanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelBanResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateChannelMembershipRequest&, const Model::CreateChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateChannelModeratorRequest&, const Model::CreateChannelModeratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelModeratorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateMeetingRequest&, const Model::CreateMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateMeetingDialOutRequest&, const Model::CreateMeetingDialOutOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingDialOutResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateMeetingWithAttendeesRequest&, const Model::CreateMeetingWithAttendeesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeetingWithAttendeesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreatePhoneNumberOrderRequest&, const Model::CreatePhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateProxySessionRequest&, const Model::CreateProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateRoomRequest&, const Model::CreateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateRoomMembershipRequest&, const Model::CreateRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateSipMediaApplicationRequest&, const Model::CreateSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateSipMediaApplicationCallRequest&, const Model::CreateSipMediaApplicationCallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSipMediaApplicationCallResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateSipRuleRequest&, const Model::CreateSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateVoiceConnectorRequest&, const Model::CreateVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::CreateVoiceConnectorGroupRequest&, const Model::CreateVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAccountRequest&, const Model::DeleteAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAppInstanceRequest&, const Model::DeleteAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAppInstanceAdminRequest&, const Model::DeleteAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAppInstanceStreamingConfigurationsRequest&, const Model::DeleteAppInstanceStreamingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceStreamingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAppInstanceUserRequest&, const Model::DeleteAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteAttendeeRequest&, const Model::DeleteAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteChannelBanRequest&, const Model::DeleteChannelBanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelBanResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteChannelMembershipRequest&, const Model::DeleteChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteChannelMessageRequest&, const Model::DeleteChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteChannelModeratorRequest&, const Model::DeleteChannelModeratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelModeratorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteEventsConfigurationRequest&, const Model::DeleteEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteMeetingRequest&, const Model::DeleteMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeletePhoneNumberRequest&, const Model::DeletePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteProxySessionRequest&, const Model::DeleteProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteRoomRequest&, const Model::DeleteRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteRoomMembershipRequest&, const Model::DeleteRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteSipMediaApplicationRequest&, const Model::DeleteSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteSipRuleRequest&, const Model::DeleteSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorRequest&, const Model::DeleteVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest&, const Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorGroupRequest&, const Model::DeleteVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorOriginationRequest&, const Model::DeleteVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorProxyRequest&, const Model::DeleteVoiceConnectorProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorProxyResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorStreamingConfigurationRequest&, const Model::DeleteVoiceConnectorStreamingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorTerminationRequest&, const Model::DeleteVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DeleteVoiceConnectorTerminationCredentialsRequest&, const Model::DeleteVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeAppInstanceRequest&, const Model::DescribeAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeAppInstanceAdminRequest&, const Model::DescribeAppInstanceAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceAdminResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeAppInstanceUserRequest&, const Model::DescribeAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeChannelBanRequest&, const Model::DescribeChannelBanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelBanResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeChannelMembershipRequest&, const Model::DescribeChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeChannelMembershipForAppInstanceUserRequest&, const Model::DescribeChannelMembershipForAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeChannelModeratedByAppInstanceUserRequest&, const Model::DescribeChannelModeratedByAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DescribeChannelModeratorRequest&, const Model::DescribeChannelModeratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelModeratorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociatePhoneNumberFromUserRequest&, const Model::DisassociatePhoneNumberFromUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumberFromUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest&, const Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest&, const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::DisassociateSigninDelegateGroupsFromAccountRequest&, const Model::DisassociateSigninDelegateGroupsFromAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAccountRequest&, const Model::GetAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAppInstanceRetentionSettingsRequest&, const Model::GetAppInstanceRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppInstanceRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAppInstanceStreamingConfigurationsRequest&, const Model::GetAppInstanceStreamingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppInstanceStreamingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetAttendeeRequest&, const Model::GetAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetBotRequest&, const Model::GetBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetChannelMessageRequest&, const Model::GetChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetEventsConfigurationRequest&, const Model::GetEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetMeetingRequest&, const Model::GetMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetMessagingSessionEndpointRequest&, const Model::GetMessagingSessionEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMessagingSessionEndpointResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberRequest&, const Model::GetPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberOrderRequest&, const Model::GetPhoneNumberOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberOrderResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetPhoneNumberSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPhoneNumberSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetProxySessionRequest&, const Model::GetProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetRetentionSettingsRequest&, const Model::GetRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetRoomRequest&, const Model::GetRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetSipMediaApplicationRequest&, const Model::GetSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetSipMediaApplicationLoggingConfigurationRequest&, const Model::GetSipMediaApplicationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetSipRuleRequest&, const Model::GetSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetUserRequest&, const Model::GetUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetUserSettingsRequest&, const Model::GetUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUserSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorRequest&, const Model::GetVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest&, const Model::GetVoiceConnectorEmergencyCallingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorGroupRequest&, const Model::GetVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorLoggingConfigurationRequest&, const Model::GetVoiceConnectorLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorOriginationRequest&, const Model::GetVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorProxyRequest&, const Model::GetVoiceConnectorProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorProxyResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorStreamingConfigurationRequest&, const Model::GetVoiceConnectorStreamingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorStreamingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorTerminationRequest&, const Model::GetVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::GetVoiceConnectorTerminationHealthRequest&, const Model::GetVoiceConnectorTerminationHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVoiceConnectorTerminationHealthResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::InviteUsersRequest&, const Model::InviteUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAccountsRequest&, const Model::ListAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAppInstanceAdminsRequest&, const Model::ListAppInstanceAdminsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceAdminsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAppInstanceUsersRequest&, const Model::ListAppInstanceUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstanceUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAppInstancesRequest&, const Model::ListAppInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppInstancesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAttendeeTagsRequest&, const Model::ListAttendeeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttendeeTagsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListAttendeesRequest&, const Model::ListAttendeesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttendeesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListChannelBansRequest&, const Model::ListChannelBansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelBansResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListChannelMembershipsRequest&, const Model::ListChannelMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelMembershipsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListChannelMembershipsForAppInstanceUserRequest&, const Model::ListChannelMembershipsForAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelMembershipsForAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListChannelMessagesRequest&, const Model::ListChannelMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelMessagesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListChannelModeratorsRequest&, const Model::ListChannelModeratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelModeratorsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListChannelsModeratedByAppInstanceUserRequest&, const Model::ListChannelsModeratedByAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsModeratedByAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListMeetingTagsRequest&, const Model::ListMeetingTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeetingTagsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListMeetingsRequest&, const Model::ListMeetingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeetingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumberOrdersRequest&, const Model::ListPhoneNumberOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumberOrdersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListProxySessionsRequest&, const Model::ListProxySessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProxySessionsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListRoomMembershipsRequest&, const Model::ListRoomMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomMembershipsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListRoomsRequest&, const Model::ListRoomsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListSipMediaApplicationsRequest&, const Model::ListSipMediaApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSipMediaApplicationsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListSipRulesRequest&, const Model::ListSipRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSipRulesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListVoiceConnectorGroupsRequest&, const Model::ListVoiceConnectorGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorGroupsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListVoiceConnectorTerminationCredentialsRequest&, const Model::ListVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListVoiceConnectorsRequest&, const Model::ListVoiceConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVoiceConnectorsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::LogoutUserRequest&, const Model::LogoutUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LogoutUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutAppInstanceRetentionSettingsRequest&, const Model::PutAppInstanceRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppInstanceRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutAppInstanceStreamingConfigurationsRequest&, const Model::PutAppInstanceStreamingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppInstanceStreamingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutEventsConfigurationRequest&, const Model::PutEventsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutEventsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutRetentionSettingsRequest&, const Model::PutRetentionSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRetentionSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutSipMediaApplicationLoggingConfigurationRequest&, const Model::PutSipMediaApplicationLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest&, const Model::PutVoiceConnectorEmergencyCallingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorLoggingConfigurationRequest&, const Model::PutVoiceConnectorLoggingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorLoggingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorOriginationRequest&, const Model::PutVoiceConnectorOriginationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorOriginationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorProxyRequest&, const Model::PutVoiceConnectorProxyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorProxyResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorStreamingConfigurationRequest&, const Model::PutVoiceConnectorStreamingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorStreamingConfigurationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorTerminationRequest&, const Model::PutVoiceConnectorTerminationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorTerminationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::PutVoiceConnectorTerminationCredentialsRequest&, const Model::PutVoiceConnectorTerminationCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutVoiceConnectorTerminationCredentialsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RedactChannelMessageRequest&, const Model::RedactChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RedactChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RedactConversationMessageRequest&, const Model::RedactConversationMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RedactConversationMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RedactRoomMessageRequest&, const Model::RedactRoomMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RedactRoomMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RegenerateSecurityTokenRequest&, const Model::RegenerateSecurityTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegenerateSecurityTokenResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ResetPersonalPINRequest&, const Model::ResetPersonalPINOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetPersonalPINResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::RestorePhoneNumberRequest&, const Model::RestorePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestorePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::SearchAvailablePhoneNumbersRequest&, const Model::SearchAvailablePhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAvailablePhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::SendChannelMessageRequest&, const Model::SendChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::TagAttendeeRequest&, const Model::TagAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::TagMeetingRequest&, const Model::TagMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UntagAttendeeRequest&, const Model::UntagAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UntagMeetingRequest&, const Model::UntagMeetingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagMeetingResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAccountRequest&, const Model::UpdateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAccountSettingsRequest&, const Model::UpdateAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAppInstanceRequest&, const Model::UpdateAppInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateAppInstanceUserRequest&, const Model::UpdateAppInstanceUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppInstanceUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateBotRequest&, const Model::UpdateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateChannelMessageRequest&, const Model::UpdateChannelMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelMessageResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateChannelReadMarkerRequest&, const Model::UpdateChannelReadMarkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelReadMarkerResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateGlobalSettingsRequest&, const Model::UpdateGlobalSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGlobalSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdatePhoneNumberRequest&, const Model::UpdatePhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdatePhoneNumberSettingsRequest&, const Model::UpdatePhoneNumberSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePhoneNumberSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateProxySessionRequest&, const Model::UpdateProxySessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProxySessionResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateRoomRequest&, const Model::UpdateRoomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateRoomMembershipRequest&, const Model::UpdateRoomMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRoomMembershipResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateSipMediaApplicationRequest&, const Model::UpdateSipMediaApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSipMediaApplicationResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateSipRuleRequest&, const Model::UpdateSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserSettingsRequest&, const Model::UpdateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateVoiceConnectorRequest&, const Model::UpdateVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateVoiceConnectorGroupRequest&, const Model::UpdateVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceConnectorGroupResponseReceivedHandler;

  /**
   * <p>The Amazon Chime API (application programming interface) is designed for
   * developers to perform key tasks, such as creating and managing Amazon Chime
   * accounts, users, and Voice Connectors. This guide provides detailed information
   * about the Amazon Chime API, including operations, types, inputs and outputs, and
   * error codes. It also includes some server-side API actions to use with the
   * Amazon Chime SDK. For more information about the Amazon Chime SDK, see <a
   * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
   * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p> <p>You can
   * use an AWS SDK, the AWS Command Line Interface (AWS CLI), or the REST API to
   * make API calls. We recommend using an AWS SDK or the AWS CLI. Each API operation
   * includes links to information about using it with a language-specific AWS SDK or
   * the AWS CLI.</p> <dl> <dt>Using an AWS SDK</dt> <dd> <p>You don't need to write
   * code to calculate a signature for request authentication. The SDK clients
   * authenticate your requests by using access keys that you provide. For more
   * information about AWS SDKs, see the <a
   * href="http://aws.amazon.com/developer/">AWS Developer Center</a>.</p> </dd>
   * <dt>Using the AWS CLI</dt> <dd> <p>Use your access keys with the AWS CLI to make
   * API calls. For information about setting up the AWS CLI, see <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/installing.html">Installing
   * the AWS Command Line Interface</a> in the <i>AWS Command Line Interface User
   * Guide</i>. For a list of available Amazon Chime commands, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/chime/index.html">Amazon
   * Chime commands</a> in the <i>AWS CLI Command Reference</i>.</p> </dd> <dt>Using
   * REST</dt> <dd> <p>If you use REST to make API calls, you must authenticate your
   * request by providing a signature. Amazon Chime supports Signature Version 4. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a> in the <i>Amazon Web Services General
   * Reference</i>.</p> <p>When making REST API calls, use the service name
   * <code>chime</code> and REST endpoint
   * <code>https://service.chime.aws.amazon.com</code>.</p> </dd> </dl>
   * <p>Administrative permissions are controlled using AWS Identity and Access
   * Management (IAM). For more information, see <a
   * href="https://docs.aws.amazon.com/chime/latest/ag/security-iam.html">Identity
   * and Access Management for Amazon Chime</a> in the <i>Amazon Chime Administration
   * Guide</i>.</p>
   */
  class AWS_CHIME_API ChimeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ChimeClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ChimeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ChimeClient();


        /**
         * <p>Associates a phone number with the specified Amazon Chime user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumberWithUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumberWithUserOutcome AssociatePhoneNumberWithUser(const Model::AssociatePhoneNumberWithUserRequest& request) const;

        /**
         * <p>Associates a phone number with the specified Amazon Chime user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumberWithUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePhoneNumberWithUserOutcomeCallable AssociatePhoneNumberWithUserCallable(const Model::AssociatePhoneNumberWithUserRequest& request) const;

        /**
         * <p>Associates a phone number with the specified Amazon Chime user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumberWithUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumberWithUserAsync(const Model::AssociatePhoneNumberWithUserRequest& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates phone numbers with the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcome AssociatePhoneNumbersWithVoiceConnector(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * <p>Associates phone numbers with the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorCallable(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request) const;

        /**
         * <p>Associates phone numbers with the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumbersWithVoiceConnectorAsync(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates phone numbers with the specified Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcome AssociatePhoneNumbersWithVoiceConnectorGroup(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Associates phone numbers with the specified Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable AssociatePhoneNumbersWithVoiceConnectorGroupCallable(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Associates phone numbers with the specified Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociatePhoneNumbersWithVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociatePhoneNumbersWithVoiceConnectorGroupAsync(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified sign-in delegate groups with the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociateSigninDelegateGroupsWithAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSigninDelegateGroupsWithAccountOutcome AssociateSigninDelegateGroupsWithAccount(const Model::AssociateSigninDelegateGroupsWithAccountRequest& request) const;

        /**
         * <p>Associates the specified sign-in delegate groups with the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociateSigninDelegateGroupsWithAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateSigninDelegateGroupsWithAccountOutcomeCallable AssociateSigninDelegateGroupsWithAccountCallable(const Model::AssociateSigninDelegateGroupsWithAccountRequest& request) const;

        /**
         * <p>Associates the specified sign-in delegate groups with the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AssociateSigninDelegateGroupsWithAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateSigninDelegateGroupsWithAccountAsync(const Model::AssociateSigninDelegateGroupsWithAccountRequest& request, const AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates up to 100 new attendees for an active Amazon Chime SDK meeting. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateAttendeeOutcome BatchCreateAttendee(const Model::BatchCreateAttendeeRequest& request) const;

        /**
         * <p>Creates up to 100 new attendees for an active Amazon Chime SDK meeting. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateAttendee">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateAttendeeOutcomeCallable BatchCreateAttendeeCallable(const Model::BatchCreateAttendeeRequest& request) const;

        /**
         * <p>Creates up to 100 new attendees for an active Amazon Chime SDK meeting. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateAttendee">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateAttendeeAsync(const Model::BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds up to 50 members to a chat room in an Amazon Chime Enterprise account.
         * Members can be either users or bots. The member role designates whether the
         * member is a chat room administrator or a general chat room member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateRoomMembershipOutcome BatchCreateRoomMembership(const Model::BatchCreateRoomMembershipRequest& request) const;

        /**
         * <p>Adds up to 50 members to a chat room in an Amazon Chime Enterprise account.
         * Members can be either users or bots. The member role designates whether the
         * member is a chat room administrator or a general chat room member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateRoomMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateRoomMembershipOutcomeCallable BatchCreateRoomMembershipCallable(const Model::BatchCreateRoomMembershipRequest& request) const;

        /**
         * <p>Adds up to 50 members to a chat room in an Amazon Chime Enterprise account.
         * Members can be either users or bots. The member role designates whether the
         * member is a chat room administrator or a general chat room member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchCreateRoomMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateRoomMembershipAsync(const Model::BatchCreateRoomMembershipRequest& request, const BatchCreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime Voice Connectors before they can be
         * deleted.</p> <p>Phone numbers remain in the <b>Deletion queue</b> for 7 days
         * before they are deleted permanently.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeletePhoneNumberOutcome BatchDeletePhoneNumber(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime Voice Connectors before they can be
         * deleted.</p> <p>Phone numbers remain in the <b>Deletion queue</b> for 7 days
         * before they are deleted permanently.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeletePhoneNumberOutcomeCallable BatchDeletePhoneNumberCallable(const Model::BatchDeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves phone numbers into the <b>Deletion queue</b>. Phone numbers must be
         * disassociated from any users or Amazon Chime Voice Connectors before they can be
         * deleted.</p> <p>Phone numbers remain in the <b>Deletion queue</b> for 7 days
         * before they are deleted permanently.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchDeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeletePhoneNumberAsync(const Model::BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends up to 50 users from a <code>Team</code> or
         * <code>EnterpriseLWA</code> Amazon Chime account. For more information about
         * different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Users suspended from a <code>Team</code> account are
         * disassociated from the account, but they can continue to use Amazon Chime as
         * free users. To remove the suspension from suspended <code>Team</code> account
         * users, invite them to the <code>Team</code> account again. You can use the
         * <a>InviteUsers</a> action to do so.</p> <p>Users suspended from an
         * <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime
         * and can no longer sign in. To remove the suspension from suspended
         * <code>EnterpriseLWA</code> account users, use the <a>BatchUnsuspendUser</a>
         * action. </p> <p>To sign out users without suspending them, use the
         * <a>LogoutUser</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchSuspendUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchSuspendUserOutcome BatchSuspendUser(const Model::BatchSuspendUserRequest& request) const;

        /**
         * <p>Suspends up to 50 users from a <code>Team</code> or
         * <code>EnterpriseLWA</code> Amazon Chime account. For more information about
         * different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Users suspended from a <code>Team</code> account are
         * disassociated from the account, but they can continue to use Amazon Chime as
         * free users. To remove the suspension from suspended <code>Team</code> account
         * users, invite them to the <code>Team</code> account again. You can use the
         * <a>InviteUsers</a> action to do so.</p> <p>Users suspended from an
         * <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime
         * and can no longer sign in. To remove the suspension from suspended
         * <code>EnterpriseLWA</code> account users, use the <a>BatchUnsuspendUser</a>
         * action. </p> <p>To sign out users without suspending them, use the
         * <a>LogoutUser</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchSuspendUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchSuspendUserOutcomeCallable BatchSuspendUserCallable(const Model::BatchSuspendUserRequest& request) const;

        /**
         * <p>Suspends up to 50 users from a <code>Team</code> or
         * <code>EnterpriseLWA</code> Amazon Chime account. For more information about
         * different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Users suspended from a <code>Team</code> account are
         * disassociated from the account, but they can continue to use Amazon Chime as
         * free users. To remove the suspension from suspended <code>Team</code> account
         * users, invite them to the <code>Team</code> account again. You can use the
         * <a>InviteUsers</a> action to do so.</p> <p>Users suspended from an
         * <code>EnterpriseLWA</code> account are immediately signed out of Amazon Chime
         * and can no longer sign in. To remove the suspension from suspended
         * <code>EnterpriseLWA</code> account users, use the <a>BatchUnsuspendUser</a>
         * action. </p> <p>To sign out users without suspending them, use the
         * <a>LogoutUser</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchSuspendUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchSuspendUserAsync(const Model::BatchSuspendUserRequest& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the suspension from up to 50 previously suspended users for the
         * specified Amazon Chime <code>EnterpriseLWA</code> account. Only users on
         * <code>EnterpriseLWA</code> accounts can be unsuspended using this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Previously suspended users who are unsuspended using this
         * action are returned to <code>Registered</code> status. Users who are not
         * previously suspended are ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUnsuspendUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUnsuspendUserOutcome BatchUnsuspendUser(const Model::BatchUnsuspendUserRequest& request) const;

        /**
         * <p>Removes the suspension from up to 50 previously suspended users for the
         * specified Amazon Chime <code>EnterpriseLWA</code> account. Only users on
         * <code>EnterpriseLWA</code> accounts can be unsuspended using this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Previously suspended users who are unsuspended using this
         * action are returned to <code>Registered</code> status. Users who are not
         * previously suspended are ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUnsuspendUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUnsuspendUserOutcomeCallable BatchUnsuspendUserCallable(const Model::BatchUnsuspendUserRequest& request) const;

        /**
         * <p>Removes the suspension from up to 50 previously suspended users for the
         * specified Amazon Chime <code>EnterpriseLWA</code> account. Only users on
         * <code>EnterpriseLWA</code> accounts can be unsuspended using this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p> <p>Previously suspended users who are unsuspended using this
         * action are returned to <code>Registered</code> status. Users who are not
         * previously suspended are ignored.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUnsuspendUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUnsuspendUserAsync(const Model::BatchUnsuspendUserRequest& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates phone number product types or calling names. You can update one
         * attribute at a time for each <code>UpdatePhoneNumberRequestItem</code>. For
         * example, you can update either the product type or the calling name.</p> <p>For
         * product types, choose from Amazon Chime Business Calling and Amazon Chime Voice
         * Connector. For toll-free numbers, you must use the Amazon Chime Voice Connector
         * product type.</p> <p>Updates to outbound calling names can take up to 72 hours
         * to complete. Pending updates to outbound calling names must be complete before
         * you can request another update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdatePhoneNumberOutcome BatchUpdatePhoneNumber(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number product types or calling names. You can update one
         * attribute at a time for each <code>UpdatePhoneNumberRequestItem</code>. For
         * example, you can update either the product type or the calling name.</p> <p>For
         * product types, choose from Amazon Chime Business Calling and Amazon Chime Voice
         * Connector. For toll-free numbers, you must use the Amazon Chime Voice Connector
         * product type.</p> <p>Updates to outbound calling names can take up to 72 hours
         * to complete. Pending updates to outbound calling names must be complete before
         * you can request another update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdatePhoneNumberOutcomeCallable BatchUpdatePhoneNumberCallable(const Model::BatchUpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number product types or calling names. You can update one
         * attribute at a time for each <code>UpdatePhoneNumberRequestItem</code>. For
         * example, you can update either the product type or the calling name.</p> <p>For
         * product types, choose from Amazon Chime Business Calling and Amazon Chime Voice
         * Connector. For toll-free numbers, you must use the Amazon Chime Voice Connector
         * product type.</p> <p>Updates to outbound calling names can take up to 72 hours
         * to complete. Pending updates to outbound calling names must be complete before
         * you can request another update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdatePhoneNumberAsync(const Model::BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates user details within the <a>UpdateUserRequestItem</a> object for up to
         * 20 users for the specified Amazon Chime account. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateUserOutcome BatchUpdateUser(const Model::BatchUpdateUserRequest& request) const;

        /**
         * <p>Updates user details within the <a>UpdateUserRequestItem</a> object for up to
         * 20 users for the specified Amazon Chime account. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateUserOutcomeCallable BatchUpdateUserCallable(const Model::BatchUpdateUserRequest& request) const;

        /**
         * <p>Updates user details within the <a>UpdateUserRequestItem</a> object for up to
         * 20 users for the specified Amazon Chime account. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/BatchUpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateUserAsync(const Model::BatchUpdateUserRequest& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Chime account under the administrator's AWS account. Only
         * <code>Team</code> account types are currently supported for this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest& request) const;

        /**
         * <p>Creates an Amazon Chime account under the administrator's AWS account. Only
         * <code>Team</code> account types are currently supported for this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request) const;

        /**
         * <p>Creates an Amazon Chime account under the administrator's AWS account. Only
         * <code>Team</code> account types are currently supported for this action. For
         * more information about different account types, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/manage-chime-account.html">Managing
         * Your Amazon Chime Accounts</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Chime Messaging SDK <code>AppInstance</code> under an AWS
         * Account. Only Messaging SDK customers use this API.
         * <code>CreateAppInstance</code> supports <code>idempotency</code> behavior as
         * described in the AWS API Standard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceOutcome CreateAppInstance(const Model::CreateAppInstanceRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Messaging SDK <code>AppInstance</code> under an AWS
         * Account. Only Messaging SDK customers use this API.
         * <code>CreateAppInstance</code> supports <code>idempotency</code> behavior as
         * described in the AWS API Standard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppInstanceOutcomeCallable CreateAppInstanceCallable(const Model::CreateAppInstanceRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Messaging SDK <code>AppInstance</code> under an AWS
         * Account. Only Messaging SDK customers use this API.
         * <code>CreateAppInstance</code> supports <code>idempotency</code> behavior as
         * described in the AWS API Standard.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppInstanceAsync(const Model::CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Promotes an <code>AppInstanceUser</code> to an <code>AppInstanceAdmin</code>.
         * The promoted user can perform the following actions. </p> <ul> <li> <p>
         * <code>ChannelModerator</code> actions across all channels in the app
         * instance.</p> </li> <li> <p> <code>DeleteChannelMessage</code> actions.</p>
         * </li> </ul> <p>Only an <code>AppInstanceUser</code> can be promoted to an
         * <code>AppInstanceAdmin</code> role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceAdminOutcome CreateAppInstanceAdmin(const Model::CreateAppInstanceAdminRequest& request) const;

        /**
         * <p>Promotes an <code>AppInstanceUser</code> to an <code>AppInstanceAdmin</code>.
         * The promoted user can perform the following actions. </p> <ul> <li> <p>
         * <code>ChannelModerator</code> actions across all channels in the app
         * instance.</p> </li> <li> <p> <code>DeleteChannelMessage</code> actions.</p>
         * </li> </ul> <p>Only an <code>AppInstanceUser</code> can be promoted to an
         * <code>AppInstanceAdmin</code> role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceAdmin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppInstanceAdminOutcomeCallable CreateAppInstanceAdminCallable(const Model::CreateAppInstanceAdminRequest& request) const;

        /**
         * <p>Promotes an <code>AppInstanceUser</code> to an <code>AppInstanceAdmin</code>.
         * The promoted user can perform the following actions. </p> <ul> <li> <p>
         * <code>ChannelModerator</code> actions across all channels in the app
         * instance.</p> </li> <li> <p> <code>DeleteChannelMessage</code> actions.</p>
         * </li> </ul> <p>Only an <code>AppInstanceUser</code> can be promoted to an
         * <code>AppInstanceAdmin</code> role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceAdmin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppInstanceAdminAsync(const Model::CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user under an Amazon Chime <code>AppInstance</code>. The request
         * consists of a unique <code>appInstanceUserId</code> and <code>Name</code> for
         * that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppInstanceUserOutcome CreateAppInstanceUser(const Model::CreateAppInstanceUserRequest& request) const;

        /**
         * <p>Creates a user under an Amazon Chime <code>AppInstance</code>. The request
         * consists of a unique <code>appInstanceUserId</code> and <code>Name</code> for
         * that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppInstanceUserOutcomeCallable CreateAppInstanceUserCallable(const Model::CreateAppInstanceUserRequest& request) const;

        /**
         * <p>Creates a user under an Amazon Chime <code>AppInstance</code>. The request
         * consists of a unique <code>appInstanceUserId</code> and <code>Name</code> for
         * that user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppInstanceUserAsync(const Model::CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new attendee for an active Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAttendeeOutcome CreateAttendee(const Model::CreateAttendeeRequest& request) const;

        /**
         * <p>Creates a new attendee for an active Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAttendee">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAttendeeOutcomeCallable CreateAttendeeCallable(const Model::CreateAttendeeRequest& request) const;

        /**
         * <p>Creates a new attendee for an active Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateAttendee">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAttendeeAsync(const Model::CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a bot for an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateBot">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;

        /**
         * <p>Creates a bot for an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateBot">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotOutcomeCallable CreateBotCallable(const Model::CreateBotRequest& request) const;

        /**
         * <p>Creates a bot for an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateBot">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotAsync(const Model::CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a channel to which you can add users and send messages.</p> <p>
         * <b>Restriction</b>: You can't change a channel's privacy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels. </p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelBanOutcome CreateChannelBan(const Model::CreateChannelBanRequest& request) const;

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels. </p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelBan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelBanOutcomeCallable CreateChannelBanCallable(const Model::CreateChannelBanRequest& request) const;

        /**
         * <p>Permanently bans a member from a channel. Moderators can't add banned members
         * to a channel. To undo a ban, you first have to <code>DeleteChannelBan</code>,
         * and then <code>CreateChannelMembership</code>. Bans are cleaned up when you
         * delete users or channels. </p> <p>If you ban a user who is already part of a
         * channel, that user is automatically kicked from the channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelBan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelBanAsync(const Model::CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a user to a channel. The <code>InvitedBy</code> response field is
         * derived from the request header. A channel member can:</p> <ul> <li> <p>List
         * messages</p> </li> <li> <p>Send messages</p> </li> <li> <p>Receive messages</p>
         * </li> <li> <p>Edit their own messages</p> </li> <li> <p>Leave the channel</p>
         * </li> </ul> <p>Privacy settings impact this action as follows:</p> <ul> <li>
         * <p>Public Channels: You do not need to be a member to list messages, but you
         * must be a member to send messages.</p> </li> <li> <p>Private Channels: You must
         * be a member to list or send messages.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelMembershipOutcome CreateChannelMembership(const Model::CreateChannelMembershipRequest& request) const;

        /**
         * <p>Adds a user to a channel. The <code>InvitedBy</code> response field is
         * derived from the request header. A channel member can:</p> <ul> <li> <p>List
         * messages</p> </li> <li> <p>Send messages</p> </li> <li> <p>Receive messages</p>
         * </li> <li> <p>Edit their own messages</p> </li> <li> <p>Leave the channel</p>
         * </li> </ul> <p>Privacy settings impact this action as follows:</p> <ul> <li>
         * <p>Public Channels: You do not need to be a member to list messages, but you
         * must be a member to send messages.</p> </li> <li> <p>Private Channels: You must
         * be a member to list or send messages.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelMembershipOutcomeCallable CreateChannelMembershipCallable(const Model::CreateChannelMembershipRequest& request) const;

        /**
         * <p>Adds a user to a channel. The <code>InvitedBy</code> response field is
         * derived from the request header. A channel member can:</p> <ul> <li> <p>List
         * messages</p> </li> <li> <p>Send messages</p> </li> <li> <p>Receive messages</p>
         * </li> <li> <p>Edit their own messages</p> </li> <li> <p>Leave the channel</p>
         * </li> </ul> <p>Privacy settings impact this action as follows:</p> <ul> <li>
         * <p>Public Channels: You do not need to be a member to list messages, but you
         * must be a member to send messages.</p> </li> <li> <p>Private Channels: You must
         * be a member to list or send messages.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelMembershipAsync(const Model::CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelModeratorOutcome CreateChannelModerator(const Model::CreateChannelModeratorRequest& request) const;

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelModerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelModeratorOutcomeCallable CreateChannelModeratorCallable(const Model::CreateChannelModeratorRequest& request) const;

        /**
         * <p>Creates a new <code>ChannelModerator</code>. A channel moderator can:</p>
         * <ul> <li> <p>Add and remove other members of the channel.</p> </li> <li> <p>Add
         * and remove other moderators of the channel.</p> </li> <li> <p>Add and remove
         * user bans for the channel.</p> </li> <li> <p>Redact messages in the channel.</p>
         * </li> <li> <p>List messages in the channel.</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateChannelModerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelModeratorAsync(const Model::CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Chime SDK meeting in the specified media Region with no
         * initial attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingOutcome CreateMeeting(const Model::CreateMeetingRequest& request) const;

        /**
         * <p>Creates a new Amazon Chime SDK meeting in the specified media Region with no
         * initial attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeeting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeetingOutcomeCallable CreateMeetingCallable(const Model::CreateMeetingRequest& request) const;

        /**
         * <p>Creates a new Amazon Chime SDK meeting in the specified media Region with no
         * initial attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeeting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingAsync(const Model::CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses the join token and call metadata in a meeting request (From number, To
         * number, and so forth) to initiate an outbound call to a public switched
         * telephone network (PSTN) and joins them into Chime meeting. Also ensures that
         * the From number belongs to the customer.</p> <p>To play welcome audio or
         * implement an interactive voice response (IVR), use the
         * <code>CreateSipMediaApplicationCall</code> API with the corresponding SIP media
         * application ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingDialOut">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingDialOutOutcome CreateMeetingDialOut(const Model::CreateMeetingDialOutRequest& request) const;

        /**
         * <p>Uses the join token and call metadata in a meeting request (From number, To
         * number, and so forth) to initiate an outbound call to a public switched
         * telephone network (PSTN) and joins them into Chime meeting. Also ensures that
         * the From number belongs to the customer.</p> <p>To play welcome audio or
         * implement an interactive voice response (IVR), use the
         * <code>CreateSipMediaApplicationCall</code> API with the corresponding SIP media
         * application ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingDialOut">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeetingDialOutOutcomeCallable CreateMeetingDialOutCallable(const Model::CreateMeetingDialOutRequest& request) const;

        /**
         * <p>Uses the join token and call metadata in a meeting request (From number, To
         * number, and so forth) to initiate an outbound call to a public switched
         * telephone network (PSTN) and joins them into Chime meeting. Also ensures that
         * the From number belongs to the customer.</p> <p>To play welcome audio or
         * implement an interactive voice response (IVR), use the
         * <code>CreateSipMediaApplicationCall</code> API with the corresponding SIP media
         * application ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingDialOut">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingDialOutAsync(const Model::CreateMeetingDialOutRequest& request, const CreateMeetingDialOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon Chime SDK meeting in the specified media Region, with
         * attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingWithAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeetingWithAttendeesOutcome CreateMeetingWithAttendees(const Model::CreateMeetingWithAttendeesRequest& request) const;

        /**
         * <p>Creates a new Amazon Chime SDK meeting in the specified media Region, with
         * attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingWithAttendees">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeetingWithAttendeesOutcomeCallable CreateMeetingWithAttendeesCallable(const Model::CreateMeetingWithAttendeesRequest& request) const;

        /**
         * <p>Creates a new Amazon Chime SDK meeting in the specified media Region, with
         * attendees. For more information about specifying media Regions, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/chime-sdk-meetings-regions.html">Amazon
         * Chime SDK Media Regions</a> in the <i>Amazon Chime Developer Guide</i>. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateMeetingWithAttendees">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeetingWithAttendeesAsync(const Model::CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an order for phone numbers to be provisioned. Choose from Amazon
         * Chime Business Calling and Amazon Chime Voice Connector product types. For
         * toll-free numbers, you must use the Amazon Chime Voice Connector product
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePhoneNumberOrderOutcome CreatePhoneNumberOrder(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * <p>Creates an order for phone numbers to be provisioned. Choose from Amazon
         * Chime Business Calling and Amazon Chime Voice Connector product types. For
         * toll-free numbers, you must use the Amazon Chime Voice Connector product
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePhoneNumberOrderOutcomeCallable CreatePhoneNumberOrderCallable(const Model::CreatePhoneNumberOrderRequest& request) const;

        /**
         * <p>Creates an order for phone numbers to be provisioned. Choose from Amazon
         * Chime Business Calling and Amazon Chime Voice Connector product types. For
         * toll-free numbers, you must use the Amazon Chime Voice Connector product
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreatePhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePhoneNumberOrderAsync(const Model::CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a proxy session on the specified Amazon Chime Voice Connector for the
         * specified participant phone numbers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProxySessionOutcome CreateProxySession(const Model::CreateProxySessionRequest& request) const;

        /**
         * <p>Creates a proxy session on the specified Amazon Chime Voice Connector for the
         * specified participant phone numbers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateProxySession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProxySessionOutcomeCallable CreateProxySessionCallable(const Model::CreateProxySessionRequest& request) const;

        /**
         * <p>Creates a proxy session on the specified Amazon Chime Voice Connector for the
         * specified participant phone numbers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateProxySession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProxySessionAsync(const Model::CreateProxySessionRequest& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a chat room for the specified Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest& request) const;

        /**
         * <p>Creates a chat room for the specified Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request) const;

        /**
         * <p>Creates a chat room for the specified Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a member to a chat room in an Amazon Chime Enterprise account. A member
         * can be either a user or a bot. The member role designates whether the member is
         * a chat room administrator or a general chat room member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoomMembershipOutcome CreateRoomMembership(const Model::CreateRoomMembershipRequest& request) const;

        /**
         * <p>Adds a member to a chat room in an Amazon Chime Enterprise account. A member
         * can be either a user or a bot. The member role designates whether the member is
         * a chat room administrator or a general chat room member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoomMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoomMembershipOutcomeCallable CreateRoomMembershipCallable(const Model::CreateRoomMembershipRequest& request) const;

        /**
         * <p>Adds a member to a chat room in an Amazon Chime Enterprise account. A member
         * can be either a user or a bot. The member role designates whether the member is
         * a chat room administrator or a general chat room member.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateRoomMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoomMembershipAsync(const Model::CreateRoomMembershipRequest& request, const CreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipMediaApplicationOutcome CreateSipMediaApplication(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * <p>Creates a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSipMediaApplicationOutcomeCallable CreateSipMediaApplicationCallable(const Model::CreateSipMediaApplicationRequest& request) const;

        /**
         * <p>Creates a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipMediaApplicationAsync(const Model::CreateSipMediaApplicationRequest& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an outbound call to a phone number from the phone number specified in
         * the request, and it invokes the endpoint of the specified
         * <code>sipMediaApplicationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplicationCall">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipMediaApplicationCallOutcome CreateSipMediaApplicationCall(const Model::CreateSipMediaApplicationCallRequest& request) const;

        /**
         * <p>Creates an outbound call to a phone number from the phone number specified in
         * the request, and it invokes the endpoint of the specified
         * <code>sipMediaApplicationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplicationCall">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSipMediaApplicationCallOutcomeCallable CreateSipMediaApplicationCallCallable(const Model::CreateSipMediaApplicationCallRequest& request) const;

        /**
         * <p>Creates an outbound call to a phone number from the phone number specified in
         * the request, and it invokes the endpoint of the specified
         * <code>sipMediaApplicationId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipMediaApplicationCall">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipMediaApplicationCallAsync(const Model::CreateSipMediaApplicationCallRequest& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a SIP rule which can be used to run a SIP media application as a
         * target for a specific trigger type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSipRuleOutcome CreateSipRule(const Model::CreateSipRuleRequest& request) const;

        /**
         * <p>Creates a SIP rule which can be used to run a SIP media application as a
         * target for a specific trigger type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSipRuleOutcomeCallable CreateSipRuleCallable(const Model::CreateSipRuleRequest& request) const;

        /**
         * <p>Creates a SIP rule which can be used to run a SIP media application as a
         * target for a specific trigger type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateSipRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSipRuleAsync(const Model::CreateSipRuleRequest& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a user under the specified Amazon Chime account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user under the specified Amazon Chime account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request) const;

        /**
         * <p>Creates a user under the specified Amazon Chime account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector under the administrator's AWS
         * account. You can choose to create an Amazon Chime Voice Connector in a specific
         * AWS Region.</p> <p>Enabling <a>CreateVoiceConnectorRequest$RequireEncryption</a>
         * configures your Amazon Chime Voice Connector to use TLS transport for SIP
         * signaling and Secure RTP (SRTP) for media. Inbound calls use TLS transport, and
         * unencrypted outbound calls are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceConnectorOutcome CreateVoiceConnector(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector under the administrator's AWS
         * account. You can choose to create an Amazon Chime Voice Connector in a specific
         * AWS Region.</p> <p>Enabling <a>CreateVoiceConnectorRequest$RequireEncryption</a>
         * configures your Amazon Chime Voice Connector to use TLS transport for SIP
         * signaling and Secure RTP (SRTP) for media. Inbound calls use TLS transport, and
         * unencrypted outbound calls are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVoiceConnectorOutcomeCallable CreateVoiceConnectorCallable(const Model::CreateVoiceConnectorRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector under the administrator's AWS
         * account. You can choose to create an Amazon Chime Voice Connector in a specific
         * AWS Region.</p> <p>Enabling <a>CreateVoiceConnectorRequest$RequireEncryption</a>
         * configures your Amazon Chime Voice Connector to use TLS transport for SIP
         * signaling and Secure RTP (SRTP) for media. Inbound calls use TLS transport, and
         * unencrypted outbound calls are blocked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceConnectorAsync(const Model::CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector group under the administrator's AWS
         * account. You can associate Amazon Chime Voice Connectors with the Amazon Chime
         * Voice Connector group by including <code>VoiceConnectorItems</code> in the
         * request.</p> <p>You can include Amazon Chime Voice Connectors from different AWS
         * Regions in your group. This creates a fault tolerant mechanism for fallback in
         * case of availability events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVoiceConnectorGroupOutcome CreateVoiceConnectorGroup(const Model::CreateVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector group under the administrator's AWS
         * account. You can associate Amazon Chime Voice Connectors with the Amazon Chime
         * Voice Connector group by including <code>VoiceConnectorItems</code> in the
         * request.</p> <p>You can include Amazon Chime Voice Connectors from different AWS
         * Regions in your group. This creates a fault tolerant mechanism for fallback in
         * case of availability events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVoiceConnectorGroupOutcomeCallable CreateVoiceConnectorGroupCallable(const Model::CreateVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Creates an Amazon Chime Voice Connector group under the administrator's AWS
         * account. You can associate Amazon Chime Voice Connectors with the Amazon Chime
         * Voice Connector group by including <code>VoiceConnectorItems</code> in the
         * request.</p> <p>You can include Amazon Chime Voice Connectors from different AWS
         * Regions in your group. This creates a fault tolerant mechanism for fallback in
         * case of availability events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/CreateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVoiceConnectorGroupAsync(const Model::CreateVoiceConnectorGroupRequest& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime account. You must suspend all users before
         * deleting a <code>Team</code> account. You can use the <a>BatchSuspendUser</a>
         * action to do so.</p> <p>For <code>EnterpriseLWA</code> and
         * <code>EnterpriseAD</code> accounts, you must release the claimed domains for
         * your Amazon Chime account before deletion. As soon as you release the domain,
         * all users under that account are suspended.</p> <p>Deleted accounts appear in
         * your <code>Disabled</code> accounts list for 90 days. To restore a deleted
         * account from your <code>Disabled</code> accounts list, you must contact AWS
         * Support.</p> <p>After 90 days, deleted accounts are permanently removed from
         * your <code>Disabled</code> accounts list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime account. You must suspend all users before
         * deleting a <code>Team</code> account. You can use the <a>BatchSuspendUser</a>
         * action to do so.</p> <p>For <code>EnterpriseLWA</code> and
         * <code>EnterpriseAD</code> accounts, you must release the claimed domains for
         * your Amazon Chime account before deletion. As soon as you release the domain,
         * all users under that account are suspended.</p> <p>Deleted accounts appear in
         * your <code>Disabled</code> accounts list for 90 days. To restore a deleted
         * account from your <code>Disabled</code> accounts list, you must contact AWS
         * Support.</p> <p>After 90 days, deleted accounts are permanently removed from
         * your <code>Disabled</code> accounts list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime account. You must suspend all users before
         * deleting a <code>Team</code> account. You can use the <a>BatchSuspendUser</a>
         * action to do so.</p> <p>For <code>EnterpriseLWA</code> and
         * <code>EnterpriseAD</code> accounts, you must release the claimed domains for
         * your Amazon Chime account before deletion. As soon as you release the domain,
         * all users under that account are suspended.</p> <p>Deleted accounts appear in
         * your <code>Disabled</code> accounts list for 90 days. To restore a deleted
         * account from your <code>Disabled</code> accounts list, you must contact AWS
         * Support.</p> <p>After 90 days, deleted accounts are permanently removed from
         * your <code>Disabled</code> accounts list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an <code>AppInstance</code> and all associated data
         * asynchronously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceOutcome DeleteAppInstance(const Model::DeleteAppInstanceRequest& request) const;

        /**
         * <p>Deletes an <code>AppInstance</code> and all associated data
         * asynchronously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppInstanceOutcomeCallable DeleteAppInstanceCallable(const Model::DeleteAppInstanceRequest& request) const;

        /**
         * <p>Deletes an <code>AppInstance</code> and all associated data
         * asynchronously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceAsync(const Model::DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Demotes an <code>AppInstanceAdmin</code> to an <code>AppInstanceUser</code>.
         * This action does not delete the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceAdminOutcome DeleteAppInstanceAdmin(const Model::DeleteAppInstanceAdminRequest& request) const;

        /**
         * <p>Demotes an <code>AppInstanceAdmin</code> to an <code>AppInstanceUser</code>.
         * This action does not delete the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceAdmin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppInstanceAdminOutcomeCallable DeleteAppInstanceAdminCallable(const Model::DeleteAppInstanceAdminRequest& request) const;

        /**
         * <p>Demotes an <code>AppInstanceAdmin</code> to an <code>AppInstanceUser</code>.
         * This action does not delete the user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceAdmin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceAdminAsync(const Model::DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the streaming configurations of an app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceStreamingConfigurationsOutcome DeleteAppInstanceStreamingConfigurations(const Model::DeleteAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * <p>Deletes the streaming configurations of an app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppInstanceStreamingConfigurationsOutcomeCallable DeleteAppInstanceStreamingConfigurationsCallable(const Model::DeleteAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * <p>Deletes the streaming configurations of an app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceStreamingConfigurationsAsync(const Model::DeleteAppInstanceStreamingConfigurationsRequest& request, const DeleteAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppInstanceUserOutcome DeleteAppInstanceUser(const Model::DeleteAppInstanceUserRequest& request) const;

        /**
         * <p>Deletes an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppInstanceUserOutcomeCallable DeleteAppInstanceUserCallable(const Model::DeleteAppInstanceUserRequest& request) const;

        /**
         * <p>Deletes an <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppInstanceUserAsync(const Model::DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an attendee from the specified Amazon Chime SDK meeting and deletes
         * their <code>JoinToken</code>. Attendees are automatically deleted when a Amazon
         * Chime SDK meeting is deleted. For more information about the Amazon Chime SDK,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAttendeeOutcome DeleteAttendee(const Model::DeleteAttendeeRequest& request) const;

        /**
         * <p>Deletes an attendee from the specified Amazon Chime SDK meeting and deletes
         * their <code>JoinToken</code>. Attendees are automatically deleted when a Amazon
         * Chime SDK meeting is deleted. For more information about the Amazon Chime SDK,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAttendee">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAttendeeOutcomeCallable DeleteAttendeeCallable(const Model::DeleteAttendeeRequest& request) const;

        /**
         * <p>Deletes an attendee from the specified Amazon Chime SDK meeting and deletes
         * their <code>JoinToken</code>. Attendees are automatically deleted when a Amazon
         * Chime SDK meeting is deleted. For more information about the Amazon Chime SDK,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteAttendee">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAttendeeAsync(const Model::DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Immediately makes a channel and its memberships inaccessible and marks them
         * for deletion. This is an irreversible process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a user from a channel's ban list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelBanOutcome DeleteChannelBan(const Model::DeleteChannelBanRequest& request) const;

        /**
         * <p>Removes a user from a channel's ban list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelBan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelBanOutcomeCallable DeleteChannelBanCallable(const Model::DeleteChannelBanRequest& request) const;

        /**
         * <p>Removes a user from a channel's ban list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelBan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelBanAsync(const Model::DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member from a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMembershipOutcome DeleteChannelMembership(const Model::DeleteChannelMembershipRequest& request) const;

        /**
         * <p>Removes a member from a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelMembershipOutcomeCallable DeleteChannelMembershipCallable(const Model::DeleteChannelMembershipRequest& request) const;

        /**
         * <p>Removes a member from a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelMembershipAsync(const Model::DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelMessageOutcome DeleteChannelMessage(const Model::DeleteChannelMessageRequest& request) const;

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelMessageOutcomeCallable DeleteChannelMessageCallable(const Model::DeleteChannelMessageRequest& request) const;

        /**
         * <p>Deletes a channel message. Only admins can perform this action. Deletion
         * makes messages inaccessible immediately. A background process deletes any
         * revisions created by <code>UpdateChannelMessage</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelMessageAsync(const Model::DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a channel moderator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelModeratorOutcome DeleteChannelModerator(const Model::DeleteChannelModeratorRequest& request) const;

        /**
         * <p>Deletes a channel moderator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelModerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelModeratorOutcomeCallable DeleteChannelModeratorCallable(const Model::DeleteChannelModeratorRequest& request) const;

        /**
         * <p>Deletes a channel moderator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteChannelModerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelModeratorAsync(const Model::DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the events configuration that allows a bot to receive outgoing
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventsConfigurationOutcome DeleteEventsConfiguration(const Model::DeleteEventsConfigurationRequest& request) const;

        /**
         * <p>Deletes the events configuration that allows a bot to receive outgoing
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventsConfigurationOutcomeCallable DeleteEventsConfigurationCallable(const Model::DeleteEventsConfigurationRequest& request) const;

        /**
         * <p>Deletes the events configuration that allows a bot to receive outgoing
         * events.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventsConfigurationAsync(const Model::DeleteEventsConfigurationRequest& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime SDK meeting. When a meeting is deleted,
         * its attendees are also deleted and clients can no longer join it. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeetingOutcome DeleteMeeting(const Model::DeleteMeetingRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime SDK meeting. When a meeting is deleted,
         * its attendees are also deleted and clients can no longer join it. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteMeeting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMeetingOutcomeCallable DeleteMeetingCallable(const Model::DeleteMeetingRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime SDK meeting. When a meeting is deleted,
         * its attendees are also deleted and clients can no longer join it. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteMeeting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMeetingAsync(const Model::DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeletePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePhoneNumberOutcome DeletePhoneNumber(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePhoneNumberOutcomeCallable DeletePhoneNumberCallable(const Model::DeletePhoneNumberRequest& request) const;

        /**
         * <p>Moves the specified phone number into the <b>Deletion queue</b>. A phone
         * number must be disassociated from any users or Amazon Chime Voice Connectors
         * before it can be deleted.</p> <p>Deleted phone numbers remain in the <b>Deletion
         * queue</b> for 7 days before they are deleted permanently.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeletePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePhoneNumberAsync(const Model::DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified proxy session from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProxySessionOutcome DeleteProxySession(const Model::DeleteProxySessionRequest& request) const;

        /**
         * <p>Deletes the specified proxy session from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteProxySession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProxySessionOutcomeCallable DeleteProxySessionCallable(const Model::DeleteProxySessionRequest& request) const;

        /**
         * <p>Deletes the specified proxy session from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteProxySession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProxySessionAsync(const Model::DeleteProxySessionRequest& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a chat room in an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest& request) const;

        /**
         * <p>Deletes a chat room in an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request) const;

        /**
         * <p>Deletes a chat room in an Amazon Chime Enterprise account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member from a chat room in an Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoomMembershipOutcome DeleteRoomMembership(const Model::DeleteRoomMembershipRequest& request) const;

        /**
         * <p>Removes a member from a chat room in an Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoomMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoomMembershipOutcomeCallable DeleteRoomMembershipCallable(const Model::DeleteRoomMembershipRequest& request) const;

        /**
         * <p>Removes a member from a chat room in an Amazon Chime Enterprise
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteRoomMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoomMembershipAsync(const Model::DeleteRoomMembershipRequest& request, const DeleteRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSipMediaApplicationOutcome DeleteSipMediaApplication(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * <p>Deletes a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSipMediaApplicationOutcomeCallable DeleteSipMediaApplicationCallable(const Model::DeleteSipMediaApplicationRequest& request) const;

        /**
         * <p>Deletes a SIP media application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSipMediaApplicationAsync(const Model::DeleteSipMediaApplicationRequest& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a SIP rule. You must disable a SIP rule before you can delete
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSipRuleOutcome DeleteSipRule(const Model::DeleteSipRuleRequest& request) const;

        /**
         * <p>Deletes a SIP rule. You must disable a SIP rule before you can delete
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSipRuleOutcomeCallable DeleteSipRuleCallable(const Model::DeleteSipRuleRequest& request) const;

        /**
         * <p>Deletes a SIP rule. You must disable a SIP rule before you can delete
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteSipRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSipRuleAsync(const Model::DeleteSipRuleRequest& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector. Any phone numbers
         * associated with the Amazon Chime Voice Connector must be disassociated from it
         * before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOutcome DeleteVoiceConnector(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector. Any phone numbers
         * associated with the Amazon Chime Voice Connector must be disassociated from it
         * before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorOutcomeCallable DeleteVoiceConnectorCallable(const Model::DeleteVoiceConnectorRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector. Any phone numbers
         * associated with the Amazon Chime Voice Connector must be disassociated from it
         * before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorAsync(const Model::DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the emergency calling configuration details from the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcome DeleteVoiceConnectorEmergencyCallingConfiguration(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * <p>Deletes the emergency calling configuration details from the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorEmergencyCallingConfigurationOutcomeCallable DeleteVoiceConnectorEmergencyCallingConfigurationCallable(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * <p>Deletes the emergency calling configuration details from the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorEmergencyCallingConfigurationAsync(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector group. Any
         * <code>VoiceConnectorItems</code> and phone numbers associated with the group
         * must be removed before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorGroupOutcome DeleteVoiceConnectorGroup(const Model::DeleteVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector group. Any
         * <code>VoiceConnectorItems</code> and phone numbers associated with the group
         * must be removed before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorGroupOutcomeCallable DeleteVoiceConnectorGroupCallable(const Model::DeleteVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Deletes the specified Amazon Chime Voice Connector group. Any
         * <code>VoiceConnectorItems</code> and phone numbers associated with the group
         * must be removed before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorGroupAsync(const Model::DeleteVoiceConnectorGroupRequest& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the origination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcome DeleteVoiceConnectorOrigination(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the origination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorOriginationOutcomeCallable DeleteVoiceConnectorOriginationCallable(const Model::DeleteVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Deletes the origination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the origination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorOriginationAsync(const Model::DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the proxy configuration from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorProxyOutcome DeleteVoiceConnectorProxy(const Model::DeleteVoiceConnectorProxyRequest& request) const;

        /**
         * <p>Deletes the proxy configuration from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorProxy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorProxyOutcomeCallable DeleteVoiceConnectorProxyCallable(const Model::DeleteVoiceConnectorProxyRequest& request) const;

        /**
         * <p>Deletes the proxy configuration from the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorProxy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorProxyAsync(const Model::DeleteVoiceConnectorProxyRequest& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the streaming configuration for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorStreamingConfigurationOutcome DeleteVoiceConnectorStreamingConfiguration(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * <p>Deletes the streaming configuration for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorStreamingConfigurationOutcomeCallable DeleteVoiceConnectorStreamingConfigurationCallable(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * <p>Deletes the streaming configuration for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorStreamingConfigurationAsync(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the termination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcome DeleteVoiceConnectorTermination(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the termination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorTerminationOutcomeCallable DeleteVoiceConnectorTerminationCallable(const Model::DeleteVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Deletes the termination settings for the specified Amazon Chime Voice
         * Connector.</p>  <p>If emergency calling is configured for the Amazon Chime
         * Voice Connector, it must be deleted prior to deleting the termination
         * settings.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationAsync(const Model::DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcome DeleteVoiceConnectorTerminationCredentials(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVoiceConnectorTerminationCredentialsOutcomeCallable DeleteVoiceConnectorTerminationCredentialsCallable(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Deletes the specified SIP credentials used by your equipment to authenticate
         * during call termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DeleteVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVoiceConnectorTerminationCredentialsAsync(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceOutcome DescribeAppInstance(const Model::DescribeAppInstanceRequest& request) const;

        /**
         * <p>Returns the full details of an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppInstanceOutcomeCallable DescribeAppInstanceCallable(const Model::DescribeAppInstanceRequest& request) const;

        /**
         * <p>Returns the full details of an <code>AppInstance</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceAsync(const Model::DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of an <code>AppInstanceAdmin</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceAdminOutcome DescribeAppInstanceAdmin(const Model::DescribeAppInstanceAdminRequest& request) const;

        /**
         * <p>Returns the full details of an <code>AppInstanceAdmin</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceAdmin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppInstanceAdminOutcomeCallable DescribeAppInstanceAdminCallable(const Model::DescribeAppInstanceAdminRequest& request) const;

        /**
         * <p>Returns the full details of an <code>AppInstanceAdmin</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceAdmin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceAdminAsync(const Model::DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of an <code>AppInstanceUser</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppInstanceUserOutcome DescribeAppInstanceUser(const Model::DescribeAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the full details of an <code>AppInstanceUser</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppInstanceUserOutcomeCallable DescribeAppInstanceUserCallable(const Model::DescribeAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the full details of an <code>AppInstanceUser</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppInstanceUserAsync(const Model::DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a channel in an Amazon Chime app
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Returns the full details of a channel in an Amazon Chime app
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const Model::DescribeChannelRequest& request) const;

        /**
         * <p>Returns the full details of a channel in an Amazon Chime app
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelAsync(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a channel ban.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelBan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelBanOutcome DescribeChannelBan(const Model::DescribeChannelBanRequest& request) const;

        /**
         * <p>Returns the full details of a channel ban.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelBan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelBanOutcomeCallable DescribeChannelBanCallable(const Model::DescribeChannelBanRequest& request) const;

        /**
         * <p>Returns the full details of a channel ban.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelBan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelBanAsync(const Model::DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a user's channel membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipOutcome DescribeChannelMembership(const Model::DescribeChannelMembershipRequest& request) const;

        /**
         * <p>Returns the full details of a user's channel membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelMembershipOutcomeCallable DescribeChannelMembershipCallable(const Model::DescribeChannelMembershipRequest& request) const;

        /**
         * <p>Returns the full details of a user's channel membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelMembershipAsync(const Model::DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of a channel based on the membership of the
         * <code>AppInstanceUser</code> specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelMembershipForAppInstanceUserOutcome DescribeChannelMembershipForAppInstanceUser(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the details of a channel based on the membership of the
         * <code>AppInstanceUser</code> specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelMembershipForAppInstanceUserOutcomeCallable DescribeChannelMembershipForAppInstanceUserCallable(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the details of a channel based on the membership of the
         * <code>AppInstanceUser</code> specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelMembershipForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelMembershipForAppInstanceUserAsync(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratedByAppInstanceUserOutcome DescribeChannelModeratedByAppInstanceUser(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelModeratedByAppInstanceUserOutcomeCallable DescribeChannelModeratedByAppInstanceUserCallable(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>Returns the full details of a channel moderated by the specified
         * <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelModeratedByAppInstanceUserAsync(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the full details of a single ChannelModerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModerator">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelModeratorOutcome DescribeChannelModerator(const Model::DescribeChannelModeratorRequest& request) const;

        /**
         * <p>Returns the full details of a single ChannelModerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModerator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChannelModeratorOutcomeCallable DescribeChannelModeratorCallable(const Model::DescribeChannelModeratorRequest& request) const;

        /**
         * <p>Returns the full details of a single ChannelModerator.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DescribeChannelModerator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChannelModeratorAsync(const Model::DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the primary provisioned phone number from the specified Amazon
         * Chime user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumberFromUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumberFromUserOutcome DisassociatePhoneNumberFromUser(const Model::DisassociatePhoneNumberFromUserRequest& request) const;

        /**
         * <p>Disassociates the primary provisioned phone number from the specified Amazon
         * Chime user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumberFromUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumberFromUserOutcomeCallable DisassociatePhoneNumberFromUserCallable(const Model::DisassociatePhoneNumberFromUserRequest& request) const;

        /**
         * <p>Disassociates the primary provisioned phone number from the specified Amazon
         * Chime user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumberFromUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumberFromUserAsync(const Model::DisassociatePhoneNumberFromUserRequest& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcome DisassociatePhoneNumbersFromVoiceConnector(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorCallable(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request) const;

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumbersFromVoiceConnectorAsync(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcome DisassociatePhoneNumbersFromVoiceConnectorGroup(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociatePhoneNumbersFromVoiceConnectorGroupOutcomeCallable DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Disassociates the specified phone numbers from the specified Amazon Chime
         * Voice Connector group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociatePhoneNumbersFromVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified sign-in delegate groups from the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociateSigninDelegateGroupsFromAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSigninDelegateGroupsFromAccountOutcome DisassociateSigninDelegateGroupsFromAccount(const Model::DisassociateSigninDelegateGroupsFromAccountRequest& request) const;

        /**
         * <p>Disassociates the specified sign-in delegate groups from the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociateSigninDelegateGroupsFromAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateSigninDelegateGroupsFromAccountOutcomeCallable DisassociateSigninDelegateGroupsFromAccountCallable(const Model::DisassociateSigninDelegateGroupsFromAccountRequest& request) const;

        /**
         * <p>Disassociates the specified sign-in delegate groups from the specified Amazon
         * Chime account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/DisassociateSigninDelegateGroupsFromAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateSigninDelegateGroupsFromAccountAsync(const Model::DisassociateSigninDelegateGroupsFromAccountRequest& request, const DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime account, such as account
         * type and supported licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountOutcome GetAccount(const Model::GetAccountRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime account, such as account
         * type and supported licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountOutcomeCallable GetAccountCallable(const Model::GetAccountRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime account, such as account
         * type and supported licenses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountAsync(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves account settings for the specified Amazon Chime account ID, such as
         * remote control and dial out settings. For more information about these settings,
         * see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves account settings for the specified Amazon Chime account ID, such as
         * remote control and dial out settings. For more information about these settings,
         * see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves account settings for the specified Amazon Chime account ID, such as
         * remote control and dial out settings. For more information about these settings,
         * see <a href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the retention settings for an app instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppInstanceRetentionSettingsOutcome GetAppInstanceRetentionSettings(const Model::GetAppInstanceRetentionSettingsRequest& request) const;

        /**
         * <p>Gets the retention settings for an app instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppInstanceRetentionSettingsOutcomeCallable GetAppInstanceRetentionSettingsCallable(const Model::GetAppInstanceRetentionSettingsRequest& request) const;

        /**
         * <p>Gets the retention settings for an app instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppInstanceRetentionSettingsAsync(const Model::GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the streaming settings for an app instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppInstanceStreamingConfigurationsOutcome GetAppInstanceStreamingConfigurations(const Model::GetAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * <p>Gets the streaming settings for an app instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppInstanceStreamingConfigurationsOutcomeCallable GetAppInstanceStreamingConfigurationsCallable(const Model::GetAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * <p>Gets the streaming settings for an app instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppInstanceStreamingConfigurationsAsync(const Model::GetAppInstanceStreamingConfigurationsRequest& request, const GetAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Amazon Chime SDK attendee details for a specified meeting ID and
         * attendee ID. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttendeeOutcome GetAttendee(const Model::GetAttendeeRequest& request) const;

        /**
         * <p>Gets the Amazon Chime SDK attendee details for a specified meeting ID and
         * attendee ID. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAttendee">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAttendeeOutcomeCallable GetAttendeeCallable(const Model::GetAttendeeRequest& request) const;

        /**
         * <p>Gets the Amazon Chime SDK attendee details for a specified meeting ID and
         * attendee ID. For more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetAttendee">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAttendeeAsync(const Model::GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified bot, such as bot email address, bot type,
         * status, and display name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetBot">AWS API
         * Reference</a></p>
         */
        virtual Model::GetBotOutcome GetBot(const Model::GetBotRequest& request) const;

        /**
         * <p>Retrieves details for the specified bot, such as bot email address, bot type,
         * status, and display name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetBot">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotOutcomeCallable GetBotCallable(const Model::GetBotRequest& request) const;

        /**
         * <p>Retrieves details for the specified bot, such as bot email address, bot type,
         * status, and display name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetBot">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotAsync(const Model::GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the full details of a channel message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelMessageOutcome GetChannelMessage(const Model::GetChannelMessageRequest& request) const;

        /**
         * <p>Gets the full details of a channel message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelMessageOutcomeCallable GetChannelMessageCallable(const Model::GetChannelMessageRequest& request) const;

        /**
         * <p>Gets the full details of a channel message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelMessageAsync(const Model::GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details for an events configuration that allows a bot to receive
         * outgoing events, such as an HTTPS endpoint or Lambda function ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventsConfigurationOutcome GetEventsConfiguration(const Model::GetEventsConfigurationRequest& request) const;

        /**
         * <p>Gets details for an events configuration that allows a bot to receive
         * outgoing events, such as an HTTPS endpoint or Lambda function ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventsConfigurationOutcomeCallable GetEventsConfigurationCallable(const Model::GetEventsConfigurationRequest& request) const;

        /**
         * <p>Gets details for an events configuration that allows a bot to receive
         * outgoing events, such as an HTTPS endpoint or Lambda function ARN.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventsConfigurationAsync(const Model::GetEventsConfigurationRequest& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGlobalSettingsOutcome GetGlobalSettings() const;

        /**
         * <p>Retrieves global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetGlobalSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGlobalSettingsOutcomeCallable GetGlobalSettingsCallable() const;

        /**
         * <p>Retrieves global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetGlobalSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGlobalSettingsAsync(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Gets the Amazon Chime SDK meeting details for the specified meeting ID. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMeetingOutcome GetMeeting(const Model::GetMeetingRequest& request) const;

        /**
         * <p>Gets the Amazon Chime SDK meeting details for the specified meeting ID. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMeeting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMeetingOutcomeCallable GetMeetingCallable(const Model::GetMeetingRequest& request) const;

        /**
         * <p>Gets the Amazon Chime SDK meeting details for the specified meeting ID. For
         * more information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMeeting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMeetingAsync(const Model::GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The endpoint for the messaging session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMessagingSessionEndpointOutcome GetMessagingSessionEndpoint(const Model::GetMessagingSessionEndpointRequest& request) const;

        /**
         * <p>The endpoint for the messaging session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMessagingSessionEndpointOutcomeCallable GetMessagingSessionEndpointCallable(const Model::GetMessagingSessionEndpointRequest& request) const;

        /**
         * <p>The endpoint for the messaging session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetMessagingSessionEndpoint">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMessagingSessionEndpointAsync(const Model::GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOutcome GetPhoneNumber(const Model::GetPhoneNumberRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberOutcomeCallable GetPhoneNumberCallable(const Model::GetPhoneNumberRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number ID, such as associations,
         * capabilities, and product type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberAsync(const Model::GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified phone number order, such as order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberOrderOutcome GetPhoneNumberOrder(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number order, such as order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberOrderOutcomeCallable GetPhoneNumberOrderCallable(const Model::GetPhoneNumberOrderRequest& request) const;

        /**
         * <p>Retrieves details for the specified phone number order, such as order
         * creation timestamp, phone numbers in E.164 format, product type, and order
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberOrder">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberOrderAsync(const Model::GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPhoneNumberSettingsOutcome GetPhoneNumberSettings() const;

        /**
         * <p>Retrieves the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPhoneNumberSettingsOutcomeCallable GetPhoneNumberSettingsCallable() const;

        /**
         * <p>Retrieves the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetPhoneNumberSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPhoneNumberSettingsAsync(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Gets the specified proxy session details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProxySessionOutcome GetProxySession(const Model::GetProxySessionRequest& request) const;

        /**
         * <p>Gets the specified proxy session details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetProxySession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProxySessionOutcomeCallable GetProxySessionCallable(const Model::GetProxySessionRequest& request) const;

        /**
         * <p>Gets the specified proxy session details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetProxySession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProxySessionAsync(const Model::GetProxySessionRequest& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the retention settings for the specified Amazon Chime Enterprise
         * account. For more information about retention settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRetentionSettingsOutcome GetRetentionSettings(const Model::GetRetentionSettingsRequest& request) const;

        /**
         * <p>Gets the retention settings for the specified Amazon Chime Enterprise
         * account. For more information about retention settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRetentionSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRetentionSettingsOutcomeCallable GetRetentionSettingsCallable(const Model::GetRetentionSettingsRequest& request) const;

        /**
         * <p>Gets the retention settings for the specified Amazon Chime Enterprise
         * account. For more information about retention settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRetentionSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRetentionSettingsAsync(const Model::GetRetentionSettingsRequest& request, const GetRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRoom">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRoomOutcome GetRoom(const Model::GetRoomRequest& request) const;

        /**
         * <p>Retrieves room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRoom">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoomOutcomeCallable GetRoomCallable(const Model::GetRoomRequest& request) const;

        /**
         * <p>Retrieves room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetRoom">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoomAsync(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the information for a SIP media application, including name, AWS
         * Region, and endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipMediaApplicationOutcome GetSipMediaApplication(const Model::GetSipMediaApplicationRequest& request) const;

        /**
         * <p>Retrieves the information for a SIP media application, including name, AWS
         * Region, and endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSipMediaApplicationOutcomeCallable GetSipMediaApplicationCallable(const Model::GetSipMediaApplicationRequest& request) const;

        /**
         * <p>Retrieves the information for a SIP media application, including name, AWS
         * Region, and endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipMediaApplicationAsync(const Model::GetSipMediaApplicationRequest& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipMediaApplicationLoggingConfigurationOutcome GetSipMediaApplicationLoggingConfiguration(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * <p>Returns the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSipMediaApplicationLoggingConfigurationOutcomeCallable GetSipMediaApplicationLoggingConfigurationCallable(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * <p>Returns the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipMediaApplicationLoggingConfigurationAsync(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of a SIP rule, such as the rule ID, name, triggers, and
         * target endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSipRuleOutcome GetSipRule(const Model::GetSipRuleRequest& request) const;

        /**
         * <p>Retrieves the details of a SIP rule, such as the rule ID, name, triggers, and
         * target endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSipRuleOutcomeCallable GetSipRuleCallable(const Model::GetSipRuleRequest& request) const;

        /**
         * <p>Retrieves the details of a SIP rule, such as the rule ID, name, triggers, and
         * target endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetSipRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSipRuleAsync(const Model::GetSipRuleRequest& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified user ID, such as primary email address,
         * license type, and personal meeting PIN.</p> <p>To retrieve user details with an
         * email address instead of a user ID, use the <a>ListUsers</a> action, and then
         * filter by email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUser">AWS API
         * Reference</a></p>
         */
        virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves details for the specified user ID, such as primary email address,
         * license type, and personal meeting PIN.</p> <p>To retrieve user details with an
         * email address instead of a user ID, use the <a>ListUsers</a> action, and then
         * filter by email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUser">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserOutcomeCallable GetUserCallable(const Model::GetUserRequest& request) const;

        /**
         * <p>Retrieves details for the specified user ID, such as primary email address,
         * license type, and personal meeting PIN.</p> <p>To retrieve user details with an
         * email address instead of a user ID, use the <a>ListUsers</a> action, and then
         * filter by email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUser">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserAsync(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves settings for the specified user ID, such as any associated phone
         * number settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserSettingsOutcome GetUserSettings(const Model::GetUserSettingsRequest& request) const;

        /**
         * <p>Retrieves settings for the specified user ID, such as any associated phone
         * number settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUserSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUserSettingsOutcomeCallable GetUserSettingsCallable(const Model::GetUserSettingsRequest& request) const;

        /**
         * <p>Retrieves settings for the specified user ID, such as any associated phone
         * number settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetUserSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserSettingsAsync(const Model::GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector, such as
         * timestamps, name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOutcome GetVoiceConnector(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector, such as
         * timestamps, name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorOutcomeCallable GetVoiceConnectorCallable(const Model::GetVoiceConnectorRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector, such as
         * timestamps, name, outbound host, and encryption requirements.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorAsync(const Model::GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the emergency calling configuration details for the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorEmergencyCallingConfigurationOutcome GetVoiceConnectorEmergencyCallingConfiguration(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * <p>Gets the emergency calling configuration details for the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorEmergencyCallingConfigurationOutcomeCallable GetVoiceConnectorEmergencyCallingConfigurationCallable(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * <p>Gets the emergency calling configuration details for the specified Amazon
         * Chime Voice Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorEmergencyCallingConfigurationAsync(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector group, such
         * as timestamps, name, and associated
         * <code>VoiceConnectorItems</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorGroupOutcome GetVoiceConnectorGroup(const Model::GetVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector group, such
         * as timestamps, name, and associated
         * <code>VoiceConnectorItems</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorGroupOutcomeCallable GetVoiceConnectorGroupCallable(const Model::GetVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Retrieves details for the specified Amazon Chime Voice Connector group, such
         * as timestamps, name, and associated
         * <code>VoiceConnectorItems</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorGroupAsync(const Model::GetVoiceConnectorGroupRequest& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the logging configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether SIP message logs are enabled for sending to
         * Amazon CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorLoggingConfigurationOutcome GetVoiceConnectorLoggingConfiguration(const Model::GetVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * <p>Retrieves the logging configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether SIP message logs are enabled for sending to
         * Amazon CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorLoggingConfigurationOutcomeCallable GetVoiceConnectorLoggingConfigurationCallable(const Model::GetVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * <p>Retrieves the logging configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether SIP message logs are enabled for sending to
         * Amazon CloudWatch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorLoggingConfigurationAsync(const Model::GetVoiceConnectorLoggingConfigurationRequest& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves origination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorOriginationOutcome GetVoiceConnectorOrigination(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Retrieves origination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorOriginationOutcomeCallable GetVoiceConnectorOriginationCallable(const Model::GetVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Retrieves origination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorOriginationAsync(const Model::GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the proxy configuration details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorProxyOutcome GetVoiceConnectorProxy(const Model::GetVoiceConnectorProxyRequest& request) const;

        /**
         * <p>Gets the proxy configuration details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorProxy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorProxyOutcomeCallable GetVoiceConnectorProxyCallable(const Model::GetVoiceConnectorProxyRequest& request) const;

        /**
         * <p>Gets the proxy configuration details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorProxy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorProxyAsync(const Model::GetVoiceConnectorProxyRequest& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the streaming configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether media streaming is enabled for sending to Amazon
         * Kinesis. It also shows the retention period, in hours, for the Amazon Kinesis
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorStreamingConfigurationOutcome GetVoiceConnectorStreamingConfiguration(const Model::GetVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * <p>Retrieves the streaming configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether media streaming is enabled for sending to Amazon
         * Kinesis. It also shows the retention period, in hours, for the Amazon Kinesis
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorStreamingConfigurationOutcomeCallable GetVoiceConnectorStreamingConfigurationCallable(const Model::GetVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * <p>Retrieves the streaming configuration details for the specified Amazon Chime
         * Voice Connector. Shows whether media streaming is enabled for sending to Amazon
         * Kinesis. It also shows the retention period, in hours, for the Amazon Kinesis
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorStreamingConfigurationAsync(const Model::GetVoiceConnectorStreamingConfigurationRequest& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves termination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationOutcome GetVoiceConnectorTermination(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Retrieves termination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorTerminationOutcomeCallable GetVoiceConnectorTerminationCallable(const Model::GetVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Retrieves termination setting details for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationAsync(const Model::GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the last time a SIP <code>OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcome GetVoiceConnectorTerminationHealth(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * <p>Retrieves information about the last time a SIP <code>OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVoiceConnectorTerminationHealthOutcomeCallable GetVoiceConnectorTerminationHealthCallable(const Model::GetVoiceConnectorTerminationHealthRequest& request) const;

        /**
         * <p>Retrieves information about the last time a SIP <code>OPTIONS</code> ping was
         * received from your SIP infrastructure for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/GetVoiceConnectorTerminationHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVoiceConnectorTerminationHealthAsync(const Model::GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends email to a maximum of 50 users, inviting them to the specified Amazon
         * Chime <code>Team</code> account. Only <code>Team</code> account types are
         * currently supported for this action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/InviteUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteUsersOutcome InviteUsers(const Model::InviteUsersRequest& request) const;

        /**
         * <p>Sends email to a maximum of 50 users, inviting them to the specified Amazon
         * Chime <code>Team</code> account. Only <code>Team</code> account types are
         * currently supported for this action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/InviteUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteUsersOutcomeCallable InviteUsersCallable(const Model::InviteUsersRequest& request) const;

        /**
         * <p>Sends email to a maximum of 50 users, inviting them to the specified Amazon
         * Chime <code>Team</code> account. Only <code>Team</code> account types are
         * currently supported for this action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/InviteUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteUsersAsync(const Model::InviteUsersRequest& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Chime accounts under the administrator's AWS account. You
         * can filter accounts by account name prefix. To find out which Amazon Chime
         * account a user belongs to, you can filter by the user's email address, which
         * returns one account result.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime accounts under the administrator's AWS account. You
         * can filter accounts by account name prefix. To find out which Amazon Chime
         * account a user belongs to, you can filter by the user's email address, which
         * returns one account result.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountsOutcomeCallable ListAccountsCallable(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime accounts under the administrator's AWS account. You
         * can filter accounts by account name prefix. To find out which Amazon Chime
         * account a user belongs to, you can filter by the user's email address, which
         * returns one account result.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsAsync(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the administrators in the app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceAdmins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstanceAdminsOutcome ListAppInstanceAdmins(const Model::ListAppInstanceAdminsRequest& request) const;

        /**
         * <p>Returns a list of the administrators in the app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceAdmins">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppInstanceAdminsOutcomeCallable ListAppInstanceAdminsCallable(const Model::ListAppInstanceAdminsRequest& request) const;

        /**
         * <p>Returns a list of the administrators in the app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceAdmins">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstanceAdminsAsync(const Model::ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all <code>AppInstanceUsers</code> created under a single app
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstanceUsersOutcome ListAppInstanceUsers(const Model::ListAppInstanceUsersRequest& request) const;

        /**
         * <p>List all <code>AppInstanceUsers</code> created under a single app
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceUsers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppInstanceUsersOutcomeCallable ListAppInstanceUsersCallable(const Model::ListAppInstanceUsersRequest& request) const;

        /**
         * <p>List all <code>AppInstanceUsers</code> created under a single app
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstanceUsers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstanceUsersAsync(const Model::ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Amazon Chime app instances created under a single AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppInstancesOutcome ListAppInstances(const Model::ListAppInstancesRequest& request) const;

        /**
         * <p>Lists all Amazon Chime app instances created under a single AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppInstancesOutcomeCallable ListAppInstancesCallable(const Model::ListAppInstancesRequest& request) const;

        /**
         * <p>Lists all Amazon Chime app instances created under a single AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAppInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppInstancesAsync(const Model::ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK attendee
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendeeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttendeeTagsOutcome ListAttendeeTags(const Model::ListAttendeeTagsRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK attendee
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendeeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttendeeTagsOutcomeCallable ListAttendeeTagsCallable(const Model::ListAttendeeTagsRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK attendee
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendeeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttendeeTagsAsync(const Model::ListAttendeeTagsRequest& request, const ListAttendeeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the attendees for the specified Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendees">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttendeesOutcome ListAttendees(const Model::ListAttendeesRequest& request) const;

        /**
         * <p>Lists the attendees for the specified Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendees">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttendeesOutcomeCallable ListAttendeesCallable(const Model::ListAttendeesRequest& request) const;

        /**
         * <p>Lists the attendees for the specified Amazon Chime SDK meeting. For more
         * information about the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListAttendees">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttendeesAsync(const Model::ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the bots associated with the administrator's Amazon Chime Enterprise
         * account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListBots">AWS API
         * Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * <p>Lists the bots associated with the administrator's Amazon Chime Enterprise
         * account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListBots">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotsOutcomeCallable ListBotsCallable(const Model::ListBotsRequest& request) const;

        /**
         * <p>Lists the bots associated with the administrator's Amazon Chime Enterprise
         * account ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListBots">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotsAsync(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the users banned from a particular channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelBans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelBansOutcome ListChannelBans(const Model::ListChannelBansRequest& request) const;

        /**
         * <p>Lists all the users banned from a particular channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelBans">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelBansOutcomeCallable ListChannelBansCallable(const Model::ListChannelBansRequest& request) const;

        /**
         * <p>Lists all the users banned from a particular channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelBans">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelBansAsync(const Model::ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all channel memberships in a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsOutcome ListChannelMemberships(const Model::ListChannelMembershipsRequest& request) const;

        /**
         * <p>Lists all channel memberships in a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMemberships">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelMembershipsOutcomeCallable ListChannelMembershipsCallable(const Model::ListChannelMembershipsRequest& request) const;

        /**
         * <p>Lists all channel memberships in a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMemberships">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMembershipsAsync(const Model::ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all channels that a particular <code>AppInstanceUser</code> is a part
         * of. Only an <code>AppInstanceAdmin</code> can call the API with a user ARN that
         * is not their own.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMembershipsForAppInstanceUserOutcome ListChannelMembershipsForAppInstanceUser(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) const;

        /**
         * <p>Lists all channels that a particular <code>AppInstanceUser</code> is a part
         * of. Only an <code>AppInstanceAdmin</code> can call the API with a user ARN that
         * is not their own.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelMembershipsForAppInstanceUserOutcomeCallable ListChannelMembershipsForAppInstanceUserCallable(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) const;

        /**
         * <p>Lists all channels that a particular <code>AppInstanceUser</code> is a part
         * of. Only an <code>AppInstanceAdmin</code> can call the API with a user ARN that
         * is not their own.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMembershipsForAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMembershipsForAppInstanceUserAsync(const Model::ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. Sorted in descending order by default, based on
         * the creation timestamp.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelMessagesOutcome ListChannelMessages(const Model::ListChannelMessagesRequest& request) const;

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. Sorted in descending order by default, based on
         * the creation timestamp.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMessages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelMessagesOutcomeCallable ListChannelMessagesCallable(const Model::ListChannelMessagesRequest& request) const;

        /**
         * <p>List all the messages in a channel. Returns a paginated list of
         * <code>ChannelMessages</code>. Sorted in descending order by default, based on
         * the creation timestamp.</p>  <p>Redacted messages appear in the results as
         * empty, since they are only redacted, not deleted. Deleted messages do not appear
         * in the results. This action always returns the latest version of an edited
         * message.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelMessages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelMessagesAsync(const Model::ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the moderators for a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelModerators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelModeratorsOutcome ListChannelModerators(const Model::ListChannelModeratorsRequest& request) const;

        /**
         * <p>Lists all the moderators for a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelModerators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelModeratorsOutcomeCallable ListChannelModeratorsCallable(const Model::ListChannelModeratorsRequest& request) const;

        /**
         * <p>Lists all the moderators for a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelModerators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelModeratorsAsync(const Model::ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Lists all Channels created under a single Chime App as a paginated list. You
         * can specify filters to narrow results.</p> <p class="title"> <b>Functionality
         * &amp; restrictions</b> </p> <ul> <li> <p>Use privacy = <code>PUBLIC</code> to
         * retrieve all public channels in the account</p> </li> <li> <p>Only an
         * <code>AppInstanceAdmin</code> can set privacy = <code>PRIVATE</code> to list the
         * private channels in an account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of the channels moderated by an app instance user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsModeratedByAppInstanceUserOutcome ListChannelsModeratedByAppInstanceUser(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>A list of the channels moderated by an app instance user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsModeratedByAppInstanceUserOutcomeCallable ListChannelsModeratedByAppInstanceUserCallable(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) const;

        /**
         * <p>A list of the channels moderated by an app instance user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListChannelsModeratedByAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsModeratedByAppInstanceUserAsync(const Model::ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetingTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeetingTagsOutcome ListMeetingTags(const Model::ListMeetingTagsRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetingTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMeetingTagsOutcomeCallable ListMeetingTagsCallable(const Model::ListMeetingTagsRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetingTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMeetingTagsAsync(const Model::ListMeetingTagsRequest& request, const ListMeetingTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists up to 100 active Amazon Chime SDK meetings. For more information about
         * the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeetingsOutcome ListMeetings(const Model::ListMeetingsRequest& request) const;

        /**
         * <p>Lists up to 100 active Amazon Chime SDK meetings. For more information about
         * the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMeetingsOutcomeCallable ListMeetingsCallable(const Model::ListMeetingsRequest& request) const;

        /**
         * <p>Lists up to 100 active Amazon Chime SDK meetings. For more information about
         * the Amazon Chime SDK, see <a
         * href="https://docs.aws.amazon.com/chime/latest/dg/meetings-sdk.html">Using the
         * Amazon Chime SDK</a> in the <i>Amazon Chime Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListMeetings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMeetingsAsync(const Model::ListMeetingsRequest& request, const ListMeetingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the phone number orders for the administrator's Amazon Chime
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumberOrdersOutcome ListPhoneNumberOrders(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * <p>Lists the phone number orders for the administrator's Amazon Chime
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumberOrdersOutcomeCallable ListPhoneNumberOrdersCallable(const Model::ListPhoneNumberOrdersRequest& request) const;

        /**
         * <p>Lists the phone number orders for the administrator's Amazon Chime
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumberOrders">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumberOrdersAsync(const Model::ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime account, Amazon Chime
         * user, Amazon Chime Voice Connector, or Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime account, Amazon Chime
         * user, Amazon Chime Voice Connector, or Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumbers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * <p>Lists the phone numbers for the specified Amazon Chime account, Amazon Chime
         * user, Amazon Chime Voice Connector, or Amazon Chime Voice Connector
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListPhoneNumbers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPhoneNumbersAsync(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the proxy sessions for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListProxySessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProxySessionsOutcome ListProxySessions(const Model::ListProxySessionsRequest& request) const;

        /**
         * <p>Lists the proxy sessions for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListProxySessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProxySessionsOutcomeCallable ListProxySessionsCallable(const Model::ListProxySessionsRequest& request) const;

        /**
         * <p>Lists the proxy sessions for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListProxySessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProxySessionsAsync(const Model::ListProxySessionsRequest& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the membership details for the specified room in an Amazon Chime
         * Enterprise account, such as the members' IDs, email addresses, and
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRoomMemberships">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoomMembershipsOutcome ListRoomMemberships(const Model::ListRoomMembershipsRequest& request) const;

        /**
         * <p>Lists the membership details for the specified room in an Amazon Chime
         * Enterprise account, such as the members' IDs, email addresses, and
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRoomMemberships">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoomMembershipsOutcomeCallable ListRoomMembershipsCallable(const Model::ListRoomMembershipsRequest& request) const;

        /**
         * <p>Lists the membership details for the specified room in an Amazon Chime
         * Enterprise account, such as the members' IDs, email addresses, and
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRoomMemberships">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoomMembershipsAsync(const Model::ListRoomMembershipsRequest& request, const ListRoomMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the room details for the specified Amazon Chime Enterprise account.
         * Optionally, filter the results by a member ID (user ID or bot ID) to see a list
         * of rooms that the member belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRooms">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRoomsOutcome ListRooms(const Model::ListRoomsRequest& request) const;

        /**
         * <p>Lists the room details for the specified Amazon Chime Enterprise account.
         * Optionally, filter the results by a member ID (user ID or bot ID) to see a list
         * of rooms that the member belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRooms">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoomsOutcomeCallable ListRoomsCallable(const Model::ListRoomsRequest& request) const;

        /**
         * <p>Lists the room details for the specified Amazon Chime Enterprise account.
         * Optionally, filter the results by a member ID (user ID or bot ID) to see a list
         * of rooms that the member belongs to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListRooms">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoomsAsync(const Model::ListRoomsRequest& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SIP media applications under the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipMediaApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSipMediaApplicationsOutcome ListSipMediaApplications(const Model::ListSipMediaApplicationsRequest& request) const;

        /**
         * <p>Lists the SIP media applications under the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipMediaApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSipMediaApplicationsOutcomeCallable ListSipMediaApplicationsCallable(const Model::ListSipMediaApplicationsRequest& request) const;

        /**
         * <p>Lists the SIP media applications under the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipMediaApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSipMediaApplicationsAsync(const Model::ListSipMediaApplicationsRequest& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SIP rules under the administrator's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSipRulesOutcome ListSipRules(const Model::ListSipRulesRequest& request) const;

        /**
         * <p>Lists the SIP rules under the administrator's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSipRulesOutcomeCallable ListSipRulesCallable(const Model::ListSipRulesRequest& request) const;

        /**
         * <p>Lists the SIP rules under the administrator's AWS account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListSipRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSipRulesAsync(const Model::ListSipRulesRequest& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags applied to an Amazon Chime SDK meeting resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the users that belong to the specified Amazon Chime account. You can
         * specify an email address to list only the user that the email address belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users that belong to the specified Amazon Chime account. You can
         * specify an email address to list only the user that the email address belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListUsers">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsersOutcomeCallable ListUsersCallable(const Model::ListUsersRequest& request) const;

        /**
         * <p>Lists the users that belong to the specified Amazon Chime account. You can
         * specify an email address to list only the user that the email address belongs
         * to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListUsers">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsersAsync(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Chime Voice Connector groups for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorGroupsOutcome ListVoiceConnectorGroups(const Model::ListVoiceConnectorGroupsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime Voice Connector groups for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorGroupsOutcomeCallable ListVoiceConnectorGroupsCallable(const Model::ListVoiceConnectorGroupsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime Voice Connector groups for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorGroupsAsync(const Model::ListVoiceConnectorGroupsRequest& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcome ListVoiceConnectorTerminationCredentials(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorTerminationCredentialsOutcomeCallable ListVoiceConnectorTerminationCredentialsCallable(const Model::ListVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Lists the SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorTerminationCredentialsAsync(const Model::ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Amazon Chime Voice Connectors for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVoiceConnectorsOutcome ListVoiceConnectors(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime Voice Connectors for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVoiceConnectorsOutcomeCallable ListVoiceConnectorsCallable(const Model::ListVoiceConnectorsRequest& request) const;

        /**
         * <p>Lists the Amazon Chime Voice Connectors for the administrator's AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ListVoiceConnectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVoiceConnectorsAsync(const Model::ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Logs out the specified user from all of the devices they are currently logged
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LogoutUser">AWS
         * API Reference</a></p>
         */
        virtual Model::LogoutUserOutcome LogoutUser(const Model::LogoutUserRequest& request) const;

        /**
         * <p>Logs out the specified user from all of the devices they are currently logged
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LogoutUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LogoutUserOutcomeCallable LogoutUserCallable(const Model::LogoutUserRequest& request) const;

        /**
         * <p>Logs out the specified user from all of the devices they are currently logged
         * into.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/LogoutUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LogoutUserAsync(const Model::LogoutUserRequest& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the amount of time in days that a given app instance retains
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppInstanceRetentionSettingsOutcome PutAppInstanceRetentionSettings(const Model::PutAppInstanceRetentionSettingsRequest& request) const;

        /**
         * <p>Sets the amount of time in days that a given app instance retains
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppInstanceRetentionSettingsOutcomeCallable PutAppInstanceRetentionSettingsCallable(const Model::PutAppInstanceRetentionSettingsRequest& request) const;

        /**
         * <p>Sets the amount of time in days that a given app instance retains
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceRetentionSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppInstanceRetentionSettingsAsync(const Model::PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The data streaming configurations of an app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppInstanceStreamingConfigurationsOutcome PutAppInstanceStreamingConfigurations(const Model::PutAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * <p>The data streaming configurations of an app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppInstanceStreamingConfigurationsOutcomeCallable PutAppInstanceStreamingConfigurationsCallable(const Model::PutAppInstanceStreamingConfigurationsRequest& request) const;

        /**
         * <p>The data streaming configurations of an app instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutAppInstanceStreamingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppInstanceStreamingConfigurationsAsync(const Model::PutAppInstanceStreamingConfigurationsRequest& request, const PutAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an events configuration that allows a bot to receive outgoing events
         * sent by Amazon Chime. Choose either an HTTPS endpoint or a Lambda function ARN.
         * For more information, see <a>Bot</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutEventsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEventsConfigurationOutcome PutEventsConfiguration(const Model::PutEventsConfigurationRequest& request) const;

        /**
         * <p>Creates an events configuration that allows a bot to receive outgoing events
         * sent by Amazon Chime. Choose either an HTTPS endpoint or a Lambda function ARN.
         * For more information, see <a>Bot</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutEventsConfigurationOutcomeCallable PutEventsConfigurationCallable(const Model::PutEventsConfigurationRequest& request) const;

        /**
         * <p>Creates an events configuration that allows a bot to receive outgoing events
         * sent by Amazon Chime. Choose either an HTTPS endpoint or a Lambda function ARN.
         * For more information, see <a>Bot</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutEventsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutEventsConfigurationAsync(const Model::PutEventsConfigurationRequest& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts retention settings for the specified Amazon Chime Enterprise account. We
         * recommend using AWS CloudTrail to monitor usage of this API for your account.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/cloudtrail.html">Logging
         * Amazon Chime API Calls with AWS CloudTrail</a> in the <i>Amazon Chime
         * Administration Guide</i>.</p> <p>To turn off existing retention settings, remove
         * the number of days from the corresponding <b>RetentionDays</b> field in the
         * <b>RetentionSettings</b> object. For more information about retention settings,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutRetentionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionSettingsOutcome PutRetentionSettings(const Model::PutRetentionSettingsRequest& request) const;

        /**
         * <p>Puts retention settings for the specified Amazon Chime Enterprise account. We
         * recommend using AWS CloudTrail to monitor usage of this API for your account.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/cloudtrail.html">Logging
         * Amazon Chime API Calls with AWS CloudTrail</a> in the <i>Amazon Chime
         * Administration Guide</i>.</p> <p>To turn off existing retention settings, remove
         * the number of days from the corresponding <b>RetentionDays</b> field in the
         * <b>RetentionSettings</b> object. For more information about retention settings,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutRetentionSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRetentionSettingsOutcomeCallable PutRetentionSettingsCallable(const Model::PutRetentionSettingsRequest& request) const;

        /**
         * <p>Puts retention settings for the specified Amazon Chime Enterprise account. We
         * recommend using AWS CloudTrail to monitor usage of this API for your account.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/cloudtrail.html">Logging
         * Amazon Chime API Calls with AWS CloudTrail</a> in the <i>Amazon Chime
         * Administration Guide</i>.</p> <p>To turn off existing retention settings, remove
         * the number of days from the corresponding <b>RetentionDays</b> field in the
         * <b>RetentionSettings</b> object. For more information about retention settings,
         * see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/chat-retention.html">Managing
         * Chat Retention Policies</a> in the <i>Amazon Chime Administration
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutRetentionSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRetentionSettingsAsync(const Model::PutRetentionSettingsRequest& request, const PutRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSipMediaApplicationLoggingConfigurationOutcome PutSipMediaApplicationLoggingConfiguration(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * <p>Updates the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSipMediaApplicationLoggingConfigurationOutcomeCallable PutSipMediaApplicationLoggingConfigurationCallable(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request) const;

        /**
         * <p>Updates the logging configuration for the specified SIP media
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutSipMediaApplicationLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSipMediaApplicationLoggingConfigurationAsync(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts emergency calling configuration details to the specified Amazon Chime
         * Voice Connector, such as emergency phone numbers and calling countries.
         * Origination and termination settings must be enabled for the Amazon Chime Voice
         * Connector before emergency calling can be configured.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorEmergencyCallingConfigurationOutcome PutVoiceConnectorEmergencyCallingConfiguration(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * <p>Puts emergency calling configuration details to the specified Amazon Chime
         * Voice Connector, such as emergency phone numbers and calling countries.
         * Origination and termination settings must be enabled for the Amazon Chime Voice
         * Connector before emergency calling can be configured.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorEmergencyCallingConfigurationOutcomeCallable PutVoiceConnectorEmergencyCallingConfigurationCallable(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request) const;

        /**
         * <p>Puts emergency calling configuration details to the specified Amazon Chime
         * Voice Connector, such as emergency phone numbers and calling countries.
         * Origination and termination settings must be enabled for the Amazon Chime Voice
         * Connector before emergency calling can be configured.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorEmergencyCallingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorEmergencyCallingConfigurationAsync(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a logging configuration for the specified Amazon Chime Voice Connector.
         * The logging configuration specifies whether SIP message logs are enabled for
         * sending to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorLoggingConfigurationOutcome PutVoiceConnectorLoggingConfiguration(const Model::PutVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * <p>Adds a logging configuration for the specified Amazon Chime Voice Connector.
         * The logging configuration specifies whether SIP message logs are enabled for
         * sending to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorLoggingConfigurationOutcomeCallable PutVoiceConnectorLoggingConfigurationCallable(const Model::PutVoiceConnectorLoggingConfigurationRequest& request) const;

        /**
         * <p>Adds a logging configuration for the specified Amazon Chime Voice Connector.
         * The logging configuration specifies whether SIP message logs are enabled for
         * sending to Amazon CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorLoggingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorLoggingConfigurationAsync(const Model::PutVoiceConnectorLoggingConfigurationRequest& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds origination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off origination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorOriginationOutcome PutVoiceConnectorOrigination(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Adds origination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off origination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorOriginationOutcomeCallable PutVoiceConnectorOriginationCallable(const Model::PutVoiceConnectorOriginationRequest& request) const;

        /**
         * <p>Adds origination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off origination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorOrigination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorOriginationAsync(const Model::PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts the specified proxy configuration to the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorProxy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorProxyOutcome PutVoiceConnectorProxy(const Model::PutVoiceConnectorProxyRequest& request) const;

        /**
         * <p>Puts the specified proxy configuration to the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorProxy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorProxyOutcomeCallable PutVoiceConnectorProxyCallable(const Model::PutVoiceConnectorProxyRequest& request) const;

        /**
         * <p>Puts the specified proxy configuration to the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorProxy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorProxyAsync(const Model::PutVoiceConnectorProxyRequest& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a streaming configuration for the specified Amazon Chime Voice
         * Connector. The streaming configuration specifies whether media streaming is
         * enabled for sending to Amazon Kinesis. It also sets the retention period, in
         * hours, for the Amazon Kinesis data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorStreamingConfigurationOutcome PutVoiceConnectorStreamingConfiguration(const Model::PutVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * <p>Adds a streaming configuration for the specified Amazon Chime Voice
         * Connector. The streaming configuration specifies whether media streaming is
         * enabled for sending to Amazon Kinesis. It also sets the retention period, in
         * hours, for the Amazon Kinesis data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorStreamingConfigurationOutcomeCallable PutVoiceConnectorStreamingConfigurationCallable(const Model::PutVoiceConnectorStreamingConfigurationRequest& request) const;

        /**
         * <p>Adds a streaming configuration for the specified Amazon Chime Voice
         * Connector. The streaming configuration specifies whether media streaming is
         * enabled for sending to Amazon Kinesis. It also sets the retention period, in
         * hours, for the Amazon Kinesis data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorStreamingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorStreamingConfigurationAsync(const Model::PutVoiceConnectorStreamingConfigurationRequest& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds termination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off termination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationOutcome PutVoiceConnectorTermination(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Adds termination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off termination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorTerminationOutcomeCallable PutVoiceConnectorTerminationCallable(const Model::PutVoiceConnectorTerminationRequest& request) const;

        /**
         * <p>Adds termination settings for the specified Amazon Chime Voice Connector.</p>
         *  <p>If emergency calling is configured for the Amazon Chime Voice
         * Connector, it must be deleted prior to turning off termination settings.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTermination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationAsync(const Model::PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds termination SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcome PutVoiceConnectorTerminationCredentials(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Adds termination SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVoiceConnectorTerminationCredentialsOutcomeCallable PutVoiceConnectorTerminationCredentialsCallable(const Model::PutVoiceConnectorTerminationCredentialsRequest& request) const;

        /**
         * <p>Adds termination SIP credentials for the specified Amazon Chime Voice
         * Connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/PutVoiceConnectorTerminationCredentials">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVoiceConnectorTerminationCredentialsAsync(const Model::PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as
         * redacted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactChannelMessageOutcome RedactChannelMessage(const Model::RedactChannelMessageRequest& request) const;

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as
         * redacted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RedactChannelMessageOutcomeCallable RedactChannelMessageCallable(const Model::RedactChannelMessageRequest& request) const;

        /**
         * <p>Redacts message content, but not metadata. The message exists in the back
         * end, but the action returns null content, and the state shows as
         * redacted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RedactChannelMessageAsync(const Model::RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactConversationMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactConversationMessageOutcome RedactConversationMessage(const Model::RedactConversationMessageRequest& request) const;

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactConversationMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RedactConversationMessageOutcomeCallable RedactConversationMessageCallable(const Model::RedactConversationMessageRequest& request) const;

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * conversation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactConversationMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RedactConversationMessageAsync(const Model::RedactConversationMessageRequest& request, const RedactConversationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactRoomMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::RedactRoomMessageOutcome RedactRoomMessage(const Model::RedactRoomMessageRequest& request) const;

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactRoomMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RedactRoomMessageOutcomeCallable RedactRoomMessageCallable(const Model::RedactRoomMessageRequest& request) const;

        /**
         * <p>Redacts the specified message from the specified Amazon Chime
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RedactRoomMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RedactRoomMessageAsync(const Model::RedactRoomMessageRequest& request, const RedactRoomMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         */
        virtual Model::RegenerateSecurityTokenOutcome RegenerateSecurityToken(const Model::RegenerateSecurityTokenRequest& request) const;

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegenerateSecurityTokenOutcomeCallable RegenerateSecurityTokenCallable(const Model::RegenerateSecurityTokenRequest& request) const;

        /**
         * <p>Regenerates the security token for a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RegenerateSecurityToken">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegenerateSecurityTokenAsync(const Model::RegenerateSecurityTokenRequest& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets the personal meeting PIN for the specified user on an Amazon Chime
         * account. Returns the <a>User</a> object with the updated personal meeting
         * PIN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ResetPersonalPIN">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetPersonalPINOutcome ResetPersonalPIN(const Model::ResetPersonalPINRequest& request) const;

        /**
         * <p>Resets the personal meeting PIN for the specified user on an Amazon Chime
         * account. Returns the <a>User</a> object with the updated personal meeting
         * PIN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ResetPersonalPIN">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetPersonalPINOutcomeCallable ResetPersonalPINCallable(const Model::ResetPersonalPINRequest& request) const;

        /**
         * <p>Resets the personal meeting PIN for the specified user on an Amazon Chime
         * account. Returns the <a>User</a> object with the updated personal meeting
         * PIN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ResetPersonalPIN">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetPersonalPINAsync(const Model::ResetPersonalPINRequest& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves a phone number from the <b>Deletion queue</b> back into the phone
         * number <b>Inventory</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RestorePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::RestorePhoneNumberOutcome RestorePhoneNumber(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * <p>Moves a phone number from the <b>Deletion queue</b> back into the phone
         * number <b>Inventory</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RestorePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestorePhoneNumberOutcomeCallable RestorePhoneNumberCallable(const Model::RestorePhoneNumberRequest& request) const;

        /**
         * <p>Moves a phone number from the <b>Deletion queue</b> back into the phone
         * number <b>Inventory</b>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RestorePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestorePhoneNumberAsync(const Model::RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches phone numbers that can be ordered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * <p>Searches phone numbers that can be ordered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * <p>Searches phone numbers that can be ordered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAvailablePhoneNumbersAsync(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p> <code>STANDARD</code> messages can contain 4KB of data and the 1KB of
         * metadata. <code>CONTROL</code> messages can contain 30 bytes of data and no
         * metadata.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SendChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::SendChannelMessageOutcome SendChannelMessage(const Model::SendChannelMessageRequest& request) const;

        /**
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p> <code>STANDARD</code> messages can contain 4KB of data and the 1KB of
         * metadata. <code>CONTROL</code> messages can contain 30 bytes of data and no
         * metadata.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SendChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendChannelMessageOutcomeCallable SendChannelMessageCallable(const Model::SendChannelMessageRequest& request) const;

        /**
         * <p>Sends a message to a particular channel that the member is a part of.</p>
         *  <p> <code>STANDARD</code> messages can contain 4KB of data and the 1KB of
         * metadata. <code>CONTROL</code> messages can contain 30 bytes of data and no
         * metadata.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/SendChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendChannelMessageAsync(const Model::SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::TagAttendeeOutcome TagAttendee(const Model::TagAttendeeRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagAttendee">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagAttendeeOutcomeCallable TagAttendeeCallable(const Model::TagAttendeeRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagAttendee">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagAttendeeAsync(const Model::TagAttendeeRequest& request, const TagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::TagMeetingOutcome TagMeeting(const Model::TagMeetingRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagMeeting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagMeetingOutcomeCallable TagMeetingCallable(const Model::TagMeetingRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagMeeting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagMeetingAsync(const Model::TagMeetingRequest& request, const TagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Applies the specified tags to the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagAttendee">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagAttendeeOutcome UntagAttendee(const Model::UntagAttendeeRequest& request) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagAttendee">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagAttendeeOutcomeCallable UntagAttendeeCallable(const Model::UntagAttendeeRequest& request) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * attendee.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagAttendee">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagAttendeeAsync(const Model::UntagAttendeeRequest& request, const UntagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagMeeting">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagMeetingOutcome UntagMeeting(const Model::UntagMeetingRequest& request) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagMeeting">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagMeetingOutcomeCallable UntagMeetingCallable(const Model::UntagMeetingRequest& request) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK
         * meeting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagMeeting">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagMeetingAsync(const Model::UntagMeetingRequest& request, const UntagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Untags the specified tags from the specified Amazon Chime SDK meeting
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates account details for the specified Amazon Chime account. Currently,
         * only account name updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountOutcome UpdateAccount(const Model::UpdateAccountRequest& request) const;

        /**
         * <p>Updates account details for the specified Amazon Chime account. Currently,
         * only account name updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountOutcomeCallable UpdateAccountCallable(const Model::UpdateAccountRequest& request) const;

        /**
         * <p>Updates account details for the specified Amazon Chime account. Currently,
         * only account name updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountAsync(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for the specified Amazon Chime account. You can update
         * settings for remote control of shared screens, or for the dial-out option. For
         * more information about these settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountSettingsOutcome UpdateAccountSettings(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified Amazon Chime account. You can update
         * settings for remote control of shared screens, or for the dial-out option. For
         * more information about these settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountSettingsOutcomeCallable UpdateAccountSettingsCallable(const Model::UpdateAccountSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified Amazon Chime account. You can update
         * settings for remote control of shared screens, or for the dial-out option. For
         * more information about these settings, see <a
         * href="https://docs.aws.amazon.com/chime/latest/ag/policies.html">Use the
         * Policies Page</a> in the <i>Amazon Chime Administration Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAccountSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountSettingsAsync(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates <code>AppInstance</code> metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceOutcome UpdateAppInstance(const Model::UpdateAppInstanceRequest& request) const;

        /**
         * <p>Updates <code>AppInstance</code> metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppInstanceOutcomeCallable UpdateAppInstanceCallable(const Model::UpdateAppInstanceRequest& request) const;

        /**
         * <p>Updates <code>AppInstance</code> metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppInstanceAsync(const Model::UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details for an <code>AppInstanceUser</code>. You can update names
         * and metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstanceUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppInstanceUserOutcome UpdateAppInstanceUser(const Model::UpdateAppInstanceUserRequest& request) const;

        /**
         * <p>Updates the details for an <code>AppInstanceUser</code>. You can update names
         * and metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppInstanceUserOutcomeCallable UpdateAppInstanceUserCallable(const Model::UpdateAppInstanceUserRequest& request) const;

        /**
         * <p>Updates the details for an <code>AppInstanceUser</code>. You can update names
         * and metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateAppInstanceUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppInstanceUserAsync(const Model::UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the specified bot, such as starting or stopping the bot
         * from running in your Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;

        /**
         * <p>Updates the status of the specified bot, such as starting or stopping the bot
         * from running in your Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBotOutcomeCallable UpdateBotCallable(const Model::UpdateBotRequest& request) const;

        /**
         * <p>Updates the status of the specified bot, such as starting or stopping the bot
         * from running in your Amazon Chime Enterprise account.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotAsync(const Model::UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Update a channel's attributes.</p> <p> <b>Restriction</b>: You can't change a
         * channel's privacy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the content of a message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelMessage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelMessageOutcome UpdateChannelMessage(const Model::UpdateChannelMessageRequest& request) const;

        /**
         * <p>Updates the content of a message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelMessage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelMessageOutcomeCallable UpdateChannelMessageCallable(const Model::UpdateChannelMessageRequest& request) const;

        /**
         * <p>Updates the content of a message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelMessage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelMessageAsync(const Model::UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the timestamp to the point when a user last read messages in a
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelReadMarkerOutcome UpdateChannelReadMarker(const Model::UpdateChannelReadMarkerRequest& request) const;

        /**
         * <p>Sets the timestamp to the point when a user last read messages in a
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelReadMarkerOutcomeCallable UpdateChannelReadMarkerCallable(const Model::UpdateChannelReadMarkerRequest& request) const;

        /**
         * <p>Sets the timestamp to the point when a user last read messages in a
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateChannelReadMarker">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelReadMarkerAsync(const Model::UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGlobalSettingsOutcome UpdateGlobalSettings(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * <p>Updates global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGlobalSettingsOutcomeCallable UpdateGlobalSettingsCallable(const Model::UpdateGlobalSettingsRequest& request) const;

        /**
         * <p>Updates global settings for the administrator's AWS account, such as Amazon
         * Chime Business Calling and Amazon Chime Voice Connector settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateGlobalSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGlobalSettingsAsync(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates phone number details, such as product type or calling name, for the
         * specified phone number ID. You can update one phone number detail at a time. For
         * example, you can update either the product type or the calling name in one
         * action.</p> <p>For toll-free numbers, you must use the Amazon Chime Voice
         * Connector product type.</p> <p>Updates to outbound calling names can take up to
         * 72 hours to complete. Pending updates to outbound calling names must be complete
         * before you can request another update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number details, such as product type or calling name, for the
         * specified phone number ID. You can update one phone number detail at a time. For
         * example, you can update either the product type or the calling name in one
         * action.</p> <p>For toll-free numbers, you must use the Amazon Chime Voice
         * Connector product type.</p> <p>Updates to outbound calling names can take up to
         * 72 hours to complete. Pending updates to outbound calling names must be complete
         * before you can request another update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * <p>Updates phone number details, such as product type or calling name, for the
         * specified phone number ID. You can update one phone number detail at a time. For
         * example, you can update either the product type or the calling name in one
         * action.</p> <p>For toll-free numbers, you must use the Amazon Chime Voice
         * Connector product type.</p> <p>Updates to outbound calling names can take up to
         * 72 hours to complete. Pending updates to outbound calling names must be complete
         * before you can request another update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberAsync(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name. You can update the default outbound
         * calling name once every seven days. Outbound calling names can take up to 72
         * hours to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumberSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberSettingsOutcome UpdatePhoneNumberSettings(const Model::UpdatePhoneNumberSettingsRequest& request) const;

        /**
         * <p>Updates the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name. You can update the default outbound
         * calling name once every seven days. Outbound calling names can take up to 72
         * hours to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumberSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePhoneNumberSettingsOutcomeCallable UpdatePhoneNumberSettingsCallable(const Model::UpdatePhoneNumberSettingsRequest& request) const;

        /**
         * <p>Updates the phone number settings for the administrator's AWS account, such
         * as the default outbound calling name. You can update the default outbound
         * calling name once every seven days. Outbound calling names can take up to 72
         * hours to update.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdatePhoneNumberSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePhoneNumberSettingsAsync(const Model::UpdatePhoneNumberSettingsRequest& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified proxy session details, such as voice or SMS
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateProxySession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProxySessionOutcome UpdateProxySession(const Model::UpdateProxySessionRequest& request) const;

        /**
         * <p>Updates the specified proxy session details, such as voice or SMS
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateProxySession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProxySessionOutcomeCallable UpdateProxySessionCallable(const Model::UpdateProxySessionRequest& request) const;

        /**
         * <p>Updates the specified proxy session details, such as voice or SMS
         * capabilities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateProxySession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProxySessionAsync(const Model::UpdateProxySessionRequest& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoom">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomOutcome UpdateRoom(const Model::UpdateRoomRequest& request) const;

        /**
         * <p>Updates room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoom">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoomOutcomeCallable UpdateRoomCallable(const Model::UpdateRoomRequest& request) const;

        /**
         * <p>Updates room details, such as the room name, for a room in an Amazon Chime
         * Enterprise account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoom">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomAsync(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates room membership details, such as the member role, for a room in an
         * Amazon Chime Enterprise account. The member role designates whether the member
         * is a chat room administrator or a general chat room member. The member role can
         * be updated only for user IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoomMembership">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoomMembershipOutcome UpdateRoomMembership(const Model::UpdateRoomMembershipRequest& request) const;

        /**
         * <p>Updates room membership details, such as the member role, for a room in an
         * Amazon Chime Enterprise account. The member role designates whether the member
         * is a chat room administrator or a general chat room member. The member role can
         * be updated only for user IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoomMembership">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoomMembershipOutcomeCallable UpdateRoomMembershipCallable(const Model::UpdateRoomMembershipRequest& request) const;

        /**
         * <p>Updates room membership details, such as the member role, for a room in an
         * Amazon Chime Enterprise account. The member role designates whether the member
         * is a chat room administrator or a general chat room member. The member role can
         * be updated only for user IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateRoomMembership">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoomMembershipAsync(const Model::UpdateRoomMembershipRequest& request, const UpdateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details for the specified SIP media application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipMediaApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipMediaApplicationOutcome UpdateSipMediaApplication(const Model::UpdateSipMediaApplicationRequest& request) const;

        /**
         * <p>Updates the details for the specified SIP media application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSipMediaApplicationOutcomeCallable UpdateSipMediaApplicationCallable(const Model::UpdateSipMediaApplicationRequest& request) const;

        /**
         * <p>Updates the details for the specified SIP media application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipMediaApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipMediaApplicationAsync(const Model::UpdateSipMediaApplicationRequest& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the details for the specified SIP rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSipRuleOutcome UpdateSipRule(const Model::UpdateSipRuleRequest& request) const;

        /**
         * <p>Updates the details for the specified SIP rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSipRuleOutcomeCallable UpdateSipRuleCallable(const Model::UpdateSipRuleRequest& request) const;

        /**
         * <p>Updates the details for the specified SIP rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateSipRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSipRuleAsync(const Model::UpdateSipRuleRequest& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates user details for a specified user ID. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates user details for a specified user ID. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserOutcomeCallable UpdateUserCallable(const Model::UpdateUserRequest& request) const;

        /**
         * <p>Updates user details for a specified user ID. Currently, only
         * <code>LicenseType</code> updates are supported for this action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUser">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for the specified user, such as phone number
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSettingsOutcome UpdateUserSettings(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified user, such as phone number
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserSettingsOutcomeCallable UpdateUserSettingsCallable(const Model::UpdateUserSettingsRequest& request) const;

        /**
         * <p>Updates the settings for the specified user, such as phone number
         * settings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateUserSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserSettingsAsync(const Model::UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceConnectorOutcome UpdateVoiceConnector(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceConnectorOutcomeCallable UpdateVoiceConnectorCallable(const Model::UpdateVoiceConnectorRequest& request) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceConnectorAsync(const Model::UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector group, such as
         * the name and Amazon Chime Voice Connector priority ranking.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVoiceConnectorGroupOutcome UpdateVoiceConnectorGroup(const Model::UpdateVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector group, such as
         * the name and Amazon Chime Voice Connector priority ranking.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVoiceConnectorGroupOutcomeCallable UpdateVoiceConnectorGroupCallable(const Model::UpdateVoiceConnectorGroupRequest& request) const;

        /**
         * <p>Updates details for the specified Amazon Chime Voice Connector group, such as
         * the name and Amazon Chime Voice Connector priority ranking.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/UpdateVoiceConnectorGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVoiceConnectorGroupAsync(const Model::UpdateVoiceConnectorGroupRequest& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociatePhoneNumberWithUserAsyncHelper(const Model::AssociatePhoneNumberWithUserRequest& request, const AssociatePhoneNumberWithUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePhoneNumbersWithVoiceConnectorAsyncHelper(const Model::AssociatePhoneNumbersWithVoiceConnectorRequest& request, const AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociatePhoneNumbersWithVoiceConnectorGroupAsyncHelper(const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest& request, const AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateSigninDelegateGroupsWithAccountAsyncHelper(const Model::AssociateSigninDelegateGroupsWithAccountRequest& request, const AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchCreateAttendeeAsyncHelper(const Model::BatchCreateAttendeeRequest& request, const BatchCreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchCreateRoomMembershipAsyncHelper(const Model::BatchCreateRoomMembershipRequest& request, const BatchCreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeletePhoneNumberAsyncHelper(const Model::BatchDeletePhoneNumberRequest& request, const BatchDeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchSuspendUserAsyncHelper(const Model::BatchSuspendUserRequest& request, const BatchSuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUnsuspendUserAsyncHelper(const Model::BatchUnsuspendUserRequest& request, const BatchUnsuspendUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdatePhoneNumberAsyncHelper(const Model::BatchUpdatePhoneNumberRequest& request, const BatchUpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchUpdateUserAsyncHelper(const Model::BatchUpdateUserRequest& request, const BatchUpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountAsyncHelper(const Model::CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppInstanceAsyncHelper(const Model::CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppInstanceAdminAsyncHelper(const Model::CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppInstanceUserAsyncHelper(const Model::CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAttendeeAsyncHelper(const Model::CreateAttendeeRequest& request, const CreateAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBotAsyncHelper(const Model::CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelBanAsyncHelper(const Model::CreateChannelBanRequest& request, const CreateChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelMembershipAsyncHelper(const Model::CreateChannelMembershipRequest& request, const CreateChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelModeratorAsyncHelper(const Model::CreateChannelModeratorRequest& request, const CreateChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMeetingAsyncHelper(const Model::CreateMeetingRequest& request, const CreateMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMeetingDialOutAsyncHelper(const Model::CreateMeetingDialOutRequest& request, const CreateMeetingDialOutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMeetingWithAttendeesAsyncHelper(const Model::CreateMeetingWithAttendeesRequest& request, const CreateMeetingWithAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePhoneNumberOrderAsyncHelper(const Model::CreatePhoneNumberOrderRequest& request, const CreatePhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProxySessionAsyncHelper(const Model::CreateProxySessionRequest& request, const CreateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoomAsyncHelper(const Model::CreateRoomRequest& request, const CreateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRoomMembershipAsyncHelper(const Model::CreateRoomMembershipRequest& request, const CreateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSipMediaApplicationAsyncHelper(const Model::CreateSipMediaApplicationRequest& request, const CreateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSipMediaApplicationCallAsyncHelper(const Model::CreateSipMediaApplicationCallRequest& request, const CreateSipMediaApplicationCallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSipRuleAsyncHelper(const Model::CreateSipRuleRequest& request, const CreateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserAsyncHelper(const Model::CreateUserRequest& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVoiceConnectorAsyncHelper(const Model::CreateVoiceConnectorRequest& request, const CreateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVoiceConnectorGroupAsyncHelper(const Model::CreateVoiceConnectorGroupRequest& request, const CreateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccountAsyncHelper(const Model::DeleteAccountRequest& request, const DeleteAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppInstanceAsyncHelper(const Model::DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppInstanceAdminAsyncHelper(const Model::DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppInstanceStreamingConfigurationsAsyncHelper(const Model::DeleteAppInstanceStreamingConfigurationsRequest& request, const DeleteAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppInstanceUserAsyncHelper(const Model::DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAttendeeAsyncHelper(const Model::DeleteAttendeeRequest& request, const DeleteAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelBanAsyncHelper(const Model::DeleteChannelBanRequest& request, const DeleteChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelMembershipAsyncHelper(const Model::DeleteChannelMembershipRequest& request, const DeleteChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelMessageAsyncHelper(const Model::DeleteChannelMessageRequest& request, const DeleteChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelModeratorAsyncHelper(const Model::DeleteChannelModeratorRequest& request, const DeleteChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventsConfigurationAsyncHelper(const Model::DeleteEventsConfigurationRequest& request, const DeleteEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMeetingAsyncHelper(const Model::DeleteMeetingRequest& request, const DeleteMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePhoneNumberAsyncHelper(const Model::DeletePhoneNumberRequest& request, const DeletePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProxySessionAsyncHelper(const Model::DeleteProxySessionRequest& request, const DeleteProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoomAsyncHelper(const Model::DeleteRoomRequest& request, const DeleteRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRoomMembershipAsyncHelper(const Model::DeleteRoomMembershipRequest& request, const DeleteRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSipMediaApplicationAsyncHelper(const Model::DeleteSipMediaApplicationRequest& request, const DeleteSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSipRuleAsyncHelper(const Model::DeleteSipRuleRequest& request, const DeleteSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorAsyncHelper(const Model::DeleteVoiceConnectorRequest& request, const DeleteVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorEmergencyCallingConfigurationAsyncHelper(const Model::DeleteVoiceConnectorEmergencyCallingConfigurationRequest& request, const DeleteVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorGroupAsyncHelper(const Model::DeleteVoiceConnectorGroupRequest& request, const DeleteVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorOriginationAsyncHelper(const Model::DeleteVoiceConnectorOriginationRequest& request, const DeleteVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorProxyAsyncHelper(const Model::DeleteVoiceConnectorProxyRequest& request, const DeleteVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorStreamingConfigurationAsyncHelper(const Model::DeleteVoiceConnectorStreamingConfigurationRequest& request, const DeleteVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorTerminationAsyncHelper(const Model::DeleteVoiceConnectorTerminationRequest& request, const DeleteVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVoiceConnectorTerminationCredentialsAsyncHelper(const Model::DeleteVoiceConnectorTerminationCredentialsRequest& request, const DeleteVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppInstanceAsyncHelper(const Model::DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppInstanceAdminAsyncHelper(const Model::DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppInstanceUserAsyncHelper(const Model::DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelAsyncHelper(const Model::DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelBanAsyncHelper(const Model::DescribeChannelBanRequest& request, const DescribeChannelBanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelMembershipAsyncHelper(const Model::DescribeChannelMembershipRequest& request, const DescribeChannelMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelMembershipForAppInstanceUserAsyncHelper(const Model::DescribeChannelMembershipForAppInstanceUserRequest& request, const DescribeChannelMembershipForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelModeratedByAppInstanceUserAsyncHelper(const Model::DescribeChannelModeratedByAppInstanceUserRequest& request, const DescribeChannelModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeChannelModeratorAsyncHelper(const Model::DescribeChannelModeratorRequest& request, const DescribeChannelModeratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePhoneNumberFromUserAsyncHelper(const Model::DisassociatePhoneNumberFromUserRequest& request, const DisassociatePhoneNumberFromUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePhoneNumbersFromVoiceConnectorAsyncHelper(const Model::DisassociatePhoneNumbersFromVoiceConnectorRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociatePhoneNumbersFromVoiceConnectorGroupAsyncHelper(const Model::DisassociatePhoneNumbersFromVoiceConnectorGroupRequest& request, const DisassociatePhoneNumbersFromVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateSigninDelegateGroupsFromAccountAsyncHelper(const Model::DisassociateSigninDelegateGroupsFromAccountRequest& request, const DisassociateSigninDelegateGroupsFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountAsyncHelper(const Model::GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSettingsAsyncHelper(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppInstanceRetentionSettingsAsyncHelper(const Model::GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppInstanceStreamingConfigurationsAsyncHelper(const Model::GetAppInstanceStreamingConfigurationsRequest& request, const GetAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAttendeeAsyncHelper(const Model::GetAttendeeRequest& request, const GetAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotAsyncHelper(const Model::GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelMessageAsyncHelper(const Model::GetChannelMessageRequest& request, const GetChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventsConfigurationAsyncHelper(const Model::GetEventsConfigurationRequest& request, const GetEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGlobalSettingsAsyncHelper(const GetGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMeetingAsyncHelper(const Model::GetMeetingRequest& request, const GetMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMessagingSessionEndpointAsyncHelper(const Model::GetMessagingSessionEndpointRequest& request, const GetMessagingSessionEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPhoneNumberAsyncHelper(const Model::GetPhoneNumberRequest& request, const GetPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPhoneNumberOrderAsyncHelper(const Model::GetPhoneNumberOrderRequest& request, const GetPhoneNumberOrderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPhoneNumberSettingsAsyncHelper(const GetPhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProxySessionAsyncHelper(const Model::GetProxySessionRequest& request, const GetProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRetentionSettingsAsyncHelper(const Model::GetRetentionSettingsRequest& request, const GetRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoomAsyncHelper(const Model::GetRoomRequest& request, const GetRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSipMediaApplicationAsyncHelper(const Model::GetSipMediaApplicationRequest& request, const GetSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSipMediaApplicationLoggingConfigurationAsyncHelper(const Model::GetSipMediaApplicationLoggingConfigurationRequest& request, const GetSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSipRuleAsyncHelper(const Model::GetSipRuleRequest& request, const GetSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserAsyncHelper(const Model::GetUserRequest& request, const GetUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUserSettingsAsyncHelper(const Model::GetUserSettingsRequest& request, const GetUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorAsyncHelper(const Model::GetVoiceConnectorRequest& request, const GetVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorEmergencyCallingConfigurationAsyncHelper(const Model::GetVoiceConnectorEmergencyCallingConfigurationRequest& request, const GetVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorGroupAsyncHelper(const Model::GetVoiceConnectorGroupRequest& request, const GetVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorLoggingConfigurationAsyncHelper(const Model::GetVoiceConnectorLoggingConfigurationRequest& request, const GetVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorOriginationAsyncHelper(const Model::GetVoiceConnectorOriginationRequest& request, const GetVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorProxyAsyncHelper(const Model::GetVoiceConnectorProxyRequest& request, const GetVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorStreamingConfigurationAsyncHelper(const Model::GetVoiceConnectorStreamingConfigurationRequest& request, const GetVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorTerminationAsyncHelper(const Model::GetVoiceConnectorTerminationRequest& request, const GetVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVoiceConnectorTerminationHealthAsyncHelper(const Model::GetVoiceConnectorTerminationHealthRequest& request, const GetVoiceConnectorTerminationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InviteUsersAsyncHelper(const Model::InviteUsersRequest& request, const InviteUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountsAsyncHelper(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppInstanceAdminsAsyncHelper(const Model::ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppInstanceUsersAsyncHelper(const Model::ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppInstancesAsyncHelper(const Model::ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttendeeTagsAsyncHelper(const Model::ListAttendeeTagsRequest& request, const ListAttendeeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAttendeesAsyncHelper(const Model::ListAttendeesRequest& request, const ListAttendeesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBotsAsyncHelper(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelBansAsyncHelper(const Model::ListChannelBansRequest& request, const ListChannelBansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelMembershipsAsyncHelper(const Model::ListChannelMembershipsRequest& request, const ListChannelMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelMembershipsForAppInstanceUserAsyncHelper(const Model::ListChannelMembershipsForAppInstanceUserRequest& request, const ListChannelMembershipsForAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelMessagesAsyncHelper(const Model::ListChannelMessagesRequest& request, const ListChannelMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelModeratorsAsyncHelper(const Model::ListChannelModeratorsRequest& request, const ListChannelModeratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsModeratedByAppInstanceUserAsyncHelper(const Model::ListChannelsModeratedByAppInstanceUserRequest& request, const ListChannelsModeratedByAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMeetingTagsAsyncHelper(const Model::ListMeetingTagsRequest& request, const ListMeetingTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMeetingsAsyncHelper(const Model::ListMeetingsRequest& request, const ListMeetingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumberOrdersAsyncHelper(const Model::ListPhoneNumberOrdersRequest& request, const ListPhoneNumberOrdersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPhoneNumbersAsyncHelper(const Model::ListPhoneNumbersRequest& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProxySessionsAsyncHelper(const Model::ListProxySessionsRequest& request, const ListProxySessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoomMembershipsAsyncHelper(const Model::ListRoomMembershipsRequest& request, const ListRoomMembershipsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoomsAsyncHelper(const Model::ListRoomsRequest& request, const ListRoomsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSipMediaApplicationsAsyncHelper(const Model::ListSipMediaApplicationsRequest& request, const ListSipMediaApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSipRulesAsyncHelper(const Model::ListSipRulesRequest& request, const ListSipRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsersAsyncHelper(const Model::ListUsersRequest& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVoiceConnectorGroupsAsyncHelper(const Model::ListVoiceConnectorGroupsRequest& request, const ListVoiceConnectorGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVoiceConnectorTerminationCredentialsAsyncHelper(const Model::ListVoiceConnectorTerminationCredentialsRequest& request, const ListVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVoiceConnectorsAsyncHelper(const Model::ListVoiceConnectorsRequest& request, const ListVoiceConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LogoutUserAsyncHelper(const Model::LogoutUserRequest& request, const LogoutUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAppInstanceRetentionSettingsAsyncHelper(const Model::PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAppInstanceStreamingConfigurationsAsyncHelper(const Model::PutAppInstanceStreamingConfigurationsRequest& request, const PutAppInstanceStreamingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutEventsConfigurationAsyncHelper(const Model::PutEventsConfigurationRequest& request, const PutEventsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRetentionSettingsAsyncHelper(const Model::PutRetentionSettingsRequest& request, const PutRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSipMediaApplicationLoggingConfigurationAsyncHelper(const Model::PutSipMediaApplicationLoggingConfigurationRequest& request, const PutSipMediaApplicationLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorEmergencyCallingConfigurationAsyncHelper(const Model::PutVoiceConnectorEmergencyCallingConfigurationRequest& request, const PutVoiceConnectorEmergencyCallingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorLoggingConfigurationAsyncHelper(const Model::PutVoiceConnectorLoggingConfigurationRequest& request, const PutVoiceConnectorLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorOriginationAsyncHelper(const Model::PutVoiceConnectorOriginationRequest& request, const PutVoiceConnectorOriginationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorProxyAsyncHelper(const Model::PutVoiceConnectorProxyRequest& request, const PutVoiceConnectorProxyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorStreamingConfigurationAsyncHelper(const Model::PutVoiceConnectorStreamingConfigurationRequest& request, const PutVoiceConnectorStreamingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorTerminationAsyncHelper(const Model::PutVoiceConnectorTerminationRequest& request, const PutVoiceConnectorTerminationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutVoiceConnectorTerminationCredentialsAsyncHelper(const Model::PutVoiceConnectorTerminationCredentialsRequest& request, const PutVoiceConnectorTerminationCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RedactChannelMessageAsyncHelper(const Model::RedactChannelMessageRequest& request, const RedactChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RedactConversationMessageAsyncHelper(const Model::RedactConversationMessageRequest& request, const RedactConversationMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RedactRoomMessageAsyncHelper(const Model::RedactRoomMessageRequest& request, const RedactRoomMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegenerateSecurityTokenAsyncHelper(const Model::RegenerateSecurityTokenRequest& request, const RegenerateSecurityTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetPersonalPINAsyncHelper(const Model::ResetPersonalPINRequest& request, const ResetPersonalPINResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestorePhoneNumberAsyncHelper(const Model::RestorePhoneNumberRequest& request, const RestorePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchAvailablePhoneNumbersAsyncHelper(const Model::SearchAvailablePhoneNumbersRequest& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendChannelMessageAsyncHelper(const Model::SendChannelMessageRequest& request, const SendChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagAttendeeAsyncHelper(const Model::TagAttendeeRequest& request, const TagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagMeetingAsyncHelper(const Model::TagMeetingRequest& request, const TagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagAttendeeAsyncHelper(const Model::UntagAttendeeRequest& request, const UntagAttendeeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagMeetingAsyncHelper(const Model::UntagMeetingRequest& request, const UntagMeetingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountAsyncHelper(const Model::UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAccountSettingsAsyncHelper(const Model::UpdateAccountSettingsRequest& request, const UpdateAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppInstanceAsyncHelper(const Model::UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppInstanceUserAsyncHelper(const Model::UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBotAsyncHelper(const Model::UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelMessageAsyncHelper(const Model::UpdateChannelMessageRequest& request, const UpdateChannelMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelReadMarkerAsyncHelper(const Model::UpdateChannelReadMarkerRequest& request, const UpdateChannelReadMarkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGlobalSettingsAsyncHelper(const Model::UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePhoneNumberAsyncHelper(const Model::UpdatePhoneNumberRequest& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePhoneNumberSettingsAsyncHelper(const Model::UpdatePhoneNumberSettingsRequest& request, const UpdatePhoneNumberSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProxySessionAsyncHelper(const Model::UpdateProxySessionRequest& request, const UpdateProxySessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoomAsyncHelper(const Model::UpdateRoomRequest& request, const UpdateRoomResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRoomMembershipAsyncHelper(const Model::UpdateRoomMembershipRequest& request, const UpdateRoomMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSipMediaApplicationAsyncHelper(const Model::UpdateSipMediaApplicationRequest& request, const UpdateSipMediaApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSipRuleAsyncHelper(const Model::UpdateSipRuleRequest& request, const UpdateSipRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserAsyncHelper(const Model::UpdateUserRequest& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserSettingsAsyncHelper(const Model::UpdateUserSettingsRequest& request, const UpdateUserSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVoiceConnectorAsyncHelper(const Model::UpdateVoiceConnectorRequest& request, const UpdateVoiceConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVoiceConnectorGroupAsyncHelper(const Model::UpdateVoiceConnectorGroupRequest& request, const UpdateVoiceConnectorGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_baseUri;
      Aws::String m_scheme;
      bool m_enableHostPrefixInjection;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Chime
} // namespace Aws
