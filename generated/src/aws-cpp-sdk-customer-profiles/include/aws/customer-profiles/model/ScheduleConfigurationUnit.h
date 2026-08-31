/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class ScheduleConfigurationUnit { NOT_SET, HOURLY };

namespace ScheduleConfigurationUnitMapper {
AWS_CUSTOMERPROFILES_API ScheduleConfigurationUnit GetScheduleConfigurationUnitForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForScheduleConfigurationUnit(ScheduleConfigurationUnit value);
}  // namespace ScheduleConfigurationUnitMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
