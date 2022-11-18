/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociatePhoneNumberWithUserAsync(...)  SubmitAsync(&ChimeClient::AssociatePhoneNumberWithUser, __VA_ARGS__)
#define AssociatePhoneNumberWithUserCallable(REQUEST)  SubmitCallable(&ChimeClient::AssociatePhoneNumberWithUser, REQUEST)

#define AssociatePhoneNumbersWithVoiceConnectorAsync(...)  SubmitAsync(&ChimeClient::AssociatePhoneNumbersWithVoiceConnector, __VA_ARGS__)
#define AssociatePhoneNumbersWithVoiceConnectorCallable(REQUEST)  SubmitCallable(&ChimeClient::AssociatePhoneNumbersWithVoiceConnector, REQUEST)

#define AssociatePhoneNumbersWithVoiceConnectorGroupAsync(...)  SubmitAsync(&ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroup, __VA_ARGS__)
#define AssociatePhoneNumbersWithVoiceConnectorGroupCallable(REQUEST)  SubmitCallable(&ChimeClient::AssociatePhoneNumbersWithVoiceConnectorGroup, REQUEST)

#define AssociateSigninDelegateGroupsWithAccountAsync(...)  SubmitAsync(&ChimeClient::AssociateSigninDelegateGroupsWithAccount, __VA_ARGS__)
#define AssociateSigninDelegateGroupsWithAccountCallable(REQUEST)  SubmitCallable(&ChimeClient::AssociateSigninDelegateGroupsWithAccount, REQUEST)

#define BatchCreateAttendeeAsync(...)  SubmitAsync(&ChimeClient::BatchCreateAttendee, __VA_ARGS__)
#define BatchCreateAttendeeCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchCreateAttendee, REQUEST)

#define BatchCreateChannelMembershipAsync(...)  SubmitAsync(&ChimeClient::BatchCreateChannelMembership, __VA_ARGS__)
#define BatchCreateChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchCreateChannelMembership, REQUEST)

#define BatchCreateRoomMembershipAsync(...)  SubmitAsync(&ChimeClient::BatchCreateRoomMembership, __VA_ARGS__)
#define BatchCreateRoomMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchCreateRoomMembership, REQUEST)

#define BatchDeletePhoneNumberAsync(...)  SubmitAsync(&ChimeClient::BatchDeletePhoneNumber, __VA_ARGS__)
#define BatchDeletePhoneNumberCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchDeletePhoneNumber, REQUEST)

#define BatchSuspendUserAsync(...)  SubmitAsync(&ChimeClient::BatchSuspendUser, __VA_ARGS__)
#define BatchSuspendUserCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchSuspendUser, REQUEST)

#define BatchUnsuspendUserAsync(...)  SubmitAsync(&ChimeClient::BatchUnsuspendUser, __VA_ARGS__)
#define BatchUnsuspendUserCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchUnsuspendUser, REQUEST)

#define BatchUpdatePhoneNumberAsync(...)  SubmitAsync(&ChimeClient::BatchUpdatePhoneNumber, __VA_ARGS__)
#define BatchUpdatePhoneNumberCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchUpdatePhoneNumber, REQUEST)

#define BatchUpdateUserAsync(...)  SubmitAsync(&ChimeClient::BatchUpdateUser, __VA_ARGS__)
#define BatchUpdateUserCallable(REQUEST)  SubmitCallable(&ChimeClient::BatchUpdateUser, REQUEST)

#define CreateAccountAsync(...)  SubmitAsync(&ChimeClient::CreateAccount, __VA_ARGS__)
#define CreateAccountCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateAccount, REQUEST)

#define CreateAppInstanceAsync(...)  SubmitAsync(&ChimeClient::CreateAppInstance, __VA_ARGS__)
#define CreateAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateAppInstance, REQUEST)

#define CreateAppInstanceAdminAsync(...)  SubmitAsync(&ChimeClient::CreateAppInstanceAdmin, __VA_ARGS__)
#define CreateAppInstanceAdminCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateAppInstanceAdmin, REQUEST)

#define CreateAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::CreateAppInstanceUser, __VA_ARGS__)
#define CreateAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateAppInstanceUser, REQUEST)

#define CreateAttendeeAsync(...)  SubmitAsync(&ChimeClient::CreateAttendee, __VA_ARGS__)
#define CreateAttendeeCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateAttendee, REQUEST)

#define CreateBotAsync(...)  SubmitAsync(&ChimeClient::CreateBot, __VA_ARGS__)
#define CreateBotCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateBot, REQUEST)

#define CreateChannelAsync(...)  SubmitAsync(&ChimeClient::CreateChannel, __VA_ARGS__)
#define CreateChannelCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateChannel, REQUEST)

#define CreateChannelBanAsync(...)  SubmitAsync(&ChimeClient::CreateChannelBan, __VA_ARGS__)
#define CreateChannelBanCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateChannelBan, REQUEST)

#define CreateChannelMembershipAsync(...)  SubmitAsync(&ChimeClient::CreateChannelMembership, __VA_ARGS__)
#define CreateChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateChannelMembership, REQUEST)

#define CreateChannelModeratorAsync(...)  SubmitAsync(&ChimeClient::CreateChannelModerator, __VA_ARGS__)
#define CreateChannelModeratorCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateChannelModerator, REQUEST)

#define CreateMediaCapturePipelineAsync(...)  SubmitAsync(&ChimeClient::CreateMediaCapturePipeline, __VA_ARGS__)
#define CreateMediaCapturePipelineCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateMediaCapturePipeline, REQUEST)

