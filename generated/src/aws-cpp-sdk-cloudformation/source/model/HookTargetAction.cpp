/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/HookTargetAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {
namespace HookTargetActionMapper {

static const int CREATE_HASH = HashingUtils::HashString("CREATE");
static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
static const int DELETE__HASH = HashingUtils::HashString("DELETE");
static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");

HookTargetAction GetHookTargetActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_HASH) {
    return HookTargetAction::CREATE;
  } else if (hashCode == UPDATE_HASH) {
    return HookTargetAction::UPDATE;
  } else if (hashCode == DELETE__HASH) {
    return HookTargetAction::DELETE_;
  } else if (hashCode == IMPORT_HASH) {
    return HookTargetAction::IMPORT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HookTargetAction>(hashCode);
  }

  return HookTargetAction::NOT_SET;
}

Aws::String GetNameForHookTargetAction(HookTargetAction enumValue) {
  switch (enumValue) {
    case HookTargetAction::NOT_SET:
      return {};
    case HookTargetAction::CREATE:
      return "CREATE";
    case HookTargetAction::UPDATE:
      return "UPDATE";
    case HookTargetAction::DELETE_:
      return "DELETE";
    case HookTargetAction::IMPORT:
      return "IMPORT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HookTargetActionMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
