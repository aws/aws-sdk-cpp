/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/IpamByoipCidrState.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace IpamByoipCidrStateMapper {

static const int advertised_HASH = HashingUtils::HashString("advertised");
static const int deprovisioned_HASH = HashingUtils::HashString("deprovisioned");
static const int failed_deprovision_HASH = HashingUtils::HashString("failed-deprovision");
static const int failed_provision_HASH = HashingUtils::HashString("failed-provision");
static const int pending_advertising_HASH = HashingUtils::HashString("pending-advertising");
static const int pending_deprovision_HASH = HashingUtils::HashString("pending-deprovision");
static const int pending_provision_HASH = HashingUtils::HashString("pending-provision");
static const int pending_withdrawal_HASH = HashingUtils::HashString("pending-withdrawal");
static const int provisioned_HASH = HashingUtils::HashString("provisioned");
static const int provisioned_not_publicly_advertisable_HASH = HashingUtils::HashString("provisioned-not-publicly-advertisable");

IpamByoipCidrState GetIpamByoipCidrStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == advertised_HASH) {
    return IpamByoipCidrState::advertised;
  } else if (hashCode == deprovisioned_HASH) {
    return IpamByoipCidrState::deprovisioned;
  } else if (hashCode == failed_deprovision_HASH) {
    return IpamByoipCidrState::failed_deprovision;
  } else if (hashCode == failed_provision_HASH) {
    return IpamByoipCidrState::failed_provision;
  } else if (hashCode == pending_advertising_HASH) {
    return IpamByoipCidrState::pending_advertising;
  } else if (hashCode == pending_deprovision_HASH) {
    return IpamByoipCidrState::pending_deprovision;
  } else if (hashCode == pending_provision_HASH) {
    return IpamByoipCidrState::pending_provision;
  } else if (hashCode == pending_withdrawal_HASH) {
    return IpamByoipCidrState::pending_withdrawal;
  } else if (hashCode == provisioned_HASH) {
    return IpamByoipCidrState::provisioned;
  } else if (hashCode == provisioned_not_publicly_advertisable_HASH) {
    return IpamByoipCidrState::provisioned_not_publicly_advertisable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamByoipCidrState>(hashCode);
  }

  return IpamByoipCidrState::NOT_SET;
}

Aws::String GetNameForIpamByoipCidrState(IpamByoipCidrState enumValue) {
  switch (enumValue) {
    case IpamByoipCidrState::NOT_SET:
      return {};
    case IpamByoipCidrState::advertised:
      return "advertised";
    case IpamByoipCidrState::deprovisioned:
      return "deprovisioned";
    case IpamByoipCidrState::failed_deprovision:
      return "failed-deprovision";
    case IpamByoipCidrState::failed_provision:
      return "failed-provision";
    case IpamByoipCidrState::pending_advertising:
      return "pending-advertising";
    case IpamByoipCidrState::pending_deprovision:
      return "pending-deprovision";
    case IpamByoipCidrState::pending_provision:
      return "pending-provision";
    case IpamByoipCidrState::pending_withdrawal:
      return "pending-withdrawal";
    case IpamByoipCidrState::provisioned:
      return "provisioned";
    case IpamByoipCidrState::provisioned_not_publicly_advertisable:
      return "provisioned-not-publicly-advertisable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamByoipCidrStateMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
