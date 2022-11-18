/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateChatTokenAsync(...)  SubmitAsync(&IvschatClient::CreateChatToken, __VA_ARGS__)
#define CreateChatTokenCallable(REQUEST)  SubmitCallable(&IvschatClient::CreateChatToken, REQUEST)

#define CreateLoggingConfigurationAsync(...)  SubmitAsync(&IvschatClient::CreateLoggingConfiguration, __VA_ARGS__)
#define CreateLoggingConfigurationCallable(REQUEST)  SubmitCallable(&IvschatClient::CreateLoggingConfiguration, REQUEST)

#define CreateRoomAsync(...)  SubmitAsync(&IvschatClient::CreateRoom, __VA_ARGS__)
#define CreateRoomCallable(REQUEST)  SubmitCallable(&IvschatClient::CreateRoom, REQUEST)

#define DeleteLoggingConfigurationAsync(...)  SubmitAsync(&IvschatClient::DeleteLoggingConfiguration, __VA_ARGS__)
#define DeleteLoggingConfigurationCallable(REQUEST)  SubmitCallable(&IvschatClient::DeleteLoggingConfiguration, REQUEST)

#define DeleteMessageAsync(...)  SubmitAsync(&IvschatClient::DeleteMessage, __VA_ARGS__)
#define DeleteMessageCallable(REQUEST)  SubmitCallable(&IvschatClient::DeleteMessage, REQUEST)

#define DeleteRoomAsync(...)  SubmitAsync(&IvschatClient::DeleteRoom, __VA_ARGS__)
#define DeleteRoomCallable(REQUEST)  SubmitCallable(&IvschatClient::DeleteRoom, REQUEST)

#define DisconnectUserAsync(...)  SubmitAsync(&IvschatClient::DisconnectUser, __VA_ARGS__)
#define DisconnectUserCallable(REQUEST)  SubmitCallable(&IvschatClient::DisconnectUser, REQUEST)

#define GetLoggingConfigurationAsync(...)  SubmitAsync(&IvschatClient::GetLoggingConfiguration, __VA_ARGS__)
#define GetLoggingConfigurationCallable(REQUEST)  SubmitCallable(&IvschatClient::GetLoggingConfiguration, REQUEST)

#define GetRoomAsync(...)  SubmitAsync(&IvschatClient::GetRoom, __VA_ARGS__)
#define GetRoomCallable(REQUEST)  SubmitCallable(&IvschatClient::GetRoom, REQUEST)

#define ListLoggingConfigurationsAsync(...)  SubmitAsync(&IvschatClient::ListLoggingConfigurations, __VA_ARGS__)
#define ListLoggingConfigurationsCallable(REQUEST)  SubmitCallable(&IvschatClient::ListLoggingConfigurations, REQUEST)

#define ListRoomsAsync(...)  SubmitAsync(&IvschatClient::ListRooms, __VA_ARGS__)
#define ListRoomsCallable(REQUEST)  SubmitCallable(&IvschatClient::ListRooms, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IvschatClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IvschatClient::ListTagsForResource, REQUEST)

#define SendEventAsync(...)  SubmitAsync(&IvschatClient::SendEvent, __VA_ARGS__)
#define SendEventCallable(REQUEST)  SubmitCallable(&IvschatClient::SendEvent, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IvschatClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IvschatClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IvschatClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IvschatClient::UntagResource, REQUEST)

#define UpdateLoggingConfigurationAsync(...)  SubmitAsync(&IvschatClient::UpdateLoggingConfiguration, __VA_ARGS__)
#define UpdateLoggingConfigurationCallable(REQUEST)  SubmitCallable(&IvschatClient::UpdateLoggingConfiguration, REQUEST)

#define UpdateRoomAsync(...)  SubmitAsync(&IvschatClient::UpdateRoom, __VA_ARGS__)
#define UpdateRoomCallable(REQUEST)  SubmitCallable(&IvschatClient::UpdateRoom, REQUEST)

