/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateGroupAsync(...)  SubmitAsync(&IdentityStoreClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::CreateGroup, REQUEST)

#define CreateGroupMembershipAsync(...)  SubmitAsync(&IdentityStoreClient::CreateGroupMembership, __VA_ARGS__)
#define CreateGroupMembershipCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::CreateGroupMembership, REQUEST)

#define CreateUserAsync(...)  SubmitAsync(&IdentityStoreClient::CreateUser, __VA_ARGS__)
#define CreateUserCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::CreateUser, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&IdentityStoreClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::DeleteGroup, REQUEST)

#define DeleteGroupMembershipAsync(...)  SubmitAsync(&IdentityStoreClient::DeleteGroupMembership, __VA_ARGS__)
#define DeleteGroupMembershipCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::DeleteGroupMembership, REQUEST)

#define DeleteUserAsync(...)  SubmitAsync(&IdentityStoreClient::DeleteUser, __VA_ARGS__)
#define DeleteUserCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::DeleteUser, REQUEST)

#define DescribeGroupAsync(...)  SubmitAsync(&IdentityStoreClient::DescribeGroup, __VA_ARGS__)
#define DescribeGroupCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::DescribeGroup, REQUEST)

#define DescribeGroupMembershipAsync(...)  SubmitAsync(&IdentityStoreClient::DescribeGroupMembership, __VA_ARGS__)
#define DescribeGroupMembershipCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::DescribeGroupMembership, REQUEST)

#define DescribeUserAsync(...)  SubmitAsync(&IdentityStoreClient::DescribeUser, __VA_ARGS__)
#define DescribeUserCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::DescribeUser, REQUEST)

#define GetGroupIdAsync(...)  SubmitAsync(&IdentityStoreClient::GetGroupId, __VA_ARGS__)
#define GetGroupIdCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::GetGroupId, REQUEST)

#define GetGroupMembershipIdAsync(...)  SubmitAsync(&IdentityStoreClient::GetGroupMembershipId, __VA_ARGS__)
#define GetGroupMembershipIdCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::GetGroupMembershipId, REQUEST)

#define GetUserIdAsync(...)  SubmitAsync(&IdentityStoreClient::GetUserId, __VA_ARGS__)
#define GetUserIdCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::GetUserId, REQUEST)

#define IsMemberInGroupsAsync(...)  SubmitAsync(&IdentityStoreClient::IsMemberInGroups, __VA_ARGS__)
#define IsMemberInGroupsCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::IsMemberInGroups, REQUEST)

#define ListGroupMembershipsAsync(...)  SubmitAsync(&IdentityStoreClient::ListGroupMemberships, __VA_ARGS__)
#define ListGroupMembershipsCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::ListGroupMemberships, REQUEST)

#define ListGroupMembershipsForMemberAsync(...)  SubmitAsync(&IdentityStoreClient::ListGroupMembershipsForMember, __VA_ARGS__)
#define ListGroupMembershipsForMemberCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::ListGroupMembershipsForMember, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&IdentityStoreClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::ListGroups, REQUEST)

#define ListUsersAsync(...)  SubmitAsync(&IdentityStoreClient::ListUsers, __VA_ARGS__)
#define ListUsersCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::ListUsers, REQUEST)

#define UpdateGroupAsync(...)  SubmitAsync(&IdentityStoreClient::UpdateGroup, __VA_ARGS__)
#define UpdateGroupCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::UpdateGroup, REQUEST)

#define UpdateUserAsync(...)  SubmitAsync(&IdentityStoreClient::UpdateUser, __VA_ARGS__)
#define UpdateUserCallable(REQUEST)  SubmitCallable(&IdentityStoreClient::UpdateUser, REQUEST)

