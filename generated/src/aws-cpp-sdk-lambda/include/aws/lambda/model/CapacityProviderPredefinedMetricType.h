/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class CapacityProviderPredefinedMetricType { NOT_SET, LambdaCapacityProviderAverageCPUUtilization };

namespace CapacityProviderPredefinedMetricTypeMapper {
AWS_LAMBDA_API CapacityProviderPredefinedMetricType GetCapacityProviderPredefinedMetricTypeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForCapacityProviderPredefinedMetricType(CapacityProviderPredefinedMetricType value);
}  // namespace CapacityProviderPredefinedMetricTypeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
