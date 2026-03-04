/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/HttpTokensEnforcedState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace HttpTokensEnforcedStateMapper {

static const int disabled_HASH = HashingUtils::HashString("disabled");
static const int enabled_HASH = HashingUtils::HashString("enabled");

HttpTokensEnforcedState GetHttpTokensEnforcedStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == disabled_HASH) {
    return HttpTokensEnforcedState::disabled;
  } else if (hashCode == enabled_HASH) {
    return HttpTokensEnforcedState::enabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HttpTokensEnforcedState>(hashCode);
  }

  return HttpTokensEnforcedState::NOT_SET;
}

Aws::String GetNameForHttpTokensEnforcedState(HttpTokensEnforcedState enumValue) {
  switch (enumValue) {
    case HttpTokensEnforcedState::NOT_SET:
      return {};
    case HttpTokensEnforcedState::disabled:
      return "disabled";
    case HttpTokensEnforcedState::enabled:
      return "enabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HttpTokensEnforcedStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