#define CreateMeetingAsync(...)  SubmitAsync(&ChimeClient::CreateMeeting, __VA_ARGS__)
#define CreateMeetingCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateMeeting, REQUEST)

#define CreateMeetingDialOutAsync(...)  SubmitAsync(&ChimeClient::CreateMeetingDialOut, __VA_ARGS__)
#define CreateMeetingDialOutCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateMeetingDialOut, REQUEST)

#define CreateMeetingWithAttendeesAsync(...)  SubmitAsync(&ChimeClient::CreateMeetingWithAttendees, __VA_ARGS__)
#define CreateMeetingWithAttendeesCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateMeetingWithAttendees, REQUEST)

#define CreatePhoneNumberOrderAsync(...)  SubmitAsync(&ChimeClient::CreatePhoneNumberOrder, __VA_ARGS__)
#define CreatePhoneNumberOrderCallable(REQUEST)  SubmitCallable(&ChimeClient::CreatePhoneNumberOrder, REQUEST)

#define CreateProxySessionAsync(...)  SubmitAsync(&ChimeClient::CreateProxySession, __VA_ARGS__)
#define CreateProxySessionCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateProxySession, REQUEST)

#define CreateRoomAsync(...)  SubmitAsync(&ChimeClient::CreateRoom, __VA_ARGS__)
#define CreateRoomCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateRoom, REQUEST)

#define CreateRoomMembershipAsync(...)  SubmitAsync(&ChimeClient::CreateRoomMembership, __VA_ARGS__)
#define CreateRoomMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateRoomMembership, REQUEST)

#define CreateSipMediaApplicationAsync(...)  SubmitAsync(&ChimeClient::CreateSipMediaApplication, __VA_ARGS__)
#define CreateSipMediaApplicationCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateSipMediaApplication, REQUEST)

#define CreateSipMediaApplicationCallAsync(...)  SubmitAsync(&ChimeClient::CreateSipMediaApplicationCall, __VA_ARGS__)
#define CreateSipMediaApplicationCallCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateSipMediaApplicationCall, REQUEST)

#define CreateSipRuleAsync(...)  SubmitAsync(&ChimeClient::CreateSipRule, __VA_ARGS__)
#define CreateSipRuleCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateSipRule, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&ChimeClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateUser, REQUEST)

#define CreateVoiceConnectorAsync(...)  SubmitAsync(&ChimeClient::CreateVoiceConnector, __VA_ARGS__)
#define CreateVoiceConnectorCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateVoiceConnector, REQUEST)

#define CreateVoiceConnectorGroupAsync(...)  SubmitAsync(&ChimeClient::CreateVoiceConnectorGroup, __VA_ARGS__)
#define CreateVoiceConnectorGroupCallable(REQUEST)  SubmitCallable(&ChimeClient::CreateVoiceConnectorGroup, REQUEST)

#define DeleteAccountAsync(...)  SubmitAsync(&ChimeClient::DeleteAccount, __VA_ARGS__)
#define DeleteAccountCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteAccount, REQUEST)

#define DeleteAppInstanceAsync(...)  SubmitAsync(&ChimeClient::DeleteAppInstance, __VA_ARGS__)
#define DeleteAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteAppInstance, REQUEST)

#define DeleteAppInstanceAdminAsync(...)  SubmitAsync(&ChimeClient::DeleteAppInstanceAdmin, __VA_ARGS__)
#define DeleteAppInstanceAdminCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteAppInstanceAdmin, REQUEST)

#define DeleteAppInstanceStreamingConfigurationsAsync(...)  SubmitAsync(&ChimeClient::DeleteAppInstanceStreamingConfigurations, __VA_ARGS__)
#define DeleteAppInstanceStreamingConfigurationsCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteAppInstanceStreamingConfigurations, REQUEST)

#define DeleteAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::DeleteAppInstanceUser, __VA_ARGS__)
#define DeleteAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteAppInstanceUser, REQUEST)

#define DeleteAttendeeAsync(...)  SubmitAsync(&ChimeClient::DeleteAttendee, __VA_ARGS__)
#define DeleteAttendeeCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteAttendee, REQUEST)

#define DeleteChannelAsync(...)  SubmitAsync(&ChimeClient::DeleteChannel, __VA_ARGS__)
#define DeleteChannelCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteChannel, REQUEST)

#define DeleteChannelBanAsync(...)  SubmitAsync(&ChimeClient::DeleteChannelBan, __VA_ARGS__)
#define DeleteChannelBanCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteChannelBan, REQUEST)

#define DeleteChannelMembershipAsync(...)  SubmitAsync(&ChimeClient::DeleteChannelMembership, __VA_ARGS__)
#define DeleteChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteChannelMembership, REQUEST)

#define DeleteChannelMessageAsync(...)  SubmitAsync(&ChimeClient::DeleteChannelMessage, __VA_ARGS__)
#define DeleteChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteChannelMessage, REQUEST)

#define DeleteChannelModeratorAsync(...)  SubmitAsync(&ChimeClient::DeleteChannelModerator, __VA_ARGS__)
#define DeleteChannelModeratorCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteChannelModerator, REQUEST)

#define DeleteEventsConfigurationAsync(...)  SubmitAsync(&ChimeClient::DeleteEventsConfiguration, __VA_ARGS__)
#define DeleteEventsConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteEventsConfiguration, REQUEST)

#define DeleteMediaCapturePipelineAsync(...)  SubmitAsync(&ChimeClient::DeleteMediaCapturePipeline, __VA_ARGS__)
#define DeleteMediaCapturePipelineCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteMediaCapturePipeline, REQUEST)

