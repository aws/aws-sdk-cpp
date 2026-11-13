/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/TimeGranularity.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace TimeGranularityMapper {

static const int DAY_HASH = HashingUtils::HashString("DAY");
static const int WEEK_HASH = HashingUtils::HashString("WEEK");
static const int MONTH_HASH = HashingUtils::HashString("MONTH");

TimeGranularity GetTimeGranularityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DAY_HASH) {
    return TimeGranularity::DAY;
  } else if (hashCode == WEEK_HASH) {
    return TimeGranularity::WEEK;
  } else if (hashCode == MONTH_HASH) {
    return TimeGranularity::MONTH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TimeGranularity>(hashCode);
  }

  return TimeGranularity::NOT_SET;
}

Aws::String GetNameForTimeGranularity(TimeGranularity enumValue) {
  switch (enumValue) {
    case TimeGranularity::NOT_SET:
      return {};
    case TimeGranularity::DAY:
      return "DAY";
    case TimeGranularity::WEEK:
      return "WEEK";
    case TimeGranularity::MONTH:
      return "MONTH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimeGranularityMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
