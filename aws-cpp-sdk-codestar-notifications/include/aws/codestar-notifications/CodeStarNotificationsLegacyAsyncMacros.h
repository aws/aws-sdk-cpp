/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateNotificationRuleAsync(...)  SubmitAsync(&CodeStarNotificationsClient::CreateNotificationRule, __VA_ARGS__)
#define CreateNotificationRuleCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::CreateNotificationRule, REQUEST)

#define DeleteNotificationRuleAsync(...)  SubmitAsync(&CodeStarNotificationsClient::DeleteNotificationRule, __VA_ARGS__)
#define DeleteNotificationRuleCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::DeleteNotificationRule, REQUEST)

#define DeleteTargetAsync(...)  SubmitAsync(&CodeStarNotificationsClient::DeleteTarget, __VA_ARGS__)
#define DeleteTargetCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::DeleteTarget, REQUEST)

#define DescribeNotificationRuleAsync(...)  SubmitAsync(&CodeStarNotificationsClient::DescribeNotificationRule, __VA_ARGS__)
#define DescribeNotificationRuleCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::DescribeNotificationRule, REQUEST)

#define ListEventTypesAsync(...)  SubmitAsync(&CodeStarNotificationsClient::ListEventTypes, __VA_ARGS__)
#define ListEventTypesCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::ListEventTypes, REQUEST)

#define ListNotificationRulesAsync(...)  SubmitAsync(&CodeStarNotificationsClient::ListNotificationRules, __VA_ARGS__)
#define ListNotificationRulesCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::ListNotificationRules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CodeStarNotificationsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::ListTagsForResource, REQUEST)

#define ListTargetsAsync(...)  SubmitAsync(&CodeStarNotificationsClient::ListTargets, __VA_ARGS__)
#define ListTargetsCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::ListTargets, REQUEST)

#define SubscribeAsync(...)  SubmitAsync(&CodeStarNotificationsClient::Subscribe, __VA_ARGS__)
#define SubscribeCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::Subscribe, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CodeStarNotificationsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::TagResource, REQUEST)

#define UnsubscribeAsync(...)  SubmitAsync(&CodeStarNotificationsClient::Unsubscribe, __VA_ARGS__)
#define UnsubscribeCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::Unsubscribe, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CodeStarNotificationsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::UntagResource, REQUEST)

#define UpdateNotificationRuleAsync(...)  SubmitAsync(&CodeStarNotificationsClient::UpdateNotificationRule, __VA_ARGS__)
#define UpdateNotificationRuleCallable(REQUEST)  SubmitCallable(&CodeStarNotificationsClient::UpdateNotificationRule, REQUEST)

