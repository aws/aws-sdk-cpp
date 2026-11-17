/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/ChatArchiveStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace ChatArchiveStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");

ChatArchiveStatus GetChatArchiveStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return ChatArchiveStatus::ACTIVE;
  } else if (hashCode == ARCHIVED_HASH) {
    return ChatArchiveStatus::ARCHIVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ChatArchiveStatus>(hashCode);
  }

  return ChatArchiveStatus::NOT_SET;
}

Aws::String GetNameForChatArchiveStatus(ChatArchiveStatus enumValue) {
  switch (enumValue) {
    case ChatArchiveStatus::NOT_SET:
      return {};
    case ChatArchiveStatus::ACTIVE:
      return "ACTIVE";
    case ChatArchiveStatus::ARCHIVED:
      return "ARCHIVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ChatArchiveStatusMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
