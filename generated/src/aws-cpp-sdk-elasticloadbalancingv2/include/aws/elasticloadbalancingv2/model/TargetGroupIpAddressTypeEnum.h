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
  enum class TargetGroupIpAddressTypeEnum
  {
    NOT_SET,
    ipv4,
    ipv6
  };

namespace TargetGroupIpAddressTypeEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API TargetGroupIpAddressTypeEnum GetTargetGroupIpAddressTypeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForTargetGroupIpAddressTypeEnum(TargetGroupIpAddressTypeEnum value);
} // namespace TargetGroupIpAddressTypeEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
