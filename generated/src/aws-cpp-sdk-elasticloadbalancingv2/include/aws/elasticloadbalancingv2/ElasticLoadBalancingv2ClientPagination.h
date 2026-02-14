/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Client.h>
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenersPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreAssociationsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocationsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoresPaginationTraits.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {

using DescribeAccountLimitsPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeAccountLimitsRequest,
                                      Pagination::DescribeAccountLimitsPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeListenerCertificatesPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeListenerCertificatesRequest,
                                      Pagination::DescribeListenerCertificatesPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeListenersPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeListenersRequest,
                                      Pagination::DescribeListenersPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeLoadBalancersPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeLoadBalancersRequest,
                                      Pagination::DescribeLoadBalancersPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeRulesPaginator = Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeRulesRequest,
                                                                 Pagination::DescribeRulesPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeTargetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeTargetGroupsRequest,
                                      Pagination::DescribeTargetGroupsPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeTrustStoreAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeTrustStoreAssociationsRequest,
                                      Pagination::DescribeTrustStoreAssociationsPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeTrustStoreRevocationsPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeTrustStoreRevocationsRequest,
                                      Pagination::DescribeTrustStoreRevocationsPaginationTraits<ElasticLoadBalancingv2Client>>;
using DescribeTrustStoresPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingv2Client, Model::DescribeTrustStoresRequest,
                                      Pagination::DescribeTrustStoresPaginationTraits<ElasticLoadBalancingv2Client>>;

}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
