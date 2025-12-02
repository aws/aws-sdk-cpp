/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FilterOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace FilterOperatorMapper {

static const int Equals_HASH = HashingUtils::HashString("Equals");
static const int NotEquals_HASH = HashingUtils::HashString("NotEquals");
static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
static const int LessThan_HASH = HashingUtils::HashString("LessThan");
static const int GreaterThanOrEqual_HASH = HashingUtils::HashString("GreaterThanOrEqual");
static const int LessThanOrEqual_HASH = HashingUtils::HashString("LessThanOrEqual");
static const int Contains_HASH = HashingUtils::HashString("Contains");
static const int NotContains_HASH = HashingUtils::HashString("NotContains");

FilterOperator GetFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Equals_HASH) {
    return FilterOperator::Equals;
  } else if (hashCode == NotEquals_HASH) {
    return FilterOperator::NotEquals;
  } else if (hashCode == GreaterThan_HASH) {
    return FilterOperator::GreaterThan;
  } else if (hashCode == LessThan_HASH) {
    return FilterOperator::LessThan;
  } else if (hashCode == GreaterThanOrEqual_HASH) {
    return FilterOperator::GreaterThanOrEqual;
  } else if (hashCode == LessThanOrEqual_HASH) {
    return FilterOperator::LessThanOrEqual;
  } else if (hashCode == Contains_HASH) {
    return FilterOperator::Contains;
  } else if (hashCode == NotContains_HASH) {
    return FilterOperator::NotContains;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterOperator>(hashCode);
  }

  return FilterOperator::NOT_SET;
}

Aws::String GetNameForFilterOperator(FilterOperator enumValue) {
  switch (enumValue) {
    case FilterOperator::NOT_SET:
      return {};
    case FilterOperator::Equals:
      return "Equals";
    case FilterOperator::NotEquals:
      return "NotEquals";
    case FilterOperator::GreaterThan:
      return "GreaterThan";
    case FilterOperator::LessThan:
      return "LessThan";
    case FilterOperator::GreaterThanOrEqual:
      return "GreaterThanOrEqual";
    case FilterOperator::LessThanOrEqual:
      return "LessThanOrEqual";
    case FilterOperator::Contains:
      return "Contains";
    case FilterOperator::NotContains:
      return "NotContains";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterOperatorMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
