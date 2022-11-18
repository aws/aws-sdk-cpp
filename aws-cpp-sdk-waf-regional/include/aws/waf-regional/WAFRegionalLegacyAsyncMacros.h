/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateWebACLAsync(...)  SubmitAsync(&WAFRegionalClient::AssociateWebACL, __VA_ARGS__)
#define AssociateWebACLCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::AssociateWebACL, REQUEST)

#define CreateByteMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateByteMatchSet, __VA_ARGS__)
#define CreateByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateByteMatchSet, REQUEST)

#define CreateGeoMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateGeoMatchSet, __VA_ARGS__)
#define CreateGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateGeoMatchSet, REQUEST)

#define CreateIPSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateIPSet, __VA_ARGS__)
#define CreateIPSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateIPSet, REQUEST)

#define CreateRateBasedRuleAsync(...)  SubmitAsync(&WAFRegionalClient::CreateRateBasedRule, __VA_ARGS__)
#define CreateRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateRateBasedRule, REQUEST)

#define CreateRegexMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateRegexMatchSet, __VA_ARGS__)
#define CreateRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateRegexMatchSet, REQUEST)

#define CreateRegexPatternSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateRegexPatternSet, __VA_ARGS__)
#define CreateRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateRegexPatternSet, REQUEST)

#define CreateRuleAsync(...)  SubmitAsync(&WAFRegionalClient::CreateRule, __VA_ARGS__)
#define CreateRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateRule, REQUEST)

#define CreateRuleGroupAsync(...)  SubmitAsync(&WAFRegionalClient::CreateRuleGroup, __VA_ARGS__)
#define CreateRuleGroupCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateRuleGroup, REQUEST)

#define CreateSizeConstraintSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateSizeConstraintSet, __VA_ARGS__)
#define CreateSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateSizeConstraintSet, REQUEST)

#define CreateSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateSqlInjectionMatchSet, __VA_ARGS__)
#define CreateSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateSqlInjectionMatchSet, REQUEST)

#define CreateWebACLAsync(...)  SubmitAsync(&WAFRegionalClient::CreateWebACL, __VA_ARGS__)
#define CreateWebACLCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateWebACL, REQUEST)

#define CreateWebACLMigrationStackAsync(...)  SubmitAsync(&WAFRegionalClient::CreateWebACLMigrationStack, __VA_ARGS__)
#define CreateWebACLMigrationStackCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateWebACLMigrationStack, REQUEST)

#define CreateXssMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::CreateXssMatchSet, __VA_ARGS__)
#define CreateXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::CreateXssMatchSet, REQUEST)

#define DeleteByteMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteByteMatchSet, __VA_ARGS__)
#define DeleteByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteByteMatchSet, REQUEST)

#define DeleteGeoMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteGeoMatchSet, __VA_ARGS__)
#define DeleteGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteGeoMatchSet, REQUEST)

#define DeleteIPSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteIPSet, __VA_ARGS__)
#define DeleteIPSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteIPSet, REQUEST)

#define DeleteLoggingConfigurationAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteLoggingConfiguration, __VA_ARGS__)
#define DeleteLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteLoggingConfiguration, REQUEST)

#define DeletePermissionPolicyAsync(...)  SubmitAsync(&WAFRegionalClient::DeletePermissionPolicy, __VA_ARGS__)
#define DeletePermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeletePermissionPolicy, REQUEST)

#define DeleteRateBasedRuleAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteRateBasedRule, __VA_ARGS__)
#define DeleteRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteRateBasedRule, REQUEST)

#define DeleteRegexMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteRegexMatchSet, __VA_ARGS__)
#define DeleteRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteRegexMatchSet, REQUEST)

#define DeleteRegexPatternSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteRegexPatternSet, __VA_ARGS__)
#define DeleteRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteRegexPatternSet, REQUEST)

#define DeleteRuleAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteRule, __VA_ARGS__)
#define DeleteRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteRule, REQUEST)

#define DeleteRuleGroupAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteRuleGroup, __VA_ARGS__)
#define DeleteRuleGroupCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteRuleGroup, REQUEST)

#define DeleteSizeConstraintSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteSizeConstraintSet, __VA_ARGS__)
#define DeleteSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteSizeConstraintSet, REQUEST)

#define DeleteSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteSqlInjectionMatchSet, __VA_ARGS__)
#define DeleteSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteSqlInjectionMatchSet, REQUEST)

#define DeleteWebACLAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteWebACL, __VA_ARGS__)
#define DeleteWebACLCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteWebACL, REQUEST)

#define DeleteXssMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::DeleteXssMatchSet, __VA_ARGS__)
#define DeleteXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DeleteXssMatchSet, REQUEST)

