/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateFirewallPolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::AssociateFirewallPolicy, __VA_ARGS__)
#define AssociateFirewallPolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::AssociateFirewallPolicy, REQUEST)

#define AssociateSubnetsAsync(...)  SubmitAsync(&NetworkFirewallClient::AssociateSubnets, __VA_ARGS__)
#define AssociateSubnetsCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::AssociateSubnets, REQUEST)

#define CreateFirewallAsync(...)  SubmitAsync(&NetworkFirewallClient::CreateFirewall, __VA_ARGS__)
#define CreateFirewallCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::CreateFirewall, REQUEST)

#define CreateFirewallPolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::CreateFirewallPolicy, __VA_ARGS__)
#define CreateFirewallPolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::CreateFirewallPolicy, REQUEST)

#define CreateRuleGroupAsync(...)  SubmitAsync(&NetworkFirewallClient::CreateRuleGroup, __VA_ARGS__)
#define CreateRuleGroupCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::CreateRuleGroup, REQUEST)

#define DeleteFirewallAsync(...)  SubmitAsync(&NetworkFirewallClient::DeleteFirewall, __VA_ARGS__)
#define DeleteFirewallCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DeleteFirewall, REQUEST)

#define DeleteFirewallPolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::DeleteFirewallPolicy, __VA_ARGS__)
#define DeleteFirewallPolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DeleteFirewallPolicy, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DeleteResourcePolicy, REQUEST)

#define DeleteRuleGroupAsync(...)  SubmitAsync(&NetworkFirewallClient::DeleteRuleGroup, __VA_ARGS__)
#define DeleteRuleGroupCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DeleteRuleGroup, REQUEST)

#define DescribeFirewallAsync(...)  SubmitAsync(&NetworkFirewallClient::DescribeFirewall, __VA_ARGS__)
#define DescribeFirewallCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DescribeFirewall, REQUEST)

#define DescribeFirewallPolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::DescribeFirewallPolicy, __VA_ARGS__)
#define DescribeFirewallPolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DescribeFirewallPolicy, REQUEST)

#define DescribeLoggingConfigurationAsync(...)  SubmitAsync(&NetworkFirewallClient::DescribeLoggingConfiguration, __VA_ARGS__)
#define DescribeLoggingConfigurationCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DescribeLoggingConfiguration, REQUEST)

#define DescribeResourcePolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::DescribeResourcePolicy, __VA_ARGS__)
#define DescribeResourcePolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DescribeResourcePolicy, REQUEST)

#define DescribeRuleGroupAsync(...)  SubmitAsync(&NetworkFirewallClient::DescribeRuleGroup, __VA_ARGS__)
#define DescribeRuleGroupCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DescribeRuleGroup, REQUEST)

#define DescribeRuleGroupMetadataAsync(...)  SubmitAsync(&NetworkFirewallClient::DescribeRuleGroupMetadata, __VA_ARGS__)
#define DescribeRuleGroupMetadataCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DescribeRuleGroupMetadata, REQUEST)

#define DisassociateSubnetsAsync(...)  SubmitAsync(&NetworkFirewallClient::DisassociateSubnets, __VA_ARGS__)
#define DisassociateSubnetsCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::DisassociateSubnets, REQUEST)

#define ListFirewallPoliciesAsync(...)  SubmitAsync(&NetworkFirewallClient::ListFirewallPolicies, __VA_ARGS__)
#define ListFirewallPoliciesCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::ListFirewallPolicies, REQUEST)

#define ListFirewallsAsync(...)  SubmitAsync(&NetworkFirewallClient::ListFirewalls, __VA_ARGS__)
#define ListFirewallsCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::ListFirewalls, REQUEST)

#define ListRuleGroupsAsync(...)  SubmitAsync(&NetworkFirewallClient::ListRuleGroups, __VA_ARGS__)
#define ListRuleGroupsCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::ListRuleGroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&NetworkFirewallClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::ListTagsForResource, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::PutResourcePolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&NetworkFirewallClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&NetworkFirewallClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UntagResource, REQUEST)

#define UpdateFirewallDeleteProtectionAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateFirewallDeleteProtection, __VA_ARGS__)
#define UpdateFirewallDeleteProtectionCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateFirewallDeleteProtection, REQUEST)

#define UpdateFirewallDescriptionAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateFirewallDescription, __VA_ARGS__)
#define UpdateFirewallDescriptionCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateFirewallDescription, REQUEST)

#define UpdateFirewallEncryptionConfigurationAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateFirewallEncryptionConfiguration, __VA_ARGS__)
#define UpdateFirewallEncryptionConfigurationCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateFirewallEncryptionConfiguration, REQUEST)

#define UpdateFirewallPolicyAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateFirewallPolicy, __VA_ARGS__)
#define UpdateFirewallPolicyCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateFirewallPolicy, REQUEST)

#define UpdateFirewallPolicyChangeProtectionAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateFirewallPolicyChangeProtection, __VA_ARGS__)
#define UpdateFirewallPolicyChangeProtectionCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateFirewallPolicyChangeProtection, REQUEST)

#define UpdateLoggingConfigurationAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateLoggingConfiguration, __VA_ARGS__)
#define UpdateLoggingConfigurationCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateLoggingConfiguration, REQUEST)

#define UpdateRuleGroupAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateRuleGroup, __VA_ARGS__)
#define UpdateRuleGroupCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateRuleGroup, REQUEST)

#define UpdateSubnetChangeProtectionAsync(...)  SubmitAsync(&NetworkFirewallClient::UpdateSubnetChangeProtection, __VA_ARGS__)
#define UpdateSubnetChangeProtectionCallable(REQUEST)  SubmitCallable(&NetworkFirewallClient::UpdateSubnetChangeProtection, REQUEST)

