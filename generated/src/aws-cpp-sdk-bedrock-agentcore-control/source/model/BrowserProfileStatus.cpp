/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BrowserProfileStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace BrowserProfileStatusMapper {

static const int READY_HASH = HashingUtils::HashString("READY");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int DELETED_HASH = HashingUtils::HashString("DELETED");
static const int SAVING_HASH = HashingUtils::HashString("SAVING");

BrowserProfileStatus GetBrowserProfileStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == READY_HASH) {
    return BrowserProfileStatus::READY;
  } else if (hashCode == DELETING_HASH) {
    return BrowserProfileStatus::DELETING;
  } else if (hashCode == DELETED_HASH) {
    return BrowserProfileStatus::DELETED;
  } else if (hashCode == SAVING_HASH) {
    return BrowserProfileStatus::SAVING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BrowserProfileStatus>(hashCode);
  }

  return BrowserProfileStatus::NOT_SET;
}

Aws::String GetNameForBrowserProfileStatus(BrowserProfileStatus enumValue) {
  switch (enumValue) {
    case BrowserProfileStatus::NOT_SET:
      return {};
    case BrowserProfileStatus::READY:
      return "READY";
    case BrowserProfileStatus::DELETING:
      return "DELETING";
    case BrowserProfileStatus::DELETED:
      return "DELETED";
    case BrowserProfileStatus::SAVING:
      return "SAVING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BrowserProfileStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
