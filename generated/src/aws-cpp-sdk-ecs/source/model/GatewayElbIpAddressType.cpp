/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/GatewayElbIpAddressType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace GatewayElbIpAddressTypeMapper {

static const int ipv4_HASH = HashingUtils::HashString("ipv4");
static const int dualstack_HASH = HashingUtils::HashString("dualstack");
static const int dualstack_without_public_ipv4_HASH = HashingUtils::HashString("dualstack-without-public-ipv4");

GatewayElbIpAddressType GetGatewayElbIpAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipv4_HASH) {
    return GatewayElbIpAddressType::ipv4;
  } else if (hashCode == dualstack_HASH) {
    return GatewayElbIpAddressType::dualstack;
  } else if (hashCode == dualstack_without_public_ipv4_HASH) {
    return GatewayElbIpAddressType::dualstack_without_public_ipv4;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GatewayElbIpAddressType>(hashCode);
  }

  return GatewayElbIpAddressType::NOT_SET;
}

Aws::String GetNameForGatewayElbIpAddressType(GatewayElbIpAddressType enumValue) {
  switch (enumValue) {
    case GatewayElbIpAddressType::NOT_SET:
      return {};
    case GatewayElbIpAddressType::ipv4:
      return "ipv4";
    case GatewayElbIpAddressType::dualstack:
      return "dualstack";
    case GatewayElbIpAddressType::dualstack_without_public_ipv4:
      return "dualstack-without-public-ipv4";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GatewayElbIpAddressTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
