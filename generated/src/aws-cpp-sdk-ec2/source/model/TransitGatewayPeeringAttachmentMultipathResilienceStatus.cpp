/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachmentMultipathResilienceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayPeeringAttachmentMultipathResilienceStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

TransitGatewayPeeringAttachmentMultipathResilienceStatus GetTransitGatewayPeeringAttachmentMultipathResilienceStatusForName(
    const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return TransitGatewayPeeringAttachmentMultipathResilienceStatus::pending;
  } else if (hashCode == enabled_HASH) {
    return TransitGatewayPeeringAttachmentMultipathResilienceStatus::enabled;
  } else if (hashCode == disabled_HASH) {
    return TransitGatewayPeeringAttachmentMultipathResilienceStatus::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayPeeringAttachmentMultipathResilienceStatus>(hashCode);
  }

  return TransitGatewayPeeringAttachmentMultipathResilienceStatus::NOT_SET;
}

Aws::String GetNameForTransitGatewayPeeringAttachmentMultipathResilienceStatus(
    TransitGatewayPeeringAttachmentMultipathResilienceStatus enumValue) {
  switch (enumValue) {
    case TransitGatewayPeeringAttachmentMultipathResilienceStatus::NOT_SET:
      return {};
    case TransitGatewayPeeringAttachmentMultipathResilienceStatus::pending:
      return "pending";
    case TransitGatewayPeeringAttachmentMultipathResilienceStatus::enabled:
      return "enabled";
    case TransitGatewayPeeringAttachmentMultipathResilienceStatus::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayPeeringAttachmentMultipathResilienceStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
