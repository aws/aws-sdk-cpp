/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateEnvironmentEC2Async(...)  SubmitAsync(&Cloud9Client::CreateEnvironmentEC2, __VA_ARGS__)
#define CreateEnvironmentEC2Callable(REQUEST)  SubmitCallable(&Cloud9Client::CreateEnvironmentEC2, REQUEST)

#define CreateEnvironmentMembershipAsync(...)  SubmitAsync(&Cloud9Client::CreateEnvironmentMembership, __VA_ARGS__)
#define CreateEnvironmentMembershipCallable(REQUEST)  SubmitCallable(&Cloud9Client::CreateEnvironmentMembership, REQUEST)

#define DeleteEnvironmentAsync(...)  SubmitAsync(&Cloud9Client::DeleteEnvironment, __VA_ARGS__)
#define DeleteEnvironmentCallable(REQUEST)  SubmitCallable(&Cloud9Client::DeleteEnvironment, REQUEST)

#define DeleteEnvironmentMembershipAsync(...)  SubmitAsync(&Cloud9Client::DeleteEnvironmentMembership, __VA_ARGS__)
#define DeleteEnvironmentMembershipCallable(REQUEST)  SubmitCallable(&Cloud9Client::DeleteEnvironmentMembership, REQUEST)

#define DescribeEnvironmentMembershipsAsync(...)  SubmitAsync(&Cloud9Client::DescribeEnvironmentMemberships, __VA_ARGS__)
#define DescribeEnvironmentMembershipsCallable(REQUEST)  SubmitCallable(&Cloud9Client::DescribeEnvironmentMemberships, REQUEST)

#define DescribeEnvironmentStatusAsync(...)  SubmitAsync(&Cloud9Client::DescribeEnvironmentStatus, __VA_ARGS__)
#define DescribeEnvironmentStatusCallable(REQUEST)  SubmitCallable(&Cloud9Client::DescribeEnvironmentStatus, REQUEST)

#define DescribeEnvironmentsAsync(...)  SubmitAsync(&Cloud9Client::DescribeEnvironments, __VA_ARGS__)
#define DescribeEnvironmentsCallable(REQUEST)  SubmitCallable(&Cloud9Client::DescribeEnvironments, REQUEST)

#define ListEnvironmentsAsync(...)  SubmitAsync(&Cloud9Client::ListEnvironments, __VA_ARGS__)
#define ListEnvironmentsCallable(REQUEST)  SubmitCallable(&Cloud9Client::ListEnvironments, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&Cloud9Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&Cloud9Client::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&Cloud9Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&Cloud9Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&Cloud9Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&Cloud9Client::UntagResource, REQUEST)

#define UpdateEnvironmentAsync(...)  SubmitAsync(&Cloud9Client::UpdateEnvironment, __VA_ARGS__)
#define UpdateEnvironmentCallable(REQUEST)  SubmitCallable(&Cloud9Client::UpdateEnvironment, REQUEST)

#define UpdateEnvironmentMembershipAsync(...)  SubmitAsync(&Cloud9Client::UpdateEnvironmentMembership, __VA_ARGS__)
#define UpdateEnvironmentMembershipCallable(REQUEST)  SubmitCallable(&Cloud9Client::UpdateEnvironmentMembership, REQUEST)

