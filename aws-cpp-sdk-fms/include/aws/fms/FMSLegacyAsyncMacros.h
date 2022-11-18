/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateAdminAccountAsync(...)  SubmitAsync(&FMSClient::AssociateAdminAccount, __VA_ARGS__)
#define AssociateAdminAccountCallable(REQUEST)  SubmitCallable(&FMSClient::AssociateAdminAccount, REQUEST)

#define AssociateThirdPartyFirewallAsync(...)  SubmitAsync(&FMSClient::AssociateThirdPartyFirewall, __VA_ARGS__)
#define AssociateThirdPartyFirewallCallable(REQUEST)  SubmitCallable(&FMSClient::AssociateThirdPartyFirewall, REQUEST)

#define BatchAssociateResourceAsync(...)  SubmitAsync(&FMSClient::BatchAssociateResource, __VA_ARGS__)
#define BatchAssociateResourceCallable(REQUEST)  SubmitCallable(&FMSClient::BatchAssociateResource, REQUEST)

#define BatchDisassociateResourceAsync(...)  SubmitAsync(&FMSClient::BatchDisassociateResource, __VA_ARGS__)
#define BatchDisassociateResourceCallable(REQUEST)  SubmitCallable(&FMSClient::BatchDisassociateResource, REQUEST)

#define DeleteAppsListAsync(...)  SubmitAsync(&FMSClient::DeleteAppsList, __VA_ARGS__)
#define DeleteAppsListCallable(REQUEST)  SubmitCallable(&FMSClient::DeleteAppsList, REQUEST)

#define DeleteNotificationChannelAsync(...)  SubmitAsync(&FMSClient::DeleteNotificationChannel, __VA_ARGS__)
#define DeleteNotificationChannelCallable(REQUEST)  SubmitCallable(&FMSClient::DeleteNotificationChannel, REQUEST)

#define DeletePolicyAsync(...)  SubmitAsync(&FMSClient::DeletePolicy, __VA_ARGS__)
#define DeletePolicyCallable(REQUEST)  SubmitCallable(&FMSClient::DeletePolicy, REQUEST)

#define DeleteProtocolsListAsync(...)  SubmitAsync(&FMSClient::DeleteProtocolsList, __VA_ARGS__)
#define DeleteProtocolsListCallable(REQUEST)  SubmitCallable(&FMSClient::DeleteProtocolsList, REQUEST)

#define DeleteResourceSetAsync(...)  SubmitAsync(&FMSClient::DeleteResourceSet, __VA_ARGS__)
#define DeleteResourceSetCallable(REQUEST)  SubmitCallable(&FMSClient::DeleteResourceSet, REQUEST)

#define DisassociateAdminAccountAsync(...)  SubmitAsync(&FMSClient::DisassociateAdminAccount, __VA_ARGS__)
#define DisassociateAdminAccountCallable(REQUEST)  SubmitCallable(&FMSClient::DisassociateAdminAccount, REQUEST)

#define DisassociateThirdPartyFirewallAsync(...)  SubmitAsync(&FMSClient::DisassociateThirdPartyFirewall, __VA_ARGS__)
#define DisassociateThirdPartyFirewallCallable(REQUEST)  SubmitCallable(&FMSClient::DisassociateThirdPartyFirewall, REQUEST)

#define GetAdminAccountAsync(...)  SubmitAsync(&FMSClient::GetAdminAccount, __VA_ARGS__)
#define GetAdminAccountCallable(REQUEST)  SubmitCallable(&FMSClient::GetAdminAccount, REQUEST)

#define GetAppsListAsync(...)  SubmitAsync(&FMSClient::GetAppsList, __VA_ARGS__)
#define GetAppsListCallable(REQUEST)  SubmitCallable(&FMSClient::GetAppsList, REQUEST)

#define GetComplianceDetailAsync(...)  SubmitAsync(&FMSClient::GetComplianceDetail, __VA_ARGS__)
#define GetComplianceDetailCallable(REQUEST)  SubmitCallable(&FMSClient::GetComplianceDetail, REQUEST)

#define GetNotificationChannelAsync(...)  SubmitAsync(&FMSClient::GetNotificationChannel, __VA_ARGS__)
#define GetNotificationChannelCallable(REQUEST)  SubmitCallable(&FMSClient::GetNotificationChannel, REQUEST)

#define GetPolicyAsync(...)  SubmitAsync(&FMSClient::GetPolicy, __VA_ARGS__)
#define GetPolicyCallable(REQUEST)  SubmitCallable(&FMSClient::GetPolicy, REQUEST)

#define GetProtectionStatusAsync(...)  SubmitAsync(&FMSClient::GetProtectionStatus, __VA_ARGS__)
#define GetProtectionStatusCallable(REQUEST)  SubmitCallable(&FMSClient::GetProtectionStatus, REQUEST)

#define GetProtocolsListAsync(...)  SubmitAsync(&FMSClient::GetProtocolsList, __VA_ARGS__)
#define GetProtocolsListCallable(REQUEST)  SubmitCallable(&FMSClient::GetProtocolsList, REQUEST)

