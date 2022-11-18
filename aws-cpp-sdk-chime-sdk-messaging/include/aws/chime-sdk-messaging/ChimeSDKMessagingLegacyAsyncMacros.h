/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateChannelFlowAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::AssociateChannelFlow, __VA_ARGS__)
#define AssociateChannelFlowCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::AssociateChannelFlow, REQUEST)

#define BatchCreateChannelMembershipAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::BatchCreateChannelMembership, __VA_ARGS__)
#define BatchCreateChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::BatchCreateChannelMembership, REQUEST)

#define ChannelFlowCallbackAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ChannelFlowCallback, __VA_ARGS__)
#define ChannelFlowCallbackCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ChannelFlowCallback, REQUEST)

#define CreateChannelAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::CreateChannel, __VA_ARGS__)
#define CreateChannelCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::CreateChannel, REQUEST)

#define CreateChannelBanAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::CreateChannelBan, __VA_ARGS__)
#define CreateChannelBanCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::CreateChannelBan, REQUEST)

#define CreateChannelFlowAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::CreateChannelFlow, __VA_ARGS__)
#define CreateChannelFlowCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::CreateChannelFlow, REQUEST)

#define CreateChannelMembershipAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::CreateChannelMembership, __VA_ARGS__)
#define CreateChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::CreateChannelMembership, REQUEST)

#define CreateChannelModeratorAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::CreateChannelModerator, __VA_ARGS__)
#define CreateChannelModeratorCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::CreateChannelModerator, REQUEST)

#define DeleteChannelAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DeleteChannel, __VA_ARGS__)
#define DeleteChannelCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DeleteChannel, REQUEST)

#define DeleteChannelBanAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelBan, __VA_ARGS__)
#define DeleteChannelBanCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelBan, REQUEST)

#define DeleteChannelFlowAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelFlow, __VA_ARGS__)
#define DeleteChannelFlowCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelFlow, REQUEST)

#define DeleteChannelMembershipAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelMembership, __VA_ARGS__)
#define DeleteChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelMembership, REQUEST)

#define DeleteChannelMessageAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelMessage, __VA_ARGS__)
#define DeleteChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelMessage, REQUEST)

#define DeleteChannelModeratorAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DeleteChannelModerator, __VA_ARGS__)
#define DeleteChannelModeratorCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DeleteChannelModerator, REQUEST)

#define DescribeChannelAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DescribeChannel, __VA_ARGS__)
#define DescribeChannelCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DescribeChannel, REQUEST)

#define DescribeChannelBanAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelBan, __VA_ARGS__)
#define DescribeChannelBanCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelBan, REQUEST)

#define DescribeChannelFlowAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelFlow, __VA_ARGS__)
#define DescribeChannelFlowCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelFlow, REQUEST)

#define DescribeChannelMembershipAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelMembership, __VA_ARGS__)
#define DescribeChannelMembershipCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelMembership, REQUEST)

#define DescribeChannelMembershipForAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUser, __VA_ARGS__)
#define DescribeChannelMembershipForAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelMembershipForAppInstanceUser, REQUEST)

#define DescribeChannelModeratedByAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUser, __VA_ARGS__)
#define DescribeChannelModeratedByAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelModeratedByAppInstanceUser, REQUEST)

#define DescribeChannelModeratorAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DescribeChannelModerator, __VA_ARGS__)
#define DescribeChannelModeratorCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DescribeChannelModerator, REQUEST)

#define DisassociateChannelFlowAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::DisassociateChannelFlow, __VA_ARGS__)
#define DisassociateChannelFlowCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::DisassociateChannelFlow, REQUEST)

#define GetChannelMembershipPreferencesAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::GetChannelMembershipPreferences, __VA_ARGS__)
#define GetChannelMembershipPreferencesCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::GetChannelMembershipPreferences, REQUEST)

#define GetChannelMessageAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::GetChannelMessage, __VA_ARGS__)
#define GetChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::GetChannelMessage, REQUEST)

#define GetChannelMessageStatusAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::GetChannelMessageStatus, __VA_ARGS__)
#define GetChannelMessageStatusCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::GetChannelMessageStatus, REQUEST)

#define GetMessagingSessionEndpointAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::GetMessagingSessionEndpoint, __VA_ARGS__)
#define GetMessagingSessionEndpointCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::GetMessagingSessionEndpoint, REQUEST)

#define ListChannelBansAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelBans, __VA_ARGS__)
#define ListChannelBansCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelBans, REQUEST)

#define ListChannelFlowsAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelFlows, __VA_ARGS__)
#define ListChannelFlowsCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelFlows, REQUEST)

#define ListChannelMembershipsAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelMemberships, __VA_ARGS__)
#define ListChannelMembershipsCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelMemberships, REQUEST)

#define ListChannelMembershipsForAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUser, __VA_ARGS__)
#define ListChannelMembershipsForAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelMembershipsForAppInstanceUser, REQUEST)

#define ListChannelMessagesAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelMessages, __VA_ARGS__)
#define ListChannelMessagesCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelMessages, REQUEST)

#define ListChannelModeratorsAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelModerators, __VA_ARGS__)
#define ListChannelModeratorsCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelModerators, REQUEST)

#define ListChannelsAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannels, __VA_ARGS__)
#define ListChannelsCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannels, REQUEST)

#define ListChannelsAssociatedWithChannelFlowAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlow, __VA_ARGS__)
#define ListChannelsAssociatedWithChannelFlowCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelsAssociatedWithChannelFlow, REQUEST)

#define ListChannelsModeratedByAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUser, __VA_ARGS__)
#define ListChannelsModeratedByAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListChannelsModeratedByAppInstanceUser, REQUEST)

#define ListSubChannelsAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListSubChannels, __VA_ARGS__)
#define ListSubChannelsCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListSubChannels, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::ListTagsForResource, REQUEST)

#define PutChannelMembershipPreferencesAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::PutChannelMembershipPreferences, __VA_ARGS__)
#define PutChannelMembershipPreferencesCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::PutChannelMembershipPreferences, REQUEST)

#define RedactChannelMessageAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::RedactChannelMessage, __VA_ARGS__)
#define RedactChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::RedactChannelMessage, REQUEST)

#define SearchChannelsAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::SearchChannels, __VA_ARGS__)
#define SearchChannelsCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::SearchChannels, REQUEST)

#define SendChannelMessageAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::SendChannelMessage, __VA_ARGS__)
#define SendChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::SendChannelMessage, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::UntagResource, REQUEST)

#define UpdateChannelAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::UpdateChannel, __VA_ARGS__)
#define UpdateChannelCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::UpdateChannel, REQUEST)

#define UpdateChannelFlowAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::UpdateChannelFlow, __VA_ARGS__)
#define UpdateChannelFlowCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::UpdateChannelFlow, REQUEST)

#define UpdateChannelMessageAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::UpdateChannelMessage, __VA_ARGS__)
#define UpdateChannelMessageCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::UpdateChannelMessage, REQUEST)

#define UpdateChannelReadMarkerAsync(...)  SubmitAsync(&ChimeSDKMessagingClient::UpdateChannelReadMarker, __VA_ARGS__)
#define UpdateChannelReadMarkerCallable(REQUEST)  SubmitCallable(&ChimeSDKMessagingClient::UpdateChannelReadMarker, REQUEST)

