/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BCMDashboards {
namespace Model {
enum class ScheduleState { NOT_SET, ENABLED, DISABLED };

namespace ScheduleStateMapper {
AWS_BCMDASHBOARDS_API ScheduleState GetScheduleStateForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForScheduleState(ScheduleState value);
}  // namespace ScheduleStateMapper
}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
