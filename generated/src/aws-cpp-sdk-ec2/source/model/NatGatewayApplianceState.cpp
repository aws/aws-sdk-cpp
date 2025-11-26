/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/NatGatewayApplianceState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace NatGatewayApplianceStateMapper {

static const int attaching_HASH = HashingUtils::HashString("attaching");
static const int attached_HASH = HashingUtils::HashString("attached");
static const int detaching_HASH = HashingUtils::HashString("detaching");
static const int detached_HASH = HashingUtils::HashString("detached");
static const int attach_failed_HASH = HashingUtils::HashString("attach-failed");
static const int detach_failed_HASH = HashingUtils::HashString("detach-failed");

NatGatewayApplianceState GetNatGatewayApplianceStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == attaching_HASH) {
    return NatGatewayApplianceState::attaching;
  } else if (hashCode == attached_HASH) {
    return NatGatewayApplianceState::attached;
  } else if (hashCode == detaching_HASH) {
    return NatGatewayApplianceState::detaching;
  } else if (hashCode == detached_HASH) {
    return NatGatewayApplianceState::detached;
  } else if (hashCode == attach_failed_HASH) {
    return NatGatewayApplianceState::attach_failed;
  } else if (hashCode == detach_failed_HASH) {
    return NatGatewayApplianceState::detach_failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NatGatewayApplianceState>(hashCode);
  }

  return NatGatewayApplianceState::NOT_SET;
}

Aws::String GetNameForNatGatewayApplianceState(NatGatewayApplianceState enumValue) {
  switch (enumValue) {
    case NatGatewayApplianceState::NOT_SET:
      return {};
    case NatGatewayApplianceState::attaching:
      return "attaching";
    case NatGatewayApplianceState::attached:
      return "attached";
    case NatGatewayApplianceState::detaching:
      return "detaching";
    case NatGatewayApplianceState::detached:
      return "detached";
    case NatGatewayApplianceState::attach_failed:
      return "attach-failed";
    case NatGatewayApplianceState::detach_failed:
      return "detach-failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NatGatewayApplianceStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
