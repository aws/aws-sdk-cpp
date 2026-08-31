/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/customer-profiles/model/ScheduleConfigurationUnit.h>

using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {
namespace ScheduleConfigurationUnitMapper {

static const int HOURLY_HASH = HashingUtils::HashString("HOURLY");

ScheduleConfigurationUnit GetScheduleConfigurationUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HOURLY_HASH) {
    return ScheduleConfigurationUnit::HOURLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScheduleConfigurationUnit>(hashCode);
  }

  return ScheduleConfigurationUnit::NOT_SET;
}

Aws::String GetNameForScheduleConfigurationUnit(ScheduleConfigurationUnit enumValue) {
  switch (enumValue) {
    case ScheduleConfigurationUnit::NOT_SET:
      return {};
    case ScheduleConfigurationUnit::HOURLY:
      return "HOURLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScheduleConfigurationUnitMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
