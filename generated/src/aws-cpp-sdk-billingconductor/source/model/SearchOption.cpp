/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/SearchOption.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {
namespace SearchOptionMapper {

static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");

SearchOption GetSearchOptionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STARTS_WITH_HASH) {
    return SearchOption::STARTS_WITH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchOption>(hashCode);
  }

  return SearchOption::NOT_SET;
}

Aws::String GetNameForSearchOption(SearchOption enumValue) {
  switch (enumValue) {
    case SearchOption::NOT_SET:
      return {};
    case SearchOption::STARTS_WITH:
      return "STARTS_WITH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchOptionMapper
}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
