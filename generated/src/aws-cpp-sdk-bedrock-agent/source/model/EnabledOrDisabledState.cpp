/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/EnabledOrDisabledState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace EnabledOrDisabledStateMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

EnabledOrDisabledState GetEnabledOrDisabledStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return EnabledOrDisabledState::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return EnabledOrDisabledState::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EnabledOrDisabledState>(hashCode);
  }

  return EnabledOrDisabledState::NOT_SET;
}

Aws::String GetNameForEnabledOrDisabledState(EnabledOrDisabledState enumValue) {
  switch (enumValue) {
    case EnabledOrDisabledState::NOT_SET:
      return {};
    case EnabledOrDisabledState::ENABLED:
      return "ENABLED";
    case EnabledOrDisabledState::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EnabledOrDisabledStateMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
