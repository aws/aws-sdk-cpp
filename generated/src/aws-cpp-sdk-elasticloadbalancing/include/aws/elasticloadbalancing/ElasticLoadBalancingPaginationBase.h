/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElasticLoadBalancing {

class ElasticLoadBalancingClient;

template <typename DerivedClient>
class ElasticLoadBalancingPaginationBase {
 public:
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
};
}  // namespace ElasticLoadBalancing
}  // namespace Aws
