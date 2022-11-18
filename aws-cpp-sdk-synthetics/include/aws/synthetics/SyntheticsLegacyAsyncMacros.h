/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateResourceAsync(...)  SubmitAsync(&SyntheticsClient::AssociateResource, __VA_ARGS__)
#define AssociateResourceCallable(REQUEST)  SubmitCallable(&SyntheticsClient::AssociateResource, REQUEST)

#define CreateCanaryAsync(...)  SubmitAsync(&SyntheticsClient::CreateCanary, __VA_ARGS__)
#define CreateCanaryCallable(REQUEST)  SubmitCallable(&SyntheticsClient::CreateCanary, REQUEST)

#define CreateGroupAsync(...)  SubmitAsync(&SyntheticsClient::CreateGroup, __VA_ARGS__)
#define CreateGroupCallable(REQUEST)  SubmitCallable(&SyntheticsClient::CreateGroup, REQUEST)

#define DeleteCanaryAsync(...)  SubmitAsync(&SyntheticsClient::DeleteCanary, __VA_ARGS__)
#define DeleteCanaryCallable(REQUEST)  SubmitCallable(&SyntheticsClient::DeleteCanary, REQUEST)

#define DeleteGroupAsync(...)  SubmitAsync(&SyntheticsClient::DeleteGroup, __VA_ARGS__)
#define DeleteGroupCallable(REQUEST)  SubmitCallable(&SyntheticsClient::DeleteGroup, REQUEST)

#define DescribeCanariesAsync(...)  SubmitAsync(&SyntheticsClient::DescribeCanaries, __VA_ARGS__)
#define DescribeCanariesCallable(REQUEST)  SubmitCallable(&SyntheticsClient::DescribeCanaries, REQUEST)

#define DescribeCanariesLastRunAsync(...)  SubmitAsync(&SyntheticsClient::DescribeCanariesLastRun, __VA_ARGS__)
#define DescribeCanariesLastRunCallable(REQUEST)  SubmitCallable(&SyntheticsClient::DescribeCanariesLastRun, REQUEST)

#define DescribeRuntimeVersionsAsync(...)  SubmitAsync(&SyntheticsClient::DescribeRuntimeVersions, __VA_ARGS__)
#define DescribeRuntimeVersionsCallable(REQUEST)  SubmitCallable(&SyntheticsClient::DescribeRuntimeVersions, REQUEST)

#define DisassociateResourceAsync(...)  SubmitAsync(&SyntheticsClient::DisassociateResource, __VA_ARGS__)
#define DisassociateResourceCallable(REQUEST)  SubmitCallable(&SyntheticsClient::DisassociateResource, REQUEST)

#define GetCanaryAsync(...)  SubmitAsync(&SyntheticsClient::GetCanary, __VA_ARGS__)
#define GetCanaryCallable(REQUEST)  SubmitCallable(&SyntheticsClient::GetCanary, REQUEST)

#define GetCanaryRunsAsync(...)  SubmitAsync(&SyntheticsClient::GetCanaryRuns, __VA_ARGS__)
#define GetCanaryRunsCallable(REQUEST)  SubmitCallable(&SyntheticsClient::GetCanaryRuns, REQUEST)

#define GetGroupAsync(...)  SubmitAsync(&SyntheticsClient::GetGroup, __VA_ARGS__)
#define GetGroupCallable(REQUEST)  SubmitCallable(&SyntheticsClient::GetGroup, REQUEST)

#define ListAssociatedGroupsAsync(...)  SubmitAsync(&SyntheticsClient::ListAssociatedGroups, __VA_ARGS__)
#define ListAssociatedGroupsCallable(REQUEST)  SubmitCallable(&SyntheticsClient::ListAssociatedGroups, REQUEST)

#define ListGroupResourcesAsync(...)  SubmitAsync(&SyntheticsClient::ListGroupResources, __VA_ARGS__)
#define ListGroupResourcesCallable(REQUEST)  SubmitCallable(&SyntheticsClient::ListGroupResources, REQUEST)

#define ListGroupsAsync(...)  SubmitAsync(&SyntheticsClient::ListGroups, __VA_ARGS__)
#define ListGroupsCallable(REQUEST)  SubmitCallable(&SyntheticsClient::ListGroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SyntheticsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SyntheticsClient::ListTagsForResource, REQUEST)

#define StartCanaryAsync(...)  SubmitAsync(&SyntheticsClient::StartCanary, __VA_ARGS__)
#define StartCanaryCallable(REQUEST)  SubmitCallable(&SyntheticsClient::StartCanary, REQUEST)

#define StopCanaryAsync(...)  SubmitAsync(&SyntheticsClient::StopCanary, __VA_ARGS__)
#define StopCanaryCallable(REQUEST)  SubmitCallable(&SyntheticsClient::StopCanary, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SyntheticsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SyntheticsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SyntheticsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SyntheticsClient::UntagResource, REQUEST)

#define UpdateCanaryAsync(...)  SubmitAsync(&SyntheticsClient::UpdateCanary, __VA_ARGS__)
#define UpdateCanaryCallable(REQUEST)  SubmitCallable(&SyntheticsClient::UpdateCanary, REQUEST)