#define DisassociateWebACLAsync(...)  SubmitAsync(&WAFRegionalClient::DisassociateWebACL, __VA_ARGS__)
#define DisassociateWebACLCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::DisassociateWebACL, REQUEST)

#define GetByteMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetByteMatchSet, __VA_ARGS__)
#define GetByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetByteMatchSet, REQUEST)

#define GetChangeTokenAsync(...)  SubmitAsync(&WAFRegionalClient::GetChangeToken, __VA_ARGS__)
#define GetChangeTokenCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetChangeToken, REQUEST)

#define GetChangeTokenStatusAsync(...)  SubmitAsync(&WAFRegionalClient::GetChangeTokenStatus, __VA_ARGS__)
#define GetChangeTokenStatusCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetChangeTokenStatus, REQUEST)

#define GetGeoMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetGeoMatchSet, __VA_ARGS__)
#define GetGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetGeoMatchSet, REQUEST)

#define GetIPSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetIPSet, __VA_ARGS__)
#define GetIPSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetIPSet, REQUEST)

#define GetLoggingConfigurationAsync(...)  SubmitAsync(&WAFRegionalClient::GetLoggingConfiguration, __VA_ARGS__)
#define GetLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetLoggingConfiguration, REQUEST)

#define GetPermissionPolicyAsync(...)  SubmitAsync(&WAFRegionalClient::GetPermissionPolicy, __VA_ARGS__)
#define GetPermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetPermissionPolicy, REQUEST)

#define GetRateBasedRuleAsync(...)  SubmitAsync(&WAFRegionalClient::GetRateBasedRule, __VA_ARGS__)
#define GetRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetRateBasedRule, REQUEST)

#define GetRateBasedRuleManagedKeysAsync(...)  SubmitAsync(&WAFRegionalClient::GetRateBasedRuleManagedKeys, __VA_ARGS__)
#define GetRateBasedRuleManagedKeysCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetRateBasedRuleManagedKeys, REQUEST)

#define GetRegexMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetRegexMatchSet, __VA_ARGS__)
#define GetRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetRegexMatchSet, REQUEST)

#define GetRegexPatternSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetRegexPatternSet, __VA_ARGS__)
#define GetRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetRegexPatternSet, REQUEST)

#define GetRuleAsync(...)  SubmitAsync(&WAFRegionalClient::GetRule, __VA_ARGS__)
#define GetRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetRule, REQUEST)

#define GetRuleGroupAsync(...)  SubmitAsync(&WAFRegionalClient::GetRuleGroup, __VA_ARGS__)
#define GetRuleGroupCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetRuleGroup, REQUEST)

#define GetSampledRequestsAsync(...)  SubmitAsync(&WAFRegionalClient::GetSampledRequests, __VA_ARGS__)
#define GetSampledRequestsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetSampledRequests, REQUEST)

#define GetSizeConstraintSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetSizeConstraintSet, __VA_ARGS__)
#define GetSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetSizeConstraintSet, REQUEST)

#define GetSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetSqlInjectionMatchSet, __VA_ARGS__)
#define GetSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetSqlInjectionMatchSet, REQUEST)

#define GetWebACLAsync(...)  SubmitAsync(&WAFRegionalClient::GetWebACL, __VA_ARGS__)
#define GetWebACLCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetWebACL, REQUEST)

#define GetWebACLForResourceAsync(...)  SubmitAsync(&WAFRegionalClient::GetWebACLForResource, __VA_ARGS__)
#define GetWebACLForResourceCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetWebACLForResource, REQUEST)

#define GetXssMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::GetXssMatchSet, __VA_ARGS__)
#define GetXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::GetXssMatchSet, REQUEST)

#define ListActivatedRulesInRuleGroupAsync(...)  SubmitAsync(&WAFRegionalClient::ListActivatedRulesInRuleGroup, __VA_ARGS__)
#define ListActivatedRulesInRuleGroupCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListActivatedRulesInRuleGroup, REQUEST)

#define ListByteMatchSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListByteMatchSets, __VA_ARGS__)
#define ListByteMatchSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListByteMatchSets, REQUEST)

#define ListGeoMatchSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListGeoMatchSets, __VA_ARGS__)
#define ListGeoMatchSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListGeoMatchSets, REQUEST)

#define ListIPSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListIPSets, __VA_ARGS__)
#define ListIPSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListIPSets, REQUEST)

#define ListLoggingConfigurationsAsync(...)  SubmitAsync(&WAFRegionalClient::ListLoggingConfigurations, __VA_ARGS__)
#define ListLoggingConfigurationsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListLoggingConfigurations, REQUEST)

