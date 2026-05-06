/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/application-autoscaling/model/DescribeScalableTargetsPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ApplicationAutoScaling {

template <typename DerivedClient>
class ApplicationAutoScalingPaginationBase {
 public:
  /**
   * Create a paginator for DescribeScalableTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalableTargetsRequest,
                                    Pagination::DescribeScalableTargetsPaginationTraits<DerivedClient>>
  DescribeScalableTargetsPaginator(const Model::DescribeScalableTargetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalableTargetsRequest,
                                             Pagination::DescribeScalableTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScalingActivities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingActivitiesRequest,
                                    Pagination::DescribeScalingActivitiesPaginationTraits<DerivedClient>>
  DescribeScalingActivitiesPaginator(const Model::DescribeScalingActivitiesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingActivitiesRequest,
                                             Pagination::DescribeScalingActivitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScalingPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingPoliciesRequest,
                                    Pagination::DescribeScalingPoliciesPaginationTraits<DerivedClient>>
  DescribeScalingPoliciesPaginator(const Model::DescribeScalingPoliciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScalingPoliciesRequest,
                                             Pagination::DescribeScalingPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeScheduledActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledActionsRequest,
                                    Pagination::DescribeScheduledActionsPaginationTraits<DerivedClient>>
  DescribeScheduledActionsPaginator(const Model::DescribeScheduledActionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeScheduledActionsRequest,
                                             Pagination::DescribeScheduledActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ApplicationAutoScaling
}  // namespace Aws
