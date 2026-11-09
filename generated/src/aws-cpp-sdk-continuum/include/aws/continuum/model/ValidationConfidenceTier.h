/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class ValidationConfidenceTier { NOT_SET, SOURCE_READ, STATIC_PROVEN, BUILD_PROVEN, RUNTIME_PROVEN };

namespace ValidationConfidenceTierMapper {
AWS_CONTINUUM_API ValidationConfidenceTier GetValidationConfidenceTierForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForValidationConfidenceTier(ValidationConfidenceTier value);
}  // namespace ValidationConfidenceTierMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
