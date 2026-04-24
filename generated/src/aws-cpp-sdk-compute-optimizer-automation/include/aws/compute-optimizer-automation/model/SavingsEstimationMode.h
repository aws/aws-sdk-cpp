/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class SavingsEstimationMode { NOT_SET, BeforeDiscount, AfterDiscount };

namespace SavingsEstimationModeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API SavingsEstimationMode GetSavingsEstimationModeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForSavingsEstimationMode(SavingsEstimationMode value);
}  // namespace SavingsEstimationModeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
