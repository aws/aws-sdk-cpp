/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/chime/ChimeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/chime/ChimeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ChimeClient header */
#include <aws/chime/model/AssociatePhoneNumberWithUserResult.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorResult.h>
#include <aws/chime/model/AssociatePhoneNumbersWithVoiceConnectorGroupResult.h>
#include <aws/chime/model/AssociateSigninDelegateGroupsWithAccountResult.h>
#include <aws/chime/model/BatchCreateAttendeeResult.h>
#include <aws/chime/model/BatchCreateChannelMembershipResult.h>
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
#include <aws/chime/model/CreateMediaCapturePipelineResult.h>
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
#include <aws/chime/model/GetMediaCapturePipelineResult.h>
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
#include <aws/chime/model/ListMediaCapturePipelinesResult.h>
#include <aws/chime/model/ListMeetingTagsResult.h>
#include <aws/chime/model/ListMeetingsResult.h>
#include <aws/chime/model/ListPhoneNumberOrdersResult.h>
#include <aws/chime/model/ListPhoneNumbersResult.h>
#include <aws/chime/model/ListProxySessionsResult.h>
#include <aws/chime/model/ListRoomMembershipsResult.h>
#include <aws/chime/model/ListRoomsResult.h>
#include <aws/chime/model/ListSipMediaApplicationsResult.h>
#include <aws/chime/model/ListSipRulesResult.h>
#include <aws/chime/model/ListSupportedPhoneNumberCountriesResult.h>
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
#include <aws/chime/model/StartMeetingTranscriptionResult.h>
#include <aws/chime/model/StopMeetingTranscriptionResult.h>
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
#include <aws/chime/model/UpdateSipMediaApplicationCallResult.h>
#include <aws/chime/model/UpdateSipRuleResult.h>
#include <aws/chime/model/UpdateUserResult.h>
#include <aws/chime/model/UpdateVoiceConnectorResult.h>
#include <aws/chime/model/UpdateVoiceConnectorGroupResult.h>
#include <aws/chime/model/ValidateE911AddressResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ChimeClient header */

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
    using ChimeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ChimeEndpointProviderBase = Aws::Chime::Endpoint::ChimeEndpointProviderBase;
    using ChimeEndpointProvider = Aws::Chime::Endpoint::ChimeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ChimeClient header */
      class AssociatePhoneNumberWithUserRequest;
      class AssociatePhoneNumbersWithVoiceConnectorRequest;
      class AssociatePhoneNumbersWithVoiceConnectorGroupRequest;
      class AssociateSigninDelegateGroupsWithAccountRequest;
      class BatchCreateAttendeeRequest;
      class BatchCreateChannelMembershipRequest;
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
      class CreateMediaCapturePipelineRequest;
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
      class DeleteMediaCapturePipelineRequest;
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
      class GetMediaCapturePipelineRequest;
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
      class ListMediaCapturePipelinesRequest;
      class ListMeetingTagsRequest;
      class ListMeetingsRequest;
      class ListPhoneNumberOrdersRequest;
      class ListPhoneNumbersRequest;
      class ListProxySessionsRequest;
      class ListRoomMembershipsRequest;
      class ListRoomsRequest;
      class ListSipMediaApplicationsRequest;
      class ListSipRulesRequest;
      class ListSupportedPhoneNumberCountriesRequest;
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
      class StartMeetingTranscriptionRequest;
      class StopMeetingTranscriptionRequest;
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
      class UpdateSipMediaApplicationCallRequest;
      class UpdateSipRuleRequest;
      class UpdateUserRequest;
      class UpdateUserSettingsRequest;
      class UpdateVoiceConnectorRequest;
      class UpdateVoiceConnectorGroupRequest;
      class ValidateE911AddressRequest;
      /* End of service model forward declarations required in ChimeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociatePhoneNumberWithUserResult, ChimeError> AssociatePhoneNumberWithUserOutcome;
      typedef Aws::Utils::Outcome<AssociatePhoneNumbersWithVoiceConnectorResult, ChimeError> AssociatePhoneNumbersWithVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<AssociatePhoneNumbersWithVoiceConnectorGroupResult, ChimeError> AssociatePhoneNumbersWithVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<AssociateSigninDelegateGroupsWithAccountResult, ChimeError> AssociateSigninDelegateGroupsWithAccountOutcome;
      typedef Aws::Utils::Outcome<BatchCreateAttendeeResult, ChimeError> BatchCreateAttendeeOutcome;
      typedef Aws::Utils::Outcome<BatchCreateChannelMembershipResult, ChimeError> BatchCreateChannelMembershipOutcome;
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
      typedef Aws::Utils::Outcome<CreateMediaCapturePipelineResult, ChimeError> CreateMediaCapturePipelineOutcome;
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
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> DeleteMediaCapturePipelineOutcome;
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
      typedef Aws::Utils::Outcome<GetMediaCapturePipelineResult, ChimeError> GetMediaCapturePipelineOutcome;
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
      typedef Aws::Utils::Outcome<ListMediaCapturePipelinesResult, ChimeError> ListMediaCapturePipelinesOutcome;
      typedef Aws::Utils::Outcome<ListMeetingTagsResult, ChimeError> ListMeetingTagsOutcome;
      typedef Aws::Utils::Outcome<ListMeetingsResult, ChimeError> ListMeetingsOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumberOrdersResult, ChimeError> ListPhoneNumberOrdersOutcome;
      typedef Aws::Utils::Outcome<ListPhoneNumbersResult, ChimeError> ListPhoneNumbersOutcome;
      typedef Aws::Utils::Outcome<ListProxySessionsResult, ChimeError> ListProxySessionsOutcome;
      typedef Aws::Utils::Outcome<ListRoomMembershipsResult, ChimeError> ListRoomMembershipsOutcome;
      typedef Aws::Utils::Outcome<ListRoomsResult, ChimeError> ListRoomsOutcome;
      typedef Aws::Utils::Outcome<ListSipMediaApplicationsResult, ChimeError> ListSipMediaApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListSipRulesResult, ChimeError> ListSipRulesOutcome;
      typedef Aws::Utils::Outcome<ListSupportedPhoneNumberCountriesResult, ChimeError> ListSupportedPhoneNumberCountriesOutcome;
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
      typedef Aws::Utils::Outcome<StartMeetingTranscriptionResult, ChimeError> StartMeetingTranscriptionOutcome;
      typedef Aws::Utils::Outcome<StopMeetingTranscriptionResult, ChimeError> StopMeetingTranscriptionOutcome;
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
      typedef Aws::Utils::Outcome<UpdateSipMediaApplicationCallResult, ChimeError> UpdateSipMediaApplicationCallOutcome;
      typedef Aws::Utils::Outcome<UpdateSipRuleResult, ChimeError> UpdateSipRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, ChimeError> UpdateUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ChimeError> UpdateUserSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateVoiceConnectorResult, ChimeError> UpdateVoiceConnectorOutcome;
      typedef Aws::Utils::Outcome<UpdateVoiceConnectorGroupResult, ChimeError> UpdateVoiceConnectorGroupOutcome;
      typedef Aws::Utils::Outcome<ValidateE911AddressResult, ChimeError> ValidateE911AddressOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociatePhoneNumberWithUserOutcome> AssociatePhoneNumberWithUserOutcomeCallable;
      typedef std::future<AssociatePhoneNumbersWithVoiceConnectorOutcome> AssociatePhoneNumbersWithVoiceConnectorOutcomeCallable;
      typedef std::future<AssociatePhoneNumbersWithVoiceConnectorGroupOutcome> AssociatePhoneNumbersWithVoiceConnectorGroupOutcomeCallable;
      typedef std::future<AssociateSigninDelegateGroupsWithAccountOutcome> AssociateSigninDelegateGroupsWithAccountOutcomeCallable;
      typedef std::future<BatchCreateAttendeeOutcome> BatchCreateAttendeeOutcomeCallable;
      typedef std::future<BatchCreateChannelMembershipOutcome> BatchCreateChannelMembershipOutcomeCallable;
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
      typedef std::future<CreateMediaCapturePipelineOutcome> CreateMediaCapturePipelineOutcomeCallable;
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
      typedef std::future<DeleteMediaCapturePipelineOutcome> DeleteMediaCapturePipelineOutcomeCallable;
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
      typedef std::future<GetMediaCapturePipelineOutcome> GetMediaCapturePipelineOutcomeCallable;
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
      typedef std::future<ListMediaCapturePipelinesOutcome> ListMediaCapturePipelinesOutcomeCallable;
      typedef std::future<ListMeetingTagsOutcome> ListMeetingTagsOutcomeCallable;
      typedef std::future<ListMeetingsOutcome> ListMeetingsOutcomeCallable;
      typedef std::future<ListPhoneNumberOrdersOutcome> ListPhoneNumberOrdersOutcomeCallable;
      typedef std::future<ListPhoneNumbersOutcome> ListPhoneNumbersOutcomeCallable;
      typedef std::future<ListProxySessionsOutcome> ListProxySessionsOutcomeCallable;
      typedef std::future<ListRoomMembershipsOutcome> ListRoomMembershipsOutcomeCallable;
      typedef std::future<ListRoomsOutcome> ListRoomsOutcomeCallable;
      typedef std::future<ListSipMediaApplicationsOutcome> ListSipMediaApplicationsOutcomeCallable;
      typedef std::future<ListSipRulesOutcome> ListSipRulesOutcomeCallable;
      typedef std::future<ListSupportedPhoneNumberCountriesOutcome> ListSupportedPhoneNumberCountriesOutcomeCallable;
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
      typedef std::future<StartMeetingTranscriptionOutcome> StartMeetingTranscriptionOutcomeCallable;
      typedef std::future<StopMeetingTranscriptionOutcome> StopMeetingTranscriptionOutcomeCallable;
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
      typedef std::future<UpdateSipMediaApplicationCallOutcome> UpdateSipMediaApplicationCallOutcomeCallable;
      typedef std::future<UpdateSipRuleOutcome> UpdateSipRuleOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      typedef std::future<UpdateUserSettingsOutcome> UpdateUserSettingsOutcomeCallable;
      typedef std::future<UpdateVoiceConnectorOutcome> UpdateVoiceConnectorOutcomeCallable;
      typedef std::future<UpdateVoiceConnectorGroupOutcome> UpdateVoiceConnectorGroupOutcomeCallable;
      typedef std::future<ValidateE911AddressOutcome> ValidateE911AddressOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ChimeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumberWithUserRequest&, const Model::AssociatePhoneNumberWithUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumberWithUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumbersWithVoiceConnectorRequest&, const Model::AssociatePhoneNumbersWithVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumbersWithVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociatePhoneNumbersWithVoiceConnectorGroupRequest&, const Model::AssociatePhoneNumbersWithVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePhoneNumbersWithVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::AssociateSigninDelegateGroupsWithAccountRequest&, const Model::AssociateSigninDelegateGroupsWithAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSigninDelegateGroupsWithAccountResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchCreateAttendeeRequest&, const Model::BatchCreateAttendeeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateAttendeeResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::BatchCreateChannelMembershipRequest&, const Model::BatchCreateChannelMembershipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchCreateChannelMembershipResponseReceivedHandler;
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
    typedef std::function<void(const ChimeClient*, const Model::CreateMediaCapturePipelineRequest&, const Model::CreateMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMediaCapturePipelineResponseReceivedHandler;
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
    typedef std::function<void(const ChimeClient*, const Model::DeleteMediaCapturePipelineRequest&, const Model::DeleteMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMediaCapturePipelineResponseReceivedHandler;
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
    typedef std::function<void(const ChimeClient*, const Model::GetMediaCapturePipelineRequest&, const Model::GetMediaCapturePipelineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaCapturePipelineResponseReceivedHandler;
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
    typedef std::function<void(const ChimeClient*, const Model::ListMediaCapturePipelinesRequest&, const Model::ListMediaCapturePipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMediaCapturePipelinesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListMeetingTagsRequest&, const Model::ListMeetingTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeetingTagsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListMeetingsRequest&, const Model::ListMeetingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeetingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumberOrdersRequest&, const Model::ListPhoneNumberOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumberOrdersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListPhoneNumbersRequest&, const Model::ListPhoneNumbersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPhoneNumbersResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListProxySessionsRequest&, const Model::ListProxySessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProxySessionsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListRoomMembershipsRequest&, const Model::ListRoomMembershipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomMembershipsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListRoomsRequest&, const Model::ListRoomsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoomsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListSipMediaApplicationsRequest&, const Model::ListSipMediaApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSipMediaApplicationsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListSipRulesRequest&, const Model::ListSipRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSipRulesResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ListSupportedPhoneNumberCountriesRequest&, const Model::ListSupportedPhoneNumberCountriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSupportedPhoneNumberCountriesResponseReceivedHandler;
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
    typedef std::function<void(const ChimeClient*, const Model::StartMeetingTranscriptionRequest&, const Model::StartMeetingTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMeetingTranscriptionResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::StopMeetingTranscriptionRequest&, const Model::StopMeetingTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMeetingTranscriptionResponseReceivedHandler;
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
    typedef std::function<void(const ChimeClient*, const Model::UpdateSipMediaApplicationCallRequest&, const Model::UpdateSipMediaApplicationCallOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSipMediaApplicationCallResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateSipRuleRequest&, const Model::UpdateSipRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSipRuleResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateUserSettingsRequest&, const Model::UpdateUserSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserSettingsResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateVoiceConnectorRequest&, const Model::UpdateVoiceConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceConnectorResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::UpdateVoiceConnectorGroupRequest&, const Model::UpdateVoiceConnectorGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVoiceConnectorGroupResponseReceivedHandler;
    typedef std::function<void(const ChimeClient*, const Model::ValidateE911AddressRequest&, const Model::ValidateE911AddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateE911AddressResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Chime
} // namespace Aws
