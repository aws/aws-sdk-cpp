/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BooleanComparisonType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace BooleanComparisonTypeMapper {

static const int IS_TRUE_HASH = HashingUtils::HashString("IS_TRUE");
static const int IS_FALSE_HASH = HashingUtils::HashString("IS_FALSE");

BooleanComparisonType GetBooleanComparisonTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IS_TRUE_HASH) {
    return BooleanComparisonType::IS_TRUE;
  } else if (hashCode == IS_FALSE_HASH) {
    return BooleanComparisonType::IS_FALSE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BooleanComparisonType>(hashCode);
  }

  return BooleanComparisonType::NOT_SET;
}

Aws::String GetNameForBooleanComparisonType(BooleanComparisonType enumValue) {
  switch (enumValue) {
    case BooleanComparisonType::NOT_SET:
      return {};
    case BooleanComparisonType::IS_TRUE:
      return "IS_TRUE";
    case BooleanComparisonType::IS_FALSE:
      return "IS_FALSE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BooleanComparisonTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
