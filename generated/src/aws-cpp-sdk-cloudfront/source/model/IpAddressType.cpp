﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/IpAddressType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace IpAddressTypeMapper {

static const int ipv4_HASH = HashingUtils::HashString("ipv4");
static const int ipv6_HASH = HashingUtils::HashString("ipv6");
static const int dualstack_HASH = HashingUtils::HashString("dualstack");

IpAddressType GetIpAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipv4_HASH) {
    return IpAddressType::ipv4;
  } else if (hashCode == ipv6_HASH) {
    return IpAddressType::ipv6;
  } else if (hashCode == dualstack_HASH) {
    return IpAddressType::dualstack;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpAddressType>(hashCode);
  }

  return IpAddressType::NOT_SET;
}

Aws::String GetNameForIpAddressType(IpAddressType enumValue) {
  switch (enumValue) {
    case IpAddressType::NOT_SET:
      return {};
    case IpAddressType::ipv4:
      return "ipv4";
    case IpAddressType::ipv6:
      return "ipv6";
    case IpAddressType::dualstack:
      return "dualstack";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpAddressTypeMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