#define DeleteMeetingAsync(...)  SubmitAsync(&ChimeClient::DeleteMeeting, __VA_ARGS__)
#define DeleteMeetingCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteMeeting, REQUEST)

#define DeletePhoneNumberAsync(...)  SubmitAsync(&ChimeClient::DeletePhoneNumber, __VA_ARGS__)
#define DeletePhoneNumberCallable(REQUEST)  SubmitCallable(&ChimeClient::DeletePhoneNumber, REQUEST)

#define DeleteProxySessionAsync(...)  SubmitAsync(&ChimeClient::DeleteProxySession, __VA_ARGS__)
#define DeleteProxySessionCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteProxySession, REQUEST)

#define DeleteRoomAsync(...)  SubmitAsync(&ChimeClient::DeleteRoom, __VA_ARGS__)
#define DeleteRoomCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteRoom, REQUEST)

#define DeleteRoomMembershipAsync(...)  SubmitAsync(&ChimeClient::DeleteRoomMembership, __VA_ARGS__)
#define DeleteRoomMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteRoomMembership, REQUEST)

#define DeleteSipMediaApplicationAsync(...)  SubmitAsync(&ChimeClient::DeleteSipMediaApplication, __VA_ARGS__)
#define DeleteSipMediaApplicationCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteSipMediaApplication, REQUEST)

#define DeleteSipRuleAsync(...)  SubmitAsync(&ChimeClient::DeleteSipRule, __VA_ARGS__)
#define DeleteSipRuleCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteSipRule, REQUEST)

#define DeleteVoiceConnectorAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnector, __VA_ARGS__)
#define DeleteVoiceConnectorCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnector, REQUEST)

#define DeleteVoiceConnectorEmergencyCallingConfigurationAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnectorEmergencyCallingConfiguration, __VA_ARGS__)
#define DeleteVoiceConnectorEmergencyCallingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnectorEmergencyCallingConfiguration, REQUEST)

#define DeleteVoiceConnectorGroupAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnectorGroup, __VA_ARGS__)
#define DeleteVoiceConnectorGroupCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnectorGroup, REQUEST)

#define DeleteVoiceConnectorOriginationAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnectorOrigination, __VA_ARGS__)
#define DeleteVoiceConnectorOriginationCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnectorOrigination, REQUEST)

#define DeleteVoiceConnectorProxyAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnectorProxy, __VA_ARGS__)
#define DeleteVoiceConnectorProxyCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnectorProxy, REQUEST)

#define DeleteVoiceConnectorStreamingConfigurationAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnectorStreamingConfiguration, __VA_ARGS__)
#define DeleteVoiceConnectorStreamingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnectorStreamingConfiguration, REQUEST)

#define DeleteVoiceConnectorTerminationAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnectorTermination, __VA_ARGS__)
#define DeleteVoiceConnectorTerminationCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnectorTermination, REQUEST)

#define DeleteVoiceConnectorTerminationCredentialsAsync(...)  SubmitAsync(&ChimeClient::DeleteVoiceConnectorTerminationCredentials, __VA_ARGS__)
#define DeleteVoiceConnectorTerminationCredentialsCallable(REQUEST)  SubmitCallable(&ChimeClient::DeleteVoiceConnectorTerminationCredentials, REQUEST)

#define DescribeAppInstanceAsync(...)  SubmitAsync(&ChimeClient::DescribeAppInstance, __VA_ARGS__)
#define DescribeAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeAppInstance, REQUEST)

#define DescribeAppInstanceAdminAsync(...)  SubmitAsync(&ChimeClient::DescribeAppInstanceAdmin, __VA_ARGS__)
#define DescribeAppInstanceAdminCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeAppInstanceAdmin, REQUEST)

#define DescribeAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::DescribeAppInstanceUser, __VA_ARGS__)
#define DescribeAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeAppInstanceUser, REQUEST)

#define DescribeChannelAsync(...)  SubmitAsync(&ChimeClient::DescribeChannel, __VA_ARGS__)
#define DescribeChannelCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeChannel, REQUEST)

#define DescribeChannelBanAsync(...)  SubmitAsync(&ChimeClient::DescribeChannelBan, __VA_ARGS__)
#define DescribeChannelBanCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeChannelBan, REQUEST)

#define DescribeChannelMembershipAsync(...)  SubmitAsync(&ChimeClient::DescribeChannelMembership, __VA_ARGS__)
#define DescribeChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeChannelMembership, REQUEST)

#define DescribeChannelMembershipForAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::DescribeChannelMembershipForAppInstanceUser, __VA_ARGS__)
#define DescribeChannelMembershipForAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeChannelMembershipForAppInstanceUser, REQUEST)

#define DescribeChannelModeratedByAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::DescribeChannelModeratedByAppInstanceUser, __VA_ARGS__)
#define DescribeChannelModeratedByAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeChannelModeratedByAppInstanceUser, REQUEST)

#define DescribeChannelModeratorAsync(...)  SubmitAsync(&ChimeClient::DescribeChannelModerator, __VA_ARGS__)
#define DescribeChannelModeratorCallable(REQUEST)  SubmitCallable(&ChimeClient::DescribeChannelModerator, REQUEST)

#define DisassociatePhoneNumberFromUserAsync(...)  SubmitAsync(&ChimeClient::DisassociatePhoneNumberFromUser, __VA_ARGS__)
#define DisassociatePhoneNumberFromUserCallable(REQUEST)  SubmitCallable(&ChimeClient::DisassociatePhoneNumberFromUser, REQUEST)

