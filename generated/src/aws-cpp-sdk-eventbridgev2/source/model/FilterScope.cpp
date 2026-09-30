/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/FilterScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace FilterScopeMapper {

static const int DATA_HASH = HashingUtils::HashString("DATA");
static const int METADATA_HASH = HashingUtils::HashString("METADATA");
static const int SYSTEM_METADATA_HASH = HashingUtils::HashString("SYSTEM_METADATA");

FilterScope GetFilterScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DATA_HASH) {
    return FilterScope::DATA;
  } else if (hashCode == METADATA_HASH) {
    return FilterScope::METADATA;
  } else if (hashCode == SYSTEM_METADATA_HASH) {
    return FilterScope::SYSTEM_METADATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterScope>(hashCode);
  }

  return FilterScope::NOT_SET;
}

Aws::String GetNameForFilterScope(FilterScope enumValue) {
  switch (enumValue) {
    case FilterScope::NOT_SET:
      return {};
    case FilterScope::DATA:
      return "DATA";
    case FilterScope::METADATA:
      return "METADATA";
    case FilterScope::SYSTEM_METADATA:
      return "SYSTEM_METADATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterScopeMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
