/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateWebACLAsync(...)  SubmitAsync(&WAFV2Client::AssociateWebACL, __VA_ARGS__)
#define AssociateWebACLCallable(REQUEST)  SubmitCallable(&WAFV2Client::AssociateWebACL, REQUEST)

#define CheckCapacityAsync(...)  SubmitAsync(&WAFV2Client::CheckCapacity, __VA_ARGS__)
#define CheckCapacityCallable(REQUEST)  SubmitCallable(&WAFV2Client::CheckCapacity, REQUEST)

#define CreateIPSetAsync(...)  SubmitAsync(&WAFV2Client::CreateIPSet, __VA_ARGS__)
#define CreateIPSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::CreateIPSet, REQUEST)

#define CreateRegexPatternSetAsync(...)  SubmitAsync(&WAFV2Client::CreateRegexPatternSet, __VA_ARGS__)
#define CreateRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::CreateRegexPatternSet, REQUEST)

#define CreateRuleGroupAsync(...)  SubmitAsync(&WAFV2Client::CreateRuleGroup, __VA_ARGS__)
#define CreateRuleGroupCallable(REQUEST)  SubmitCallable(&WAFV2Client::CreateRuleGroup, REQUEST)

#define CreateWebACLAsync(...)  SubmitAsync(&WAFV2Client::CreateWebACL, __VA_ARGS__)
#define CreateWebACLCallable(REQUEST)  SubmitCallable(&WAFV2Client::CreateWebACL, REQUEST)

#define DeleteFirewallManagerRuleGroupsAsync(...)  SubmitAsync(&WAFV2Client::DeleteFirewallManagerRuleGroups, __VA_ARGS__)
#define DeleteFirewallManagerRuleGroupsCallable(REQUEST)  SubmitCallable(&WAFV2Client::DeleteFirewallManagerRuleGroups, REQUEST)

#define DeleteIPSetAsync(...)  SubmitAsync(&WAFV2Client::DeleteIPSet, __VA_ARGS__)
#define DeleteIPSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::DeleteIPSet, REQUEST)

#define DeleteLoggingConfigurationAsync(...)  SubmitAsync(&WAFV2Client::DeleteLoggingConfiguration, __VA_ARGS__)
#define DeleteLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFV2Client::DeleteLoggingConfiguration, REQUEST)

#define DeletePermissionPolicyAsync(...)  SubmitAsync(&WAFV2Client::DeletePermissionPolicy, __VA_ARGS__)
#define DeletePermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFV2Client::DeletePermissionPolicy, REQUEST)

#define DeleteRegexPatternSetAsync(...)  SubmitAsync(&WAFV2Client::DeleteRegexPatternSet, __VA_ARGS__)
#define DeleteRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::DeleteRegexPatternSet, REQUEST)

#define DeleteRuleGroupAsync(...)  SubmitAsync(&WAFV2Client::DeleteRuleGroup, __VA_ARGS__)
#define DeleteRuleGroupCallable(REQUEST)  SubmitCallable(&WAFV2Client::DeleteRuleGroup, REQUEST)

#define DeleteWebACLAsync(...)  SubmitAsync(&WAFV2Client::DeleteWebACL, __VA_ARGS__)
#define DeleteWebACLCallable(REQUEST)  SubmitCallable(&WAFV2Client::DeleteWebACL, REQUEST)

#define DescribeManagedRuleGroupAsync(...)  SubmitAsync(&WAFV2Client::DescribeManagedRuleGroup, __VA_ARGS__)
#define DescribeManagedRuleGroupCallable(REQUEST)  SubmitCallable(&WAFV2Client::DescribeManagedRuleGroup, REQUEST)

#define DisassociateWebACLAsync(...)  SubmitAsync(&WAFV2Client::DisassociateWebACL, __VA_ARGS__)
#define DisassociateWebACLCallable(REQUEST)  SubmitCallable(&WAFV2Client::DisassociateWebACL, REQUEST)

#define GenerateMobileSdkReleaseUrlAsync(...)  SubmitAsync(&WAFV2Client::GenerateMobileSdkReleaseUrl, __VA_ARGS__)
#define GenerateMobileSdkReleaseUrlCallable(REQUEST)  SubmitCallable(&WAFV2Client::GenerateMobileSdkReleaseUrl, REQUEST)

#define GetIPSetAsync(...)  SubmitAsync(&WAFV2Client::GetIPSet, __VA_ARGS__)
#define GetIPSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetIPSet, REQUEST)

#define GetLoggingConfigurationAsync(...)  SubmitAsync(&WAFV2Client::GetLoggingConfiguration, __VA_ARGS__)
#define GetLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetLoggingConfiguration, REQUEST)

#define GetManagedRuleSetAsync(...)  SubmitAsync(&WAFV2Client::GetManagedRuleSet, __VA_ARGS__)
#define GetManagedRuleSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetManagedRuleSet, REQUEST)

#define GetMobileSdkReleaseAsync(...)  SubmitAsync(&WAFV2Client::GetMobileSdkRelease, __VA_ARGS__)
#define GetMobileSdkReleaseCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetMobileSdkRelease, REQUEST)

#define GetPermissionPolicyAsync(...)  SubmitAsync(&WAFV2Client::GetPermissionPolicy, __VA_ARGS__)
#define GetPermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetPermissionPolicy, REQUEST)

#define GetRateBasedStatementManagedKeysAsync(...)  SubmitAsync(&WAFV2Client::GetRateBasedStatementManagedKeys, __VA_ARGS__)
#define GetRateBasedStatementManagedKeysCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetRateBasedStatementManagedKeys, REQUEST)

