/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DecimalComparisonType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace DecimalComparisonTypeMapper {

static const int GREATER_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_OR_EQUAL");
static const int GREATER_HASH = HashingUtils::HashString("GREATER");
static const int LESSER_OR_EQUAL_HASH = HashingUtils::HashString("LESSER_OR_EQUAL");
static const int LESSER_HASH = HashingUtils::HashString("LESSER");
static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
static const int NOT_EQUAL_HASH = HashingUtils::HashString("NOT_EQUAL");
static const int RANGE_HASH = HashingUtils::HashString("RANGE");

DecimalComparisonType GetDecimalComparisonTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GREATER_OR_EQUAL_HASH) {
    return DecimalComparisonType::GREATER_OR_EQUAL;
  } else if (hashCode == GREATER_HASH) {
    return DecimalComparisonType::GREATER;
  } else if (hashCode == LESSER_OR_EQUAL_HASH) {
    return DecimalComparisonType::LESSER_OR_EQUAL;
  } else if (hashCode == LESSER_HASH) {
    return DecimalComparisonType::LESSER;
  } else if (hashCode == EQUAL_HASH) {
    return DecimalComparisonType::EQUAL;
  } else if (hashCode == NOT_EQUAL_HASH) {
    return DecimalComparisonType::NOT_EQUAL;
  } else if (hashCode == RANGE_HASH) {
    return DecimalComparisonType::RANGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DecimalComparisonType>(hashCode);
  }

  return DecimalComparisonType::NOT_SET;
}

Aws::String GetNameForDecimalComparisonType(DecimalComparisonType enumValue) {
  switch (enumValue) {
    case DecimalComparisonType::NOT_SET:
      return {};
    case DecimalComparisonType::GREATER_OR_EQUAL:
      return "GREATER_OR_EQUAL";
    case DecimalComparisonType::GREATER:
      return "GREATER";
    case DecimalComparisonType::LESSER_OR_EQUAL:
      return "LESSER_OR_EQUAL";
    case DecimalComparisonType::LESSER:
      return "LESSER";
    case DecimalComparisonType::EQUAL:
      return "EQUAL";
    case DecimalComparisonType::NOT_EQUAL:
      return "NOT_EQUAL";
    case DecimalComparisonType::RANGE:
      return "RANGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DecimalComparisonTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
