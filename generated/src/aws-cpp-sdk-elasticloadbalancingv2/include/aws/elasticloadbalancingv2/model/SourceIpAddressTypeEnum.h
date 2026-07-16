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
enum class SourceIpAddressTypeEnum { NOT_SET, ipv4, ipv6 };

namespace SourceIpAddressTypeEnumMapper {
AWS_ELASTICLOADBALANCINGV2_API SourceIpAddressTypeEnum GetSourceIpAddressTypeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForSourceIpAddressTypeEnum(SourceIpAddressTypeEnum value);
}  // namespace SourceIpAddressTypeEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
