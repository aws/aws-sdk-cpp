/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/TimeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace TimeTypeMapper {

static const int MINUTES_HASH = HashingUtils::HashString("MINUTES");
static const int HOURS_HASH = HashingUtils::HashString("HOURS");
static const int DAYS_HASH = HashingUtils::HashString("DAYS");

TimeType GetTimeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MINUTES_HASH) {
    return TimeType::MINUTES;
  } else if (hashCode == HOURS_HASH) {
    return TimeType::HOURS;
  } else if (hashCode == DAYS_HASH) {
    return TimeType::DAYS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TimeType>(hashCode);
  }

  return TimeType::NOT_SET;
}

Aws::String GetNameForTimeType(TimeType enumValue) {
  switch (enumValue) {
    case TimeType::NOT_SET:
      return {};
    case TimeType::MINUTES:
      return "MINUTES";
    case TimeType::HOURS:
      return "HOURS";
    case TimeType::DAYS:
      return "DAYS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimeTypeMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
