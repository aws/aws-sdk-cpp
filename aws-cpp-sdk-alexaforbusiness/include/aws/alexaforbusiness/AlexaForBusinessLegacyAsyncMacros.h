/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define ApproveSkillAsync(...)  SubmitAsync(&AlexaForBusinessClient::ApproveSkill, __VA_ARGS__)
#define ApproveSkillCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ApproveSkill, REQUEST)

#define AssociateContactWithAddressBookAsync(...)  SubmitAsync(&AlexaForBusinessClient::AssociateContactWithAddressBook, __VA_ARGS__)
#define AssociateContactWithAddressBookCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::AssociateContactWithAddressBook, REQUEST)

#define AssociateDeviceWithNetworkProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::AssociateDeviceWithNetworkProfile, __VA_ARGS__)
#define AssociateDeviceWithNetworkProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::AssociateDeviceWithNetworkProfile, REQUEST)

#define AssociateDeviceWithRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::AssociateDeviceWithRoom, __VA_ARGS__)
#define AssociateDeviceWithRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::AssociateDeviceWithRoom, REQUEST)

#define AssociateSkillGroupWithRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::AssociateSkillGroupWithRoom, __VA_ARGS__)
#define AssociateSkillGroupWithRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::AssociateSkillGroupWithRoom, REQUEST)

#define AssociateSkillWithSkillGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::AssociateSkillWithSkillGroup, __VA_ARGS__)
#define AssociateSkillWithSkillGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::AssociateSkillWithSkillGroup, REQUEST)

#define AssociateSkillWithUsersAsync(...)  SubmitAsync(&AlexaForBusinessClient::AssociateSkillWithUsers, __VA_ARGS__)
#define AssociateSkillWithUsersCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::AssociateSkillWithUsers, REQUEST)

#define CreateAddressBookAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateAddressBook, __VA_ARGS__)
#define CreateAddressBookCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateAddressBook, REQUEST)

#define CreateBusinessReportScheduleAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateBusinessReportSchedule, __VA_ARGS__)
#define CreateBusinessReportScheduleCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateBusinessReportSchedule, REQUEST)

#define CreateConferenceProviderAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateConferenceProvider, __VA_ARGS__)
#define CreateConferenceProviderCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateConferenceProvider, REQUEST)

#define CreateContactAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateContact, __VA_ARGS__)
#define CreateContactCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateContact, REQUEST)

#define CreateGatewayGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateGatewayGroup, __VA_ARGS__)
#define CreateGatewayGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateGatewayGroup, REQUEST)

#define CreateNetworkProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateNetworkProfile, __VA_ARGS__)
#define CreateNetworkProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateNetworkProfile, REQUEST)

#define CreateProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateProfile, __VA_ARGS__)
#define CreateProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateProfile, REQUEST)

#define CreateRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateRoom, __VA_ARGS__)
#define CreateRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateRoom, REQUEST)

#define CreateSkillGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateSkillGroup, __VA_ARGS__)
#define CreateSkillGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateSkillGroup, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&AlexaForBusinessClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::CreateUser, REQUEST)

#define DeleteAddressBookAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteAddressBook, __VA_ARGS__)
#define DeleteAddressBookCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteAddressBook, REQUEST)

#define DeleteBusinessReportScheduleAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteBusinessReportSchedule, __VA_ARGS__)
#define DeleteBusinessReportScheduleCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteBusinessReportSchedule, REQUEST)

#define DeleteConferenceProviderAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteConferenceProvider, __VA_ARGS__)
#define DeleteConferenceProviderCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteConferenceProvider, REQUEST)

#define DeleteContactAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteContact, __VA_ARGS__)
#define DeleteContactCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteContact, REQUEST)

#define DeleteDeviceAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteDevice, __VA_ARGS__)
#define DeleteDeviceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteDevice, REQUEST)

#define DeleteDeviceUsageDataAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteDeviceUsageData, __VA_ARGS__)
#define DeleteDeviceUsageDataCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteDeviceUsageData, REQUEST)

#define DeleteGatewayGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteGatewayGroup, __VA_ARGS__)
#define DeleteGatewayGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteGatewayGroup, REQUEST)

#define DeleteNetworkProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteNetworkProfile, __VA_ARGS__)
#define DeleteNetworkProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteNetworkProfile, REQUEST)

#define DeleteProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteProfile, __VA_ARGS__)
#define DeleteProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteProfile, REQUEST)

#define DeleteRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteRoom, __VA_ARGS__)
#define DeleteRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteRoom, REQUEST)

#define DeleteRoomSkillParameterAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteRoomSkillParameter, __VA_ARGS__)
#define DeleteRoomSkillParameterCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteRoomSkillParameter, REQUEST)

#define DeleteSkillAuthorizationAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteSkillAuthorization, __VA_ARGS__)
#define DeleteSkillAuthorizationCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteSkillAuthorization, REQUEST)

#define DeleteSkillGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteSkillGroup, __VA_ARGS__)
#define DeleteSkillGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteSkillGroup, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&AlexaForBusinessClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DeleteUser, REQUEST)

#define DisassociateContactFromAddressBookAsync(...)  SubmitAsync(&AlexaForBusinessClient::DisassociateContactFromAddressBook, __VA_ARGS__)
#define DisassociateContactFromAddressBookCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DisassociateContactFromAddressBook, REQUEST)

#define DisassociateDeviceFromRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::DisassociateDeviceFromRoom, __VA_ARGS__)
#define DisassociateDeviceFromRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DisassociateDeviceFromRoom, REQUEST)

#define DisassociateSkillFromSkillGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::DisassociateSkillFromSkillGroup, __VA_ARGS__)
#define DisassociateSkillFromSkillGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DisassociateSkillFromSkillGroup, REQUEST)

#define DisassociateSkillFromUsersAsync(...)  SubmitAsync(&AlexaForBusinessClient::DisassociateSkillFromUsers, __VA_ARGS__)
#define DisassociateSkillFromUsersCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DisassociateSkillFromUsers, REQUEST)

#define DisassociateSkillGroupFromRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::DisassociateSkillGroupFromRoom, __VA_ARGS__)
#define DisassociateSkillGroupFromRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::DisassociateSkillGroupFromRoom, REQUEST)

#define ForgetSmartHomeAppliancesAsync(...)  SubmitAsync(&AlexaForBusinessClient::ForgetSmartHomeAppliances, __VA_ARGS__)
#define ForgetSmartHomeAppliancesCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ForgetSmartHomeAppliances, REQUEST)

#define GetAddressBookAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetAddressBook, __VA_ARGS__)
#define GetAddressBookCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetAddressBook, REQUEST)

#define GetConferencePreferenceAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetConferencePreference, __VA_ARGS__)
#define GetConferencePreferenceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetConferencePreference, REQUEST)

#define GetConferenceProviderAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetConferenceProvider, __VA_ARGS__)
#define GetConferenceProviderCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetConferenceProvider, REQUEST)

#define GetContactAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetContact, __VA_ARGS__)
#define GetContactCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetContact, REQUEST)

#define GetDeviceAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetDevice, __VA_ARGS__)
#define GetDeviceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetDevice, REQUEST)

#define GetGatewayAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetGateway, __VA_ARGS__)
#define GetGatewayCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetGateway, REQUEST)

#define GetGatewayGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetGatewayGroup, __VA_ARGS__)
#define GetGatewayGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetGatewayGroup, REQUEST)

#define GetInvitationConfigurationAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetInvitationConfiguration, __VA_ARGS__)
#define GetInvitationConfigurationCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetInvitationConfiguration, REQUEST)

#define GetNetworkProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetNetworkProfile, __VA_ARGS__)
#define GetNetworkProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetNetworkProfile, REQUEST)

