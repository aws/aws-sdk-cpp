/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateByteMatchSetAsync(...)  SubmitAsync(&WAFClient::CreateByteMatchSet, __VA_ARGS__)
#define CreateByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateByteMatchSet, REQUEST)

#define CreateGeoMatchSetAsync(...)  SubmitAsync(&WAFClient::CreateGeoMatchSet, __VA_ARGS__)
#define CreateGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateGeoMatchSet, REQUEST)

#define CreateIPSetAsync(...)  SubmitAsync(&WAFClient::CreateIPSet, __VA_ARGS__)
#define CreateIPSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateIPSet, REQUEST)

#define CreateRateBasedRuleAsync(...)  SubmitAsync(&WAFClient::CreateRateBasedRule, __VA_ARGS__)
#define CreateRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFClient::CreateRateBasedRule, REQUEST)

#define CreateRegexMatchSetAsync(...)  SubmitAsync(&WAFClient::CreateRegexMatchSet, __VA_ARGS__)
#define CreateRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateRegexMatchSet, REQUEST)

#define CreateRegexPatternSetAsync(...)  SubmitAsync(&WAFClient::CreateRegexPatternSet, __VA_ARGS__)
#define CreateRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateRegexPatternSet, REQUEST)

#define CreateRuleAsync(...)  SubmitAsync(&WAFClient::CreateRule, __VA_ARGS__)
#define CreateRuleCallable(REQUEST)  SubmitCallable(&WAFClient::CreateRule, REQUEST)

#define CreateRuleGroupAsync(...)  SubmitAsync(&WAFClient::CreateRuleGroup, __VA_ARGS__)
#define CreateRuleGroupCallable(REQUEST)  SubmitCallable(&WAFClient::CreateRuleGroup, REQUEST)

#define CreateSizeConstraintSetAsync(...)  SubmitAsync(&WAFClient::CreateSizeConstraintSet, __VA_ARGS__)
#define CreateSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateSizeConstraintSet, REQUEST)

#define CreateSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFClient::CreateSqlInjectionMatchSet, __VA_ARGS__)
#define CreateSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateSqlInjectionMatchSet, REQUEST)

#define CreateWebACLAsync(...)  SubmitAsync(&WAFClient::CreateWebACL, __VA_ARGS__)
#define CreateWebACLCallable(REQUEST)  SubmitCallable(&WAFClient::CreateWebACL, REQUEST)

#define CreateWebACLMigrationStackAsync(...)  SubmitAsync(&WAFClient::CreateWebACLMigrationStack, __VA_ARGS__)
#define CreateWebACLMigrationStackCallable(REQUEST)  SubmitCallable(&WAFClient::CreateWebACLMigrationStack, REQUEST)

#define CreateXssMatchSetAsync(...)  SubmitAsync(&WAFClient::CreateXssMatchSet, __VA_ARGS__)
#define CreateXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::CreateXssMatchSet, REQUEST)

#define DeleteByteMatchSetAsync(...)  SubmitAsync(&WAFClient::DeleteByteMatchSet, __VA_ARGS__)
#define DeleteByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteByteMatchSet, REQUEST)

#define DeleteGeoMatchSetAsync(...)  SubmitAsync(&WAFClient::DeleteGeoMatchSet, __VA_ARGS__)
#define DeleteGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteGeoMatchSet, REQUEST)

#define DeleteIPSetAsync(...)  SubmitAsync(&WAFClient::DeleteIPSet, __VA_ARGS__)
#define DeleteIPSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteIPSet, REQUEST)

#define DeleteLoggingConfigurationAsync(...)  SubmitAsync(&WAFClient::DeleteLoggingConfiguration, __VA_ARGS__)
#define DeleteLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteLoggingConfiguration, REQUEST)

#define DeletePermissionPolicyAsync(...)  SubmitAsync(&WAFClient::DeletePermissionPolicy, __VA_ARGS__)
#define DeletePermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFClient::DeletePermissionPolicy, REQUEST)

#define DeleteRateBasedRuleAsync(...)  SubmitAsync(&WAFClient::DeleteRateBasedRule, __VA_ARGS__)
#define DeleteRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteRateBasedRule, REQUEST)

