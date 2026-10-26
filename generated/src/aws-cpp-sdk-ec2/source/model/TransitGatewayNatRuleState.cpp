/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayNatRuleState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayNatRuleStateMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int activated_HASH = HashingUtils::HashString("activated");
static const int deactivated_HASH = HashingUtils::HashString("deactivated");
static const int deleting_HASH = HashingUtils::HashString("deleting");

TransitGatewayNatRuleState GetTransitGatewayNatRuleStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return TransitGatewayNatRuleState::pending;
  } else if (hashCode == activated_HASH) {
    return TransitGatewayNatRuleState::activated;
  } else if (hashCode == deactivated_HASH) {
    return TransitGatewayNatRuleState::deactivated;
  } else if (hashCode == deleting_HASH) {
    return TransitGatewayNatRuleState::deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayNatRuleState>(hashCode);
  }

  return TransitGatewayNatRuleState::NOT_SET;
}

Aws::String GetNameForTransitGatewayNatRuleState(TransitGatewayNatRuleState enumValue) {
  switch (enumValue) {
    case TransitGatewayNatRuleState::NOT_SET:
      return {};
    case TransitGatewayNatRuleState::pending:
      return "pending";
    case TransitGatewayNatRuleState::activated:
      return "activated";
    case TransitGatewayNatRuleState::deactivated:
      return "deactivated";
    case TransitGatewayNatRuleState::deleting:
      return "deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayNatRuleStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
