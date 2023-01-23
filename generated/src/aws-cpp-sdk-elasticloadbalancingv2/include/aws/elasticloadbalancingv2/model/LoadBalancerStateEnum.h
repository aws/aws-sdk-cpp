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
  enum class LoadBalancerStateEnum
  {
    NOT_SET,
    active,
    provisioning,
    active_impaired,
    failed
  };

namespace LoadBalancerStateEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API LoadBalancerStateEnum GetLoadBalancerStateEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForLoadBalancerStateEnum(LoadBalancerStateEnum value);
} // namespace LoadBalancerStateEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
