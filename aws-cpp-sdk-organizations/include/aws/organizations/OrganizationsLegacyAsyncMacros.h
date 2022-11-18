/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptHandshakeAsync(...)  SubmitAsync(&OrganizationsClient::AcceptHandshake, __VA_ARGS__)
#define AcceptHandshakeCallable(REQUEST)  SubmitCallable(&OrganizationsClient::AcceptHandshake, REQUEST)

#define AttachPolicyAsync(...)  SubmitAsync(&OrganizationsClient::AttachPolicy, __VA_ARGS__)
#define AttachPolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::AttachPolicy, REQUEST)

#define CancelHandshakeAsync(...)  SubmitAsync(&OrganizationsClient::CancelHandshake, __VA_ARGS__)
#define CancelHandshakeCallable(REQUEST)  SubmitCallable(&OrganizationsClient::CancelHandshake, REQUEST)

#define CloseAccountAsync(...)  SubmitAsync(&OrganizationsClient::CloseAccount, __VA_ARGS__)
#define CloseAccountCallable(REQUEST)  SubmitCallable(&OrganizationsClient::CloseAccount, REQUEST)

#define CreateAccountAsync(...)  SubmitAsync(&OrganizationsClient::CreateAccount, __VA_ARGS__)
#define CreateAccountCallable(REQUEST)  SubmitCallable(&OrganizationsClient::CreateAccount, REQUEST)

#define CreateGovCloudAccountAsync(...)  SubmitAsync(&OrganizationsClient::CreateGovCloudAccount, __VA_ARGS__)
#define CreateGovCloudAccountCallable(REQUEST)  SubmitCallable(&OrganizationsClient::CreateGovCloudAccount, REQUEST)

#define CreateOrganizationAsync(...)  SubmitAsync(&OrganizationsClient::CreateOrganization, __VA_ARGS__)
#define CreateOrganizationCallable(REQUEST)  SubmitCallable(&OrganizationsClient::CreateOrganization, REQUEST)

#define CreateOrganizationalUnitAsync(...)  SubmitAsync(&OrganizationsClient::CreateOrganizationalUnit, __VA_ARGS__)
#define CreateOrganizationalUnitCallable(REQUEST)  SubmitCallable(&OrganizationsClient::CreateOrganizationalUnit, REQUEST)

#define CreatePolicyAsync(...)  SubmitAsync(&OrganizationsClient::CreatePolicy, __VA_ARGS__)
#define CreatePolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::CreatePolicy, REQUEST)

#define DeclineHandshakeAsync(...)  SubmitAsync(&OrganizationsClient::DeclineHandshake, __VA_ARGS__)
#define DeclineHandshakeCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DeclineHandshake, REQUEST)


#define DeleteOrganizationalUnitAsync(...)  SubmitAsync(&OrganizationsClient::DeleteOrganizationalUnit, __VA_ARGS__)
#define DeleteOrganizationalUnitCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DeleteOrganizationalUnit, REQUEST)

#define DeletePolicyAsync(...)  SubmitAsync(&OrganizationsClient::DeletePolicy, __VA_ARGS__)
#define DeletePolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DeletePolicy, REQUEST)

#define DeregisterDelegatedAdministratorAsync(...)  SubmitAsync(&OrganizationsClient::DeregisterDelegatedAdministrator, __VA_ARGS__)
#define DeregisterDelegatedAdministratorCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DeregisterDelegatedAdministrator, REQUEST)

#define DescribeAccountAsync(...)  SubmitAsync(&OrganizationsClient::DescribeAccount, __VA_ARGS__)
#define DescribeAccountCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DescribeAccount, REQUEST)

#define DescribeCreateAccountStatusAsync(...)  SubmitAsync(&OrganizationsClient::DescribeCreateAccountStatus, __VA_ARGS__)
#define DescribeCreateAccountStatusCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DescribeCreateAccountStatus, REQUEST)

