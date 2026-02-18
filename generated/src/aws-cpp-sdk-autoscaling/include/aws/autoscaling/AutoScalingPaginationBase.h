/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace AutoScaling {

class AutoScalingClient;

template <typename DerivedClient>
class AutoScalingPaginationBase {
 public:
  /**
   * Create a paginator for DescribeAutoScalingGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutoScalingGroupsRequest,
                                    Pagination::DescribeAutoScalingGroupsPaginationTraits<DerivedClient>>
  DescribeAutoScalingGroupsPaginator(const Model::DescribeAutoScalingGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutoScalingGroupsRequest,
                                             Pagination::DescribeAutoScalingGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAutoScalingInstances operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutoScalingInstancesRequest,
                                    Pagination::DescribeAutoScalingInstancesPaginationTraits<DerivedClient>>
  DescribeAutoScalingInstancesPaginator(const Model::DescribeAutoScalingInstancesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutoScalingInstancesRequest,
                                             Pagination::DescribeAutoScalingInstancesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceRefreshes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceRefreshesRequest,
                                    Pagination::DescribeInstanceRefreshesPaginationTraits<DerivedClient>>
  DescribeInstanceRefreshesPaginator(const Model::DescribeInstanceRefreshesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceRefreshesRequest,
                                             Pagination::DescribeInstanceRefreshesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLaunchConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchConfigurationsRequest,
                                    Pagination::DescribeLaunchConfigurationsPaginationTraits<DerivedClient>>
  DescribeLaunchConfigurationsPaginator(const Model::DescribeLaunchConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLaunchConfigurationsRequest,
                                             Pagination::DescribeLaunchConfigurationsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for DescribeLoadBalancerTargetGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLoadBalancerTargetGroupsRequest,
                                    Pagination::DescribeLoadBalancerTargetGroupsPaginationTraits<DerivedClient>>
  DescribeLoadBalancerTargetGroupsPaginator(const Model::DescribeLoadBalancerTargetGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLoadBalancerTargetGroupsRequest,
                                             Pagination::DescribeLoadBalancerTargetGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeNotificationConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNotificationConfigurationsRequest,
                                    Pagination::DescribeNotificationConfigurationsPaginationTraits<DerivedClient>>
  DescribeNotificationConfigurationsPaginator(const Model::DescribeNotificationConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeNotificationConfigurationsRequest,
                                             Pagination::DescribeNotificationConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePoliciesRequest,
                                    Pagination::DescribePoliciesPaginationTraits<DerivedClient>>
  DescribePoliciesPaginator(const Model::DescribePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePoliciesRequest,
                                             Pagination::DescribePoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeScalingActivities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingActivitiesRequest,
                                    Pagination::DescribeScalingActivitiesPaginationTraits<DerivedClient>>
  DescribeScalingActivitiesPaginator(const Model::DescribeScalingActivitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingActivitiesRequest,
                                             Pagination::DescribeScalingActivitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScheduledActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledActionsRequest,
                                    Pagination::DescribeScheduledActionsPaginationTraits<DerivedClient>>
  DescribeScheduledActionsPaginator(const Model::DescribeScheduledActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledActionsRequest,
                                             Pagination::DescribeScheduledActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeTags operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest, Pagination::DescribeTagsPaginationTraits<DerivedClient>>
  DescribeTagsPaginator(const Model::DescribeTagsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTagsRequest,
                                             Pagination::DescribeTagsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for DescribeTrafficSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficSourcesRequest,
                                    Pagination::DescribeTrafficSourcesPaginationTraits<DerivedClient>>
  DescribeTrafficSourcesPaginator(const Model::DescribeTrafficSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeTrafficSourcesRequest,
                                             Pagination::DescribeTrafficSourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeWarmPool operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWarmPoolRequest,
                                    Pagination::DescribeWarmPoolPaginationTraits<DerivedClient>>
  DescribeWarmPoolPaginator(const Model::DescribeWarmPoolRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeWarmPoolRequest,
                                             Pagination::DescribeWarmPoolPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace AutoScaling
}  // namespace Aws
