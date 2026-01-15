/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/deadline/model/ComparisonOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {
namespace ComparisonOperatorMapper {

static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
static const int NOT_EQUAL_HASH = HashingUtils::HashString("NOT_EQUAL");
static const int GREATER_THAN_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_EQUAL_TO");
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int LESS_THAN_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_EQUAL_TO");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int ANY_EQUALS_HASH = HashingUtils::HashString("ANY_EQUALS");
static const int ALL_NOT_EQUALS_HASH = HashingUtils::HashString("ALL_NOT_EQUALS");

ComparisonOperator GetComparisonOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUAL_HASH) {
    return ComparisonOperator::EQUAL;
  } else if (hashCode == NOT_EQUAL_HASH) {
    return ComparisonOperator::NOT_EQUAL;
  } else if (hashCode == GREATER_THAN_EQUAL_TO_HASH) {
    return ComparisonOperator::GREATER_THAN_EQUAL_TO;
  } else if (hashCode == GREATER_THAN_HASH) {
    return ComparisonOperator::GREATER_THAN;
  } else if (hashCode == LESS_THAN_EQUAL_TO_HASH) {
    return ComparisonOperator::LESS_THAN_EQUAL_TO;
  } else if (hashCode == LESS_THAN_HASH) {
    return ComparisonOperator::LESS_THAN;
  } else if (hashCode == ANY_EQUALS_HASH) {
    return ComparisonOperator::ANY_EQUALS;
  } else if (hashCode == ALL_NOT_EQUALS_HASH) {
    return ComparisonOperator::ALL_NOT_EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComparisonOperator>(hashCode);
  }

  return ComparisonOperator::NOT_SET;
}

Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue) {
  switch (enumValue) {
    case ComparisonOperator::NOT_SET:
      return {};
    case ComparisonOperator::EQUAL:
      return "EQUAL";
    case ComparisonOperator::NOT_EQUAL:
      return "NOT_EQUAL";
    case ComparisonOperator::GREATER_THAN_EQUAL_TO:
      return "GREATER_THAN_EQUAL_TO";
    case ComparisonOperator::GREATER_THAN:
      return "GREATER_THAN";
    case ComparisonOperator::LESS_THAN_EQUAL_TO:
      return "LESS_THAN_EQUAL_TO";
    case ComparisonOperator::LESS_THAN:
      return "LESS_THAN";
    case ComparisonOperator::ANY_EQUALS:
      return "ANY_EQUALS";
    case ComparisonOperator::ALL_NOT_EQUALS:
      return "ALL_NOT_EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
