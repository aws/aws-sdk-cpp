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
  enum class CapacityReservationStateEnum
  {
    NOT_SET,
    provisioned,
    pending,
    rebalancing,
    failed
  };

namespace CapacityReservationStateEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API CapacityReservationStateEnum GetCapacityReservationStateEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForCapacityReservationStateEnum(CapacityReservationStateEnum value);
} // namespace CapacityReservationStateEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