#define ListRateBasedRulesAsync(...)  SubmitAsync(&WAFRegionalClient::ListRateBasedRules, __VA_ARGS__)
#define ListRateBasedRulesCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListRateBasedRules, REQUEST)

#define ListRegexMatchSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListRegexMatchSets, __VA_ARGS__)
#define ListRegexMatchSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListRegexMatchSets, REQUEST)

#define ListRegexPatternSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListRegexPatternSets, __VA_ARGS__)
#define ListRegexPatternSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListRegexPatternSets, REQUEST)

#define ListResourcesForWebACLAsync(...)  SubmitAsync(&WAFRegionalClient::ListResourcesForWebACL, __VA_ARGS__)
#define ListResourcesForWebACLCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListResourcesForWebACL, REQUEST)

#define ListRuleGroupsAsync(...)  SubmitAsync(&WAFRegionalClient::ListRuleGroups, __VA_ARGS__)
#define ListRuleGroupsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListRuleGroups, REQUEST)

#define ListRulesAsync(...)  SubmitAsync(&WAFRegionalClient::ListRules, __VA_ARGS__)
#define ListRulesCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListRules, REQUEST)

#define ListSizeConstraintSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListSizeConstraintSets, __VA_ARGS__)
#define ListSizeConstraintSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListSizeConstraintSets, REQUEST)

#define ListSqlInjectionMatchSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListSqlInjectionMatchSets, __VA_ARGS__)
#define ListSqlInjectionMatchSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListSqlInjectionMatchSets, REQUEST)

#define ListSubscribedRuleGroupsAsync(...)  SubmitAsync(&WAFRegionalClient::ListSubscribedRuleGroups, __VA_ARGS__)
#define ListSubscribedRuleGroupsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListSubscribedRuleGroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&WAFRegionalClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListTagsForResource, REQUEST)

#define ListWebACLsAsync(...)  SubmitAsync(&WAFRegionalClient::ListWebACLs, __VA_ARGS__)
#define ListWebACLsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListWebACLs, REQUEST)

#define ListXssMatchSetsAsync(...)  SubmitAsync(&WAFRegionalClient::ListXssMatchSets, __VA_ARGS__)
#define ListXssMatchSetsCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::ListXssMatchSets, REQUEST)

#define PutLoggingConfigurationAsync(...)  SubmitAsync(&WAFRegionalClient::PutLoggingConfiguration, __VA_ARGS__)
#define PutLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::PutLoggingConfiguration, REQUEST)

#define PutPermissionPolicyAsync(...)  SubmitAsync(&WAFRegionalClient::PutPermissionPolicy, __VA_ARGS__)
#define PutPermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::PutPermissionPolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&WAFRegionalClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&WAFRegionalClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UntagResource, REQUEST)

#define UpdateByteMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateByteMatchSet, __VA_ARGS__)
#define UpdateByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateByteMatchSet, REQUEST)

#define UpdateGeoMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateGeoMatchSet, __VA_ARGS__)
#define UpdateGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateGeoMatchSet, REQUEST)

#define UpdateIPSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateIPSet, __VA_ARGS__)
#define UpdateIPSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateIPSet, REQUEST)

#define UpdateRateBasedRuleAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateRateBasedRule, __VA_ARGS__)
#define UpdateRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateRateBasedRule, REQUEST)

#define UpdateRegexMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateRegexMatchSet, __VA_ARGS__)
#define UpdateRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateRegexMatchSet, REQUEST)

#define UpdateRegexPatternSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateRegexPatternSet, __VA_ARGS__)
#define UpdateRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateRegexPatternSet, REQUEST)

#define UpdateRuleAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateRule, __VA_ARGS__)
#define UpdateRuleCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateRule, REQUEST)

#define UpdateRuleGroupAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateRuleGroup, __VA_ARGS__)
#define UpdateRuleGroupCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateRuleGroup, REQUEST)

#define UpdateSizeConstraintSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateSizeConstraintSet, __VA_ARGS__)
#define UpdateSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateSizeConstraintSet, REQUEST)

#define UpdateSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateSqlInjectionMatchSet, __VA_ARGS__)
#define UpdateSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateSqlInjectionMatchSet, REQUEST)

#define UpdateWebACLAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateWebACL, __VA_ARGS__)
#define UpdateWebACLCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateWebACL, REQUEST)

#define UpdateXssMatchSetAsync(...)  SubmitAsync(&WAFRegionalClient::UpdateXssMatchSet, __VA_ARGS__)
#define UpdateXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFRegionalClient::UpdateXssMatchSet, REQUEST)

