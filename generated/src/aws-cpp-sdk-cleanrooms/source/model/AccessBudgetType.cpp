/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AccessBudgetType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace AccessBudgetTypeMapper {

static const int CALENDAR_DAY_HASH = HashingUtils::HashString("CALENDAR_DAY");
static const int CALENDAR_MONTH_HASH = HashingUtils::HashString("CALENDAR_MONTH");
static const int CALENDAR_WEEK_HASH = HashingUtils::HashString("CALENDAR_WEEK");
static const int LIFETIME_HASH = HashingUtils::HashString("LIFETIME");

AccessBudgetType GetAccessBudgetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CALENDAR_DAY_HASH) {
    return AccessBudgetType::CALENDAR_DAY;
  } else if (hashCode == CALENDAR_MONTH_HASH) {
    return AccessBudgetType::CALENDAR_MONTH;
  } else if (hashCode == CALENDAR_WEEK_HASH) {
    return AccessBudgetType::CALENDAR_WEEK;
  } else if (hashCode == LIFETIME_HASH) {
    return AccessBudgetType::LIFETIME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessBudgetType>(hashCode);
  }

  return AccessBudgetType::NOT_SET;
}

Aws::String GetNameForAccessBudgetType(AccessBudgetType enumValue) {
  switch (enumValue) {
    case AccessBudgetType::NOT_SET:
      return {};
    case AccessBudgetType::CALENDAR_DAY:
      return "CALENDAR_DAY";
    case AccessBudgetType::CALENDAR_MONTH:
      return "CALENDAR_MONTH";
    case AccessBudgetType::CALENDAR_WEEK:
      return "CALENDAR_WEEK";
    case AccessBudgetType::LIFETIME:
      return "LIFETIME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessBudgetTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