#define DisassociatePhoneNumbersFromVoiceConnectorAsync(...)  SubmitAsync(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnector, __VA_ARGS__)
#define DisassociatePhoneNumbersFromVoiceConnectorCallable(REQUEST)  SubmitCallable(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnector, REQUEST)

#define DisassociatePhoneNumbersFromVoiceConnectorGroupAsync(...)  SubmitAsync(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroup, __VA_ARGS__)
#define DisassociatePhoneNumbersFromVoiceConnectorGroupCallable(REQUEST)  SubmitCallable(&ChimeClient::DisassociatePhoneNumbersFromVoiceConnectorGroup, REQUEST)

#define DisassociateSigninDelegateGroupsFromAccountAsync(...)  SubmitAsync(&ChimeClient::DisassociateSigninDelegateGroupsFromAccount, __VA_ARGS__)
#define DisassociateSigninDelegateGroupsFromAccountCallable(REQUEST)  SubmitCallable(&ChimeClient::DisassociateSigninDelegateGroupsFromAccount, REQUEST)

#define GetAccountAsync(...)  SubmitAsync(&ChimeClient::GetAccount, __VA_ARGS__)
#define GetAccountCallable(REQUEST)  SubmitCallable(&ChimeClient::GetAccount, REQUEST)

#define GetAccountSettingsAsync(...)  SubmitAsync(&ChimeClient::GetAccountSettings, __VA_ARGS__)
#define GetAccountSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::GetAccountSettings, REQUEST)

#define GetAppInstanceRetentionSettingsAsync(...)  SubmitAsync(&ChimeClient::GetAppInstanceRetentionSettings, __VA_ARGS__)
#define GetAppInstanceRetentionSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::GetAppInstanceRetentionSettings, REQUEST)

#define GetAppInstanceStreamingConfigurationsAsync(...)  SubmitAsync(&ChimeClient::GetAppInstanceStreamingConfigurations, __VA_ARGS__)
#define GetAppInstanceStreamingConfigurationsCallable(REQUEST)  SubmitCallable(&ChimeClient::GetAppInstanceStreamingConfigurations, REQUEST)

#define GetAttendeeAsync(...)  SubmitAsync(&ChimeClient::GetAttendee, __VA_ARGS__)
#define GetAttendeeCallable(REQUEST)  SubmitCallable(&ChimeClient::GetAttendee, REQUEST)

#define GetBotAsync(...)  SubmitAsync(&ChimeClient::GetBot, __VA_ARGS__)
#define GetBotCallable(REQUEST)  SubmitCallable(&ChimeClient::GetBot, REQUEST)

#define GetChannelMessageAsync(...)  SubmitAsync(&ChimeClient::GetChannelMessage, __VA_ARGS__)
#define GetChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeClient::GetChannelMessage, REQUEST)

#define GetEventsConfigurationAsync(...)  SubmitAsync(&ChimeClient::GetEventsConfiguration, __VA_ARGS__)
#define GetEventsConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetEventsConfiguration, REQUEST)


#define GetMediaCapturePipelineAsync(...)  SubmitAsync(&ChimeClient::GetMediaCapturePipeline, __VA_ARGS__)
#define GetMediaCapturePipelineCallable(REQUEST)  SubmitCallable(&ChimeClient::GetMediaCapturePipeline, REQUEST)

#define GetMeetingAsync(...)  SubmitAsync(&ChimeClient::GetMeeting, __VA_ARGS__)
#define GetMeetingCallable(REQUEST)  SubmitCallable(&ChimeClient::GetMeeting, REQUEST)

#define GetMessagingSessionEndpointAsync(...)  SubmitAsync(&ChimeClient::GetMessagingSessionEndpoint, __VA_ARGS__)
#define GetMessagingSessionEndpointCallable(REQUEST)  SubmitCallable(&ChimeClient::GetMessagingSessionEndpoint, REQUEST)

#define GetPhoneNumberAsync(...)  SubmitAsync(&ChimeClient::GetPhoneNumber, __VA_ARGS__)
#define GetPhoneNumberCallable(REQUEST)  SubmitCallable(&ChimeClient::GetPhoneNumber, REQUEST)

#define GetPhoneNumberOrderAsync(...)  SubmitAsync(&ChimeClient::GetPhoneNumberOrder, __VA_ARGS__)
#define GetPhoneNumberOrderCallable(REQUEST)  SubmitCallable(&ChimeClient::GetPhoneNumberOrder, REQUEST)


#define GetProxySessionAsync(...)  SubmitAsync(&ChimeClient::GetProxySession, __VA_ARGS__)
#define GetProxySessionCallable(REQUEST)  SubmitCallable(&ChimeClient::GetProxySession, REQUEST)

#define GetRetentionSettingsAsync(...)  SubmitAsync(&ChimeClient::GetRetentionSettings, __VA_ARGS__)
#define GetRetentionSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::GetRetentionSettings, REQUEST)

#define GetRoomAsync(...)  SubmitAsync(&ChimeClient::GetRoom, __VA_ARGS__)
#define GetRoomCallable(REQUEST)  SubmitCallable(&ChimeClient::GetRoom, REQUEST)

#define GetSipMediaApplicationAsync(...)  SubmitAsync(&ChimeClient::GetSipMediaApplication, __VA_ARGS__)
#define GetSipMediaApplicationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetSipMediaApplication, REQUEST)

