/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FilterV2StringConditionComparisonOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace FilterV2StringConditionComparisonOperatorMapper {

static const int NOT_EXISTS_HASH = HashingUtils::HashString("NOT_EXISTS");

FilterV2StringConditionComparisonOperator GetFilterV2StringConditionComparisonOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_EXISTS_HASH) {
    return FilterV2StringConditionComparisonOperator::NOT_EXISTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterV2StringConditionComparisonOperator>(hashCode);
  }

  return FilterV2StringConditionComparisonOperator::NOT_SET;
}

Aws::String GetNameForFilterV2StringConditionComparisonOperator(FilterV2StringConditionComparisonOperator enumValue) {
  switch (enumValue) {
    case FilterV2StringConditionComparisonOperator::NOT_SET:
      return {};
    case FilterV2StringConditionComparisonOperator::NOT_EXISTS:
      return "NOT_EXISTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterV2StringConditionComparisonOperatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
