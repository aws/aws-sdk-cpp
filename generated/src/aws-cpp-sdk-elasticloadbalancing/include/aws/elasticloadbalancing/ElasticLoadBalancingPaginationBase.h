/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace ElasticLoadBalancing {

template <typename DerivedClient>
class ElasticLoadBalancingPaginationBase {
 public:
  /**
   * Create a paginator for DescribeLoadBalancers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLoadBalancersRequest,
                                    Pagination::DescribeLoadBalancersPaginationTraits<DerivedClient>>
  DescribeLoadBalancersPaginator(const Model::DescribeLoadBalancersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLoadBalancersRequest,
                                             Pagination::DescribeLoadBalancersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ElasticLoadBalancing
}  // namespace Aws