#define DeleteRegexMatchSetAsync(...)  SubmitAsync(&WAFClient::DeleteRegexMatchSet, __VA_ARGS__)
#define DeleteRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteRegexMatchSet, REQUEST)

#define DeleteRegexPatternSetAsync(...)  SubmitAsync(&WAFClient::DeleteRegexPatternSet, __VA_ARGS__)
#define DeleteRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteRegexPatternSet, REQUEST)

#define DeleteRuleAsync(...)  SubmitAsync(&WAFClient::DeleteRule, __VA_ARGS__)
#define DeleteRuleCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteRule, REQUEST)

#define DeleteRuleGroupAsync(...)  SubmitAsync(&WAFClient::DeleteRuleGroup, __VA_ARGS__)
#define DeleteRuleGroupCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteRuleGroup, REQUEST)

#define DeleteSizeConstraintSetAsync(...)  SubmitAsync(&WAFClient::DeleteSizeConstraintSet, __VA_ARGS__)
#define DeleteSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteSizeConstraintSet, REQUEST)

#define DeleteSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFClient::DeleteSqlInjectionMatchSet, __VA_ARGS__)
#define DeleteSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteSqlInjectionMatchSet, REQUEST)

#define DeleteWebACLAsync(...)  SubmitAsync(&WAFClient::DeleteWebACL, __VA_ARGS__)
#define DeleteWebACLCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteWebACL, REQUEST)

#define DeleteXssMatchSetAsync(...)  SubmitAsync(&WAFClient::DeleteXssMatchSet, __VA_ARGS__)
#define DeleteXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::DeleteXssMatchSet, REQUEST)

#define GetByteMatchSetAsync(...)  SubmitAsync(&WAFClient::GetByteMatchSet, __VA_ARGS__)
#define GetByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetByteMatchSet, REQUEST)

#define GetChangeTokenAsync(...)  SubmitAsync(&WAFClient::GetChangeToken, __VA_ARGS__)
#define GetChangeTokenCallable(REQUEST)  SubmitCallable(&WAFClient::GetChangeToken, REQUEST)

#define GetChangeTokenStatusAsync(...)  SubmitAsync(&WAFClient::GetChangeTokenStatus, __VA_ARGS__)
#define GetChangeTokenStatusCallable(REQUEST)  SubmitCallable(&WAFClient::GetChangeTokenStatus, REQUEST)

#define GetGeoMatchSetAsync(...)  SubmitAsync(&WAFClient::GetGeoMatchSet, __VA_ARGS__)
#define GetGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetGeoMatchSet, REQUEST)

#define GetIPSetAsync(...)  SubmitAsync(&WAFClient::GetIPSet, __VA_ARGS__)
#define GetIPSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetIPSet, REQUEST)

#define GetLoggingConfigurationAsync(...)  SubmitAsync(&WAFClient::GetLoggingConfiguration, __VA_ARGS__)
#define GetLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFClient::GetLoggingConfiguration, REQUEST)

#define GetPermissionPolicyAsync(...)  SubmitAsync(&WAFClient::GetPermissionPolicy, __VA_ARGS__)
#define GetPermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFClient::GetPermissionPolicy, REQUEST)

#define GetRateBasedRuleAsync(...)  SubmitAsync(&WAFClient::GetRateBasedRule, __VA_ARGS__)
#define GetRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFClient::GetRateBasedRule, REQUEST)

#define GetRateBasedRuleManagedKeysAsync(...)  SubmitAsync(&WAFClient::GetRateBasedRuleManagedKeys, __VA_ARGS__)
#define GetRateBasedRuleManagedKeysCallable(REQUEST)  SubmitCallable(&WAFClient::GetRateBasedRuleManagedKeys, REQUEST)

#define GetRegexMatchSetAsync(...)  SubmitAsync(&WAFClient::GetRegexMatchSet, __VA_ARGS__)
#define GetRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetRegexMatchSet, REQUEST)

#define GetRegexPatternSetAsync(...)  SubmitAsync(&WAFClient::GetRegexPatternSet, __VA_ARGS__)
#define GetRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetRegexPatternSet, REQUEST)

#define GetRuleAsync(...)  SubmitAsync(&WAFClient::GetRule, __VA_ARGS__)
#define GetRuleCallable(REQUEST)  SubmitCallable(&WAFClient::GetRule, REQUEST)

