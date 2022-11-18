/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateRuleAsync(...)  SubmitAsync(&RecycleBinClient::CreateRule, __VA_ARGS__)
#define CreateRuleCallable(REQUEST)  SubmitCallable(&RecycleBinClient::CreateRule, REQUEST)

#define DeleteRuleAsync(...)  SubmitAsync(&RecycleBinClient::DeleteRule, __VA_ARGS__)
#define DeleteRuleCallable(REQUEST)  SubmitCallable(&RecycleBinClient::DeleteRule, REQUEST)

#define GetRuleAsync(...)  SubmitAsync(&RecycleBinClient::GetRule, __VA_ARGS__)
#define GetRuleCallable(REQUEST)  SubmitCallable(&RecycleBinClient::GetRule, REQUEST)

#define ListRulesAsync(...)  SubmitAsync(&RecycleBinClient::ListRules, __VA_ARGS__)
#define ListRulesCallable(REQUEST)  SubmitCallable(&RecycleBinClient::ListRules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&RecycleBinClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&RecycleBinClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&RecycleBinClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&RecycleBinClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&RecycleBinClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&RecycleBinClient::UntagResource, REQUEST)

#define UpdateRuleAsync(...)  SubmitAsync(&RecycleBinClient::UpdateRule, __VA_ARGS__)
#define UpdateRuleCallable(REQUEST)  SubmitCallable(&RecycleBinClient::UpdateRule, REQUEST)

