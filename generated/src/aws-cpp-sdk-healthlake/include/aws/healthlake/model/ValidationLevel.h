/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>

namespace Aws {
namespace HealthLake {
namespace Model {
enum class ValidationLevel { NOT_SET, strict, structure_only, minimal };

namespace ValidationLevelMapper {
AWS_HEALTHLAKE_API ValidationLevel GetValidationLevelForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForValidationLevel(ValidationLevel value);
}  // namespace ValidationLevelMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