#define DescribeEffectivePolicyAsync(...)  SubmitAsync(&OrganizationsClient::DescribeEffectivePolicy, __VA_ARGS__)
#define DescribeEffectivePolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DescribeEffectivePolicy, REQUEST)

#define DescribeHandshakeAsync(...)  SubmitAsync(&OrganizationsClient::DescribeHandshake, __VA_ARGS__)
#define DescribeHandshakeCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DescribeHandshake, REQUEST)


#define DescribeOrganizationalUnitAsync(...)  SubmitAsync(&OrganizationsClient::DescribeOrganizationalUnit, __VA_ARGS__)
#define DescribeOrganizationalUnitCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DescribeOrganizationalUnit, REQUEST)

#define DescribePolicyAsync(...)  SubmitAsync(&OrganizationsClient::DescribePolicy, __VA_ARGS__)
#define DescribePolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DescribePolicy, REQUEST)

#define DetachPolicyAsync(...)  SubmitAsync(&OrganizationsClient::DetachPolicy, __VA_ARGS__)
#define DetachPolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DetachPolicy, REQUEST)

#define DisableAWSServiceAccessAsync(...)  SubmitAsync(&OrganizationsClient::DisableAWSServiceAccess, __VA_ARGS__)
#define DisableAWSServiceAccessCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DisableAWSServiceAccess, REQUEST)

#define DisablePolicyTypeAsync(...)  SubmitAsync(&OrganizationsClient::DisablePolicyType, __VA_ARGS__)
#define DisablePolicyTypeCallable(REQUEST)  SubmitCallable(&OrganizationsClient::DisablePolicyType, REQUEST)

#define EnableAWSServiceAccessAsync(...)  SubmitAsync(&OrganizationsClient::EnableAWSServiceAccess, __VA_ARGS__)
#define EnableAWSServiceAccessCallable(REQUEST)  SubmitCallable(&OrganizationsClient::EnableAWSServiceAccess, REQUEST)

#define EnableAllFeaturesAsync(...)  SubmitAsync(&OrganizationsClient::EnableAllFeatures, __VA_ARGS__)
#define EnableAllFeaturesCallable(REQUEST)  SubmitCallable(&OrganizationsClient::EnableAllFeatures, REQUEST)

#define EnablePolicyTypeAsync(...)  SubmitAsync(&OrganizationsClient::EnablePolicyType, __VA_ARGS__)
#define EnablePolicyTypeCallable(REQUEST)  SubmitCallable(&OrganizationsClient::EnablePolicyType, REQUEST)

#define InviteAccountToOrganizationAsync(...)  SubmitAsync(&OrganizationsClient::InviteAccountToOrganization, __VA_ARGS__)
#define InviteAccountToOrganizationCallable(REQUEST)  SubmitCallable(&OrganizationsClient::InviteAccountToOrganization, REQUEST)


#define ListAWSServiceAccessForOrganizationAsync(...)  SubmitAsync(&OrganizationsClient::ListAWSServiceAccessForOrganization, __VA_ARGS__)
#define ListAWSServiceAccessForOrganizationCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListAWSServiceAccessForOrganization, REQUEST)

#define ListAccountsAsync(...)  SubmitAsync(&OrganizationsClient::ListAccounts, __VA_ARGS__)
#define ListAccountsCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListAccounts, REQUEST)

#define ListAccountsForParentAsync(...)  SubmitAsync(&OrganizationsClient::ListAccountsForParent, __VA_ARGS__)
#define ListAccountsForParentCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListAccountsForParent, REQUEST)

#define ListChildrenAsync(...)  SubmitAsync(&OrganizationsClient::ListChildren, __VA_ARGS__)
#define ListChildrenCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListChildren, REQUEST)

#define ListCreateAccountStatusAsync(...)  SubmitAsync(&OrganizationsClient::ListCreateAccountStatus, __VA_ARGS__)
#define ListCreateAccountStatusCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListCreateAccountStatus, REQUEST)