#define GetResourceSetAsync(...)  SubmitAsync(&FMSClient::GetResourceSet, __VA_ARGS__)
#define GetResourceSetCallable(REQUEST)  SubmitCallable(&FMSClient::GetResourceSet, REQUEST)

#define GetThirdPartyFirewallAssociationStatusAsync(...)  SubmitAsync(&FMSClient::GetThirdPartyFirewallAssociationStatus, __VA_ARGS__)
#define GetThirdPartyFirewallAssociationStatusCallable(REQUEST)  SubmitCallable(&FMSClient::GetThirdPartyFirewallAssociationStatus, REQUEST)

#define GetViolationDetailsAsync(...)  SubmitAsync(&FMSClient::GetViolationDetails, __VA_ARGS__)
#define GetViolationDetailsCallable(REQUEST)  SubmitCallable(&FMSClient::GetViolationDetails, REQUEST)

#define ListAppsListsAsync(...)  SubmitAsync(&FMSClient::ListAppsLists, __VA_ARGS__)
#define ListAppsListsCallable(REQUEST)  SubmitCallable(&FMSClient::ListAppsLists, REQUEST)

#define ListComplianceStatusAsync(...)  SubmitAsync(&FMSClient::ListComplianceStatus, __VA_ARGS__)
#define ListComplianceStatusCallable(REQUEST)  SubmitCallable(&FMSClient::ListComplianceStatus, REQUEST)

#define ListDiscoveredResourcesAsync(...)  SubmitAsync(&FMSClient::ListDiscoveredResources, __VA_ARGS__)
#define ListDiscoveredResourcesCallable(REQUEST)  SubmitCallable(&FMSClient::ListDiscoveredResources, REQUEST)

#define ListMemberAccountsAsync(...)  SubmitAsync(&FMSClient::ListMemberAccounts, __VA_ARGS__)
#define ListMemberAccountsCallable(REQUEST)  SubmitCallable(&FMSClient::ListMemberAccounts, REQUEST)

#define ListPoliciesAsync(...)  SubmitAsync(&FMSClient::ListPolicies, __VA_ARGS__)
#define ListPoliciesCallable(REQUEST)  SubmitCallable(&FMSClient::ListPolicies, REQUEST)

#define ListProtocolsListsAsync(...)  SubmitAsync(&FMSClient::ListProtocolsLists, __VA_ARGS__)
#define ListProtocolsListsCallable(REQUEST)  SubmitCallable(&FMSClient::ListProtocolsLists, REQUEST)

#define ListResourceSetResourcesAsync(...)  SubmitAsync(&FMSClient::ListResourceSetResources, __VA_ARGS__)
#define ListResourceSetResourcesCallable(REQUEST)  SubmitCallable(&FMSClient::ListResourceSetResources, REQUEST)

#define ListResourceSetsAsync(...)  SubmitAsync(&FMSClient::ListResourceSets, __VA_ARGS__)
#define ListResourceSetsCallable(REQUEST)  SubmitCallable(&FMSClient::ListResourceSets, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&FMSClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&FMSClient::ListTagsForResource, REQUEST)

#define ListThirdPartyFirewallFirewallPoliciesAsync(...)  SubmitAsync(&FMSClient::ListThirdPartyFirewallFirewallPolicies, __VA_ARGS__)
#define ListThirdPartyFirewallFirewallPoliciesCallable(REQUEST)  SubmitCallable(&FMSClient::ListThirdPartyFirewallFirewallPolicies, REQUEST)

#define PutAppsListAsync(...)  SubmitAsync(&FMSClient::PutAppsList, __VA_ARGS__)
#define PutAppsListCallable(REQUEST)  SubmitCallable(&FMSClient::PutAppsList, REQUEST)

#define PutNotificationChannelAsync(...)  SubmitAsync(&FMSClient::PutNotificationChannel, __VA_ARGS__)
#define PutNotificationChannelCallable(REQUEST)  SubmitCallable(&FMSClient::PutNotificationChannel, REQUEST)

#define PutPolicyAsync(...)  SubmitAsync(&FMSClient::PutPolicy, __VA_ARGS__)
#define PutPolicyCallable(REQUEST)  SubmitCallable(&FMSClient::PutPolicy, REQUEST)

#define PutProtocolsListAsync(...)  SubmitAsync(&FMSClient::PutProtocolsList, __VA_ARGS__)
#define PutProtocolsListCallable(REQUEST)  SubmitCallable(&FMSClient::PutProtocolsList, REQUEST)

#define PutResourceSetAsync(...)  SubmitAsync(&FMSClient::PutResourceSet, __VA_ARGS__)
#define PutResourceSetCallable(REQUEST)  SubmitCallable(&FMSClient::PutResourceSet, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&FMSClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&FMSClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&FMSClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&FMSClient::UntagResource, REQUEST)

