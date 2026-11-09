/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayAttachmentNatGatewaySupportState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayAttachmentNatGatewaySupportStateMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");
static const int enabling_HASH = HashingUtils::HashString("enabling");
static const int disabling_HASH = HashingUtils::HashString("disabling");

TransitGatewayAttachmentNatGatewaySupportState GetTransitGatewayAttachmentNatGatewaySupportStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return TransitGatewayAttachmentNatGatewaySupportState::enabled;
  } else if (hashCode == disabled_HASH) {
    return TransitGatewayAttachmentNatGatewaySupportState::disabled;
  } else if (hashCode == enabling_HASH) {
    return TransitGatewayAttachmentNatGatewaySupportState::enabling;
  } else if (hashCode == disabling_HASH) {
    return TransitGatewayAttachmentNatGatewaySupportState::disabling;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayAttachmentNatGatewaySupportState>(hashCode);
  }

  return TransitGatewayAttachmentNatGatewaySupportState::NOT_SET;
}

Aws::String GetNameForTransitGatewayAttachmentNatGatewaySupportState(TransitGatewayAttachmentNatGatewaySupportState enumValue) {
  switch (enumValue) {
    case TransitGatewayAttachmentNatGatewaySupportState::NOT_SET:
      return {};
    case TransitGatewayAttachmentNatGatewaySupportState::enabled:
      return "enabled";
    case TransitGatewayAttachmentNatGatewaySupportState::disabled:
      return "disabled";
    case TransitGatewayAttachmentNatGatewaySupportState::enabling:
      return "enabling";
    case TransitGatewayAttachmentNatGatewaySupportState::disabling:
      return "disabling";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayAttachmentNatGatewaySupportStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
