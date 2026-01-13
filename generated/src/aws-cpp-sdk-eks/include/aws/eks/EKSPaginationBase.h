/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/eks/model/DescribeAddonVersionsPaginationTraits.h>
#include <aws/eks/model/DescribeClusterVersionsPaginationTraits.h>
#include <aws/eks/model/ListAccessEntriesPaginationTraits.h>
#include <aws/eks/model/ListAccessPoliciesPaginationTraits.h>
#include <aws/eks/model/ListAddonsPaginationTraits.h>
#include <aws/eks/model/ListAssociatedAccessPoliciesPaginationTraits.h>
#include <aws/eks/model/ListCapabilitiesPaginationTraits.h>
#include <aws/eks/model/ListClustersPaginationTraits.h>
#include <aws/eks/model/ListEksAnywhereSubscriptionsPaginationTraits.h>
#include <aws/eks/model/ListFargateProfilesPaginationTraits.h>
#include <aws/eks/model/ListIdentityProviderConfigsPaginationTraits.h>
#include <aws/eks/model/ListInsightsPaginationTraits.h>
#include <aws/eks/model/ListNodegroupsPaginationTraits.h>
#include <aws/eks/model/ListPodIdentityAssociationsPaginationTraits.h>
#include <aws/eks/model/ListUpdatesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace EKS {

class EKSClient;

template <typename DerivedClient>
class EKSPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAddonVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddonVersionsRequest,
                                    Pagination::DescribeAddonVersionsPaginationTraits<DerivedClient>>
  DescribeAddonVersionsPaginator(const Model::DescribeAddonVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAddonVersionsRequest,
                                             Pagination::DescribeAddonVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeClusterVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterVersionsRequest,
                                    Pagination::DescribeClusterVersionsPaginationTraits<DerivedClient>>
  DescribeClusterVersionsPaginator(const Model::DescribeClusterVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeClusterVersionsRequest,
                                             Pagination::DescribeClusterVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessEntries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessEntriesRequest,
                                    Pagination::ListAccessEntriesPaginationTraits<DerivedClient>>
  ListAccessEntriesPaginator(const Model::ListAccessEntriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessEntriesRequest,
                                             Pagination::ListAccessEntriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccessPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPoliciesRequest,
                                    Pagination::ListAccessPoliciesPaginationTraits<DerivedClient>>
  ListAccessPoliciesPaginator(const Model::ListAccessPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccessPoliciesRequest,
                                             Pagination::ListAccessPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAddons operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddonsRequest, Pagination::ListAddonsPaginationTraits<DerivedClient>>
  ListAddonsPaginator(const Model::ListAddonsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAddonsRequest,
                                             Pagination::ListAddonsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListAssociatedAccessPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedAccessPoliciesRequest,
                                    Pagination::ListAssociatedAccessPoliciesPaginationTraits<DerivedClient>>
  ListAssociatedAccessPoliciesPaginator(const Model::ListAssociatedAccessPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedAccessPoliciesRequest,
                                             Pagination::ListAssociatedAccessPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCapabilities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapabilitiesRequest,
                                    Pagination::ListCapabilitiesPaginationTraits<DerivedClient>>
  ListCapabilitiesPaginator(const Model::ListCapabilitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCapabilitiesRequest,
                                             Pagination::ListCapabilitiesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<DerivedClient>>
  ListClustersPaginator(const Model::ListClustersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClustersRequest,
                                             Pagination::ListClustersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEksAnywhereSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEksAnywhereSubscriptionsRequest,
                                    Pagination::ListEksAnywhereSubscriptionsPaginationTraits<DerivedClient>>
  ListEksAnywhereSubscriptionsPaginator(const Model::ListEksAnywhereSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEksAnywhereSubscriptionsRequest,
                                             Pagination::ListEksAnywhereSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFargateProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFargateProfilesRequest,
                                    Pagination::ListFargateProfilesPaginationTraits<DerivedClient>>
  ListFargateProfilesPaginator(const Model::ListFargateProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFargateProfilesRequest,
                                             Pagination::ListFargateProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListIdentityProviderConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProviderConfigsRequest,
                                    Pagination::ListIdentityProviderConfigsPaginationTraits<DerivedClient>>
  ListIdentityProviderConfigsPaginator(const Model::ListIdentityProviderConfigsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProviderConfigsRequest,
                                             Pagination::ListIdentityProviderConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInsights operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsRequest, Pagination::ListInsightsPaginationTraits<DerivedClient>>
  ListInsightsPaginator(const Model::ListInsightsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsRequest,
                                             Pagination::ListInsightsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListNodegroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodegroupsRequest, Pagination::ListNodegroupsPaginationTraits<DerivedClient>>
  ListNodegroupsPaginator(const Model::ListNodegroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodegroupsRequest,
                                             Pagination::ListNodegroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListPodIdentityAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPodIdentityAssociationsRequest,
                                    Pagination::ListPodIdentityAssociationsPaginationTraits<DerivedClient>>
  ListPodIdentityAssociationsPaginator(const Model::ListPodIdentityAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPodIdentityAssociationsRequest,
                                             Pagination::ListPodIdentityAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUpdates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUpdatesRequest, Pagination::ListUpdatesPaginationTraits<DerivedClient>>
  ListUpdatesPaginator(const Model::ListUpdatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUpdatesRequest,
                                             Pagination::ListUpdatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace EKS
}  // namespace Aws
