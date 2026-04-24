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
enum class EventStatus {
  NOT_SET,
  Ready,
  InProgress,
  Complete,
  Failed,
  Cancelled,
  RollbackReady,
  RollbackInProgress,
  RollbackComplete,
  RollbackFailed
};

namespace EventStatusMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API EventStatus GetEventStatusForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForEventStatus(EventStatus value);
}  // namespace EventStatusMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
