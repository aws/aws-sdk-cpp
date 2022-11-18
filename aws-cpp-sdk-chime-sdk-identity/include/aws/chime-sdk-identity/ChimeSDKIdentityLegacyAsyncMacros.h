/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAppInstanceAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::CreateAppInstance, __VA_ARGS__)
#define CreateAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::CreateAppInstance, REQUEST)

#define CreateAppInstanceAdminAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::CreateAppInstanceAdmin, __VA_ARGS__)
#define CreateAppInstanceAdminCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::CreateAppInstanceAdmin, REQUEST)

#define CreateAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::CreateAppInstanceUser, __VA_ARGS__)
#define CreateAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::CreateAppInstanceUser, REQUEST)

#define DeleteAppInstanceAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DeleteAppInstance, __VA_ARGS__)
#define DeleteAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DeleteAppInstance, REQUEST)

#define DeleteAppInstanceAdminAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DeleteAppInstanceAdmin, __VA_ARGS__)
#define DeleteAppInstanceAdminCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DeleteAppInstanceAdmin, REQUEST)

#define DeleteAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DeleteAppInstanceUser, __VA_ARGS__)
#define DeleteAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DeleteAppInstanceUser, REQUEST)

#define DeregisterAppInstanceUserEndpointAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DeregisterAppInstanceUserEndpoint, __VA_ARGS__)
#define DeregisterAppInstanceUserEndpointCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DeregisterAppInstanceUserEndpoint, REQUEST)

#define DescribeAppInstanceAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstance, __VA_ARGS__)
#define DescribeAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstance, REQUEST)

#define DescribeAppInstanceAdminAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstanceAdmin, __VA_ARGS__)
#define DescribeAppInstanceAdminCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstanceAdmin, REQUEST)

#define DescribeAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstanceUser, __VA_ARGS__)
#define DescribeAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstanceUser, REQUEST)

#define DescribeAppInstanceUserEndpointAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::DescribeAppInstanceUserEndpoint, __VA_ARGS__)
#define DescribeAppInstanceUserEndpointCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::DescribeAppInstanceUserEndpoint, REQUEST)

#define GetAppInstanceRetentionSettingsAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::GetAppInstanceRetentionSettings, __VA_ARGS__)
#define GetAppInstanceRetentionSettingsCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::GetAppInstanceRetentionSettings, REQUEST)

#define ListAppInstanceAdminsAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::ListAppInstanceAdmins, __VA_ARGS__)
#define ListAppInstanceAdminsCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::ListAppInstanceAdmins, REQUEST)

#define ListAppInstanceUserEndpointsAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::ListAppInstanceUserEndpoints, __VA_ARGS__)
#define ListAppInstanceUserEndpointsCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::ListAppInstanceUserEndpoints, REQUEST)

#define ListAppInstanceUsersAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::ListAppInstanceUsers, __VA_ARGS__)
#define ListAppInstanceUsersCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::ListAppInstanceUsers, REQUEST)

#define ListAppInstancesAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::ListAppInstances, __VA_ARGS__)
#define ListAppInstancesCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::ListAppInstances, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::ListTagsForResource, REQUEST)

#define PutAppInstanceRetentionSettingsAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::PutAppInstanceRetentionSettings, __VA_ARGS__)
#define PutAppInstanceRetentionSettingsCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::PutAppInstanceRetentionSettings, REQUEST)

#define RegisterAppInstanceUserEndpointAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::RegisterAppInstanceUserEndpoint, __VA_ARGS__)
#define RegisterAppInstanceUserEndpointCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::RegisterAppInstanceUserEndpoint, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::UntagResource, REQUEST)

#define UpdateAppInstanceAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::UpdateAppInstance, __VA_ARGS__)
#define UpdateAppInstanceCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::UpdateAppInstance, REQUEST)

#define UpdateAppInstanceUserAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::UpdateAppInstanceUser, __VA_ARGS__)
#define UpdateAppInstanceUserCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::UpdateAppInstanceUser, REQUEST)

#define UpdateAppInstanceUserEndpointAsync(...)  SubmitAsync(&ChimeSDKIdentityClient::UpdateAppInstanceUserEndpoint, __VA_ARGS__)
#define UpdateAppInstanceUserEndpointCallable(REQUEST)  SubmitCallable(&ChimeSDKIdentityClient::UpdateAppInstanceUserEndpoint, REQUEST)

