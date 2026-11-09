/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SearchableStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace SearchableStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

SearchableStatus GetSearchableStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return SearchableStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return SearchableStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SearchableStatus>(hashCode);
  }

  return SearchableStatus::NOT_SET;
}

Aws::String GetNameForSearchableStatus(SearchableStatus enumValue) {
  switch (enumValue) {
    case SearchableStatus::NOT_SET:
      return {};
    case SearchableStatus::ENABLED:
      return "ENABLED";
    case SearchableStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SearchableStatusMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