#define GetRegexPatternSetAsync(...)  SubmitAsync(&WAFV2Client::GetRegexPatternSet, __VA_ARGS__)
#define GetRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetRegexPatternSet, REQUEST)

#define GetRuleGroupAsync(...)  SubmitAsync(&WAFV2Client::GetRuleGroup, __VA_ARGS__)
#define GetRuleGroupCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetRuleGroup, REQUEST)

#define GetSampledRequestsAsync(...)  SubmitAsync(&WAFV2Client::GetSampledRequests, __VA_ARGS__)
#define GetSampledRequestsCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetSampledRequests, REQUEST)

#define GetWebACLAsync(...)  SubmitAsync(&WAFV2Client::GetWebACL, __VA_ARGS__)
#define GetWebACLCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetWebACL, REQUEST)

#define GetWebACLForResourceAsync(...)  SubmitAsync(&WAFV2Client::GetWebACLForResource, __VA_ARGS__)
#define GetWebACLForResourceCallable(REQUEST)  SubmitCallable(&WAFV2Client::GetWebACLForResource, REQUEST)

#define ListAvailableManagedRuleGroupVersionsAsync(...)  SubmitAsync(&WAFV2Client::ListAvailableManagedRuleGroupVersions, __VA_ARGS__)
#define ListAvailableManagedRuleGroupVersionsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListAvailableManagedRuleGroupVersions, REQUEST)

#define ListAvailableManagedRuleGroupsAsync(...)  SubmitAsync(&WAFV2Client::ListAvailableManagedRuleGroups, __VA_ARGS__)
#define ListAvailableManagedRuleGroupsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListAvailableManagedRuleGroups, REQUEST)

#define ListIPSetsAsync(...)  SubmitAsync(&WAFV2Client::ListIPSets, __VA_ARGS__)
#define ListIPSetsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListIPSets, REQUEST)

#define ListLoggingConfigurationsAsync(...)  SubmitAsync(&WAFV2Client::ListLoggingConfigurations, __VA_ARGS__)
#define ListLoggingConfigurationsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListLoggingConfigurations, REQUEST)

#define ListManagedRuleSetsAsync(...)  SubmitAsync(&WAFV2Client::ListManagedRuleSets, __VA_ARGS__)
#define ListManagedRuleSetsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListManagedRuleSets, REQUEST)

#define ListMobileSdkReleasesAsync(...)  SubmitAsync(&WAFV2Client::ListMobileSdkReleases, __VA_ARGS__)
#define ListMobileSdkReleasesCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListMobileSdkReleases, REQUEST)

#define ListRegexPatternSetsAsync(...)  SubmitAsync(&WAFV2Client::ListRegexPatternSets, __VA_ARGS__)
#define ListRegexPatternSetsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListRegexPatternSets, REQUEST)

#define ListResourcesForWebACLAsync(...)  SubmitAsync(&WAFV2Client::ListResourcesForWebACL, __VA_ARGS__)
#define ListResourcesForWebACLCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListResourcesForWebACL, REQUEST)

#define ListRuleGroupsAsync(...)  SubmitAsync(&WAFV2Client::ListRuleGroups, __VA_ARGS__)
#define ListRuleGroupsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListRuleGroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&WAFV2Client::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListTagsForResource, REQUEST)

#define ListWebACLsAsync(...)  SubmitAsync(&WAFV2Client::ListWebACLs, __VA_ARGS__)
#define ListWebACLsCallable(REQUEST)  SubmitCallable(&WAFV2Client::ListWebACLs, REQUEST)

#define PutLoggingConfigurationAsync(...)  SubmitAsync(&WAFV2Client::PutLoggingConfiguration, __VA_ARGS__)
#define PutLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFV2Client::PutLoggingConfiguration, REQUEST)

#define PutManagedRuleSetVersionsAsync(...)  SubmitAsync(&WAFV2Client::PutManagedRuleSetVersions, __VA_ARGS__)
#define PutManagedRuleSetVersionsCallable(REQUEST)  SubmitCallable(&WAFV2Client::PutManagedRuleSetVersions, REQUEST)

#define PutPermissionPolicyAsync(...)  SubmitAsync(&WAFV2Client::PutPermissionPolicy, __VA_ARGS__)
#define PutPermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFV2Client::PutPermissionPolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&WAFV2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&WAFV2Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&WAFV2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&WAFV2Client::UntagResource, REQUEST)

#define UpdateIPSetAsync(...)  SubmitAsync(&WAFV2Client::UpdateIPSet, __VA_ARGS__)
#define UpdateIPSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::UpdateIPSet, REQUEST)

#define UpdateManagedRuleSetVersionExpiryDateAsync(...)  SubmitAsync(&WAFV2Client::UpdateManagedRuleSetVersionExpiryDate, __VA_ARGS__)
#define UpdateManagedRuleSetVersionExpiryDateCallable(REQUEST)  SubmitCallable(&WAFV2Client::UpdateManagedRuleSetVersionExpiryDate, REQUEST)

#define UpdateRegexPatternSetAsync(...)  SubmitAsync(&WAFV2Client::UpdateRegexPatternSet, __VA_ARGS__)
#define UpdateRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFV2Client::UpdateRegexPatternSet, REQUEST)

#define UpdateRuleGroupAsync(...)  SubmitAsync(&WAFV2Client::UpdateRuleGroup, __VA_ARGS__)
#define UpdateRuleGroupCallable(REQUEST)  SubmitCallable(&WAFV2Client::UpdateRuleGroup, REQUEST)

#define UpdateWebACLAsync(...)  SubmitAsync(&WAFV2Client::UpdateWebACL, __VA_ARGS__)
#define UpdateWebACLCallable(REQUEST)  SubmitCallable(&WAFV2Client::UpdateWebACL, REQUEST)

