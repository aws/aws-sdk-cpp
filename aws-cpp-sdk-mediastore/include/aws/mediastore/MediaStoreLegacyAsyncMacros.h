/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateContainerAsync(...)  SubmitAsync(&MediaStoreClient::CreateContainer, __VA_ARGS__)
#define CreateContainerCallable(REQUEST)  SubmitCallable(&MediaStoreClient::CreateContainer, REQUEST)

#define DeleteContainerAsync(...)  SubmitAsync(&MediaStoreClient::DeleteContainer, __VA_ARGS__)
#define DeleteContainerCallable(REQUEST)  SubmitCallable(&MediaStoreClient::DeleteContainer, REQUEST)

#define DeleteContainerPolicyAsync(...)  SubmitAsync(&MediaStoreClient::DeleteContainerPolicy, __VA_ARGS__)
#define DeleteContainerPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::DeleteContainerPolicy, REQUEST)

#define DeleteCorsPolicyAsync(...)  SubmitAsync(&MediaStoreClient::DeleteCorsPolicy, __VA_ARGS__)
#define DeleteCorsPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::DeleteCorsPolicy, REQUEST)

#define DeleteLifecyclePolicyAsync(...)  SubmitAsync(&MediaStoreClient::DeleteLifecyclePolicy, __VA_ARGS__)
#define DeleteLifecyclePolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::DeleteLifecyclePolicy, REQUEST)

#define DeleteMetricPolicyAsync(...)  SubmitAsync(&MediaStoreClient::DeleteMetricPolicy, __VA_ARGS__)
#define DeleteMetricPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::DeleteMetricPolicy, REQUEST)

#define DescribeContainerAsync(...)  SubmitAsync(&MediaStoreClient::DescribeContainer, __VA_ARGS__)
#define DescribeContainerCallable(REQUEST)  SubmitCallable(&MediaStoreClient::DescribeContainer, REQUEST)

#define GetContainerPolicyAsync(...)  SubmitAsync(&MediaStoreClient::GetContainerPolicy, __VA_ARGS__)
#define GetContainerPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::GetContainerPolicy, REQUEST)

#define GetCorsPolicyAsync(...)  SubmitAsync(&MediaStoreClient::GetCorsPolicy, __VA_ARGS__)
#define GetCorsPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::GetCorsPolicy, REQUEST)

#define GetLifecyclePolicyAsync(...)  SubmitAsync(&MediaStoreClient::GetLifecyclePolicy, __VA_ARGS__)
#define GetLifecyclePolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::GetLifecyclePolicy, REQUEST)

#define GetMetricPolicyAsync(...)  SubmitAsync(&MediaStoreClient::GetMetricPolicy, __VA_ARGS__)
#define GetMetricPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::GetMetricPolicy, REQUEST)

#define ListContainersAsync(...)  SubmitAsync(&MediaStoreClient::ListContainers, __VA_ARGS__)
#define ListContainersCallable(REQUEST)  SubmitCallable(&MediaStoreClient::ListContainers, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MediaStoreClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MediaStoreClient::ListTagsForResource, REQUEST)

#define PutContainerPolicyAsync(...)  SubmitAsync(&MediaStoreClient::PutContainerPolicy, __VA_ARGS__)
#define PutContainerPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::PutContainerPolicy, REQUEST)

#define PutCorsPolicyAsync(...)  SubmitAsync(&MediaStoreClient::PutCorsPolicy, __VA_ARGS__)
#define PutCorsPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::PutCorsPolicy, REQUEST)

#define PutLifecyclePolicyAsync(...)  SubmitAsync(&MediaStoreClient::PutLifecyclePolicy, __VA_ARGS__)
#define PutLifecyclePolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::PutLifecyclePolicy, REQUEST)

#define PutMetricPolicyAsync(...)  SubmitAsync(&MediaStoreClient::PutMetricPolicy, __VA_ARGS__)
#define PutMetricPolicyCallable(REQUEST)  SubmitCallable(&MediaStoreClient::PutMetricPolicy, REQUEST)

#define StartAccessLoggingAsync(...)  SubmitAsync(&MediaStoreClient::StartAccessLogging, __VA_ARGS__)
#define StartAccessLoggingCallable(REQUEST)  SubmitCallable(&MediaStoreClient::StartAccessLogging, REQUEST)

#define StopAccessLoggingAsync(...)  SubmitAsync(&MediaStoreClient::StopAccessLogging, __VA_ARGS__)
#define StopAccessLoggingCallable(REQUEST)  SubmitCallable(&MediaStoreClient::StopAccessLogging, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MediaStoreClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MediaStoreClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MediaStoreClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MediaStoreClient::UntagResource, REQUEST)

