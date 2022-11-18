/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateTeamMemberAsync(...)  SubmitAsync(&CodeStarClient::AssociateTeamMember, __VA_ARGS__)
#define AssociateTeamMemberCallable(REQUEST)  SubmitCallable(&CodeStarClient::AssociateTeamMember, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&CodeStarClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&CodeStarClient::CreateProject, REQUEST)

#define CreateUserProfileAsync(...)  SubmitAsync(&CodeStarClient::CreateUserProfile, __VA_ARGS__)
#define CreateUserProfileCallable(REQUEST)  SubmitCallable(&CodeStarClient::CreateUserProfile, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&CodeStarClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&CodeStarClient::DeleteProject, REQUEST)

#define DeleteUserProfileAsync(...)  SubmitAsync(&CodeStarClient::DeleteUserProfile, __VA_ARGS__)
#define DeleteUserProfileCallable(REQUEST)  SubmitCallable(&CodeStarClient::DeleteUserProfile, REQUEST)

#define DescribeProjectAsync(...)  SubmitAsync(&CodeStarClient::DescribeProject, __VA_ARGS__)
#define DescribeProjectCallable(REQUEST)  SubmitCallable(&CodeStarClient::DescribeProject, REQUEST)

#define DescribeUserProfileAsync(...)  SubmitAsync(&CodeStarClient::DescribeUserProfile, __VA_ARGS__)
#define DescribeUserProfileCallable(REQUEST)  SubmitCallable(&CodeStarClient::DescribeUserProfile, REQUEST)

#define DisassociateTeamMemberAsync(...)  SubmitAsync(&CodeStarClient::DisassociateTeamMember, __VA_ARGS__)
#define DisassociateTeamMemberCallable(REQUEST)  SubmitCallable(&CodeStarClient::DisassociateTeamMember, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&CodeStarClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&CodeStarClient::ListProjects, REQUEST)

#define ListResourcesAsync(...)  SubmitAsync(&CodeStarClient::ListResources, __VA_ARGS__)
#define ListResourcesCallable(REQUEST)  SubmitCallable(&CodeStarClient::ListResources, REQUEST)

#define ListTagsForProjectAsync(...)  SubmitAsync(&CodeStarClient::ListTagsForProject, __VA_ARGS__)
#define ListTagsForProjectCallable(REQUEST)  SubmitCallable(&CodeStarClient::ListTagsForProject, REQUEST)

#define ListTeamMembersAsync(...)  SubmitAsync(&CodeStarClient::ListTeamMembers, __VA_ARGS__)
#define ListTeamMembersCallable(REQUEST)  SubmitCallable(&CodeStarClient::ListTeamMembers, REQUEST)

#define ListUserProfilesAsync(...)  SubmitAsync(&CodeStarClient::ListUserProfiles, __VA_ARGS__)
#define ListUserProfilesCallable(REQUEST)  SubmitCallable(&CodeStarClient::ListUserProfiles, REQUEST)

#define TagProjectAsync(...)  SubmitAsync(&CodeStarClient::TagProject, __VA_ARGS__)
#define TagProjectCallable(REQUEST)  SubmitCallable(&CodeStarClient::TagProject, REQUEST)

#define UntagProjectAsync(...)  SubmitAsync(&CodeStarClient::UntagProject, __VA_ARGS__)
#define UntagProjectCallable(REQUEST)  SubmitCallable(&CodeStarClient::UntagProject, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&CodeStarClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&CodeStarClient::UpdateProject, REQUEST)

#define UpdateTeamMemberAsync(...)  SubmitAsync(&CodeStarClient::UpdateTeamMember, __VA_ARGS__)
#define UpdateTeamMemberCallable(REQUEST)  SubmitCallable(&CodeStarClient::UpdateTeamMember, REQUEST)

#define UpdateUserProfileAsync(...)  SubmitAsync(&CodeStarClient::UpdateUserProfile, __VA_ARGS__)
#define UpdateUserProfileCallable(REQUEST)  SubmitCallable(&CodeStarClient::UpdateUserProfile, REQUEST)

