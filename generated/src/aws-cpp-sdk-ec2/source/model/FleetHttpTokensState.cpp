/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FleetHttpTokensState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FleetHttpTokensStateMapper {

static const int optional_HASH = HashingUtils::HashString("optional");
static const int required_HASH = HashingUtils::HashString("required");

FleetHttpTokensState GetFleetHttpTokensStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == optional_HASH) {
    return FleetHttpTokensState::optional;
  } else if (hashCode == required_HASH) {
    return FleetHttpTokensState::required;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FleetHttpTokensState>(hashCode);
  }

  return FleetHttpTokensState::NOT_SET;
}

Aws::String GetNameForFleetHttpTokensState(FleetHttpTokensState enumValue) {
  switch (enumValue) {
    case FleetHttpTokensState::NOT_SET:
      return {};
    case FleetHttpTokensState::optional:
      return "optional";
    case FleetHttpTokensState::required:
      return "required";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FleetHttpTokensStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
