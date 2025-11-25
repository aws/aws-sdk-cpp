/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/NatGatewayApplianceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace NatGatewayApplianceTypeMapper {

static const int network_firewall_proxy_HASH = HashingUtils::HashString("network-firewall-proxy");

NatGatewayApplianceType GetNatGatewayApplianceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == network_firewall_proxy_HASH) {
    return NatGatewayApplianceType::network_firewall_proxy;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NatGatewayApplianceType>(hashCode);
  }

  return NatGatewayApplianceType::NOT_SET;
}

Aws::String GetNameForNatGatewayApplianceType(NatGatewayApplianceType enumValue) {
  switch (enumValue) {
    case NatGatewayApplianceType::NOT_SET:
      return {};
    case NatGatewayApplianceType::network_firewall_proxy:
      return "network-firewall-proxy";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NatGatewayApplianceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