#define ListDelegatedAdministratorsAsync(...)  SubmitAsync(&OrganizationsClient::ListDelegatedAdministrators, __VA_ARGS__)
#define ListDelegatedAdministratorsCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListDelegatedAdministrators, REQUEST)

#define ListDelegatedServicesForAccountAsync(...)  SubmitAsync(&OrganizationsClient::ListDelegatedServicesForAccount, __VA_ARGS__)
#define ListDelegatedServicesForAccountCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListDelegatedServicesForAccount, REQUEST)

#define ListHandshakesForAccountAsync(...)  SubmitAsync(&OrganizationsClient::ListHandshakesForAccount, __VA_ARGS__)
#define ListHandshakesForAccountCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListHandshakesForAccount, REQUEST)

#define ListHandshakesForOrganizationAsync(...)  SubmitAsync(&OrganizationsClient::ListHandshakesForOrganization, __VA_ARGS__)
#define ListHandshakesForOrganizationCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListHandshakesForOrganization, REQUEST)

#define ListOrganizationalUnitsForParentAsync(...)  SubmitAsync(&OrganizationsClient::ListOrganizationalUnitsForParent, __VA_ARGS__)
#define ListOrganizationalUnitsForParentCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListOrganizationalUnitsForParent, REQUEST)

#define ListParentsAsync(...)  SubmitAsync(&OrganizationsClient::ListParents, __VA_ARGS__)
#define ListParentsCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListParents, REQUEST)

#define ListPoliciesAsync(...)  SubmitAsync(&OrganizationsClient::ListPolicies, __VA_ARGS__)
#define ListPoliciesCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListPolicies, REQUEST)

#define ListPoliciesForTargetAsync(...)  SubmitAsync(&OrganizationsClient::ListPoliciesForTarget, __VA_ARGS__)
#define ListPoliciesForTargetCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListPoliciesForTarget, REQUEST)

#define ListRootsAsync(...)  SubmitAsync(&OrganizationsClient::ListRoots, __VA_ARGS__)
#define ListRootsCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListRoots, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&OrganizationsClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListTagsForResource, REQUEST)

#define ListTargetsForPolicyAsync(...)  SubmitAsync(&OrganizationsClient::ListTargetsForPolicy, __VA_ARGS__)
#define ListTargetsForPolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::ListTargetsForPolicy, REQUEST)

#define MoveAccountAsync(...)  SubmitAsync(&OrganizationsClient::MoveAccount, __VA_ARGS__)
#define MoveAccountCallable(REQUEST)  SubmitCallable(&OrganizationsClient::MoveAccount, REQUEST)

#define RegisterDelegatedAdministratorAsync(...)  SubmitAsync(&OrganizationsClient::RegisterDelegatedAdministrator, __VA_ARGS__)
#define RegisterDelegatedAdministratorCallable(REQUEST)  SubmitCallable(&OrganizationsClient::RegisterDelegatedAdministrator, REQUEST)

#define RemoveAccountFromOrganizationAsync(...)  SubmitAsync(&OrganizationsClient::RemoveAccountFromOrganization, __VA_ARGS__)
#define RemoveAccountFromOrganizationCallable(REQUEST)  SubmitCallable(&OrganizationsClient::RemoveAccountFromOrganization, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&OrganizationsClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&OrganizationsClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&OrganizationsClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&OrganizationsClient::UntagResource, REQUEST)

#define UpdateOrganizationalUnitAsync(...)  SubmitAsync(&OrganizationsClient::UpdateOrganizationalUnit, __VA_ARGS__)
#define UpdateOrganizationalUnitCallable(REQUEST)  SubmitCallable(&OrganizationsClient::UpdateOrganizationalUnit, REQUEST)

#define UpdatePolicyAsync(...)  SubmitAsync(&OrganizationsClient::UpdatePolicy, __VA_ARGS__)
#define UpdatePolicyCallable(REQUEST)  SubmitCallable(&OrganizationsClient::UpdatePolicy, REQUEST)

