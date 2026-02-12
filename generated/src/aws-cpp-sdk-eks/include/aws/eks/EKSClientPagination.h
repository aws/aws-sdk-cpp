/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/eks/EKSClient.h>
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

namespace Aws {
namespace EKS {

using DescribeAddonVersionsPaginator = Aws::Utils::Pagination::Paginator<EKSClient, Model::DescribeAddonVersionsRequest,
                                                                         Pagination::DescribeAddonVersionsPaginationTraits<EKSClient>>;
using DescribeClusterVersionsPaginator = Aws::Utils::Pagination::Paginator<EKSClient, Model::DescribeClusterVersionsRequest,
                                                                           Pagination::DescribeClusterVersionsPaginationTraits<EKSClient>>;
using ListAccessEntriesPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListAccessEntriesRequest, Pagination::ListAccessEntriesPaginationTraits<EKSClient>>;
using ListAccessPoliciesPaginator = Aws::Utils::Pagination::Paginator<EKSClient, Model::ListAccessPoliciesRequest,
                                                                      Pagination::ListAccessPoliciesPaginationTraits<EKSClient>>;
using ListAddonsPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListAddonsRequest, Pagination::ListAddonsPaginationTraits<EKSClient>>;
using ListAssociatedAccessPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListAssociatedAccessPoliciesRequest,
                                      Pagination::ListAssociatedAccessPoliciesPaginationTraits<EKSClient>>;
using ListCapabilitiesPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListCapabilitiesRequest, Pagination::ListCapabilitiesPaginationTraits<EKSClient>>;
using ListClustersPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListClustersRequest, Pagination::ListClustersPaginationTraits<EKSClient>>;
using ListEksAnywhereSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListEksAnywhereSubscriptionsRequest,
                                      Pagination::ListEksAnywhereSubscriptionsPaginationTraits<EKSClient>>;
using ListFargateProfilesPaginator = Aws::Utils::Pagination::Paginator<EKSClient, Model::ListFargateProfilesRequest,
                                                                       Pagination::ListFargateProfilesPaginationTraits<EKSClient>>;
using ListIdentityProviderConfigsPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListIdentityProviderConfigsRequest,
                                      Pagination::ListIdentityProviderConfigsPaginationTraits<EKSClient>>;
using ListInsightsPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListInsightsRequest, Pagination::ListInsightsPaginationTraits<EKSClient>>;
using ListNodegroupsPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListNodegroupsRequest, Pagination::ListNodegroupsPaginationTraits<EKSClient>>;
using ListPodIdentityAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListPodIdentityAssociationsRequest,
                                      Pagination::ListPodIdentityAssociationsPaginationTraits<EKSClient>>;
using ListUpdatesPaginator =
    Aws::Utils::Pagination::Paginator<EKSClient, Model::ListUpdatesRequest, Pagination::ListUpdatesPaginationTraits<EKSClient>>;

}  // namespace EKS
}  // namespace Aws
