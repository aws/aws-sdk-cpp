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
enum class StepType { NOT_SET, CreateEbsSnapshot, DeleteEbsVolume, ModifyEbsVolume, CreateEbsVolume };

namespace StepTypeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API StepType GetStepTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForStepType(StepType value);
}  // namespace StepTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
