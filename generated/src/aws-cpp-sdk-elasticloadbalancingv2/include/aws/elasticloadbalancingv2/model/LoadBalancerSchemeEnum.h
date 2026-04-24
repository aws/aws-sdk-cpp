/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
enum class LoadBalancerSchemeEnum { NOT_SET, internet_facing, internal };

namespace LoadBalancerSchemeEnumMapper {
AWS_ELASTICLOADBALANCINGV2_API LoadBalancerSchemeEnum GetLoadBalancerSchemeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForLoadBalancerSchemeEnum(LoadBalancerSchemeEnum value);
}  // namespace LoadBalancerSchemeEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
