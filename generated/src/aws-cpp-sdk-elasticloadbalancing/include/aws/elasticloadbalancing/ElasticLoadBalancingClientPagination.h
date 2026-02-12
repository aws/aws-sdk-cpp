/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersPaginationTraits.h>

namespace Aws {
namespace ElasticLoadBalancing {

using DescribeLoadBalancersPaginator =
    Aws::Utils::Pagination::Paginator<ElasticLoadBalancingClient, Model::DescribeLoadBalancersRequest,
                                      Pagination::DescribeLoadBalancersPaginationTraits<ElasticLoadBalancingClient>>;

}  // namespace ElasticLoadBalancing
}  // namespace Aws
