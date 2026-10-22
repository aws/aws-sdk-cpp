/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class ScheduleActionStatus { NOT_SET, PENDING, COMPLETED, FAILED };

namespace ScheduleActionStatusMapper {
AWS_ELEMENTALINFERENCE_API ScheduleActionStatus GetScheduleActionStatusForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForScheduleActionStatus(ScheduleActionStatus value);
}  // namespace ScheduleActionStatusMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
