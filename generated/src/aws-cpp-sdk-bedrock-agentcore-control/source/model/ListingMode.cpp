/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ListingMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ListingModeMapper {

static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");

ListingMode GetListingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFAULT_HASH) {
    return ListingMode::DEFAULT;
  } else if (hashCode == DYNAMIC_HASH) {
    return ListingMode::DYNAMIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListingMode>(hashCode);
  }

  return ListingMode::NOT_SET;
}

Aws::String GetNameForListingMode(ListingMode enumValue) {
  switch (enumValue) {
    case ListingMode::NOT_SET:
      return {};
    case ListingMode::DEFAULT:
      return "DEFAULT";
    case ListingMode::DYNAMIC:
      return "DYNAMIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListingModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