#define GetSipMediaApplicationLoggingConfigurationAsync(...)  SubmitAsync(&ChimeClient::GetSipMediaApplicationLoggingConfiguration, __VA_ARGS__)
#define GetSipMediaApplicationLoggingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetSipMediaApplicationLoggingConfiguration, REQUEST)

#define GetSipRuleAsync(...)  SubmitAsync(&ChimeClient::GetSipRule, __VA_ARGS__)
#define GetSipRuleCallable(REQUEST)  SubmitCallable(&ChimeClient::GetSipRule, REQUEST)

#define GetUserAsync(...)  SubmitAsync(&ChimeClient::GetUser, __VA_ARGS__)
#define GetUserCallable(REQUEST)  SubmitCallable(&ChimeClient::GetUser, REQUEST)

#define GetUserSettingsAsync(...)  SubmitAsync(&ChimeClient::GetUserSettings, __VA_ARGS__)
#define GetUserSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::GetUserSettings, REQUEST)

#define GetVoiceConnectorAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnector, __VA_ARGS__)
#define GetVoiceConnectorCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnector, REQUEST)

#define GetVoiceConnectorEmergencyCallingConfigurationAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorEmergencyCallingConfiguration, __VA_ARGS__)
#define GetVoiceConnectorEmergencyCallingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorEmergencyCallingConfiguration, REQUEST)

#define GetVoiceConnectorGroupAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorGroup, __VA_ARGS__)
#define GetVoiceConnectorGroupCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorGroup, REQUEST)

#define GetVoiceConnectorLoggingConfigurationAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorLoggingConfiguration, __VA_ARGS__)
#define GetVoiceConnectorLoggingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorLoggingConfiguration, REQUEST)

#define GetVoiceConnectorOriginationAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorOrigination, __VA_ARGS__)
#define GetVoiceConnectorOriginationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorOrigination, REQUEST)

#define GetVoiceConnectorProxyAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorProxy, __VA_ARGS__)
#define GetVoiceConnectorProxyCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorProxy, REQUEST)

#define GetVoiceConnectorStreamingConfigurationAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorStreamingConfiguration, __VA_ARGS__)
#define GetVoiceConnectorStreamingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorStreamingConfiguration, REQUEST)

#define GetVoiceConnectorTerminationAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorTermination, __VA_ARGS__)
#define GetVoiceConnectorTerminationCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorTermination, REQUEST)

#define GetVoiceConnectorTerminationHealthAsync(...)  SubmitAsync(&ChimeClient::GetVoiceConnectorTerminationHealth, __VA_ARGS__)
#define GetVoiceConnectorTerminationHealthCallable(REQUEST)  SubmitCallable(&ChimeClient::GetVoiceConnectorTerminationHealth, REQUEST)

#define InviteUsersAsync(...)  SubmitAsync(&ChimeClient::InviteUsers, __VA_ARGS__)
#define InviteUsersCallable(REQUEST)  SubmitCallable(&ChimeClient::InviteUsers, REQUEST)

#define ListAccountsAsync(...)  SubmitAsync(&ChimeClient::ListAccounts, __VA_ARGS__)
#define ListAccountsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListAccounts, REQUEST)

#define ListAppInstanceAdminsAsync(...)  SubmitAsync(&ChimeClient::ListAppInstanceAdmins, __VA_ARGS__)
#define ListAppInstanceAdminsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListAppInstanceAdmins, REQUEST)

#define ListAppInstanceUsersAsync(...)  SubmitAsync(&ChimeClient::ListAppInstanceUsers, __VA_ARGS__)
#define ListAppInstanceUsersCallable(REQUEST)  SubmitCallable(&ChimeClient::ListAppInstanceUsers, REQUEST)

#define ListAppInstancesAsync(...)  SubmitAsync(&ChimeClient::ListAppInstances, __VA_ARGS__)
#define ListAppInstancesCallable(REQUEST)  SubmitCallable(&ChimeClient::ListAppInstances, REQUEST)

#define ListAttendeeTagsAsync(...)  SubmitAsync(&ChimeClient::ListAttendeeTags, __VA_ARGS__)
#define ListAttendeeTagsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListAttendeeTags, REQUEST)

#define ListAttendeesAsync(...)  SubmitAsync(&ChimeClient::ListAttendees, __VA_ARGS__)
#define ListAttendeesCallable(REQUEST)  SubmitCallable(&ChimeClient::ListAttendees, REQUEST)

#define ListBotsAsync(...)  SubmitAsync(&ChimeClient::ListBots, __VA_ARGS__)
#define ListBotsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListBots, REQUEST)

#define ListChannelBansAsync(...)  SubmitAsync(&ChimeClient::ListChannelBans, __VA_ARGS__)
#define ListChannelBansCallable(REQUEST)  SubmitCallable(&ChimeClient::ListChannelBans, REQUEST)

#define ListChannelMembershipsAsync(...)  SubmitAsync(&ChimeClient::ListChannelMemberships, __VA_ARGS__)
#define ListChannelMembershipsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListChannelMemberships, REQUEST)

#define ListChannelMembershipsForAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::ListChannelMembershipsForAppInstanceUser, __VA_ARGS__)
#define ListChannelMembershipsForAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::ListChannelMembershipsForAppInstanceUser, REQUEST)

#define ListChannelMessagesAsync(...)  SubmitAsync(&ChimeClient::ListChannelMessages, __VA_ARGS__)
#define ListChannelMessagesCallable(REQUEST)  SubmitCallable(&ChimeClient::ListChannelMessages, REQUEST)

#define ListChannelModeratorsAsync(...)  SubmitAsync(&ChimeClient::ListChannelModerators, __VA_ARGS__)
#define ListChannelModeratorsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListChannelModerators, REQUEST)

