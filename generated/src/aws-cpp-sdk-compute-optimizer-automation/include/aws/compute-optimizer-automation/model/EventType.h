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
enum class EventType { NOT_SET, SnapshotAndDeleteUnattachedEbsVolume, UpgradeEbsVolumeType };

namespace EventTypeMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API EventType GetEventTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForEventType(EventType value);
}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
