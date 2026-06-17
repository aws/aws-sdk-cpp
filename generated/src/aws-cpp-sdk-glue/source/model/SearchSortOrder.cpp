/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/SearchSortOrder.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace SearchSortOrderMapper {

static const int ASCENDING_HASH = HashingUtils::HashString("ASCENDING");
static const int DESCENDING_HASH = HashingUtils::HashString("DESCENDING");

SearchSortOrder GetSearchSortOrderForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASCENDING_HASH) {
    return SearchSortOrder::ASCENDING;
  } else if (hashCode == DESCENDING_HASH) {
    return SearchSortOrder::DESCENDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchSortOrder>(hashCode);
  }

  return SearchSortOrder::NOT_SET;
}

Aws::String GetNameForSearchSortOrder(SearchSortOrder enumValue) {
  switch (enumValue) {
    case SearchSortOrder::NOT_SET:
      return {};
    case SearchSortOrder::ASCENDING:
      return "ASCENDING";
    case SearchSortOrder::DESCENDING:
      return "DESCENDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchSortOrderMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
