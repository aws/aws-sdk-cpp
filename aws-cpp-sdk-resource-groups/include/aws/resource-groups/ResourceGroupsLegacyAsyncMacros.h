/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateGroupAsync(...)  SubmitAsync(&ResourceGroupsClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::CreateGroup, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&ResourceGroupsClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::DeleteGroup, REQUEST)

#define GetGroupAsync(...)  SubmitAsync(&ResourceGroupsClient::GetGroup, __VA_ARGS__)
#define GetGroupCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::GetGroup, REQUEST)

#define GetGroupConfigurationAsync(...)  SubmitAsync(&ResourceGroupsClient::GetGroupConfiguration, __VA_ARGS__)
#define GetGroupConfigurationCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::GetGroupConfiguration, REQUEST)

#define GetGroupQueryAsync(...)  SubmitAsync(&ResourceGroupsClient::GetGroupQuery, __VA_ARGS__)
#define GetGroupQueryCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::GetGroupQuery, REQUEST)

#define GetTagsAsync(...)  SubmitAsync(&ResourceGroupsClient::GetTags, __VA_ARGS__)
#define GetTagsCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::GetTags, REQUEST)

#define GroupResourcesAsync(...)  SubmitAsync(&ResourceGroupsClient::GroupResources, __VA_ARGS__)
#define GroupResourcesCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::GroupResources, REQUEST)

#define ListGroupResourcesAsync(...)  SubmitAsync(&ResourceGroupsClient::ListGroupResources, __VA_ARGS__)
#define ListGroupResourcesCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::ListGroupResources, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&ResourceGroupsClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::ListGroups, REQUEST)

#define PutGroupConfigurationAsync(...)  SubmitAsync(&ResourceGroupsClient::PutGroupConfiguration, __VA_ARGS__)
#define PutGroupConfigurationCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::PutGroupConfiguration, REQUEST)

#define SearchResourcesAsync(...)  SubmitAsync(&ResourceGroupsClient::SearchResources, __VA_ARGS__)
#define SearchResourcesCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::SearchResources, REQUEST)

#define TagAsync(...)  SubmitAsync(&ResourceGroupsClient::Tag, __VA_ARGS__)
#define TagCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::Tag, REQUEST)

#define UngroupResourcesAsync(...)  SubmitAsync(&ResourceGroupsClient::UngroupResources, __VA_ARGS__)
#define UngroupResourcesCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::UngroupResources, REQUEST)

#define UntagAsync(...)  SubmitAsync(&ResourceGroupsClient::Untag, __VA_ARGS__)
#define UntagCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::Untag, REQUEST)

#define UpdateGroupAsync(...)  SubmitAsync(&ResourceGroupsClient::UpdateGroup, __VA_ARGS__)
#define UpdateGroupCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::UpdateGroup, REQUEST)

#define UpdateGroupQueryAsync(...)  SubmitAsync(&ResourceGroupsClient::UpdateGroupQuery, __VA_ARGS__)
#define UpdateGroupQueryCallable(REQUEST)  SubmitCallable(&ResourceGroupsClient::UpdateGroupQuery, REQUEST)

