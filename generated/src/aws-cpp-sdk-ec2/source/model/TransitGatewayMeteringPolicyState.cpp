/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayMeteringPolicyStateMapper {

static const int available_HASH = HashingUtils::HashString("available");
static const int deleted_HASH = HashingUtils::HashString("deleted");
static const int pending_HASH = HashingUtils::HashString("pending");
static const int modifying_HASH = HashingUtils::HashString("modifying");
static const int deleting_HASH = HashingUtils::HashString("deleting");

TransitGatewayMeteringPolicyState GetTransitGatewayMeteringPolicyStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == available_HASH) {
    return TransitGatewayMeteringPolicyState::available;
  } else if (hashCode == deleted_HASH) {
    return TransitGatewayMeteringPolicyState::deleted;
  } else if (hashCode == pending_HASH) {
    return TransitGatewayMeteringPolicyState::pending;
  } else if (hashCode == modifying_HASH) {
    return TransitGatewayMeteringPolicyState::modifying;
  } else if (hashCode == deleting_HASH) {
    return TransitGatewayMeteringPolicyState::deleting;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayMeteringPolicyState>(hashCode);
  }

  return TransitGatewayMeteringPolicyState::NOT_SET;
}

Aws::String GetNameForTransitGatewayMeteringPolicyState(TransitGatewayMeteringPolicyState enumValue) {
  switch (enumValue) {
    case TransitGatewayMeteringPolicyState::NOT_SET:
      return {};
    case TransitGatewayMeteringPolicyState::available:
      return "available";
    case TransitGatewayMeteringPolicyState::deleted:
      return "deleted";
    case TransitGatewayMeteringPolicyState::pending:
      return "pending";
    case TransitGatewayMeteringPolicyState::modifying:
      return "modifying";
    case TransitGatewayMeteringPolicyState::deleting:
      return "deleting";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayMeteringPolicyStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
