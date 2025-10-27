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
enum class LoadBalancerTypeEnum { NOT_SET, application, network, gateway };

namespace LoadBalancerTypeEnumMapper {
AWS_ELASTICLOADBALANCINGV2_API LoadBalancerTypeEnum GetLoadBalancerTypeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForLoadBalancerTypeEnum(LoadBalancerTypeEnum value);
}  // namespace LoadBalancerTypeEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
