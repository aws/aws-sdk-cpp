/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyEntryState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace TransitGatewayMeteringPolicyEntryStateMapper {

static const int available_HASH = HashingUtils::HashString("available");
static const int deleted_HASH = HashingUtils::HashString("deleted");

TransitGatewayMeteringPolicyEntryState GetTransitGatewayMeteringPolicyEntryStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == available_HASH) {
    return TransitGatewayMeteringPolicyEntryState::available;
  } else if (hashCode == deleted_HASH) {
    return TransitGatewayMeteringPolicyEntryState::deleted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TransitGatewayMeteringPolicyEntryState>(hashCode);
  }

  return TransitGatewayMeteringPolicyEntryState::NOT_SET;
}

Aws::String GetNameForTransitGatewayMeteringPolicyEntryState(TransitGatewayMeteringPolicyEntryState enumValue) {
  switch (enumValue) {
    case TransitGatewayMeteringPolicyEntryState::NOT_SET:
      return {};
    case TransitGatewayMeteringPolicyEntryState::available:
      return "available";
    case TransitGatewayMeteringPolicyEntryState::deleted:
      return "deleted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TransitGatewayMeteringPolicyEntryStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
