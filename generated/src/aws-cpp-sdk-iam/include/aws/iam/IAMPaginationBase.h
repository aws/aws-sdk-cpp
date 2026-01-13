/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace IAM {

class IAMClient;

template <typename DerivedClient>
class IAMPaginationBase {
 public:
  /**
   * Create a paginator for GetAccountAuthorizationDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAccountAuthorizationDetailsRequest,
                                    Pagination::GetAccountAuthorizationDetailsPaginationTraits<DerivedClient>>
  GetAccountAuthorizationDetailsPaginator(const Model::GetAccountAuthorizationDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAccountAuthorizationDetailsRequest,
                                             Pagination::GetAccountAuthorizationDetailsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetGroupRequest, Pagination::GetGroupPaginationTraits<DerivedClient>>
  GetGroupPaginator(const Model::GetGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetGroupRequest, Pagination::GetGroupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessKeysRequest, Pagination::ListAccessKeysPaginationTraits<DerivedClient>>
  ListAccessKeysPaginator(const Model::ListAccessKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessKeysRequest,
                                             Pagination::ListAccessKeysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListAccountAliases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAliasesRequest,
                                    Pagination::ListAccountAliasesPaginationTraits<DerivedClient>>
  ListAccountAliasesPaginator(const Model::ListAccountAliasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAliasesRequest,
                                             Pagination::ListAccountAliasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttachedGroupPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedGroupPoliciesRequest,
                                    Pagination::ListAttachedGroupPoliciesPaginationTraits<DerivedClient>>
  ListAttachedGroupPoliciesPaginator(const Model::ListAttachedGroupPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedGroupPoliciesRequest,
                                             Pagination::ListAttachedGroupPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttachedRolePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedRolePoliciesRequest,
                                    Pagination::ListAttachedRolePoliciesPaginationTraits<DerivedClient>>
  ListAttachedRolePoliciesPaginator(const Model::ListAttachedRolePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedRolePoliciesRequest,
                                             Pagination::ListAttachedRolePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAttachedUserPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedUserPoliciesRequest,
                                    Pagination::ListAttachedUserPoliciesPaginationTraits<DerivedClient>>
  ListAttachedUserPoliciesPaginator(const Model::ListAttachedUserPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAttachedUserPoliciesRequest,
                                             Pagination::ListAttachedUserPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEntitiesForPolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesForPolicyRequest,
                                    Pagination::ListEntitiesForPolicyPaginationTraits<DerivedClient>>
  ListEntitiesForPolicyPaginator(const Model::ListEntitiesForPolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntitiesForPolicyRequest,
                                             Pagination::ListEntitiesForPolicyPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroupPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupPoliciesRequest,
                                    Pagination::ListGroupPoliciesPaginationTraits<DerivedClient>>
  ListGroupPoliciesPaginator(const Model::ListGroupPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupPoliciesRequest,
                                             Pagination::ListGroupPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<DerivedClient>>
  ListGroupsPaginator(const Model::ListGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest,
                                             Pagination::ListGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListGroupsForUser operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsForUserRequest,
                                    Pagination::ListGroupsForUserPaginationTraits<DerivedClient>>
  ListGroupsForUserPaginator(const Model::ListGroupsForUserRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsForUserRequest,
                                             Pagination::ListGroupsForUserPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstanceProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceProfilesRequest,
                                    Pagination::ListInstanceProfilesPaginationTraits<DerivedClient>>
  ListInstanceProfilesPaginator(const Model::ListInstanceProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceProfilesRequest,
                                             Pagination::ListInstanceProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstanceProfilesForRole operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceProfilesForRoleRequest,
                                    Pagination::ListInstanceProfilesForRolePaginationTraits<DerivedClient>>
  ListInstanceProfilesForRolePaginator(const Model::ListInstanceProfilesForRoleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceProfilesForRoleRequest,
                                             Pagination::ListInstanceProfilesForRolePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInstanceProfileTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceProfileTagsRequest,
                                    Pagination::ListInstanceProfileTagsPaginationTraits<DerivedClient>>
  ListInstanceProfileTagsPaginator(const Model::ListInstanceProfileTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInstanceProfileTagsRequest,
                                             Pagination::ListInstanceProfileTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMFADevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMFADevicesRequest, Pagination::ListMFADevicesPaginationTraits<DerivedClient>>
  ListMFADevicesPaginator(const Model::ListMFADevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMFADevicesRequest,
                                             Pagination::ListMFADevicesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListMFADeviceTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMFADeviceTagsRequest,
                                    Pagination::ListMFADeviceTagsPaginationTraits<DerivedClient>>
  ListMFADeviceTagsPaginator(const Model::ListMFADeviceTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMFADeviceTagsRequest,
                                             Pagination::ListMFADeviceTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOpenIDConnectProviderTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpenIDConnectProviderTagsRequest,
                                    Pagination::ListOpenIDConnectProviderTagsPaginationTraits<DerivedClient>>
  ListOpenIDConnectProviderTagsPaginator(const Model::ListOpenIDConnectProviderTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpenIDConnectProviderTagsRequest,
                                             Pagination::ListOpenIDConnectProviderTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPolicyTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyTagsRequest, Pagination::ListPolicyTagsPaginationTraits<DerivedClient>>
  ListPolicyTagsPaginator(const Model::ListPolicyTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyTagsRequest,
                                             Pagination::ListPolicyTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListPolicyVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyVersionsRequest,
                                    Pagination::ListPolicyVersionsPaginationTraits<DerivedClient>>
  ListPolicyVersionsPaginator(const Model::ListPolicyVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyVersionsRequest,
                                             Pagination::ListPolicyVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRolePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRolePoliciesRequest,
                                    Pagination::ListRolePoliciesPaginationTraits<DerivedClient>>
  ListRolePoliciesPaginator(const Model::ListRolePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRolePoliciesRequest,
                                             Pagination::ListRolePoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRoles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRolesRequest, Pagination::ListRolesPaginationTraits<DerivedClient>>
  ListRolesPaginator(const Model::ListRolesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRolesRequest, Pagination::ListRolesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRoleTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoleTagsRequest, Pagination::ListRoleTagsPaginationTraits<DerivedClient>>
  ListRoleTagsPaginator(const Model::ListRoleTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoleTagsRequest,
                                             Pagination::ListRoleTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSAMLProviderTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSAMLProviderTagsRequest,
                                    Pagination::ListSAMLProviderTagsPaginationTraits<DerivedClient>>
  ListSAMLProviderTagsPaginator(const Model::ListSAMLProviderTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSAMLProviderTagsRequest,
                                             Pagination::ListSAMLProviderTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServerCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServerCertificatesRequest,
                                    Pagination::ListServerCertificatesPaginationTraits<DerivedClient>>
  ListServerCertificatesPaginator(const Model::ListServerCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServerCertificatesRequest,
                                             Pagination::ListServerCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListServerCertificateTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServerCertificateTagsRequest,
                                    Pagination::ListServerCertificateTagsPaginationTraits<DerivedClient>>
  ListServerCertificateTagsPaginator(const Model::ListServerCertificateTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListServerCertificateTagsRequest,
                                             Pagination::ListServerCertificateTagsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSigningCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningCertificatesRequest,
                                    Pagination::ListSigningCertificatesPaginationTraits<DerivedClient>>
  ListSigningCertificatesPaginator(const Model::ListSigningCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningCertificatesRequest,
                                             Pagination::ListSigningCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSSHPublicKeys operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSSHPublicKeysRequest,
                                    Pagination::ListSSHPublicKeysPaginationTraits<DerivedClient>>
  ListSSHPublicKeysPaginator(const Model::ListSSHPublicKeysRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSSHPublicKeysRequest,
                                             Pagination::ListSSHPublicKeysPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserPoliciesRequest,
                                    Pagination::ListUserPoliciesPaginationTraits<DerivedClient>>
  ListUserPoliciesPaginator(const Model::ListUserPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserPoliciesRequest,
                                             Pagination::ListUserPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserTagsRequest, Pagination::ListUserTagsPaginationTraits<DerivedClient>>
  ListUserTagsPaginator(const Model::ListUserTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserTagsRequest,
                                             Pagination::ListUserTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListVirtualMFADevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualMFADevicesRequest,
                                    Pagination::ListVirtualMFADevicesPaginationTraits<DerivedClient>>
  ListVirtualMFADevicesPaginator(const Model::ListVirtualMFADevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVirtualMFADevicesRequest,
                                             Pagination::ListVirtualMFADevicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SimulateCustomPolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SimulateCustomPolicyRequest,
                                    Pagination::SimulateCustomPolicyPaginationTraits<DerivedClient>>
  SimulateCustomPolicyPaginator(const Model::SimulateCustomPolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SimulateCustomPolicyRequest,
                                             Pagination::SimulateCustomPolicyPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SimulatePrincipalPolicy operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SimulatePrincipalPolicyRequest,
                                    Pagination::SimulatePrincipalPolicyPaginationTraits<DerivedClient>>
  SimulatePrincipalPolicyPaginator(const Model::SimulatePrincipalPolicyRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SimulatePrincipalPolicyRequest,
                                             Pagination::SimulatePrincipalPolicyPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IAM
}  // namespace Aws
