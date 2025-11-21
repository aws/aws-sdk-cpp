/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamPolicyManagedBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamPolicyManagedByMapper {

static const int account_HASH = HashingUtils::HashString("account");
static const int delegated_administrator_for_ipam_HASH = HashingUtils::HashString("delegated-administrator-for-ipam");

IpamPolicyManagedBy GetIpamPolicyManagedByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == account_HASH) {
    return IpamPolicyManagedBy::account;
  } else if (hashCode == delegated_administrator_for_ipam_HASH) {
    return IpamPolicyManagedBy::delegated_administrator_for_ipam;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamPolicyManagedBy>(hashCode);
  }

  return IpamPolicyManagedBy::NOT_SET;
}

Aws::String GetNameForIpamPolicyManagedBy(IpamPolicyManagedBy enumValue) {
  switch (enumValue) {
    case IpamPolicyManagedBy::NOT_SET:
      return {};
    case IpamPolicyManagedBy::account:
      return "account";
    case IpamPolicyManagedBy::delegated_administrator_for_ipam:
      return "delegated-administrator-for-ipam";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamPolicyManagedByMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
