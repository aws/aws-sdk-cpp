/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayPolicyTableEntryState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayPolicyTableEntryStateMapper {

static const int active_HASH = HashingUtils::HashString("active");
static const int deleted_HASH = HashingUtils::HashString("deleted");

TransitGatewayPolicyTableEntryState GetTransitGatewayPolicyTableEntryStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == active_HASH) {
    return TransitGatewayPolicyTableEntryState::active;
  } else if (hashCode == deleted_HASH) {
    return TransitGatewayPolicyTableEntryState::deleted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayPolicyTableEntryState>(hashCode);
  }

  return TransitGatewayPolicyTableEntryState::NOT_SET;
}

Aws::String GetNameForTransitGatewayPolicyTableEntryState(TransitGatewayPolicyTableEntryState enumValue) {
  switch (enumValue) {
    case TransitGatewayPolicyTableEntryState::NOT_SET:
      return {};
    case TransitGatewayPolicyTableEntryState::active:
      return "active";
    case TransitGatewayPolicyTableEntryState::deleted:
      return "deleted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayPolicyTableEntryStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