#define ListChannelsAsync(...)  SubmitAsync(&ChimeClient::ListChannels, __VA_ARGS__)
#define ListChannelsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListChannels, REQUEST)

#define ListChannelsModeratedByAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::ListChannelsModeratedByAppInstanceUser, __VA_ARGS__)
#define ListChannelsModeratedByAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::ListChannelsModeratedByAppInstanceUser, REQUEST)

#define ListMediaCapturePipelinesAsync(...)  SubmitAsync(&ChimeClient::ListMediaCapturePipelines, __VA_ARGS__)
#define ListMediaCapturePipelinesCallable(REQUEST)  SubmitCallable(&ChimeClient::ListMediaCapturePipelines, REQUEST)

#define ListMeetingTagsAsync(...)  SubmitAsync(&ChimeClient::ListMeetingTags, __VA_ARGS__)
#define ListMeetingTagsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListMeetingTags, REQUEST)

#define ListMeetingsAsync(...)  SubmitAsync(&ChimeClient::ListMeetings, __VA_ARGS__)
#define ListMeetingsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListMeetings, REQUEST)

#define ListPhoneNumberOrdersAsync(...)  SubmitAsync(&ChimeClient::ListPhoneNumberOrders, __VA_ARGS__)
#define ListPhoneNumberOrdersCallable(REQUEST)  SubmitCallable(&ChimeClient::ListPhoneNumberOrders, REQUEST)

#define ListPhoneNumbersAsync(...)  SubmitAsync(&ChimeClient::ListPhoneNumbers, __VA_ARGS__)
#define ListPhoneNumbersCallable(REQUEST)  SubmitCallable(&ChimeClient::ListPhoneNumbers, REQUEST)

#define ListProxySessionsAsync(...)  SubmitAsync(&ChimeClient::ListProxySessions, __VA_ARGS__)
#define ListProxySessionsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListProxySessions, REQUEST)

#define ListRoomMembershipsAsync(...)  SubmitAsync(&ChimeClient::ListRoomMemberships, __VA_ARGS__)
#define ListRoomMembershipsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListRoomMemberships, REQUEST)

#define ListRoomsAsync(...)  SubmitAsync(&ChimeClient::ListRooms, __VA_ARGS__)
#define ListRoomsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListRooms, REQUEST)

#define ListSipMediaApplicationsAsync(...)  SubmitAsync(&ChimeClient::ListSipMediaApplications, __VA_ARGS__)
#define ListSipMediaApplicationsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListSipMediaApplications, REQUEST)

#define ListSipRulesAsync(...)  SubmitAsync(&ChimeClient::ListSipRules, __VA_ARGS__)
#define ListSipRulesCallable(REQUEST)  SubmitCallable(&ChimeClient::ListSipRules, REQUEST)

#define ListSupportedPhoneNumberCountriesAsync(...)  SubmitAsync(&ChimeClient::ListSupportedPhoneNumberCountries, __VA_ARGS__)
#define ListSupportedPhoneNumberCountriesCallable(REQUEST)  SubmitCallable(&ChimeClient::ListSupportedPhoneNumberCountries, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ChimeClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ChimeClient::ListTagsForResource, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&ChimeClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&ChimeClient::ListUsers, REQUEST)

#define ListVoiceConnectorGroupsAsync(...)  SubmitAsync(&ChimeClient::ListVoiceConnectorGroups, __VA_ARGS__)
#define ListVoiceConnectorGroupsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListVoiceConnectorGroups, REQUEST)

#define ListVoiceConnectorTerminationCredentialsAsync(...)  SubmitAsync(&ChimeClient::ListVoiceConnectorTerminationCredentials, __VA_ARGS__)
#define ListVoiceConnectorTerminationCredentialsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListVoiceConnectorTerminationCredentials, REQUEST)

#define ListVoiceConnectorsAsync(...)  SubmitAsync(&ChimeClient::ListVoiceConnectors, __VA_ARGS__)
#define ListVoiceConnectorsCallable(REQUEST)  SubmitCallable(&ChimeClient::ListVoiceConnectors, REQUEST)

#define LogoutUserAsync(...)  SubmitAsync(&ChimeClient::LogoutUser, __VA_ARGS__)
#define LogoutUserCallable(REQUEST)  SubmitCallable(&ChimeClient::LogoutUser, REQUEST)

#define PutAppInstanceRetentionSettingsAsync(...)  SubmitAsync(&ChimeClient::PutAppInstanceRetentionSettings, __VA_ARGS__)
#define PutAppInstanceRetentionSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::PutAppInstanceRetentionSettings, REQUEST)

#define PutAppInstanceStreamingConfigurationsAsync(...)  SubmitAsync(&ChimeClient::PutAppInstanceStreamingConfigurations, __VA_ARGS__)
#define PutAppInstanceStreamingConfigurationsCallable(REQUEST)  SubmitCallable(&ChimeClient::PutAppInstanceStreamingConfigurations, REQUEST)

#define PutEventsConfigurationAsync(...)  SubmitAsync(&ChimeClient::PutEventsConfiguration, __VA_ARGS__)
#define PutEventsConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::PutEventsConfiguration, REQUEST)

#define PutRetentionSettingsAsync(...)  SubmitAsync(&ChimeClient::PutRetentionSettings, __VA_ARGS__)
#define PutRetentionSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::PutRetentionSettings, REQUEST)

