/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AttachCustomerManagedPolicyReferenceToPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet, __VA_ARGS__)
#define AttachCustomerManagedPolicyReferenceToPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::AttachCustomerManagedPolicyReferenceToPermissionSet, REQUEST)

#define AttachManagedPolicyToPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::AttachManagedPolicyToPermissionSet, __VA_ARGS__)
#define AttachManagedPolicyToPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::AttachManagedPolicyToPermissionSet, REQUEST)

#define CreateAccountAssignmentAsync(...)  SubmitAsync(&SSOAdminClient::CreateAccountAssignment, __VA_ARGS__)
#define CreateAccountAssignmentCallable(REQUEST)  SubmitCallable(&SSOAdminClient::CreateAccountAssignment, REQUEST)

#define CreateInstanceAccessControlAttributeConfigurationAsync(...)  SubmitAsync(&SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration, __VA_ARGS__)
#define CreateInstanceAccessControlAttributeConfigurationCallable(REQUEST)  SubmitCallable(&SSOAdminClient::CreateInstanceAccessControlAttributeConfiguration, REQUEST)

#define CreatePermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::CreatePermissionSet, __VA_ARGS__)
#define CreatePermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::CreatePermissionSet, REQUEST)

#define DeleteAccountAssignmentAsync(...)  SubmitAsync(&SSOAdminClient::DeleteAccountAssignment, __VA_ARGS__)
#define DeleteAccountAssignmentCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DeleteAccountAssignment, REQUEST)

#define DeleteInlinePolicyFromPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::DeleteInlinePolicyFromPermissionSet, __VA_ARGS__)
#define DeleteInlinePolicyFromPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DeleteInlinePolicyFromPermissionSet, REQUEST)

#define DeleteInstanceAccessControlAttributeConfigurationAsync(...)  SubmitAsync(&SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration, __VA_ARGS__)
#define DeleteInstanceAccessControlAttributeConfigurationCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DeleteInstanceAccessControlAttributeConfiguration, REQUEST)

#define DeletePermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::DeletePermissionSet, __VA_ARGS__)
#define DeletePermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DeletePermissionSet, REQUEST)

#define DeletePermissionsBoundaryFromPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet, __VA_ARGS__)
#define DeletePermissionsBoundaryFromPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DeletePermissionsBoundaryFromPermissionSet, REQUEST)

#define DescribeAccountAssignmentCreationStatusAsync(...)  SubmitAsync(&SSOAdminClient::DescribeAccountAssignmentCreationStatus, __VA_ARGS__)
#define DescribeAccountAssignmentCreationStatusCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DescribeAccountAssignmentCreationStatus, REQUEST)

#define DescribeAccountAssignmentDeletionStatusAsync(...)  SubmitAsync(&SSOAdminClient::DescribeAccountAssignmentDeletionStatus, __VA_ARGS__)
#define DescribeAccountAssignmentDeletionStatusCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DescribeAccountAssignmentDeletionStatus, REQUEST)

#define DescribeInstanceAccessControlAttributeConfigurationAsync(...)  SubmitAsync(&SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration, __VA_ARGS__)
#define DescribeInstanceAccessControlAttributeConfigurationCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DescribeInstanceAccessControlAttributeConfiguration, REQUEST)

#define DescribePermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::DescribePermissionSet, __VA_ARGS__)
#define DescribePermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DescribePermissionSet, REQUEST)

#define DescribePermissionSetProvisioningStatusAsync(...)  SubmitAsync(&SSOAdminClient::DescribePermissionSetProvisioningStatus, __VA_ARGS__)
#define DescribePermissionSetProvisioningStatusCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DescribePermissionSetProvisioningStatus, REQUEST)

#define DetachCustomerManagedPolicyReferenceFromPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet, __VA_ARGS__)
#define DetachCustomerManagedPolicyReferenceFromPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DetachCustomerManagedPolicyReferenceFromPermissionSet, REQUEST)

#define DetachManagedPolicyFromPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::DetachManagedPolicyFromPermissionSet, __VA_ARGS__)
#define DetachManagedPolicyFromPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::DetachManagedPolicyFromPermissionSet, REQUEST)

