/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/SearchFilterOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace SearchFilterOperatorMapper {

static const int equals_HASH = HashingUtils::HashString("equals");
static const int greaterThan_HASH = HashingUtils::HashString("greaterThan");
static const int greaterThanOrEquals_HASH = HashingUtils::HashString("greaterThanOrEquals");
static const int lessThan_HASH = HashingUtils::HashString("lessThan");
static const int lessThanOrEquals_HASH = HashingUtils::HashString("lessThanOrEquals");
static const int notExists_HASH = HashingUtils::HashString("notExists");

SearchFilterOperator GetSearchFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == equals_HASH) {
    return SearchFilterOperator::equals;
  } else if (hashCode == greaterThan_HASH) {
    return SearchFilterOperator::greaterThan;
  } else if (hashCode == greaterThanOrEquals_HASH) {
    return SearchFilterOperator::greaterThanOrEquals;
  } else if (hashCode == lessThan_HASH) {
    return SearchFilterOperator::lessThan;
  } else if (hashCode == lessThanOrEquals_HASH) {
    return SearchFilterOperator::lessThanOrEquals;
  } else if (hashCode == notExists_HASH) {
    return SearchFilterOperator::notExists;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchFilterOperator>(hashCode);
  }

  return SearchFilterOperator::NOT_SET;
}

Aws::String GetNameForSearchFilterOperator(SearchFilterOperator enumValue) {
  switch (enumValue) {
    case SearchFilterOperator::NOT_SET:
      return {};
    case SearchFilterOperator::equals:
      return "equals";
    case SearchFilterOperator::greaterThan:
      return "greaterThan";
    case SearchFilterOperator::greaterThanOrEquals:
      return "greaterThanOrEquals";
    case SearchFilterOperator::lessThan:
      return "lessThan";
    case SearchFilterOperator::lessThanOrEquals:
      return "lessThanOrEquals";
    case SearchFilterOperator::notExists:
      return "notExists";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchFilterOperatorMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
