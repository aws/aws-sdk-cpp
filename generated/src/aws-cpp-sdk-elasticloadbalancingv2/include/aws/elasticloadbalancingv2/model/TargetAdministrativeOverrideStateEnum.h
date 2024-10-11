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
  enum class TargetAdministrativeOverrideStateEnum
  {
    NOT_SET,
    unknown,
    no_override,
    zonal_shift_active,
    zonal_shift_delegated_to_dns
  };

namespace TargetAdministrativeOverrideStateEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API TargetAdministrativeOverrideStateEnum GetTargetAdministrativeOverrideStateEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForTargetAdministrativeOverrideStateEnum(TargetAdministrativeOverrideStateEnum value);
} // namespace TargetAdministrativeOverrideStateEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