#define GetRuleGroupAsync(...)  SubmitAsync(&WAFClient::GetRuleGroup, __VA_ARGS__)
#define GetRuleGroupCallable(REQUEST)  SubmitCallable(&WAFClient::GetRuleGroup, REQUEST)

#define GetSampledRequestsAsync(...)  SubmitAsync(&WAFClient::GetSampledRequests, __VA_ARGS__)
#define GetSampledRequestsCallable(REQUEST)  SubmitCallable(&WAFClient::GetSampledRequests, REQUEST)

#define GetSizeConstraintSetAsync(...)  SubmitAsync(&WAFClient::GetSizeConstraintSet, __VA_ARGS__)
#define GetSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetSizeConstraintSet, REQUEST)

#define GetSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFClient::GetSqlInjectionMatchSet, __VA_ARGS__)
#define GetSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetSqlInjectionMatchSet, REQUEST)

#define GetWebACLAsync(...)  SubmitAsync(&WAFClient::GetWebACL, __VA_ARGS__)
#define GetWebACLCallable(REQUEST)  SubmitCallable(&WAFClient::GetWebACL, REQUEST)

#define GetXssMatchSetAsync(...)  SubmitAsync(&WAFClient::GetXssMatchSet, __VA_ARGS__)
#define GetXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::GetXssMatchSet, REQUEST)

#define ListActivatedRulesInRuleGroupAsync(...)  SubmitAsync(&WAFClient::ListActivatedRulesInRuleGroup, __VA_ARGS__)
#define ListActivatedRulesInRuleGroupCallable(REQUEST)  SubmitCallable(&WAFClient::ListActivatedRulesInRuleGroup, REQUEST)

#define ListByteMatchSetsAsync(...)  SubmitAsync(&WAFClient::ListByteMatchSets, __VA_ARGS__)
#define ListByteMatchSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListByteMatchSets, REQUEST)

#define ListGeoMatchSetsAsync(...)  SubmitAsync(&WAFClient::ListGeoMatchSets, __VA_ARGS__)
#define ListGeoMatchSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListGeoMatchSets, REQUEST)

#define ListIPSetsAsync(...)  SubmitAsync(&WAFClient::ListIPSets, __VA_ARGS__)
#define ListIPSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListIPSets, REQUEST)

#define ListLoggingConfigurationsAsync(...)  SubmitAsync(&WAFClient::ListLoggingConfigurations, __VA_ARGS__)
#define ListLoggingConfigurationsCallable(REQUEST)  SubmitCallable(&WAFClient::ListLoggingConfigurations, REQUEST)

#define ListRateBasedRulesAsync(...)  SubmitAsync(&WAFClient::ListRateBasedRules, __VA_ARGS__)
#define ListRateBasedRulesCallable(REQUEST)  SubmitCallable(&WAFClient::ListRateBasedRules, REQUEST)

#define ListRegexMatchSetsAsync(...)  SubmitAsync(&WAFClient::ListRegexMatchSets, __VA_ARGS__)
#define ListRegexMatchSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListRegexMatchSets, REQUEST)

#define ListRegexPatternSetsAsync(...)  SubmitAsync(&WAFClient::ListRegexPatternSets, __VA_ARGS__)
#define ListRegexPatternSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListRegexPatternSets, REQUEST)

#define ListRuleGroupsAsync(...)  SubmitAsync(&WAFClient::ListRuleGroups, __VA_ARGS__)
#define ListRuleGroupsCallable(REQUEST)  SubmitCallable(&WAFClient::ListRuleGroups, REQUEST)

#define ListRulesAsync(...)  SubmitAsync(&WAFClient::ListRules, __VA_ARGS__)
#define ListRulesCallable(REQUEST)  SubmitCallable(&WAFClient::ListRules, REQUEST)

#define ListSizeConstraintSetsAsync(...)  SubmitAsync(&WAFClient::ListSizeConstraintSets, __VA_ARGS__)
#define ListSizeConstraintSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListSizeConstraintSets, REQUEST)

#define ListSqlInjectionMatchSetsAsync(...)  SubmitAsync(&WAFClient::ListSqlInjectionMatchSets, __VA_ARGS__)
#define ListSqlInjectionMatchSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListSqlInjectionMatchSets, REQUEST)

