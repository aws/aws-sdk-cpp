/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/VpcIpAddressType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace VpcIpAddressTypeMapper {

static const int ipv4_HASH = HashingUtils::HashString("ipv4");
static const int dualstack_HASH = HashingUtils::HashString("dualstack");

VpcIpAddressType GetVpcIpAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipv4_HASH) {
    return VpcIpAddressType::ipv4;
  } else if (hashCode == dualstack_HASH) {
    return VpcIpAddressType::dualstack;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpcIpAddressType>(hashCode);
  }

  return VpcIpAddressType::NOT_SET;
}

Aws::String GetNameForVpcIpAddressType(VpcIpAddressType enumValue) {
  switch (enumValue) {
    case VpcIpAddressType::NOT_SET:
      return {};
    case VpcIpAddressType::ipv4:
      return "ipv4";
    case VpcIpAddressType::dualstack:
      return "dualstack";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpcIpAddressTypeMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
