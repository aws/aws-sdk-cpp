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
enum class CapacityProviderScalingMode { NOT_SET, Auto, Manual };

namespace CapacityProviderScalingModeMapper {
AWS_LAMBDA_API CapacityProviderScalingMode GetCapacityProviderScalingModeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForCapacityProviderScalingMode(CapacityProviderScalingMode value);
}  // namespace CapacityProviderScalingModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
