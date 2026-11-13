/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FlexCostAllocationNetworkResourceScopeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FlexCostAllocationNetworkResourceScopeTypeMapper {

static const int account_HASH = HashingUtils::HashString("account");
static const int vpc_HASH = HashingUtils::HashString("vpc");
static const int subnet_HASH = HashingUtils::HashString("subnet");

FlexCostAllocationNetworkResourceScopeType GetFlexCostAllocationNetworkResourceScopeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == account_HASH) {
    return FlexCostAllocationNetworkResourceScopeType::account;
  } else if (hashCode == vpc_HASH) {
    return FlexCostAllocationNetworkResourceScopeType::vpc;
  } else if (hashCode == subnet_HASH) {
    return FlexCostAllocationNetworkResourceScopeType::subnet;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlexCostAllocationNetworkResourceScopeType>(hashCode);
  }

  return FlexCostAllocationNetworkResourceScopeType::NOT_SET;
}

Aws::String GetNameForFlexCostAllocationNetworkResourceScopeType(FlexCostAllocationNetworkResourceScopeType enumValue) {
  switch (enumValue) {
    case FlexCostAllocationNetworkResourceScopeType::NOT_SET:
      return {};
    case FlexCostAllocationNetworkResourceScopeType::account:
      return "account";
    case FlexCostAllocationNetworkResourceScopeType::vpc:
      return "vpc";
    case FlexCostAllocationNetworkResourceScopeType::subnet:
      return "subnet";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlexCostAllocationNetworkResourceScopeTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
