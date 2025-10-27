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
enum class TransformTypeEnum { NOT_SET, host_header_rewrite, url_rewrite };

namespace TransformTypeEnumMapper {
AWS_ELASTICLOADBALANCINGV2_API TransformTypeEnum GetTransformTypeEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForTransformTypeEnum(TransformTypeEnum value);
}  // namespace TransformTypeEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
