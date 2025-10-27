/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class ScheduleType { NOT_SET, CRON, AUTO };

namespace ScheduleTypeMapper {
AWS_GLUE_API ScheduleType GetScheduleTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForScheduleType(ScheduleType value);
}  // namespace ScheduleTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
