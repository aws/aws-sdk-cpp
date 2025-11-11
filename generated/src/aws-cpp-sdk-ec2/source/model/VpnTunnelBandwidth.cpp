/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/VpnTunnelBandwidth.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace VpnTunnelBandwidthMapper {

static const int standard_HASH = HashingUtils::HashString("standard");
static const int large_HASH = HashingUtils::HashString("large");

VpnTunnelBandwidth GetVpnTunnelBandwidthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == standard_HASH) {
    return VpnTunnelBandwidth::standard;
  } else if (hashCode == large_HASH) {
    return VpnTunnelBandwidth::large;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpnTunnelBandwidth>(hashCode);
  }

  return VpnTunnelBandwidth::NOT_SET;
}

Aws::String GetNameForVpnTunnelBandwidth(VpnTunnelBandwidth enumValue) {
  switch (enumValue) {
    case VpnTunnelBandwidth::NOT_SET:
      return {};
    case VpnTunnelBandwidth::standard:
      return "standard";
    case VpnTunnelBandwidth::large:
      return "large";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpnTunnelBandwidthMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
