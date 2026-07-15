/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancingv2/model/SourceIpAddressTypeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
namespace SourceIpAddressTypeEnumMapper {

static const int ipv4_HASH = HashingUtils::HashString("ipv4");
static const int ipv6_HASH = HashingUtils::HashString("ipv6");

SourceIpAddressTypeEnum GetSourceIpAddressTypeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ipv4_HASH) {
    return SourceIpAddressTypeEnum::ipv4;
  } else if (hashCode == ipv6_HASH) {
    return SourceIpAddressTypeEnum::ipv6;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceIpAddressTypeEnum>(hashCode);
  }

  return SourceIpAddressTypeEnum::NOT_SET;
}

Aws::String GetNameForSourceIpAddressTypeEnum(SourceIpAddressTypeEnum enumValue) {
  switch (enumValue) {
    case SourceIpAddressTypeEnum::NOT_SET:
      return {};
    case SourceIpAddressTypeEnum::ipv4:
      return "ipv4";
    case SourceIpAddressTypeEnum::ipv6:
      return "ipv6";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceIpAddressTypeEnumMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
