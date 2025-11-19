/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamPolicyResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamPolicyResourceTypeMapper {

static const int alb_HASH = HashingUtils::HashString("alb");
static const int eip_HASH = HashingUtils::HashString("eip");
static const int rds_HASH = HashingUtils::HashString("rds");
static const int rnat_HASH = HashingUtils::HashString("rnat");

IpamPolicyResourceType GetIpamPolicyResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == alb_HASH) {
    return IpamPolicyResourceType::alb;
  } else if (hashCode == eip_HASH) {
    return IpamPolicyResourceType::eip;
  } else if (hashCode == rds_HASH) {
    return IpamPolicyResourceType::rds;
  } else if (hashCode == rnat_HASH) {
    return IpamPolicyResourceType::rnat;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamPolicyResourceType>(hashCode);
  }

  return IpamPolicyResourceType::NOT_SET;
}

Aws::String GetNameForIpamPolicyResourceType(IpamPolicyResourceType enumValue) {
  switch (enumValue) {
    case IpamPolicyResourceType::NOT_SET:
      return {};
    case IpamPolicyResourceType::alb:
      return "alb";
    case IpamPolicyResourceType::eip:
      return "eip";
    case IpamPolicyResourceType::rds:
      return "rds";
    case IpamPolicyResourceType::rnat:
      return "rnat";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamPolicyResourceTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
