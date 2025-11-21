/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/SearchSpendingLimitsFilterOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Braket {
namespace Model {
namespace SearchSpendingLimitsFilterOperatorMapper {

static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");

SearchSpendingLimitsFilterOperator GetSearchSpendingLimitsFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUAL_HASH) {
    return SearchSpendingLimitsFilterOperator::EQUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchSpendingLimitsFilterOperator>(hashCode);
  }

  return SearchSpendingLimitsFilterOperator::NOT_SET;
}

Aws::String GetNameForSearchSpendingLimitsFilterOperator(SearchSpendingLimitsFilterOperator enumValue) {
  switch (enumValue) {
    case SearchSpendingLimitsFilterOperator::NOT_SET:
      return {};
    case SearchSpendingLimitsFilterOperator::EQUAL:
      return "EQUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchSpendingLimitsFilterOperatorMapper
}  // namespace Model
}  // namespace Braket
}  // namespace Aws
