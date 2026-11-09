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
enum class ScheduleActionErrorCode { NOT_SET, INVALID_ACTION_TARGET, INTERNAL_ERROR };

namespace ScheduleActionErrorCodeMapper {
AWS_ELEMENTALINFERENCE_API ScheduleActionErrorCode GetScheduleActionErrorCodeForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForScheduleActionErrorCode(ScheduleActionErrorCode value);
}  // namespace ScheduleActionErrorCodeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
