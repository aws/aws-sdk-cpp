/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/NatGatewayApplianceModifyState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace NatGatewayApplianceModifyStateMapper {

static const int modifying_HASH = HashingUtils::HashString("modifying");
static const int completed_HASH = HashingUtils::HashString("completed");
static const int failed_HASH = HashingUtils::HashString("failed");

NatGatewayApplianceModifyState GetNatGatewayApplianceModifyStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == modifying_HASH) {
    return NatGatewayApplianceModifyState::modifying;
  } else if (hashCode == completed_HASH) {
    return NatGatewayApplianceModifyState::completed;
  } else if (hashCode == failed_HASH) {
    return NatGatewayApplianceModifyState::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NatGatewayApplianceModifyState>(hashCode);
  }

  return NatGatewayApplianceModifyState::NOT_SET;
}

Aws::String GetNameForNatGatewayApplianceModifyState(NatGatewayApplianceModifyState enumValue) {
  switch (enumValue) {
    case NatGatewayApplianceModifyState::NOT_SET:
      return {};
    case NatGatewayApplianceModifyState::modifying:
      return "modifying";
    case NatGatewayApplianceModifyState::completed:
      return "completed";
    case NatGatewayApplianceModifyState::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NatGatewayApplianceModifyStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
