/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddListenerCertificatesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::AddListenerCertificates, __VA_ARGS__)
#define AddListenerCertificatesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::AddListenerCertificates, REQUEST)

#define AddTagsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::AddTags, REQUEST)

#define CreateListenerAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::CreateListener, __VA_ARGS__)
#define CreateListenerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::CreateListener, REQUEST)

#define CreateLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::CreateLoadBalancer, __VA_ARGS__)
#define CreateLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::CreateLoadBalancer, REQUEST)

#define CreateRuleAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::CreateRule, __VA_ARGS__)
#define CreateRuleCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::CreateRule, REQUEST)

#define CreateTargetGroupAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::CreateTargetGroup, __VA_ARGS__)
#define CreateTargetGroupCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::CreateTargetGroup, REQUEST)

#define DeleteListenerAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DeleteListener, __VA_ARGS__)
#define DeleteListenerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DeleteListener, REQUEST)

#define DeleteLoadBalancerAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DeleteLoadBalancer, __VA_ARGS__)
#define DeleteLoadBalancerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DeleteLoadBalancer, REQUEST)

#define DeleteRuleAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DeleteRule, __VA_ARGS__)
#define DeleteRuleCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DeleteRule, REQUEST)

#define DeleteTargetGroupAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DeleteTargetGroup, __VA_ARGS__)
#define DeleteTargetGroupCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DeleteTargetGroup, REQUEST)

#define DeregisterTargetsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DeregisterTargets, __VA_ARGS__)
#define DeregisterTargetsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DeregisterTargets, REQUEST)

#define DescribeAccountLimitsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeAccountLimits, __VA_ARGS__)
#define DescribeAccountLimitsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeAccountLimits, REQUEST)

#define DescribeListenerCertificatesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeListenerCertificates, __VA_ARGS__)
#define DescribeListenerCertificatesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeListenerCertificates, REQUEST)

#define DescribeListenersAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeListeners, __VA_ARGS__)
#define DescribeListenersCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeListeners, REQUEST)

#define DescribeLoadBalancerAttributesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes, __VA_ARGS__)
#define DescribeLoadBalancerAttributesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes, REQUEST)

#define DescribeLoadBalancersAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeLoadBalancers, __VA_ARGS__)
#define DescribeLoadBalancersCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeLoadBalancers, REQUEST)

#define DescribeRulesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeRules, __VA_ARGS__)
#define DescribeRulesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeRules, REQUEST)

#define DescribeSSLPoliciesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeSSLPolicies, __VA_ARGS__)
#define DescribeSSLPoliciesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeSSLPolicies, REQUEST)

#define DescribeTagsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTags, __VA_ARGS__)
#define DescribeTagsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTags, REQUEST)

#define DescribeTargetGroupAttributesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes, __VA_ARGS__)
#define DescribeTargetGroupAttributesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes, REQUEST)

#define DescribeTargetGroupsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTargetGroups, __VA_ARGS__)
#define DescribeTargetGroupsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTargetGroups, REQUEST)

#define DescribeTargetHealthAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::DescribeTargetHealth, __VA_ARGS__)
#define DescribeTargetHealthCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::DescribeTargetHealth, REQUEST)

#define ModifyListenerAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::ModifyListener, __VA_ARGS__)
#define ModifyListenerCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::ModifyListener, REQUEST)

#define ModifyLoadBalancerAttributesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes, __VA_ARGS__)
#define ModifyLoadBalancerAttributesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes, REQUEST)

#define ModifyRuleAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::ModifyRule, __VA_ARGS__)
#define ModifyRuleCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::ModifyRule, REQUEST)

#define ModifyTargetGroupAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::ModifyTargetGroup, __VA_ARGS__)
#define ModifyTargetGroupCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::ModifyTargetGroup, REQUEST)

#define ModifyTargetGroupAttributesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes, __VA_ARGS__)
#define ModifyTargetGroupAttributesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes, REQUEST)

#define RegisterTargetsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::RegisterTargets, __VA_ARGS__)
#define RegisterTargetsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::RegisterTargets, REQUEST)

#define RemoveListenerCertificatesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::RemoveListenerCertificates, __VA_ARGS__)
#define RemoveListenerCertificatesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::RemoveListenerCertificates, REQUEST)

#define RemoveTagsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::RemoveTags, __VA_ARGS__)
#define RemoveTagsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::RemoveTags, REQUEST)

#define SetIpAddressTypeAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::SetIpAddressType, __VA_ARGS__)
#define SetIpAddressTypeCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::SetIpAddressType, REQUEST)

#define SetRulePrioritiesAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::SetRulePriorities, __VA_ARGS__)
#define SetRulePrioritiesCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::SetRulePriorities, REQUEST)

#define SetSecurityGroupsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::SetSecurityGroups, __VA_ARGS__)
#define SetSecurityGroupsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::SetSecurityGroups, REQUEST)

#define SetSubnetsAsync(...)  SubmitAsync(&ElasticLoadBalancingv2Client::SetSubnets, __VA_ARGS__)
#define SetSubnetsCallable(REQUEST)  SubmitCallable(&ElasticLoadBalancingv2Client::SetSubnets, REQUEST)

