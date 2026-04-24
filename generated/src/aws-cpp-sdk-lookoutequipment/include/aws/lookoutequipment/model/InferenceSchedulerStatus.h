/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

namespace Aws {
namespace LookoutEquipment {
namespace Model {
enum class InferenceSchedulerStatus { NOT_SET, PENDING, RUNNING, STOPPING, STOPPED };

namespace InferenceSchedulerStatusMapper {
AWS_LOOKOUTEQUIPMENT_API InferenceSchedulerStatus GetInferenceSchedulerStatusForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForInferenceSchedulerStatus(InferenceSchedulerStatus value);
}  // namespace InferenceSchedulerStatusMapper
}  // namespace Model
}  // namespace LookoutEquipment
}  // namespace Aws
