/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/ProxyIpv4Addressability.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace ProxyIpv4AddressabilityMapper {

static const int off_HASH = HashingUtils::HashString("off");
static const int internet_facing_HASH = HashingUtils::HashString("internet-facing");
static const int internal_HASH = HashingUtils::HashString("internal");

ProxyIpv4Addressability GetProxyIpv4AddressabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == off_HASH) {
    return ProxyIpv4Addressability::off;
  } else if (hashCode == internet_facing_HASH) {
    return ProxyIpv4Addressability::internet_facing;
  } else if (hashCode == internal_HASH) {
    return ProxyIpv4Addressability::internal;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProxyIpv4Addressability>(hashCode);
  }

  return ProxyIpv4Addressability::NOT_SET;
}

Aws::String GetNameForProxyIpv4Addressability(ProxyIpv4Addressability enumValue) {
  switch (enumValue) {
    case ProxyIpv4Addressability::NOT_SET:
      return {};
    case ProxyIpv4Addressability::off:
      return "off";
    case ProxyIpv4Addressability::internet_facing:
      return "internet-facing";
    case ProxyIpv4Addressability::internal:
      return "internal";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProxyIpv4AddressabilityMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