#define GetInlinePolicyForPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::GetInlinePolicyForPermissionSet, __VA_ARGS__)
#define GetInlinePolicyForPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::GetInlinePolicyForPermissionSet, REQUEST)

#define GetPermissionsBoundaryForPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::GetPermissionsBoundaryForPermissionSet, __VA_ARGS__)
#define GetPermissionsBoundaryForPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::GetPermissionsBoundaryForPermissionSet, REQUEST)

#define ListAccountAssignmentCreationStatusAsync(...)  SubmitAsync(&SSOAdminClient::ListAccountAssignmentCreationStatus, __VA_ARGS__)
#define ListAccountAssignmentCreationStatusCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListAccountAssignmentCreationStatus, REQUEST)

#define ListAccountAssignmentDeletionStatusAsync(...)  SubmitAsync(&SSOAdminClient::ListAccountAssignmentDeletionStatus, __VA_ARGS__)
#define ListAccountAssignmentDeletionStatusCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListAccountAssignmentDeletionStatus, REQUEST)

#define ListAccountAssignmentsAsync(...)  SubmitAsync(&SSOAdminClient::ListAccountAssignments, __VA_ARGS__)
#define ListAccountAssignmentsCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListAccountAssignments, REQUEST)

#define ListAccountsForProvisionedPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::ListAccountsForProvisionedPermissionSet, __VA_ARGS__)
#define ListAccountsForProvisionedPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListAccountsForProvisionedPermissionSet, REQUEST)

#define ListCustomerManagedPolicyReferencesInPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet, __VA_ARGS__)
#define ListCustomerManagedPolicyReferencesInPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListCustomerManagedPolicyReferencesInPermissionSet, REQUEST)

#define ListInstancesAsync(...)  SubmitAsync(&SSOAdminClient::ListInstances, __VA_ARGS__)
#define ListInstancesCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListInstances, REQUEST)

#define ListManagedPoliciesInPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::ListManagedPoliciesInPermissionSet, __VA_ARGS__)
#define ListManagedPoliciesInPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListManagedPoliciesInPermissionSet, REQUEST)

#define ListPermissionSetProvisioningStatusAsync(...)  SubmitAsync(&SSOAdminClient::ListPermissionSetProvisioningStatus, __VA_ARGS__)
#define ListPermissionSetProvisioningStatusCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListPermissionSetProvisioningStatus, REQUEST)

#define ListPermissionSetsAsync(...)  SubmitAsync(&SSOAdminClient::ListPermissionSets, __VA_ARGS__)
#define ListPermissionSetsCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListPermissionSets, REQUEST)

#define ListPermissionSetsProvisionedToAccountAsync(...)  SubmitAsync(&SSOAdminClient::ListPermissionSetsProvisionedToAccount, __VA_ARGS__)
#define ListPermissionSetsProvisionedToAccountCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListPermissionSetsProvisionedToAccount, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SSOAdminClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ListTagsForResource, REQUEST)

#define ProvisionPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::ProvisionPermissionSet, __VA_ARGS__)
#define ProvisionPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::ProvisionPermissionSet, REQUEST)

#define PutInlinePolicyToPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::PutInlinePolicyToPermissionSet, __VA_ARGS__)
#define PutInlinePolicyToPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::PutInlinePolicyToPermissionSet, REQUEST)

#define PutPermissionsBoundaryToPermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::PutPermissionsBoundaryToPermissionSet, __VA_ARGS__)
#define PutPermissionsBoundaryToPermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::PutPermissionsBoundaryToPermissionSet, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SSOAdminClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SSOAdminClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SSOAdminClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SSOAdminClient::UntagResource, REQUEST)

#define UpdateInstanceAccessControlAttributeConfigurationAsync(...)  SubmitAsync(&SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration, __VA_ARGS__)
#define UpdateInstanceAccessControlAttributeConfigurationCallable(REQUEST)  SubmitCallable(&SSOAdminClient::UpdateInstanceAccessControlAttributeConfiguration, REQUEST)

#define UpdatePermissionSetAsync(...)  SubmitAsync(&SSOAdminClient::UpdatePermissionSet, __VA_ARGS__)
#define UpdatePermissionSetCallable(REQUEST)  SubmitCallable(&SSOAdminClient::UpdatePermissionSet, REQUEST)

