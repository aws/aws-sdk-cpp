/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/SearchFilterComparator.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace SearchFilterComparatorMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int GREATER_THAN_OR_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int LESS_THAN_OR_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS");
static const int NOT_EXISTS_HASH = HashingUtils::HashString("NOT_EXISTS");

SearchFilterComparator GetSearchFilterComparatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return SearchFilterComparator::EQUALS;
  } else if (hashCode == GREATER_THAN_HASH) {
    return SearchFilterComparator::GREATER_THAN;
  } else if (hashCode == GREATER_THAN_OR_EQUALS_HASH) {
    return SearchFilterComparator::GREATER_THAN_OR_EQUALS;
  } else if (hashCode == LESS_THAN_HASH) {
    return SearchFilterComparator::LESS_THAN;
  } else if (hashCode == LESS_THAN_OR_EQUALS_HASH) {
    return SearchFilterComparator::LESS_THAN_OR_EQUALS;
  } else if (hashCode == NOT_EXISTS_HASH) {
    return SearchFilterComparator::NOT_EXISTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchFilterComparator>(hashCode);
  }

  return SearchFilterComparator::NOT_SET;
}

Aws::String GetNameForSearchFilterComparator(SearchFilterComparator enumValue) {
  switch (enumValue) {
    case SearchFilterComparator::NOT_SET:
      return {};
    case SearchFilterComparator::EQUALS:
      return "EQUALS";
    case SearchFilterComparator::GREATER_THAN:
      return "GREATER_THAN";
    case SearchFilterComparator::GREATER_THAN_OR_EQUALS:
      return "GREATER_THAN_OR_EQUALS";
    case SearchFilterComparator::LESS_THAN:
      return "LESS_THAN";
    case SearchFilterComparator::LESS_THAN_OR_EQUALS:
      return "LESS_THAN_OR_EQUALS";
    case SearchFilterComparator::NOT_EXISTS:
      return "NOT_EXISTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchFilterComparatorMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
