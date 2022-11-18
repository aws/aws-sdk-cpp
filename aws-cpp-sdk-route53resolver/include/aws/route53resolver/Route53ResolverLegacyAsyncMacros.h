/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateFirewallRuleGroupAsync(...)  SubmitAsync(&Route53ResolverClient::AssociateFirewallRuleGroup, __VA_ARGS__)
#define AssociateFirewallRuleGroupCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::AssociateFirewallRuleGroup, REQUEST)

#define AssociateResolverEndpointIpAddressAsync(...)  SubmitAsync(&Route53ResolverClient::AssociateResolverEndpointIpAddress, __VA_ARGS__)
#define AssociateResolverEndpointIpAddressCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::AssociateResolverEndpointIpAddress, REQUEST)

#define AssociateResolverQueryLogConfigAsync(...)  SubmitAsync(&Route53ResolverClient::AssociateResolverQueryLogConfig, __VA_ARGS__)
#define AssociateResolverQueryLogConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::AssociateResolverQueryLogConfig, REQUEST)

#define AssociateResolverRuleAsync(...)  SubmitAsync(&Route53ResolverClient::AssociateResolverRule, __VA_ARGS__)
#define AssociateResolverRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::AssociateResolverRule, REQUEST)

#define CreateFirewallDomainListAsync(...)  SubmitAsync(&Route53ResolverClient::CreateFirewallDomainList, __VA_ARGS__)
#define CreateFirewallDomainListCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::CreateFirewallDomainList, REQUEST)

#define CreateFirewallRuleAsync(...)  SubmitAsync(&Route53ResolverClient::CreateFirewallRule, __VA_ARGS__)
#define CreateFirewallRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::CreateFirewallRule, REQUEST)

#define CreateFirewallRuleGroupAsync(...)  SubmitAsync(&Route53ResolverClient::CreateFirewallRuleGroup, __VA_ARGS__)
#define CreateFirewallRuleGroupCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::CreateFirewallRuleGroup, REQUEST)

#define CreateResolverEndpointAsync(...)  SubmitAsync(&Route53ResolverClient::CreateResolverEndpoint, __VA_ARGS__)
#define CreateResolverEndpointCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::CreateResolverEndpoint, REQUEST)

#define CreateResolverQueryLogConfigAsync(...)  SubmitAsync(&Route53ResolverClient::CreateResolverQueryLogConfig, __VA_ARGS__)
#define CreateResolverQueryLogConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::CreateResolverQueryLogConfig, REQUEST)

#define CreateResolverRuleAsync(...)  SubmitAsync(&Route53ResolverClient::CreateResolverRule, __VA_ARGS__)
#define CreateResolverRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::CreateResolverRule, REQUEST)

#define DeleteFirewallDomainListAsync(...)  SubmitAsync(&Route53ResolverClient::DeleteFirewallDomainList, __VA_ARGS__)
#define DeleteFirewallDomainListCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DeleteFirewallDomainList, REQUEST)

#define DeleteFirewallRuleAsync(...)  SubmitAsync(&Route53ResolverClient::DeleteFirewallRule, __VA_ARGS__)
#define DeleteFirewallRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DeleteFirewallRule, REQUEST)

#define DeleteFirewallRuleGroupAsync(...)  SubmitAsync(&Route53ResolverClient::DeleteFirewallRuleGroup, __VA_ARGS__)
#define DeleteFirewallRuleGroupCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DeleteFirewallRuleGroup, REQUEST)

#define DeleteResolverEndpointAsync(...)  SubmitAsync(&Route53ResolverClient::DeleteResolverEndpoint, __VA_ARGS__)
#define DeleteResolverEndpointCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DeleteResolverEndpoint, REQUEST)

#define DeleteResolverQueryLogConfigAsync(...)  SubmitAsync(&Route53ResolverClient::DeleteResolverQueryLogConfig, __VA_ARGS__)
#define DeleteResolverQueryLogConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DeleteResolverQueryLogConfig, REQUEST)

#define DeleteResolverRuleAsync(...)  SubmitAsync(&Route53ResolverClient::DeleteResolverRule, __VA_ARGS__)
#define DeleteResolverRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DeleteResolverRule, REQUEST)

#define DisassociateFirewallRuleGroupAsync(...)  SubmitAsync(&Route53ResolverClient::DisassociateFirewallRuleGroup, __VA_ARGS__)
#define DisassociateFirewallRuleGroupCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DisassociateFirewallRuleGroup, REQUEST)

