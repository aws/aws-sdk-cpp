/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayAttachmentNatSystemRouteSupportValue.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayAttachmentNatSystemRouteSupportValueMapper {

static const int enable_HASH = HashingUtils::HashString("enable");
static const int disable_HASH = HashingUtils::HashString("disable");

TransitGatewayAttachmentNatSystemRouteSupportValue GetTransitGatewayAttachmentNatSystemRouteSupportValueForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enable_HASH) {
    return TransitGatewayAttachmentNatSystemRouteSupportValue::enable;
  } else if (hashCode == disable_HASH) {
    return TransitGatewayAttachmentNatSystemRouteSupportValue::disable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayAttachmentNatSystemRouteSupportValue>(hashCode);
  }

  return TransitGatewayAttachmentNatSystemRouteSupportValue::NOT_SET;
}

Aws::String GetNameForTransitGatewayAttachmentNatSystemRouteSupportValue(TransitGatewayAttachmentNatSystemRouteSupportValue enumValue) {
  switch (enumValue) {
    case TransitGatewayAttachmentNatSystemRouteSupportValue::NOT_SET:
      return {};
    case TransitGatewayAttachmentNatSystemRouteSupportValue::enable:
      return "enable";
    case TransitGatewayAttachmentNatSystemRouteSupportValue::disable:
      return "disable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayAttachmentNatSystemRouteSupportValueMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
