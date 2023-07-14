﻿/**
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
  enum class ProtocolEnum
  {
    NOT_SET,
    HTTP,
    HTTPS,
    TCP,
    TLS,
    UDP,
    TCP_UDP,
    GENEVE
  };

namespace ProtocolEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API ProtocolEnum GetProtocolEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForProtocolEnum(ProtocolEnum value);
} // namespace ProtocolEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
