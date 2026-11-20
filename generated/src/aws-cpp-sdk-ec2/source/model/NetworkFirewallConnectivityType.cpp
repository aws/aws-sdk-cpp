/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/NetworkFirewallConnectivityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace NetworkFirewallConnectivityTypeMapper {

static const int flexible_HASH = HashingUtils::HashString("flexible");
static const int outbound_only_HASH = HashingUtils::HashString("outbound-only");
static const int bidirectional_HASH = HashingUtils::HashString("bidirectional");
static const int exclude_HASH = HashingUtils::HashString("exclude");
static const int az_unsupported_HASH = HashingUtils::HashString("az-unsupported");

NetworkFirewallConnectivityType GetNetworkFirewallConnectivityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == flexible_HASH) {
    return NetworkFirewallConnectivityType::flexible;
  } else if (hashCode == outbound_only_HASH) {
    return NetworkFirewallConnectivityType::outbound_only;
  } else if (hashCode == bidirectional_HASH) {
    return NetworkFirewallConnectivityType::bidirectional;
  } else if (hashCode == exclude_HASH) {
    return NetworkFirewallConnectivityType::exclude;
  } else if (hashCode == az_unsupported_HASH) {
    return NetworkFirewallConnectivityType::az_unsupported;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkFirewallConnectivityType>(hashCode);
  }

  return NetworkFirewallConnectivityType::NOT_SET;
}

Aws::String GetNameForNetworkFirewallConnectivityType(NetworkFirewallConnectivityType enumValue) {
  switch (enumValue) {
    case NetworkFirewallConnectivityType::NOT_SET:
      return {};
    case NetworkFirewallConnectivityType::flexible:
      return "flexible";
    case NetworkFirewallConnectivityType::outbound_only:
      return "outbound-only";
    case NetworkFirewallConnectivityType::bidirectional:
      return "bidirectional";
    case NetworkFirewallConnectivityType::exclude:
      return "exclude";
    case NetworkFirewallConnectivityType::az_unsupported:
      return "az-unsupported";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkFirewallConnectivityTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