#define PutSipMediaApplicationLoggingConfigurationAsync(...)  SubmitAsync(&ChimeClient::PutSipMediaApplicationLoggingConfiguration, __VA_ARGS__)
#define PutSipMediaApplicationLoggingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::PutSipMediaApplicationLoggingConfiguration, REQUEST)

#define PutVoiceConnectorEmergencyCallingConfigurationAsync(...)  SubmitAsync(&ChimeClient::PutVoiceConnectorEmergencyCallingConfiguration, __VA_ARGS__)
#define PutVoiceConnectorEmergencyCallingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::PutVoiceConnectorEmergencyCallingConfiguration, REQUEST)

#define PutVoiceConnectorLoggingConfigurationAsync(...)  SubmitAsync(&ChimeClient::PutVoiceConnectorLoggingConfiguration, __VA_ARGS__)
#define PutVoiceConnectorLoggingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::PutVoiceConnectorLoggingConfiguration, REQUEST)

#define PutVoiceConnectorOriginationAsync(...)  SubmitAsync(&ChimeClient::PutVoiceConnectorOrigination, __VA_ARGS__)
#define PutVoiceConnectorOriginationCallable(REQUEST)  SubmitCallable(&ChimeClient::PutVoiceConnectorOrigination, REQUEST)

#define PutVoiceConnectorProxyAsync(...)  SubmitAsync(&ChimeClient::PutVoiceConnectorProxy, __VA_ARGS__)
#define PutVoiceConnectorProxyCallable(REQUEST)  SubmitCallable(&ChimeClient::PutVoiceConnectorProxy, REQUEST)

#define PutVoiceConnectorStreamingConfigurationAsync(...)  SubmitAsync(&ChimeClient::PutVoiceConnectorStreamingConfiguration, __VA_ARGS__)
#define PutVoiceConnectorStreamingConfigurationCallable(REQUEST)  SubmitCallable(&ChimeClient::PutVoiceConnectorStreamingConfiguration, REQUEST)

#define PutVoiceConnectorTerminationAsync(...)  SubmitAsync(&ChimeClient::PutVoiceConnectorTermination, __VA_ARGS__)
#define PutVoiceConnectorTerminationCallable(REQUEST)  SubmitCallable(&ChimeClient::PutVoiceConnectorTermination, REQUEST)

#define PutVoiceConnectorTerminationCredentialsAsync(...)  SubmitAsync(&ChimeClient::PutVoiceConnectorTerminationCredentials, __VA_ARGS__)
#define PutVoiceConnectorTerminationCredentialsCallable(REQUEST)  SubmitCallable(&ChimeClient::PutVoiceConnectorTerminationCredentials, REQUEST)

#define RedactChannelMessageAsync(...)  SubmitAsync(&ChimeClient::RedactChannelMessage, __VA_ARGS__)
#define RedactChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeClient::RedactChannelMessage, REQUEST)

#define RedactConversationMessageAsync(...)  SubmitAsync(&ChimeClient::RedactConversationMessage, __VA_ARGS__)
#define RedactConversationMessageCallable(REQUEST)  SubmitCallable(&ChimeClient::RedactConversationMessage, REQUEST)

#define RedactRoomMessageAsync(...)  SubmitAsync(&ChimeClient::RedactRoomMessage, __VA_ARGS__)
#define RedactRoomMessageCallable(REQUEST)  SubmitCallable(&ChimeClient::RedactRoomMessage, REQUEST)

#define RegenerateSecurityTokenAsync(...)  SubmitAsync(&ChimeClient::RegenerateSecurityToken, __VA_ARGS__)
#define RegenerateSecurityTokenCallable(REQUEST)  SubmitCallable(&ChimeClient::RegenerateSecurityToken, REQUEST)

#define ResetPersonalPINAsync(...)  SubmitAsync(&ChimeClient::ResetPersonalPIN, __VA_ARGS__)
#define ResetPersonalPINCallable(REQUEST)  SubmitCallable(&ChimeClient::ResetPersonalPIN, REQUEST)

#define RestorePhoneNumberAsync(...)  SubmitAsync(&ChimeClient::RestorePhoneNumber, __VA_ARGS__)
#define RestorePhoneNumberCallable(REQUEST)  SubmitCallable(&ChimeClient::RestorePhoneNumber, REQUEST)

#define SearchAvailablePhoneNumbersAsync(...)  SubmitAsync(&ChimeClient::SearchAvailablePhoneNumbers, __VA_ARGS__)
#define SearchAvailablePhoneNumbersCallable(REQUEST)  SubmitCallable(&ChimeClient::SearchAvailablePhoneNumbers, REQUEST)

#define SendChannelMessageAsync(...)  SubmitAsync(&ChimeClient::SendChannelMessage, __VA_ARGS__)
#define SendChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeClient::SendChannelMessage, REQUEST)

#define StartMeetingTranscriptionAsync(...)  SubmitAsync(&ChimeClient::StartMeetingTranscription, __VA_ARGS__)
#define StartMeetingTranscriptionCallable(REQUEST)  SubmitCallable(&ChimeClient::StartMeetingTranscription, REQUEST)

#define StopMeetingTranscriptionAsync(...)  SubmitAsync(&ChimeClient::StopMeetingTranscription, __VA_ARGS__)
#define StopMeetingTranscriptionCallable(REQUEST)  SubmitCallable(&ChimeClient::StopMeetingTranscription, REQUEST)

#define TagAttendeeAsync(...)  SubmitAsync(&ChimeClient::TagAttendee, __VA_ARGS__)
#define TagAttendeeCallable(REQUEST)  SubmitCallable(&ChimeClient::TagAttendee, REQUEST)

