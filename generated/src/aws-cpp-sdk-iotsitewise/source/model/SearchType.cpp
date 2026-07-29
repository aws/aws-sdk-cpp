/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/SearchType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace SearchTypeMapper {

static const int DEEP_HASH = HashingUtils::HashString("DEEP");
static const int QUICK_HASH = HashingUtils::HashString("QUICK");

SearchType GetSearchTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEEP_HASH) {
    return SearchType::DEEP;
  } else if (hashCode == QUICK_HASH) {
    return SearchType::QUICK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchType>(hashCode);
  }

  return SearchType::NOT_SET;
}

Aws::String GetNameForSearchType(SearchType enumValue) {
  switch (enumValue) {
    case SearchType::NOT_SET:
      return {};
    case SearchType::DEEP:
      return "DEEP";
    case SearchType::QUICK:
      return "QUICK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
