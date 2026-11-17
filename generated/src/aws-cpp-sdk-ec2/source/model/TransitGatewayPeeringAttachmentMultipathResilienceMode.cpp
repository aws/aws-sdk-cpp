/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachmentMultipathResilienceMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayPeeringAttachmentMultipathResilienceModeMapper {

static const int always_on_HASH = HashingUtils::HashString("always-on");

TransitGatewayPeeringAttachmentMultipathResilienceMode GetTransitGatewayPeeringAttachmentMultipathResilienceModeForName(
    const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == always_on_HASH) {
    return TransitGatewayPeeringAttachmentMultipathResilienceMode::always_on;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayPeeringAttachmentMultipathResilienceMode>(hashCode);
  }

  return TransitGatewayPeeringAttachmentMultipathResilienceMode::NOT_SET;
}

Aws::String GetNameForTransitGatewayPeeringAttachmentMultipathResilienceMode(
    TransitGatewayPeeringAttachmentMultipathResilienceMode enumValue) {
  switch (enumValue) {
    case TransitGatewayPeeringAttachmentMultipathResilienceMode::NOT_SET:
      return {};
    case TransitGatewayPeeringAttachmentMultipathResilienceMode::always_on:
      return "always-on";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayPeeringAttachmentMultipathResilienceModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
