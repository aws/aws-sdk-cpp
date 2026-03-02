/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/DefaultHttpTokensEnforcedState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace DefaultHttpTokensEnforcedStateMapper {

static const int disabled_HASH = HashingUtils::HashString("disabled");
static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int no_preference_HASH = HashingUtils::HashString("no-preference");

DefaultHttpTokensEnforcedState GetDefaultHttpTokensEnforcedStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == disabled_HASH) {
    return DefaultHttpTokensEnforcedState::disabled;
  } else if (hashCode == enabled_HASH) {
    return DefaultHttpTokensEnforcedState::enabled;
  } else if (hashCode == no_preference_HASH) {
    return DefaultHttpTokensEnforcedState::no_preference;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DefaultHttpTokensEnforcedState>(hashCode);
  }

  return DefaultHttpTokensEnforcedState::NOT_SET;
}

Aws::String GetNameForDefaultHttpTokensEnforcedState(DefaultHttpTokensEnforcedState enumValue) {
  switch (enumValue) {
    case DefaultHttpTokensEnforcedState::NOT_SET:
      return {};
    case DefaultHttpTokensEnforcedState::disabled:
      return "disabled";
    case DefaultHttpTokensEnforcedState::enabled:
      return "enabled";
    case DefaultHttpTokensEnforcedState::no_preference:
      return "no-preference";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DefaultHttpTokensEnforcedStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
