/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpVersionEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpVersionEnumMapper {

static const int ipv4_HASH = HashingUtils::HashString("ipv4");
static const int ipv6_HASH = HashingUtils::HashString("ipv6");

IpVersionEnum GetIpVersionEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipv4_HASH) {
    return IpVersionEnum::ipv4;
  } else if (hashCode == ipv6_HASH) {
    return IpVersionEnum::ipv6;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpVersionEnum>(hashCode);
  }

  return IpVersionEnum::NOT_SET;
}

Aws::String GetNameForIpVersionEnum(IpVersionEnum enumValue) {
  switch (enumValue) {
    case IpVersionEnum::NOT_SET:
      return {};
    case IpVersionEnum::ipv4:
      return "ipv4";
    case IpVersionEnum::ipv6:
      return "ipv6";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpVersionEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
