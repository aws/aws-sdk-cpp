/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamPrefixListResolverRuleTypeMapper {

static const int static_cidr_HASH = HashingUtils::HashString("static-cidr");
static const int ipam_resource_cidr_HASH = HashingUtils::HashString("ipam-resource-cidr");
static const int ipam_pool_cidr_HASH = HashingUtils::HashString("ipam-pool-cidr");

IpamPrefixListResolverRuleType GetIpamPrefixListResolverRuleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == static_cidr_HASH) {
    return IpamPrefixListResolverRuleType::static_cidr;
  } else if (hashCode == ipam_resource_cidr_HASH) {
    return IpamPrefixListResolverRuleType::ipam_resource_cidr;
  } else if (hashCode == ipam_pool_cidr_HASH) {
    return IpamPrefixListResolverRuleType::ipam_pool_cidr;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamPrefixListResolverRuleType>(hashCode);
  }

  return IpamPrefixListResolverRuleType::NOT_SET;
}

Aws::String GetNameForIpamPrefixListResolverRuleType(IpamPrefixListResolverRuleType enumValue) {
  switch (enumValue) {
    case IpamPrefixListResolverRuleType::NOT_SET:
      return {};
    case IpamPrefixListResolverRuleType::static_cidr:
      return "static-cidr";
    case IpamPrefixListResolverRuleType::ipam_resource_cidr:
      return "ipam-resource-cidr";
    case IpamPrefixListResolverRuleType::ipam_pool_cidr:
      return "ipam-pool-cidr";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamPrefixListResolverRuleTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
