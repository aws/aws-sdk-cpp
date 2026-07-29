/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/FilterMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace FilterModeMapper {

static const int QUERY_PARAMS_HASH = HashingUtils::HashString("QUERY_PARAMS");
static const int FILTER_STRING_HASH = HashingUtils::HashString("FILTER_STRING");

FilterMode GetFilterModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUERY_PARAMS_HASH) {
    return FilterMode::QUERY_PARAMS;
  } else if (hashCode == FILTER_STRING_HASH) {
    return FilterMode::FILTER_STRING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterMode>(hashCode);
  }

  return FilterMode::NOT_SET;
}

Aws::String GetNameForFilterMode(FilterMode enumValue) {
  switch (enumValue) {
    case FilterMode::NOT_SET:
      return {};
    case FilterMode::QUERY_PARAMS:
      return "QUERY_PARAMS";
    case FilterMode::FILTER_STRING:
      return "FILTER_STRING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterModeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
