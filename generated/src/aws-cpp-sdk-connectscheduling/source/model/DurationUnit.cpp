/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/DurationUnit.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {
namespace DurationUnitMapper {

static const int MINUTES_HASH = HashingUtils::HashString("MINUTES");
static const int HOURS_HASH = HashingUtils::HashString("HOURS");
static const int DAYS_HASH = HashingUtils::HashString("DAYS");

DurationUnit GetDurationUnitForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MINUTES_HASH) {
    return DurationUnit::MINUTES;
  } else if (hashCode == HOURS_HASH) {
    return DurationUnit::HOURS;
  } else if (hashCode == DAYS_HASH) {
    return DurationUnit::DAYS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DurationUnit>(hashCode);
  }

  return DurationUnit::NOT_SET;
}

Aws::String GetNameForDurationUnit(DurationUnit enumValue) {
  switch (enumValue) {
    case DurationUnit::NOT_SET:
      return {};
    case DurationUnit::MINUTES:
      return "MINUTES";
    case DurationUnit::HOURS:
      return "HOURS";
    case DurationUnit::DAYS:
      return "DAYS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DurationUnitMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