#define DisassociateResolverEndpointIpAddressAsync(...)  SubmitAsync(&Route53ResolverClient::DisassociateResolverEndpointIpAddress, __VA_ARGS__)
#define DisassociateResolverEndpointIpAddressCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DisassociateResolverEndpointIpAddress, REQUEST)

#define DisassociateResolverQueryLogConfigAsync(...)  SubmitAsync(&Route53ResolverClient::DisassociateResolverQueryLogConfig, __VA_ARGS__)
#define DisassociateResolverQueryLogConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DisassociateResolverQueryLogConfig, REQUEST)

#define DisassociateResolverRuleAsync(...)  SubmitAsync(&Route53ResolverClient::DisassociateResolverRule, __VA_ARGS__)
#define DisassociateResolverRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::DisassociateResolverRule, REQUEST)

#define GetFirewallConfigAsync(...)  SubmitAsync(&Route53ResolverClient::GetFirewallConfig, __VA_ARGS__)
#define GetFirewallConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetFirewallConfig, REQUEST)

#define GetFirewallDomainListAsync(...)  SubmitAsync(&Route53ResolverClient::GetFirewallDomainList, __VA_ARGS__)
#define GetFirewallDomainListCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetFirewallDomainList, REQUEST)

#define GetFirewallRuleGroupAsync(...)  SubmitAsync(&Route53ResolverClient::GetFirewallRuleGroup, __VA_ARGS__)
#define GetFirewallRuleGroupCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetFirewallRuleGroup, REQUEST)

#define GetFirewallRuleGroupAssociationAsync(...)  SubmitAsync(&Route53ResolverClient::GetFirewallRuleGroupAssociation, __VA_ARGS__)
#define GetFirewallRuleGroupAssociationCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetFirewallRuleGroupAssociation, REQUEST)

#define GetFirewallRuleGroupPolicyAsync(...)  SubmitAsync(&Route53ResolverClient::GetFirewallRuleGroupPolicy, __VA_ARGS__)
#define GetFirewallRuleGroupPolicyCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetFirewallRuleGroupPolicy, REQUEST)

#define GetResolverConfigAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverConfig, __VA_ARGS__)
#define GetResolverConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverConfig, REQUEST)

#define GetResolverDnssecConfigAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverDnssecConfig, __VA_ARGS__)
#define GetResolverDnssecConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverDnssecConfig, REQUEST)

#define GetResolverEndpointAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverEndpoint, __VA_ARGS__)
#define GetResolverEndpointCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverEndpoint, REQUEST)

#define GetResolverQueryLogConfigAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverQueryLogConfig, __VA_ARGS__)
#define GetResolverQueryLogConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverQueryLogConfig, REQUEST)

#define GetResolverQueryLogConfigAssociationAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverQueryLogConfigAssociation, __VA_ARGS__)
#define GetResolverQueryLogConfigAssociationCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverQueryLogConfigAssociation, REQUEST)

#define GetResolverQueryLogConfigPolicyAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverQueryLogConfigPolicy, __VA_ARGS__)
#define GetResolverQueryLogConfigPolicyCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverQueryLogConfigPolicy, REQUEST)

#define GetResolverRuleAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverRule, __VA_ARGS__)
#define GetResolverRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverRule, REQUEST)

#define GetResolverRuleAssociationAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverRuleAssociation, __VA_ARGS__)
#define GetResolverRuleAssociationCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverRuleAssociation, REQUEST)

#define GetResolverRulePolicyAsync(...)  SubmitAsync(&Route53ResolverClient::GetResolverRulePolicy, __VA_ARGS__)
#define GetResolverRulePolicyCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::GetResolverRulePolicy, REQUEST)

#define ImportFirewallDomainsAsync(...)  SubmitAsync(&Route53ResolverClient::ImportFirewallDomains, __VA_ARGS__)
#define ImportFirewallDomainsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ImportFirewallDomains, REQUEST)

#define ListFirewallConfigsAsync(...)  SubmitAsync(&Route53ResolverClient::ListFirewallConfigs, __VA_ARGS__)
#define ListFirewallConfigsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListFirewallConfigs, REQUEST)

#define ListFirewallDomainListsAsync(...)  SubmitAsync(&Route53ResolverClient::ListFirewallDomainLists, __VA_ARGS__)
#define ListFirewallDomainListsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListFirewallDomainLists, REQUEST)

#define ListFirewallDomainsAsync(...)  SubmitAsync(&Route53ResolverClient::ListFirewallDomains, __VA_ARGS__)
#define ListFirewallDomainsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListFirewallDomains, REQUEST)

