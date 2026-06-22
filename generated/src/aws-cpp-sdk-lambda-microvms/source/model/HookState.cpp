/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/HookState.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace HookStateMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

HookState GetHookStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return HookState::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return HookState::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HookState>(hashCode);
  }

  return HookState::NOT_SET;
}

Aws::String GetNameForHookState(HookState enumValue) {
  switch (enumValue) {
    case HookState::NOT_SET:
      return {};
    case HookState::DISABLED:
      return "DISABLED";
    case HookState::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HookStateMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