#define GetProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetProfile, __VA_ARGS__)
#define GetProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetProfile, REQUEST)

#define GetRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetRoom, __VA_ARGS__)
#define GetRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetRoom, REQUEST)

#define GetRoomSkillParameterAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetRoomSkillParameter, __VA_ARGS__)
#define GetRoomSkillParameterCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetRoomSkillParameter, REQUEST)

#define GetSkillGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::GetSkillGroup, __VA_ARGS__)
#define GetSkillGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::GetSkillGroup, REQUEST)

#define ListBusinessReportSchedulesAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListBusinessReportSchedules, __VA_ARGS__)
#define ListBusinessReportSchedulesCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListBusinessReportSchedules, REQUEST)

#define ListConferenceProvidersAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListConferenceProviders, __VA_ARGS__)
#define ListConferenceProvidersCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListConferenceProviders, REQUEST)

#define ListDeviceEventsAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListDeviceEvents, __VA_ARGS__)
#define ListDeviceEventsCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListDeviceEvents, REQUEST)

#define ListGatewayGroupsAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListGatewayGroups, __VA_ARGS__)
#define ListGatewayGroupsCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListGatewayGroups, REQUEST)

#define ListGatewaysAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListGateways, __VA_ARGS__)
#define ListGatewaysCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListGateways, REQUEST)

#define ListSkillsAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListSkills, __VA_ARGS__)
#define ListSkillsCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListSkills, REQUEST)

#define ListSkillsStoreCategoriesAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListSkillsStoreCategories, __VA_ARGS__)
#define ListSkillsStoreCategoriesCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListSkillsStoreCategories, REQUEST)

#define ListSkillsStoreSkillsByCategoryAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListSkillsStoreSkillsByCategory, __VA_ARGS__)
#define ListSkillsStoreSkillsByCategoryCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListSkillsStoreSkillsByCategory, REQUEST)

#define ListSmartHomeAppliancesAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListSmartHomeAppliances, __VA_ARGS__)
#define ListSmartHomeAppliancesCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListSmartHomeAppliances, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&AlexaForBusinessClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ListTags, REQUEST)

#define PutConferencePreferenceAsync(...)  SubmitAsync(&AlexaForBusinessClient::PutConferencePreference, __VA_ARGS__)
#define PutConferencePreferenceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::PutConferencePreference, REQUEST)

#define PutInvitationConfigurationAsync(...)  SubmitAsync(&AlexaForBusinessClient::PutInvitationConfiguration, __VA_ARGS__)
#define PutInvitationConfigurationCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::PutInvitationConfiguration, REQUEST)

#define PutRoomSkillParameterAsync(...)  SubmitAsync(&AlexaForBusinessClient::PutRoomSkillParameter, __VA_ARGS__)
#define PutRoomSkillParameterCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::PutRoomSkillParameter, REQUEST)

#define PutSkillAuthorizationAsync(...)  SubmitAsync(&AlexaForBusinessClient::PutSkillAuthorization, __VA_ARGS__)
#define PutSkillAuthorizationCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::PutSkillAuthorization, REQUEST)

#define RegisterAVSDeviceAsync(...)  SubmitAsync(&AlexaForBusinessClient::RegisterAVSDevice, __VA_ARGS__)
#define RegisterAVSDeviceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::RegisterAVSDevice, REQUEST)

#define RejectSkillAsync(...)  SubmitAsync(&AlexaForBusinessClient::RejectSkill, __VA_ARGS__)
#define RejectSkillCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::RejectSkill, REQUEST)

#define ResolveRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::ResolveRoom, __VA_ARGS__)
#define ResolveRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::ResolveRoom, REQUEST)

#define RevokeInvitationAsync(...)  SubmitAsync(&AlexaForBusinessClient::RevokeInvitation, __VA_ARGS__)
#define RevokeInvitationCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::RevokeInvitation, REQUEST)

