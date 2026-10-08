/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace DevOpsAgent {
namespace Model {
enum class DayOfWeek { NOT_SET, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

namespace DayOfWeekMapper {
AWS_DEVOPSAGENT_API DayOfWeek GetDayOfWeekForName(const Aws::String& name);

AWS_DEVOPSAGENT_API Aws::String GetNameForDayOfWeek(DayOfWeek value);
}  // namespace DayOfWeekMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