#define ListFirewallRuleGroupAssociationsAsync(...)  SubmitAsync(&Route53ResolverClient::ListFirewallRuleGroupAssociations, __VA_ARGS__)
#define ListFirewallRuleGroupAssociationsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListFirewallRuleGroupAssociations, REQUEST)

#define ListFirewallRuleGroupsAsync(...)  SubmitAsync(&Route53ResolverClient::ListFirewallRuleGroups, __VA_ARGS__)
#define ListFirewallRuleGroupsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListFirewallRuleGroups, REQUEST)

#define ListFirewallRulesAsync(...)  SubmitAsync(&Route53ResolverClient::ListFirewallRules, __VA_ARGS__)
#define ListFirewallRulesCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListFirewallRules, REQUEST)

#define ListResolverConfigsAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverConfigs, __VA_ARGS__)
#define ListResolverConfigsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverConfigs, REQUEST)

#define ListResolverDnssecConfigsAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverDnssecConfigs, __VA_ARGS__)
#define ListResolverDnssecConfigsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverDnssecConfigs, REQUEST)

#define ListResolverEndpointIpAddressesAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverEndpointIpAddresses, __VA_ARGS__)
#define ListResolverEndpointIpAddressesCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverEndpointIpAddresses, REQUEST)

#define ListResolverEndpointsAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverEndpoints, __VA_ARGS__)
#define ListResolverEndpointsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverEndpoints, REQUEST)

#define ListResolverQueryLogConfigAssociationsAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverQueryLogConfigAssociations, __VA_ARGS__)
#define ListResolverQueryLogConfigAssociationsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverQueryLogConfigAssociations, REQUEST)

#define ListResolverQueryLogConfigsAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverQueryLogConfigs, __VA_ARGS__)
#define ListResolverQueryLogConfigsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverQueryLogConfigs, REQUEST)

#define ListResolverRuleAssociationsAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverRuleAssociations, __VA_ARGS__)
#define ListResolverRuleAssociationsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverRuleAssociations, REQUEST)

#define ListResolverRulesAsync(...)  SubmitAsync(&Route53ResolverClient::ListResolverRules, __VA_ARGS__)
#define ListResolverRulesCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListResolverRules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&Route53ResolverClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::ListTagsForResource, REQUEST)

#define PutFirewallRuleGroupPolicyAsync(...)  SubmitAsync(&Route53ResolverClient::PutFirewallRuleGroupPolicy, __VA_ARGS__)
#define PutFirewallRuleGroupPolicyCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::PutFirewallRuleGroupPolicy, REQUEST)

#define PutResolverQueryLogConfigPolicyAsync(...)  SubmitAsync(&Route53ResolverClient::PutResolverQueryLogConfigPolicy, __VA_ARGS__)
#define PutResolverQueryLogConfigPolicyCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::PutResolverQueryLogConfigPolicy, REQUEST)

#define PutResolverRulePolicyAsync(...)  SubmitAsync(&Route53ResolverClient::PutResolverRulePolicy, __VA_ARGS__)
#define PutResolverRulePolicyCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::PutResolverRulePolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&Route53ResolverClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&Route53ResolverClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UntagResource, REQUEST)

#define UpdateFirewallConfigAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateFirewallConfig, __VA_ARGS__)
#define UpdateFirewallConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateFirewallConfig, REQUEST)

#define UpdateFirewallDomainsAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateFirewallDomains, __VA_ARGS__)
#define UpdateFirewallDomainsCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateFirewallDomains, REQUEST)

#define UpdateFirewallRuleAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateFirewallRule, __VA_ARGS__)
#define UpdateFirewallRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateFirewallRule, REQUEST)

#define UpdateFirewallRuleGroupAssociationAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateFirewallRuleGroupAssociation, __VA_ARGS__)
#define UpdateFirewallRuleGroupAssociationCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateFirewallRuleGroupAssociation, REQUEST)

#define UpdateResolverConfigAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateResolverConfig, __VA_ARGS__)
#define UpdateResolverConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateResolverConfig, REQUEST)

#define UpdateResolverDnssecConfigAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateResolverDnssecConfig, __VA_ARGS__)
#define UpdateResolverDnssecConfigCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateResolverDnssecConfig, REQUEST)

#define UpdateResolverEndpointAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateResolverEndpoint, __VA_ARGS__)
#define UpdateResolverEndpointCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateResolverEndpoint, REQUEST)

#define UpdateResolverRuleAsync(...)  SubmitAsync(&Route53ResolverClient::UpdateResolverRule, __VA_ARGS__)
#define UpdateResolverRuleCallable(REQUEST)  SubmitCallable(&Route53ResolverClient::UpdateResolverRule, REQUEST)