#define SearchAddressBooksAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchAddressBooks, __VA_ARGS__)
#define SearchAddressBooksCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchAddressBooks, REQUEST)

#define SearchContactsAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchContacts, __VA_ARGS__)
#define SearchContactsCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchContacts, REQUEST)

#define SearchDevicesAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchDevices, __VA_ARGS__)
#define SearchDevicesCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchDevices, REQUEST)

#define SearchNetworkProfilesAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchNetworkProfiles, __VA_ARGS__)
#define SearchNetworkProfilesCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchNetworkProfiles, REQUEST)

#define SearchProfilesAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchProfiles, __VA_ARGS__)
#define SearchProfilesCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchProfiles, REQUEST)

#define SearchRoomsAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchRooms, __VA_ARGS__)
#define SearchRoomsCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchRooms, REQUEST)

#define SearchSkillGroupsAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchSkillGroups, __VA_ARGS__)
#define SearchSkillGroupsCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchSkillGroups, REQUEST)

#define SearchUsersAsync(...)  SubmitAsync(&AlexaForBusinessClient::SearchUsers, __VA_ARGS__)
#define SearchUsersCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SearchUsers, REQUEST)

#define SendAnnouncementAsync(...)  SubmitAsync(&AlexaForBusinessClient::SendAnnouncement, __VA_ARGS__)
#define SendAnnouncementCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SendAnnouncement, REQUEST)

#define SendInvitationAsync(...)  SubmitAsync(&AlexaForBusinessClient::SendInvitation, __VA_ARGS__)
#define SendInvitationCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::SendInvitation, REQUEST)

#define StartDeviceSyncAsync(...)  SubmitAsync(&AlexaForBusinessClient::StartDeviceSync, __VA_ARGS__)
#define StartDeviceSyncCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::StartDeviceSync, REQUEST)

#define StartSmartHomeApplianceDiscoveryAsync(...)  SubmitAsync(&AlexaForBusinessClient::StartSmartHomeApplianceDiscovery, __VA_ARGS__)
#define StartSmartHomeApplianceDiscoveryCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::StartSmartHomeApplianceDiscovery, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AlexaForBusinessClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AlexaForBusinessClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UntagResource, REQUEST)

#define UpdateAddressBookAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateAddressBook, __VA_ARGS__)
#define UpdateAddressBookCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateAddressBook, REQUEST)

#define UpdateBusinessReportScheduleAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateBusinessReportSchedule, __VA_ARGS__)
#define UpdateBusinessReportScheduleCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateBusinessReportSchedule, REQUEST)

#define UpdateConferenceProviderAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateConferenceProvider, __VA_ARGS__)
#define UpdateConferenceProviderCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateConferenceProvider, REQUEST)

#define UpdateContactAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateContact, __VA_ARGS__)
#define UpdateContactCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateContact, REQUEST)

#define UpdateDeviceAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateDevice, __VA_ARGS__)
#define UpdateDeviceCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateDevice, REQUEST)

#define UpdateGatewayAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateGateway, __VA_ARGS__)
#define UpdateGatewayCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateGateway, REQUEST)

#define UpdateGatewayGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateGatewayGroup, __VA_ARGS__)
#define UpdateGatewayGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateGatewayGroup, REQUEST)

#define UpdateNetworkProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateNetworkProfile, __VA_ARGS__)
#define UpdateNetworkProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateNetworkProfile, REQUEST)

#define UpdateProfileAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateProfile, __VA_ARGS__)
#define UpdateProfileCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateProfile, REQUEST)

#define UpdateRoomAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateRoom, __VA_ARGS__)
#define UpdateRoomCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateRoom, REQUEST)

#define UpdateSkillGroupAsync(...)  SubmitAsync(&AlexaForBusinessClient::UpdateSkillGroup, __VA_ARGS__)
#define UpdateSkillGroupCallable(REQUEST)  SubmitCallable(&AlexaForBusinessClient::UpdateSkillGroup, REQUEST)

