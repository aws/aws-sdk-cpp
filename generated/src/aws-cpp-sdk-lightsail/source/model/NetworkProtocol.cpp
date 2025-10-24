﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/NetworkProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace NetworkProtocolMapper {

static const int tcp_HASH = HashingUtils::HashString("tcp");
static const int all_HASH = HashingUtils::HashString("all");
static const int udp_HASH = HashingUtils::HashString("udp");
static const int icmp_HASH = HashingUtils::HashString("icmp");
static const int icmpv6_HASH = HashingUtils::HashString("icmpv6");

NetworkProtocol GetNetworkProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == tcp_HASH) {
    return NetworkProtocol::tcp;
  } else if (hashCode == all_HASH) {
    return NetworkProtocol::all;
  } else if (hashCode == udp_HASH) {
    return NetworkProtocol::udp;
  } else if (hashCode == icmp_HASH) {
    return NetworkProtocol::icmp;
  } else if (hashCode == icmpv6_HASH) {
    return NetworkProtocol::icmpv6;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkProtocol>(hashCode);
  }

  return NetworkProtocol::NOT_SET;
}

Aws::String GetNameForNetworkProtocol(NetworkProtocol enumValue) {
  switch (enumValue) {
    case NetworkProtocol::NOT_SET:
      return {};
    case NetworkProtocol::tcp:
      return "tcp";
    case NetworkProtocol::all:
      return "all";
    case NetworkProtocol::udp:
      return "udp";
    case NetworkProtocol::icmp:
      return "icmp";
    case NetworkProtocol::icmpv6:
      return "icmpv6";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkProtocolMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
