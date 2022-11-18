/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateAccountsAsync(...)  SubmitAsync(&BillingConductorClient::AssociateAccounts, __VA_ARGS__)
#define AssociateAccountsCallable(REQUEST)  SubmitCallable(&BillingConductorClient::AssociateAccounts, REQUEST)

#define AssociatePricingRulesAsync(...)  SubmitAsync(&BillingConductorClient::AssociatePricingRules, __VA_ARGS__)
#define AssociatePricingRulesCallable(REQUEST)  SubmitCallable(&BillingConductorClient::AssociatePricingRules, REQUEST)

#define BatchAssociateResourcesToCustomLineItemAsync(...)  SubmitAsync(&BillingConductorClient::BatchAssociateResourcesToCustomLineItem, __VA_ARGS__)
#define BatchAssociateResourcesToCustomLineItemCallable(REQUEST)  SubmitCallable(&BillingConductorClient::BatchAssociateResourcesToCustomLineItem, REQUEST)

#define BatchDisassociateResourcesFromCustomLineItemAsync(...)  SubmitAsync(&BillingConductorClient::BatchDisassociateResourcesFromCustomLineItem, __VA_ARGS__)
#define BatchDisassociateResourcesFromCustomLineItemCallable(REQUEST)  SubmitCallable(&BillingConductorClient::BatchDisassociateResourcesFromCustomLineItem, REQUEST)

#define CreateBillingGroupAsync(...)  SubmitAsync(&BillingConductorClient::CreateBillingGroup, __VA_ARGS__)
#define CreateBillingGroupCallable(REQUEST)  SubmitCallable(&BillingConductorClient::CreateBillingGroup, REQUEST)

#define CreateCustomLineItemAsync(...)  SubmitAsync(&BillingConductorClient::CreateCustomLineItem, __VA_ARGS__)
#define CreateCustomLineItemCallable(REQUEST)  SubmitCallable(&BillingConductorClient::CreateCustomLineItem, REQUEST)

#define CreatePricingPlanAsync(...)  SubmitAsync(&BillingConductorClient::CreatePricingPlan, __VA_ARGS__)
#define CreatePricingPlanCallable(REQUEST)  SubmitCallable(&BillingConductorClient::CreatePricingPlan, REQUEST)

#define CreatePricingRuleAsync(...)  SubmitAsync(&BillingConductorClient::CreatePricingRule, __VA_ARGS__)
#define CreatePricingRuleCallable(REQUEST)  SubmitCallable(&BillingConductorClient::CreatePricingRule, REQUEST)

#define DeleteBillingGroupAsync(...)  SubmitAsync(&BillingConductorClient::DeleteBillingGroup, __VA_ARGS__)
#define DeleteBillingGroupCallable(REQUEST)  SubmitCallable(&BillingConductorClient::DeleteBillingGroup, REQUEST)

#define DeleteCustomLineItemAsync(...)  SubmitAsync(&BillingConductorClient::DeleteCustomLineItem, __VA_ARGS__)
#define DeleteCustomLineItemCallable(REQUEST)  SubmitCallable(&BillingConductorClient::DeleteCustomLineItem, REQUEST)

#define DeletePricingPlanAsync(...)  SubmitAsync(&BillingConductorClient::DeletePricingPlan, __VA_ARGS__)
#define DeletePricingPlanCallable(REQUEST)  SubmitCallable(&BillingConductorClient::DeletePricingPlan, REQUEST)

#define DeletePricingRuleAsync(...)  SubmitAsync(&BillingConductorClient::DeletePricingRule, __VA_ARGS__)
#define DeletePricingRuleCallable(REQUEST)  SubmitCallable(&BillingConductorClient::DeletePricingRule, REQUEST)

#define DisassociateAccountsAsync(...)  SubmitAsync(&BillingConductorClient::DisassociateAccounts, __VA_ARGS__)
#define DisassociateAccountsCallable(REQUEST)  SubmitCallable(&BillingConductorClient::DisassociateAccounts, REQUEST)

