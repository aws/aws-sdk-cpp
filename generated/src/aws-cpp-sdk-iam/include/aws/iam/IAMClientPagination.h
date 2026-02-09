/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iam/IAMClient.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsPaginationTraits.h>
#include <aws/iam/model/GetGroupPaginationTraits.h>
#include <aws/iam/model/ListAccessKeysPaginationTraits.h>
#include <aws/iam/model/ListAccountAliasesPaginationTraits.h>
#include <aws/iam/model/ListAttachedGroupPoliciesPaginationTraits.h>
#include <aws/iam/model/ListAttachedRolePoliciesPaginationTraits.h>
#include <aws/iam/model/ListAttachedUserPoliciesPaginationTraits.h>
#include <aws/iam/model/ListEntitiesForPolicyPaginationTraits.h>
#include <aws/iam/model/ListGroupPoliciesPaginationTraits.h>
#include <aws/iam/model/ListGroupsForUserPaginationTraits.h>
#include <aws/iam/model/ListGroupsPaginationTraits.h>
#include <aws/iam/model/ListInstanceProfileTagsPaginationTraits.h>
#include <aws/iam/model/ListInstanceProfilesForRolePaginationTraits.h>
#include <aws/iam/model/ListInstanceProfilesPaginationTraits.h>
#include <aws/iam/model/ListMFADeviceTagsPaginationTraits.h>
#include <aws/iam/model/ListMFADevicesPaginationTraits.h>
#include <aws/iam/model/ListOpenIDConnectProviderTagsPaginationTraits.h>
#include <aws/iam/model/ListPoliciesPaginationTraits.h>
#include <aws/iam/model/ListPolicyTagsPaginationTraits.h>
#include <aws/iam/model/ListPolicyVersionsPaginationTraits.h>
#include <aws/iam/model/ListRolePoliciesPaginationTraits.h>
#include <aws/iam/model/ListRoleTagsPaginationTraits.h>
#include <aws/iam/model/ListRolesPaginationTraits.h>
#include <aws/iam/model/ListSAMLProviderTagsPaginationTraits.h>
#include <aws/iam/model/ListSSHPublicKeysPaginationTraits.h>
#include <aws/iam/model/ListServerCertificateTagsPaginationTraits.h>
#include <aws/iam/model/ListServerCertificatesPaginationTraits.h>
#include <aws/iam/model/ListSigningCertificatesPaginationTraits.h>
#include <aws/iam/model/ListUserPoliciesPaginationTraits.h>
#include <aws/iam/model/ListUserTagsPaginationTraits.h>
#include <aws/iam/model/ListUsersPaginationTraits.h>
#include <aws/iam/model/ListVirtualMFADevicesPaginationTraits.h>
#include <aws/iam/model/SimulateCustomPolicyPaginationTraits.h>
#include <aws/iam/model/SimulatePrincipalPolicyPaginationTraits.h>

namespace Aws {
namespace IAM {

using GetAccountAuthorizationDetailsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::GetAccountAuthorizationDetailsRequest,
                                      Pagination::GetAccountAuthorizationDetailsPaginationTraits<IAMClient>>;
using GetGroupPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::GetGroupRequest, Pagination::GetGroupPaginationTraits<IAMClient>>;
using ListAccessKeysPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListAccessKeysRequest, Pagination::ListAccessKeysPaginationTraits<IAMClient>>;
using ListAccountAliasesPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListAccountAliasesRequest,
                                                                      Pagination::ListAccountAliasesPaginationTraits<IAMClient>>;
using ListAttachedGroupPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListAttachedGroupPoliciesRequest,
                                      Pagination::ListAttachedGroupPoliciesPaginationTraits<IAMClient>>;
using ListAttachedRolePoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListAttachedRolePoliciesRequest,
                                      Pagination::ListAttachedRolePoliciesPaginationTraits<IAMClient>>;
using ListAttachedUserPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListAttachedUserPoliciesRequest,
                                      Pagination::ListAttachedUserPoliciesPaginationTraits<IAMClient>>;
using ListEntitiesForPolicyPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListEntitiesForPolicyRequest,
                                                                         Pagination::ListEntitiesForPolicyPaginationTraits<IAMClient>>;
using ListGroupPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListGroupPoliciesRequest, Pagination::ListGroupPoliciesPaginationTraits<IAMClient>>;
using ListGroupsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<IAMClient>>;
using ListGroupsForUserPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListGroupsForUserRequest, Pagination::ListGroupsForUserPaginationTraits<IAMClient>>;
using ListInstanceProfilesPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListInstanceProfilesRequest,
                                                                        Pagination::ListInstanceProfilesPaginationTraits<IAMClient>>;
using ListInstanceProfilesForRolePaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListInstanceProfilesForRoleRequest,
                                      Pagination::ListInstanceProfilesForRolePaginationTraits<IAMClient>>;
using ListInstanceProfileTagsPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListInstanceProfileTagsRequest,
                                                                           Pagination::ListInstanceProfileTagsPaginationTraits<IAMClient>>;
using ListMFADevicesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListMFADevicesRequest, Pagination::ListMFADevicesPaginationTraits<IAMClient>>;
using ListMFADeviceTagsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListMFADeviceTagsRequest, Pagination::ListMFADeviceTagsPaginationTraits<IAMClient>>;
using ListOpenIDConnectProviderTagsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListOpenIDConnectProviderTagsRequest,
                                      Pagination::ListOpenIDConnectProviderTagsPaginationTraits<IAMClient>>;
using ListPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<IAMClient>>;
using ListPolicyTagsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListPolicyTagsRequest, Pagination::ListPolicyTagsPaginationTraits<IAMClient>>;
using ListPolicyVersionsPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListPolicyVersionsRequest,
                                                                      Pagination::ListPolicyVersionsPaginationTraits<IAMClient>>;
using ListRolePoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListRolePoliciesRequest, Pagination::ListRolePoliciesPaginationTraits<IAMClient>>;
using ListRolesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListRolesRequest, Pagination::ListRolesPaginationTraits<IAMClient>>;
using ListRoleTagsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListRoleTagsRequest, Pagination::ListRoleTagsPaginationTraits<IAMClient>>;
using ListSAMLProviderTagsPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListSAMLProviderTagsRequest,
                                                                        Pagination::ListSAMLProviderTagsPaginationTraits<IAMClient>>;
using ListServerCertificatesPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListServerCertificatesRequest,
                                                                          Pagination::ListServerCertificatesPaginationTraits<IAMClient>>;
using ListServerCertificateTagsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListServerCertificateTagsRequest,
                                      Pagination::ListServerCertificateTagsPaginationTraits<IAMClient>>;
using ListSigningCertificatesPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListSigningCertificatesRequest,
                                                                           Pagination::ListSigningCertificatesPaginationTraits<IAMClient>>;
using ListSSHPublicKeysPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListSSHPublicKeysRequest, Pagination::ListSSHPublicKeysPaginationTraits<IAMClient>>;
using ListUserPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListUserPoliciesRequest, Pagination::ListUserPoliciesPaginationTraits<IAMClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<IAMClient>>;
using ListUserTagsPaginator =
    Aws::Utils::Pagination::Paginator<IAMClient, Model::ListUserTagsRequest, Pagination::ListUserTagsPaginationTraits<IAMClient>>;
using ListVirtualMFADevicesPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::ListVirtualMFADevicesRequest,
                                                                         Pagination::ListVirtualMFADevicesPaginationTraits<IAMClient>>;
using SimulateCustomPolicyPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::SimulateCustomPolicyRequest,
                                                                        Pagination::SimulateCustomPolicyPaginationTraits<IAMClient>>;
using SimulatePrincipalPolicyPaginator = Aws::Utils::Pagination::Paginator<IAMClient, Model::SimulatePrincipalPolicyRequest,
                                                                           Pagination::SimulatePrincipalPolicyPaginationTraits<IAMClient>>;

}  // namespace IAM
}  // namespace Aws
