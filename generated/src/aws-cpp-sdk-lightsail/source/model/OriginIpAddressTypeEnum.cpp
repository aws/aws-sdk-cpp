/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/OriginIpAddressTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace OriginIpAddressTypeEnumMapper {

static const int ipv4_HASH = HashingUtils::HashString("ipv4");
static const int ipv6_HASH = HashingUtils::HashString("ipv6");
static const int dualstack_HASH = HashingUtils::HashString("dualstack");

OriginIpAddressTypeEnum GetOriginIpAddressTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipv4_HASH) {
    return OriginIpAddressTypeEnum::ipv4;
  } else if (hashCode == ipv6_HASH) {
    return OriginIpAddressTypeEnum::ipv6;
  } else if (hashCode == dualstack_HASH) {
    return OriginIpAddressTypeEnum::dualstack;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OriginIpAddressTypeEnum>(hashCode);
  }

  return OriginIpAddressTypeEnum::NOT_SET;
}

Aws::String GetNameForOriginIpAddressTypeEnum(OriginIpAddressTypeEnum enumValue) {
  switch (enumValue) {
    case OriginIpAddressTypeEnum::NOT_SET:
      return {};
    case OriginIpAddressTypeEnum::ipv4:
      return "ipv4";
    case OriginIpAddressTypeEnum::ipv6:
      return "ipv6";
    case OriginIpAddressTypeEnum::dualstack:
      return "dualstack";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OriginIpAddressTypeEnumMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
