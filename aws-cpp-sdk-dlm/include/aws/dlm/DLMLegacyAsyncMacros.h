/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateLifecyclePolicyAsync(...)  SubmitAsync(&DLMClient::CreateLifecyclePolicy, __VA_ARGS__)
#define CreateLifecyclePolicyCallable(REQUEST)  SubmitCallable(&DLMClient::CreateLifecyclePolicy, REQUEST)

#define DeleteLifecyclePolicyAsync(...)  SubmitAsync(&DLMClient::DeleteLifecyclePolicy, __VA_ARGS__)
#define DeleteLifecyclePolicyCallable(REQUEST)  SubmitCallable(&DLMClient::DeleteLifecyclePolicy, REQUEST)

#define GetLifecyclePoliciesAsync(...)  SubmitAsync(&DLMClient::GetLifecyclePolicies, __VA_ARGS__)
#define GetLifecyclePoliciesCallable(REQUEST)  SubmitCallable(&DLMClient::GetLifecyclePolicies, REQUEST)

#define GetLifecyclePolicyAsync(...)  SubmitAsync(&DLMClient::GetLifecyclePolicy, __VA_ARGS__)
#define GetLifecyclePolicyCallable(REQUEST)  SubmitCallable(&DLMClient::GetLifecyclePolicy, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&DLMClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&DLMClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&DLMClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&DLMClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&DLMClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&DLMClient::UntagResource, REQUEST)

#define UpdateLifecyclePolicyAsync(...)  SubmitAsync(&DLMClient::UpdateLifecyclePolicy, __VA_ARGS__)
#define UpdateLifecyclePolicyCallable(REQUEST)  SubmitCallable(&DLMClient::UpdateLifecyclePolicy, REQUEST)

