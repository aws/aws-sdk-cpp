/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateClusterAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::CreateCluster, __VA_ARGS__)
#define CreateClusterCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::CreateCluster, REQUEST)

#define CreateControlPanelAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::CreateControlPanel, __VA_ARGS__)
#define CreateControlPanelCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::CreateControlPanel, REQUEST)

#define CreateRoutingControlAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::CreateRoutingControl, __VA_ARGS__)
#define CreateRoutingControlCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::CreateRoutingControl, REQUEST)

#define CreateSafetyRuleAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::CreateSafetyRule, __VA_ARGS__)
#define CreateSafetyRuleCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::CreateSafetyRule, REQUEST)

#define DeleteClusterAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DeleteCluster, __VA_ARGS__)
#define DeleteClusterCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DeleteCluster, REQUEST)

#define DeleteControlPanelAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DeleteControlPanel, __VA_ARGS__)
#define DeleteControlPanelCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DeleteControlPanel, REQUEST)

#define DeleteRoutingControlAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DeleteRoutingControl, __VA_ARGS__)
#define DeleteRoutingControlCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DeleteRoutingControl, REQUEST)

#define DeleteSafetyRuleAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DeleteSafetyRule, __VA_ARGS__)
#define DeleteSafetyRuleCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DeleteSafetyRule, REQUEST)

#define DescribeClusterAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DescribeCluster, __VA_ARGS__)
#define DescribeClusterCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DescribeCluster, REQUEST)

#define DescribeControlPanelAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DescribeControlPanel, __VA_ARGS__)
#define DescribeControlPanelCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DescribeControlPanel, REQUEST)

#define DescribeRoutingControlAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DescribeRoutingControl, __VA_ARGS__)
#define DescribeRoutingControlCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DescribeRoutingControl, REQUEST)

#define DescribeSafetyRuleAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::DescribeSafetyRule, __VA_ARGS__)
#define DescribeSafetyRuleCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::DescribeSafetyRule, REQUEST)

#define ListAssociatedRoute53HealthChecksAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::ListAssociatedRoute53HealthChecks, __VA_ARGS__)
#define ListAssociatedRoute53HealthChecksCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::ListAssociatedRoute53HealthChecks, REQUEST)

#define ListClustersAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::ListClusters, __VA_ARGS__)
#define ListClustersCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::ListClusters, REQUEST)

#define ListControlPanelsAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::ListControlPanels, __VA_ARGS__)
#define ListControlPanelsCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::ListControlPanels, REQUEST)

#define ListRoutingControlsAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::ListRoutingControls, __VA_ARGS__)
#define ListRoutingControlsCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::ListRoutingControls, REQUEST)

#define ListSafetyRulesAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::ListSafetyRules, __VA_ARGS__)
#define ListSafetyRulesCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::ListSafetyRules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::UntagResource, REQUEST)

#define UpdateControlPanelAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::UpdateControlPanel, __VA_ARGS__)
#define UpdateControlPanelCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::UpdateControlPanel, REQUEST)

#define UpdateRoutingControlAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::UpdateRoutingControl, __VA_ARGS__)
#define UpdateRoutingControlCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::UpdateRoutingControl, REQUEST)

#define UpdateSafetyRuleAsync(...)  SubmitAsync(&Route53RecoveryControlConfigClient::UpdateSafetyRule, __VA_ARGS__)
#define UpdateSafetyRuleCallable(REQUEST)  SubmitCallable(&Route53RecoveryControlConfigClient::UpdateSafetyRule, REQUEST)

