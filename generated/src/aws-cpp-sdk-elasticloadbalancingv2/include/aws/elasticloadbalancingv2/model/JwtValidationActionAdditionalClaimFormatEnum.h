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
enum class JwtValidationActionAdditionalClaimFormatEnum { NOT_SET, single_string, string_array, space_separated_values };

namespace JwtValidationActionAdditionalClaimFormatEnumMapper {
AWS_ELASTICLOADBALANCINGV2_API JwtValidationActionAdditionalClaimFormatEnum
GetJwtValidationActionAdditionalClaimFormatEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForJwtValidationActionAdditionalClaimFormatEnum(
    JwtValidationActionAdditionalClaimFormatEnum value);
}  // namespace JwtValidationActionAdditionalClaimFormatEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
