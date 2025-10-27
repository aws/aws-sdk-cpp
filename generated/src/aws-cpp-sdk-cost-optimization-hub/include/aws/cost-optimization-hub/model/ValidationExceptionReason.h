/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

namespace Aws {
namespace CostOptimizationHub {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, FieldValidationFailed, Other };

namespace ValidationExceptionReasonMapper {
AWS_COSTOPTIMIZATIONHUB_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_COSTOPTIMIZATIONHUB_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
