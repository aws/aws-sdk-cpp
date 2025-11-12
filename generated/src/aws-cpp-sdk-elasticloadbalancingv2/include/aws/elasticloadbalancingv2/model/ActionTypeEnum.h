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
enum class ActionTypeEnum { NOT_SET, forward, authenticate_oidc, authenticate_cognito, redirect, fixed_response, jwt_validation };

namespace ActionTypeEnumMapper {
AWS_ELASTICLOADBALANCINGV2_API ActionTypeEnum GetActionTypeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForActionTypeEnum(ActionTypeEnum value);
}  // namespace ActionTypeEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
