/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttachmentScope.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AttachmentScopeMapper {

static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");
static const int CHAT_HASH = HashingUtils::HashString("CHAT");
static const int CASE_HASH = HashingUtils::HashString("CASE");
static const int TASK_HASH = HashingUtils::HashString("TASK");

AttachmentScope GetAttachmentScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EMAIL_HASH) {
    return AttachmentScope::EMAIL;
  } else if (hashCode == CHAT_HASH) {
    return AttachmentScope::CHAT;
  } else if (hashCode == CASE_HASH) {
    return AttachmentScope::CASE;
  } else if (hashCode == TASK_HASH) {
    return AttachmentScope::TASK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttachmentScope>(hashCode);
  }

  return AttachmentScope::NOT_SET;
}

Aws::String GetNameForAttachmentScope(AttachmentScope enumValue) {
  switch (enumValue) {
    case AttachmentScope::NOT_SET:
      return {};
    case AttachmentScope::EMAIL:
      return "EMAIL";
    case AttachmentScope::CHAT:
      return "CHAT";
    case AttachmentScope::CASE:
      return "CASE";
    case AttachmentScope::TASK:
      return "TASK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttachmentScopeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