#define TagMeetingAsync(...)  SubmitAsync(&ChimeClient::TagMeeting, __VA_ARGS__)
#define TagMeetingCallable(REQUEST)  SubmitCallable(&ChimeClient::TagMeeting, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ChimeClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ChimeClient::TagResource, REQUEST)

#define UntagAttendeeAsync(...)  SubmitAsync(&ChimeClient::UntagAttendee, __VA_ARGS__)
#define UntagAttendeeCallable(REQUEST)  SubmitCallable(&ChimeClient::UntagAttendee, REQUEST)

#define UntagMeetingAsync(...)  SubmitAsync(&ChimeClient::UntagMeeting, __VA_ARGS__)
#define UntagMeetingCallable(REQUEST)  SubmitCallable(&ChimeClient::UntagMeeting, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ChimeClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ChimeClient::UntagResource, REQUEST)

#define UpdateAccountAsync(...)  SubmitAsync(&ChimeClient::UpdateAccount, __VA_ARGS__)
#define UpdateAccountCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateAccount, REQUEST)

#define UpdateAccountSettingsAsync(...)  SubmitAsync(&ChimeClient::UpdateAccountSettings, __VA_ARGS__)
#define UpdateAccountSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateAccountSettings, REQUEST)

#define UpdateAppInstanceAsync(...)  SubmitAsync(&ChimeClient::UpdateAppInstance, __VA_ARGS__)
#define UpdateAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateAppInstance, REQUEST)

#define UpdateAppInstanceUserAsync(...)  SubmitAsync(&ChimeClient::UpdateAppInstanceUser, __VA_ARGS__)
#define UpdateAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateAppInstanceUser, REQUEST)

#define UpdateBotAsync(...)  SubmitAsync(&ChimeClient::UpdateBot, __VA_ARGS__)
#define UpdateBotCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateBot, REQUEST)

#define UpdateChannelAsync(...)  SubmitAsync(&ChimeClient::UpdateChannel, __VA_ARGS__)
#define UpdateChannelCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateChannel, REQUEST)

#define UpdateChannelMessageAsync(...)  SubmitAsync(&ChimeClient::UpdateChannelMessage, __VA_ARGS__)
#define UpdateChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateChannelMessage, REQUEST)

#define UpdateChannelReadMarkerAsync(...)  SubmitAsync(&ChimeClient::UpdateChannelReadMarker, __VA_ARGS__)
#define UpdateChannelReadMarkerCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateChannelReadMarker, REQUEST)

#define UpdateGlobalSettingsAsync(...)  SubmitAsync(&ChimeClient::UpdateGlobalSettings, __VA_ARGS__)
#define UpdateGlobalSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateGlobalSettings, REQUEST)

#define UpdatePhoneNumberAsync(...)  SubmitAsync(&ChimeClient::UpdatePhoneNumber, __VA_ARGS__)
#define UpdatePhoneNumberCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdatePhoneNumber, REQUEST)

#define UpdatePhoneNumberSettingsAsync(...)  SubmitAsync(&ChimeClient::UpdatePhoneNumberSettings, __VA_ARGS__)
#define UpdatePhoneNumberSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdatePhoneNumberSettings, REQUEST)

#define UpdateProxySessionAsync(...)  SubmitAsync(&ChimeClient::UpdateProxySession, __VA_ARGS__)
#define UpdateProxySessionCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateProxySession, REQUEST)

#define UpdateRoomAsync(...)  SubmitAsync(&ChimeClient::UpdateRoom, __VA_ARGS__)
#define UpdateRoomCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateRoom, REQUEST)

#define UpdateRoomMembershipAsync(...)  SubmitAsync(&ChimeClient::UpdateRoomMembership, __VA_ARGS__)
#define UpdateRoomMembershipCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateRoomMembership, REQUEST)

#define UpdateSipMediaApplicationAsync(...)  SubmitAsync(&ChimeClient::UpdateSipMediaApplication, __VA_ARGS__)
#define UpdateSipMediaApplicationCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateSipMediaApplication, REQUEST)

#define UpdateSipMediaApplicationCallAsync(...)  SubmitAsync(&ChimeClient::UpdateSipMediaApplicationCall, __VA_ARGS__)
#define UpdateSipMediaApplicationCallCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateSipMediaApplicationCall, REQUEST)

#define UpdateSipRuleAsync(...)  SubmitAsync(&ChimeClient::UpdateSipRule, __VA_ARGS__)
#define UpdateSipRuleCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateSipRule, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&ChimeClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateUser, REQUEST)

#define UpdateUserSettingsAsync(...)  SubmitAsync(&ChimeClient::UpdateUserSettings, __VA_ARGS__)
#define UpdateUserSettingsCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateUserSettings, REQUEST)

#define UpdateVoiceConnectorAsync(...)  SubmitAsync(&ChimeClient::UpdateVoiceConnector, __VA_ARGS__)
#define UpdateVoiceConnectorCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateVoiceConnector, REQUEST)

#define UpdateVoiceConnectorGroupAsync(...)  SubmitAsync(&ChimeClient::UpdateVoiceConnectorGroup, __VA_ARGS__)
#define UpdateVoiceConnectorGroupCallable(REQUEST)  SubmitCallable(&ChimeClient::UpdateVoiceConnectorGroup, REQUEST)

#define ValidateE911AddressAsync(...)  SubmitAsync(&ChimeClient::ValidateE911Address, __VA_ARGS__)
#define ValidateE911AddressCallable(REQUEST)  SubmitCallable(&ChimeClient::ValidateE911Address, REQUEST)