#define ListSubscribedRuleGroupsAsync(...)  SubmitAsync(&WAFClient::ListSubscribedRuleGroups, __VA_ARGS__)
#define ListSubscribedRuleGroupsCallable(REQUEST)  SubmitCallable(&WAFClient::ListSubscribedRuleGroups, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&WAFClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&WAFClient::ListTagsForResource, REQUEST)

#define ListWebACLsAsync(...)  SubmitAsync(&WAFClient::ListWebACLs, __VA_ARGS__)
#define ListWebACLsCallable(REQUEST)  SubmitCallable(&WAFClient::ListWebACLs, REQUEST)

#define ListXssMatchSetsAsync(...)  SubmitAsync(&WAFClient::ListXssMatchSets, __VA_ARGS__)
#define ListXssMatchSetsCallable(REQUEST)  SubmitCallable(&WAFClient::ListXssMatchSets, REQUEST)

#define PutLoggingConfigurationAsync(...)  SubmitAsync(&WAFClient::PutLoggingConfiguration, __VA_ARGS__)
#define PutLoggingConfigurationCallable(REQUEST)  SubmitCallable(&WAFClient::PutLoggingConfiguration, REQUEST)

#define PutPermissionPolicyAsync(...)  SubmitAsync(&WAFClient::PutPermissionPolicy, __VA_ARGS__)
#define PutPermissionPolicyCallable(REQUEST)  SubmitCallable(&WAFClient::PutPermissionPolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&WAFClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&WAFClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&WAFClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&WAFClient::UntagResource, REQUEST)

#define UpdateByteMatchSetAsync(...)  SubmitAsync(&WAFClient::UpdateByteMatchSet, __VA_ARGS__)
#define UpdateByteMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateByteMatchSet, REQUEST)

#define UpdateGeoMatchSetAsync(...)  SubmitAsync(&WAFClient::UpdateGeoMatchSet, __VA_ARGS__)
#define UpdateGeoMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateGeoMatchSet, REQUEST)

#define UpdateIPSetAsync(...)  SubmitAsync(&WAFClient::UpdateIPSet, __VA_ARGS__)
#define UpdateIPSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateIPSet, REQUEST)

#define UpdateRateBasedRuleAsync(...)  SubmitAsync(&WAFClient::UpdateRateBasedRule, __VA_ARGS__)
#define UpdateRateBasedRuleCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateRateBasedRule, REQUEST)

#define UpdateRegexMatchSetAsync(...)  SubmitAsync(&WAFClient::UpdateRegexMatchSet, __VA_ARGS__)
#define UpdateRegexMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateRegexMatchSet, REQUEST)

#define UpdateRegexPatternSetAsync(...)  SubmitAsync(&WAFClient::UpdateRegexPatternSet, __VA_ARGS__)
#define UpdateRegexPatternSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateRegexPatternSet, REQUEST)

#define UpdateRuleAsync(...)  SubmitAsync(&WAFClient::UpdateRule, __VA_ARGS__)
#define UpdateRuleCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateRule, REQUEST)

#define UpdateRuleGroupAsync(...)  SubmitAsync(&WAFClient::UpdateRuleGroup, __VA_ARGS__)
#define UpdateRuleGroupCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateRuleGroup, REQUEST)

#define UpdateSizeConstraintSetAsync(...)  SubmitAsync(&WAFClient::UpdateSizeConstraintSet, __VA_ARGS__)
#define UpdateSizeConstraintSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateSizeConstraintSet, REQUEST)

#define UpdateSqlInjectionMatchSetAsync(...)  SubmitAsync(&WAFClient::UpdateSqlInjectionMatchSet, __VA_ARGS__)
#define UpdateSqlInjectionMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateSqlInjectionMatchSet, REQUEST)

#define UpdateWebACLAsync(...)  SubmitAsync(&WAFClient::UpdateWebACL, __VA_ARGS__)
#define UpdateWebACLCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateWebACL, REQUEST)

#define UpdateXssMatchSetAsync(...)  SubmitAsync(&WAFClient::UpdateXssMatchSet, __VA_ARGS__)
#define UpdateXssMatchSetCallable(REQUEST)  SubmitCallable(&WAFClient::UpdateXssMatchSet, REQUEST)

