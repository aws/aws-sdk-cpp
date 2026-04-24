/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DateTimeComparisonType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace DateTimeComparisonTypeMapper {

static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int GREATER_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");
static const int LESS_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL_TO");
static const int EQUAL_TO_HASH = HashingUtils::HashString("EQUAL_TO");
static const int RANGE_HASH = HashingUtils::HashString("RANGE");

DateTimeComparisonType GetDateTimeComparisonTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GREATER_THAN_HASH) {
    return DateTimeComparisonType::GREATER_THAN;
  } else if (hashCode == LESS_THAN_HASH) {
    return DateTimeComparisonType::LESS_THAN;
  } else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH) {
    return DateTimeComparisonType::GREATER_THAN_OR_EQUAL_TO;
  } else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH) {
    return DateTimeComparisonType::LESS_THAN_OR_EQUAL_TO;
  } else if (hashCode == EQUAL_TO_HASH) {
    return DateTimeComparisonType::EQUAL_TO;
  } else if (hashCode == RANGE_HASH) {
    return DateTimeComparisonType::RANGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DateTimeComparisonType>(hashCode);
  }

  return DateTimeComparisonType::NOT_SET;
}

Aws::String GetNameForDateTimeComparisonType(DateTimeComparisonType enumValue) {
  switch (enumValue) {
    case DateTimeComparisonType::NOT_SET:
      return {};
    case DateTimeComparisonType::GREATER_THAN:
      return "GREATER_THAN";
    case DateTimeComparisonType::LESS_THAN:
      return "LESS_THAN";
    case DateTimeComparisonType::GREATER_THAN_OR_EQUAL_TO:
      return "GREATER_THAN_OR_EQUAL_TO";
    case DateTimeComparisonType::LESS_THAN_OR_EQUAL_TO:
      return "LESS_THAN_OR_EQUAL_TO";
    case DateTimeComparisonType::EQUAL_TO:
      return "EQUAL_TO";
    case DateTimeComparisonType::RANGE:
      return "RANGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DateTimeComparisonTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
