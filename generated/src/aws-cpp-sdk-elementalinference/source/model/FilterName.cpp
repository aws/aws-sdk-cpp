/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elementalinference/model/FilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {
namespace FilterNameMapper {

static const int COMPETITOR_HASH = HashingUtils::HashString("COMPETITOR");

FilterName GetFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COMPETITOR_HASH) {
    return FilterName::COMPETITOR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterName>(hashCode);
  }

  return FilterName::NOT_SET;
}

Aws::String GetNameForFilterName(FilterName enumValue) {
  switch (enumValue) {
    case FilterName::NOT_SET:
      return {};
    case FilterName::COMPETITOR:
      return "COMPETITOR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterNameMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
