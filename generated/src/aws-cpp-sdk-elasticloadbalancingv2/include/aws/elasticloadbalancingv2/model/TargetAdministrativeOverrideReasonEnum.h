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
  enum class TargetAdministrativeOverrideReasonEnum
  {
    NOT_SET,
    AdministrativeOverride_Unknown,
    AdministrativeOverride_NoOverride,
    AdministrativeOverride_ZonalShiftActive,
    AdministrativeOverride_ZonalShiftDelegatedToDns
  };

namespace TargetAdministrativeOverrideReasonEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API TargetAdministrativeOverrideReasonEnum GetTargetAdministrativeOverrideReasonEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForTargetAdministrativeOverrideReasonEnum(TargetAdministrativeOverrideReasonEnum value);
} // namespace TargetAdministrativeOverrideReasonEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
