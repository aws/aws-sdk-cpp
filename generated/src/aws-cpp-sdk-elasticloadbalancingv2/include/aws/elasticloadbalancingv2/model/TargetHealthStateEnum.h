﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
enum class TargetHealthStateEnum { NOT_SET, initial, healthy, unhealthy, unhealthy_draining, unused, draining, unavailable };

namespace TargetHealthStateEnumMapper {
AWS_ELASTICLOADBALANCINGV2_API TargetHealthStateEnum GetTargetHealthStateEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForTargetHealthStateEnum(TargetHealthStateEnum value);
}  // namespace TargetHealthStateEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
