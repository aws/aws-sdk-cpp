/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/ProxyIpv6Addressability.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace ProxyIpv6AddressabilityMapper {

static const int off_HASH = HashingUtils::HashString("off");
static const int internet_facing_HASH = HashingUtils::HashString("internet-facing");
static const int internal_HASH = HashingUtils::HashString("internal");

ProxyIpv6Addressability GetProxyIpv6AddressabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == off_HASH) {
    return ProxyIpv6Addressability::off;
  } else if (hashCode == internet_facing_HASH) {
    return ProxyIpv6Addressability::internet_facing;
  } else if (hashCode == internal_HASH) {
    return ProxyIpv6Addressability::internal;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyIpv6Addressability>(hashCode);
  }

  return ProxyIpv6Addressability::NOT_SET;
}

Aws::String GetNameForProxyIpv6Addressability(ProxyIpv6Addressability enumValue) {
  switch (enumValue) {
    case ProxyIpv6Addressability::NOT_SET:
      return {};
    case ProxyIpv6Addressability::off:
      return "off";
    case ProxyIpv6Addressability::internet_facing:
      return "internet-facing";
    case ProxyIpv6Addressability::internal:
      return "internal";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyIpv6AddressabilityMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
