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
enum class AutomationEventFilterName { NOT_SET, AccountId, ResourceType, EventType, EventStatus };

namespace AutomationEventFilterNameMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API AutomationEventFilterName GetAutomationEventFilterNameForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForAutomationEventFilterName(AutomationEventFilterName value);
}  // namespace AutomationEventFilterNameMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
