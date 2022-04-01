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
  enum class TargetHealthReasonEnum
  {
    NOT_SET,
    Elb_RegistrationInProgress,
    Elb_InitialHealthChecking,
    Target_ResponseCodeMismatch,
    Target_Timeout,
    Target_FailedHealthChecks,
    Target_NotRegistered,
    Target_NotInUse,
    Target_DeregistrationInProgress,
    Target_InvalidState,
    Target_IpUnusable,
    Target_HealthCheckDisabled,
    Elb_InternalError
  };

namespace TargetHealthReasonEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API TargetHealthReasonEnum GetTargetHealthReasonEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForTargetHealthReasonEnum(TargetHealthReasonEnum value);
} // namespace TargetHealthReasonEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
