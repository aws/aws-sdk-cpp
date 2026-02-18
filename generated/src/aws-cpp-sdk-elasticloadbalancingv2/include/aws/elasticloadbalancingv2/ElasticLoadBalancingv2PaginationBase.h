/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenersPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreAssociationsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocationsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoresPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2Client;

template <typename DerivedClient>
class ElasticLoadBalancingv2PaginationBase {
 public:
  /**
   * Create a paginator for DescribeAccountLimits operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountLimitsRequest,
                                    Pagination::DescribeAccountLimitsPaginationTraits<DerivedClient>>
  DescribeAccountLimitsPaginator(const Model::DescribeAccountLimitsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAccountLimitsRequest,
                                             Pagination::DescribeAccountLimitsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeListenerCertificates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeListenerCertificatesRequest,
                                    Pagination::DescribeListenerCertificatesPaginationTraits<DerivedClient>>
  DescribeListenerCertificatesPaginator(const Model::DescribeListenerCertificatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeListenerCertificatesRequest,
                                             Pagination::DescribeListenerCertificatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeListeners operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeListenersRequest,
                                    Pagination::DescribeListenersPaginationTraits<DerivedClient>>
  DescribeListenersPaginator(const Model::DescribeListenersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeListenersRequest,
                                             Pagination::DescribeListenersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLoadBalancers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLoadBalancersRequest,
                                    Pagination::DescribeLoadBalancersPaginationTraits<DerivedClient>>
  DescribeLoadBalancersPaginator(const Model::DescribeLoadBalancersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLoadBalancersRequest,
                                             Pagination::DescribeLoadBalancersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRulesRequest, Pagination::DescribeRulesPaginationTraits<DerivedClient>>
  DescribeRulesPaginator(const Model::DescribeRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRulesRequest,
                                             Pagination::DescribeRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for DescribeTargetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTargetGroupsRequest,
                                    Pagination::DescribeTargetGroupsPaginationTraits<DerivedClient>>
  DescribeTargetGroupsPaginator(const Model::DescribeTargetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTargetGroupsRequest,
                                             Pagination::DescribeTargetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTrustStoreAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustStoreAssociationsRequest,
                                    Pagination::DescribeTrustStoreAssociationsPaginationTraits<DerivedClient>>
  DescribeTrustStoreAssociationsPaginator(const Model::DescribeTrustStoreAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustStoreAssociationsRequest,
                                             Pagination::DescribeTrustStoreAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTrustStoreRevocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustStoreRevocationsRequest,
                                    Pagination::DescribeTrustStoreRevocationsPaginationTraits<DerivedClient>>
  DescribeTrustStoreRevocationsPaginator(const Model::DescribeTrustStoreRevocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustStoreRevocationsRequest,
                                             Pagination::DescribeTrustStoreRevocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTrustStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustStoresRequest,
                                    Pagination::DescribeTrustStoresPaginationTraits<DerivedClient>>
  DescribeTrustStoresPaginator(const Model::DescribeTrustStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrustStoresRequest,
                                             Pagination::DescribeTrustStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
