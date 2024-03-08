/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{
  enum class DescribeTargetHealthInputIncludeEnum
  {
    NOT_SET,
    AnomalyDetection,
    All
  };

namespace DescribeTargetHealthInputIncludeEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthInputIncludeEnum GetDescribeTargetHealthInputIncludeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForDescribeTargetHealthInputIncludeEnum(DescribeTargetHealthInputIncludeEnum value);
} // namespace DescribeTargetHealthInputIncludeEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
