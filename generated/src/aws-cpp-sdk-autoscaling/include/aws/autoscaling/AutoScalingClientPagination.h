/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingClient.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeAutoScalingInstancesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeInstanceRefreshesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeLaunchConfigurationsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeLoadBalancerTargetGroupsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeLoadBalancersPaginationTraits.h>
#include <aws/autoscaling/model/DescribeNotificationConfigurationsPaginationTraits.h>
#include <aws/autoscaling/model/DescribePoliciesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeScalingActivitiesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeScheduledActionsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeTagsPaginationTraits.h>
#include <aws/autoscaling/model/DescribeTrafficSourcesPaginationTraits.h>
#include <aws/autoscaling/model/DescribeWarmPoolPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace AutoScaling {

using DescribeAutoScalingGroupsPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeAutoScalingGroupsRequest,
                                      Pagination::DescribeAutoScalingGroupsPaginationTraits<AutoScalingClient>>;
using DescribeAutoScalingInstancesPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeAutoScalingInstancesRequest,
                                      Pagination::DescribeAutoScalingInstancesPaginationTraits<AutoScalingClient>>;
using DescribeInstanceRefreshesPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeInstanceRefreshesRequest,
                                      Pagination::DescribeInstanceRefreshesPaginationTraits<AutoScalingClient>>;
using DescribeLaunchConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeLaunchConfigurationsRequest,
                                      Pagination::DescribeLaunchConfigurationsPaginationTraits<AutoScalingClient>>;
using DescribeLoadBalancersPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeLoadBalancersRequest,
                                      Pagination::DescribeLoadBalancersPaginationTraits<AutoScalingClient>>;
using DescribeLoadBalancerTargetGroupsPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeLoadBalancerTargetGroupsRequest,
                                      Pagination::DescribeLoadBalancerTargetGroupsPaginationTraits<AutoScalingClient>>;
using DescribeNotificationConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeNotificationConfigurationsRequest,
                                      Pagination::DescribeNotificationConfigurationsPaginationTraits<AutoScalingClient>>;
using DescribePoliciesPaginator = Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribePoliciesRequest,
                                                                    Pagination::DescribePoliciesPaginationTraits<AutoScalingClient>>;
using DescribeScalingActivitiesPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeScalingActivitiesRequest,
                                      Pagination::DescribeScalingActivitiesPaginationTraits<AutoScalingClient>>;
using DescribeScheduledActionsPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeScheduledActionsRequest,
                                      Pagination::DescribeScheduledActionsPaginationTraits<AutoScalingClient>>;
using DescribeTagsPaginator = Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeTagsRequest,
                                                                Pagination::DescribeTagsPaginationTraits<AutoScalingClient>>;
using DescribeTrafficSourcesPaginator =
    Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeTrafficSourcesRequest,
                                      Pagination::DescribeTrafficSourcesPaginationTraits<AutoScalingClient>>;
using DescribeWarmPoolPaginator = Aws::Utils::Pagination::Paginator<AutoScalingClient, Model::DescribeWarmPoolRequest,
                                                                    Pagination::DescribeWarmPoolPaginationTraits<AutoScalingClient>>;

}  // namespace AutoScaling
}  // namespace Aws
