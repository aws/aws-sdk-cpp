/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamPrefixListResolverRuleConditionOperation.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamPrefixListResolverRuleConditionOperationMapper {

static const int equals_HASH = HashingUtils::HashString("equals");
static const int not_equals_HASH = HashingUtils::HashString("not-equals");
static const int subnet_of_HASH = HashingUtils::HashString("subnet-of");

IpamPrefixListResolverRuleConditionOperation GetIpamPrefixListResolverRuleConditionOperationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == equals_HASH) {
    return IpamPrefixListResolverRuleConditionOperation::equals;
  } else if (hashCode == not_equals_HASH) {
    return IpamPrefixListResolverRuleConditionOperation::not_equals;
  } else if (hashCode == subnet_of_HASH) {
    return IpamPrefixListResolverRuleConditionOperation::subnet_of;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamPrefixListResolverRuleConditionOperation>(hashCode);
  }

  return IpamPrefixListResolverRuleConditionOperation::NOT_SET;
}

Aws::String GetNameForIpamPrefixListResolverRuleConditionOperation(IpamPrefixListResolverRuleConditionOperation enumValue) {
  switch (enumValue) {
    case IpamPrefixListResolverRuleConditionOperation::NOT_SET:
      return {};
    case IpamPrefixListResolverRuleConditionOperation::equals:
      return "equals";
    case IpamPrefixListResolverRuleConditionOperation::not_equals:
      return "not-equals";
    case IpamPrefixListResolverRuleConditionOperation::subnet_of:
      return "subnet-of";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamPrefixListResolverRuleConditionOperationMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
