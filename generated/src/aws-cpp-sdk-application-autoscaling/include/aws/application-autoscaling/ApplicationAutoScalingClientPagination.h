/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScalingClient.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesPaginationTraits.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ApplicationAutoScaling {

using DescribeScalableTargetsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationAutoScalingClient, Model::DescribeScalableTargetsRequest,
                                      Pagination::DescribeScalableTargetsPaginationTraits<ApplicationAutoScalingClient>>;
using DescribeScalingActivitiesPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationAutoScalingClient, Model::DescribeScalingActivitiesRequest,
                                      Pagination::DescribeScalingActivitiesPaginationTraits<ApplicationAutoScalingClient>>;
using DescribeScalingPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationAutoScalingClient, Model::DescribeScalingPoliciesRequest,
                                      Pagination::DescribeScalingPoliciesPaginationTraits<ApplicationAutoScalingClient>>;
using DescribeScheduledActionsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationAutoScalingClient, Model::DescribeScheduledActionsRequest,
                                      Pagination::DescribeScheduledActionsPaginationTraits<ApplicationAutoScalingClient>>;

}  // namespace ApplicationAutoScaling
}  // namespace Aws