#define DisassociatePricingRulesAsync(...)  SubmitAsync(&BillingConductorClient::DisassociatePricingRules, __VA_ARGS__)
#define DisassociatePricingRulesCallable(REQUEST)  SubmitCallable(&BillingConductorClient::DisassociatePricingRules, REQUEST)

#define ListAccountAssociationsAsync(...)  SubmitAsync(&BillingConductorClient::ListAccountAssociations, __VA_ARGS__)
#define ListAccountAssociationsCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListAccountAssociations, REQUEST)

#define ListBillingGroupCostReportsAsync(...)  SubmitAsync(&BillingConductorClient::ListBillingGroupCostReports, __VA_ARGS__)
#define ListBillingGroupCostReportsCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListBillingGroupCostReports, REQUEST)

#define ListBillingGroupsAsync(...)  SubmitAsync(&BillingConductorClient::ListBillingGroups, __VA_ARGS__)
#define ListBillingGroupsCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListBillingGroups, REQUEST)

#define ListCustomLineItemVersionsAsync(...)  SubmitAsync(&BillingConductorClient::ListCustomLineItemVersions, __VA_ARGS__)
#define ListCustomLineItemVersionsCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListCustomLineItemVersions, REQUEST)

#define ListCustomLineItemsAsync(...)  SubmitAsync(&BillingConductorClient::ListCustomLineItems, __VA_ARGS__)
#define ListCustomLineItemsCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListCustomLineItems, REQUEST)

#define ListPricingPlansAsync(...)  SubmitAsync(&BillingConductorClient::ListPricingPlans, __VA_ARGS__)
#define ListPricingPlansCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListPricingPlans, REQUEST)

#define ListPricingPlansAssociatedWithPricingRuleAsync(...)  SubmitAsync(&BillingConductorClient::ListPricingPlansAssociatedWithPricingRule, __VA_ARGS__)
#define ListPricingPlansAssociatedWithPricingRuleCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListPricingPlansAssociatedWithPricingRule, REQUEST)

#define ListPricingRulesAsync(...)  SubmitAsync(&BillingConductorClient::ListPricingRules, __VA_ARGS__)
#define ListPricingRulesCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListPricingRules, REQUEST)

#define ListPricingRulesAssociatedToPricingPlanAsync(...)  SubmitAsync(&BillingConductorClient::ListPricingRulesAssociatedToPricingPlan, __VA_ARGS__)
#define ListPricingRulesAssociatedToPricingPlanCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListPricingRulesAssociatedToPricingPlan, REQUEST)

#define ListResourcesAssociatedToCustomLineItemAsync(...)  SubmitAsync(&BillingConductorClient::ListResourcesAssociatedToCustomLineItem, __VA_ARGS__)
#define ListResourcesAssociatedToCustomLineItemCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListResourcesAssociatedToCustomLineItem, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&BillingConductorClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&BillingConductorClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&BillingConductorClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&BillingConductorClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&BillingConductorClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&BillingConductorClient::UntagResource, REQUEST)

#define UpdateBillingGroupAsync(...)  SubmitAsync(&BillingConductorClient::UpdateBillingGroup, __VA_ARGS__)
#define UpdateBillingGroupCallable(REQUEST)  SubmitCallable(&BillingConductorClient::UpdateBillingGroup, REQUEST)

#define UpdateCustomLineItemAsync(...)  SubmitAsync(&BillingConductorClient::UpdateCustomLineItem, __VA_ARGS__)
#define UpdateCustomLineItemCallable(REQUEST)  SubmitCallable(&BillingConductorClient::UpdateCustomLineItem, REQUEST)

#define UpdatePricingPlanAsync(...)  SubmitAsync(&BillingConductorClient::UpdatePricingPlan, __VA_ARGS__)
#define UpdatePricingPlanCallable(REQUEST)  SubmitCallable(&BillingConductorClient::UpdatePricingPlan, REQUEST)

#define UpdatePricingRuleAsync(...)  SubmitAsync(&BillingConductorClient::UpdatePricingRule, __VA_ARGS__)
#define UpdatePricingRuleCallable(REQUEST)  SubmitCallable(&BillingConductorClient::UpdatePricingRule, REQUEST)

