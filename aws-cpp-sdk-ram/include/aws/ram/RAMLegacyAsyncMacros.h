/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AcceptResourceShareInvitationAsync(...)  SubmitAsync(&RAMClient::AcceptResourceShareInvitation, __VA_ARGS__)
#define AcceptResourceShareInvitationCallable(REQUEST)  SubmitCallable(&RAMClient::AcceptResourceShareInvitation, REQUEST)

#define AssociateResourceShareAsync(...)  SubmitAsync(&RAMClient::AssociateResourceShare, __VA_ARGS__)
#define AssociateResourceShareCallable(REQUEST)  SubmitCallable(&RAMClient::AssociateResourceShare, REQUEST)

#define AssociateResourceSharePermissionAsync(...)  SubmitAsync(&RAMClient::AssociateResourceSharePermission, __VA_ARGS__)
#define AssociateResourceSharePermissionCallable(REQUEST)  SubmitCallable(&RAMClient::AssociateResourceSharePermission, REQUEST)

#define CreateResourceShareAsync(...)  SubmitAsync(&RAMClient::CreateResourceShare, __VA_ARGS__)
#define CreateResourceShareCallable(REQUEST)  SubmitCallable(&RAMClient::CreateResourceShare, REQUEST)

#define DeleteResourceShareAsync(...)  SubmitAsync(&RAMClient::DeleteResourceShare, __VA_ARGS__)
#define DeleteResourceShareCallable(REQUEST)  SubmitCallable(&RAMClient::DeleteResourceShare, REQUEST)

#define DisassociateResourceShareAsync(...)  SubmitAsync(&RAMClient::DisassociateResourceShare, __VA_ARGS__)
#define DisassociateResourceShareCallable(REQUEST)  SubmitCallable(&RAMClient::DisassociateResourceShare, REQUEST)

#define DisassociateResourceSharePermissionAsync(...)  SubmitAsync(&RAMClient::DisassociateResourceSharePermission, __VA_ARGS__)
#define DisassociateResourceSharePermissionCallable(REQUEST)  SubmitCallable(&RAMClient::DisassociateResourceSharePermission, REQUEST)

#define EnableSharingWithAwsOrganizationAsync(...)  SubmitAsync(&RAMClient::EnableSharingWithAwsOrganization, __VA_ARGS__)
#define EnableSharingWithAwsOrganizationCallable(REQUEST)  SubmitCallable(&RAMClient::EnableSharingWithAwsOrganization, REQUEST)

#define GetPermissionAsync(...)  SubmitAsync(&RAMClient::GetPermission, __VA_ARGS__)
#define GetPermissionCallable(REQUEST)  SubmitCallable(&RAMClient::GetPermission, REQUEST)

#define GetResourcePoliciesAsync(...)  SubmitAsync(&RAMClient::GetResourcePolicies, __VA_ARGS__)
#define GetResourcePoliciesCallable(REQUEST)  SubmitCallable(&RAMClient::GetResourcePolicies, REQUEST)

#define GetResourceShareAssociationsAsync(...)  SubmitAsync(&RAMClient::GetResourceShareAssociations, __VA_ARGS__)
#define GetResourceShareAssociationsCallable(REQUEST)  SubmitCallable(&RAMClient::GetResourceShareAssociations, REQUEST)

#define GetResourceShareInvitationsAsync(...)  SubmitAsync(&RAMClient::GetResourceShareInvitations, __VA_ARGS__)
#define GetResourceShareInvitationsCallable(REQUEST)  SubmitCallable(&RAMClient::GetResourceShareInvitations, REQUEST)

#define GetResourceSharesAsync(...)  SubmitAsync(&RAMClient::GetResourceShares, __VA_ARGS__)
#define GetResourceSharesCallable(REQUEST)  SubmitCallable(&RAMClient::GetResourceShares, REQUEST)

#define ListPendingInvitationResourcesAsync(...)  SubmitAsync(&RAMClient::ListPendingInvitationResources, __VA_ARGS__)
#define ListPendingInvitationResourcesCallable(REQUEST)  SubmitCallable(&RAMClient::ListPendingInvitationResources, REQUEST)

#define ListPermissionVersionsAsync(...)  SubmitAsync(&RAMClient::ListPermissionVersions, __VA_ARGS__)
#define ListPermissionVersionsCallable(REQUEST)  SubmitCallable(&RAMClient::ListPermissionVersions, REQUEST)

#define ListPermissionsAsync(...)  SubmitAsync(&RAMClient::ListPermissions, __VA_ARGS__)
#define ListPermissionsCallable(REQUEST)  SubmitCallable(&RAMClient::ListPermissions, REQUEST)

#define ListPrincipalsAsync(...)  SubmitAsync(&RAMClient::ListPrincipals, __VA_ARGS__)
#define ListPrincipalsCallable(REQUEST)  SubmitCallable(&RAMClient::ListPrincipals, REQUEST)

#define ListResourceSharePermissionsAsync(...)  SubmitAsync(&RAMClient::ListResourceSharePermissions, __VA_ARGS__)
#define ListResourceSharePermissionsCallable(REQUEST)  SubmitCallable(&RAMClient::ListResourceSharePermissions, REQUEST)

#define ListResourceTypesAsync(...)  SubmitAsync(&RAMClient::ListResourceTypes, __VA_ARGS__)
#define ListResourceTypesCallable(REQUEST)  SubmitCallable(&RAMClient::ListResourceTypes, REQUEST)

#define ListResourcesAsync(...)  SubmitAsync(&RAMClient::ListResources, __VA_ARGS__)
#define ListResourcesCallable(REQUEST)  SubmitCallable(&RAMClient::ListResources, REQUEST)

#define PromoteResourceShareCreatedFromPolicyAsync(...)  SubmitAsync(&RAMClient::PromoteResourceShareCreatedFromPolicy, __VA_ARGS__)
#define PromoteResourceShareCreatedFromPolicyCallable(REQUEST)  SubmitCallable(&RAMClient::PromoteResourceShareCreatedFromPolicy, REQUEST)

#define RejectResourceShareInvitationAsync(...)  SubmitAsync(&RAMClient::RejectResourceShareInvitation, __VA_ARGS__)
#define RejectResourceShareInvitationCallable(REQUEST)  SubmitCallable(&RAMClient::RejectResourceShareInvitation, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&RAMClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&RAMClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&RAMClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&RAMClient::UntagResource, REQUEST)

#define UpdateResourceShareAsync(...)  SubmitAsync(&RAMClient::UpdateResourceShare, __VA_ARGS__)
#define UpdateResourceShareCallable(REQUEST)  SubmitCallable(&RAMClient::UpdateResourceShare, REQUEST)

