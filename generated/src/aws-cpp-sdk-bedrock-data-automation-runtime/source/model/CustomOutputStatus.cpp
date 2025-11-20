/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/CustomOutputStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomationRuntime {
namespace Model {
namespace CustomOutputStatusMapper {

static const int MATCH_HASH = HashingUtils::HashString("MATCH");
static const int NO_MATCH_HASH = HashingUtils::HashString("NO_MATCH");

CustomOutputStatus GetCustomOutputStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MATCH_HASH) {
    return CustomOutputStatus::MATCH;
  } else if (hashCode == NO_MATCH_HASH) {
    return CustomOutputStatus::NO_MATCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CustomOutputStatus>(hashCode);
  }

  return CustomOutputStatus::NOT_SET;
}

Aws::String GetNameForCustomOutputStatus(CustomOutputStatus enumValue) {
  switch (enumValue) {
    case CustomOutputStatus::NOT_SET:
      return {};
    case CustomOutputStatus::MATCH:
      return "MATCH";
    case CustomOutputStatus::NO_MATCH:
      return "NO_MATCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CustomOutputStatusMapper
}  // namespace Model
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws
