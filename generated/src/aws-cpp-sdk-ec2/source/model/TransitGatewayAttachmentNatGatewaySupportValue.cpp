/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayAttachmentNatGatewaySupportValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayAttachmentNatGatewaySupportValueMapper {

static const int enable_HASH = HashingUtils::HashString("enable");
static const int disable_HASH = HashingUtils::HashString("disable");

TransitGatewayAttachmentNatGatewaySupportValue GetTransitGatewayAttachmentNatGatewaySupportValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enable_HASH) {
    return TransitGatewayAttachmentNatGatewaySupportValue::enable;
  } else if (hashCode == disable_HASH) {
    return TransitGatewayAttachmentNatGatewaySupportValue::disable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayAttachmentNatGatewaySupportValue>(hashCode);
  }

  return TransitGatewayAttachmentNatGatewaySupportValue::NOT_SET;
}

Aws::String GetNameForTransitGatewayAttachmentNatGatewaySupportValue(TransitGatewayAttachmentNatGatewaySupportValue enumValue) {
  switch (enumValue) {
    case TransitGatewayAttachmentNatGatewaySupportValue::NOT_SET:
      return {};
    case TransitGatewayAttachmentNatGatewaySupportValue::enable:
      return "enable";
    case TransitGatewayAttachmentNatGatewaySupportValue::disable:
      return "disable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayAttachmentNatGatewaySupportValueMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
