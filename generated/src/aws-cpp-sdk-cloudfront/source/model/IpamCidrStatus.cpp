/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/IpamCidrStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudFront {
namespace Model {
namespace IpamCidrStatusMapper {

static const int provisioned_HASH = HashingUtils::HashString("provisioned");
static const int failed_provision_HASH = HashingUtils::HashString("failed-provision");
static const int provisioning_HASH = HashingUtils::HashString("provisioning");
static const int deprovisioned_HASH = HashingUtils::HashString("deprovisioned");
static const int failed_deprovision_HASH = HashingUtils::HashString("failed-deprovision");
static const int deprovisioning_HASH = HashingUtils::HashString("deprovisioning");
static const int advertised_HASH = HashingUtils::HashString("advertised");
static const int failed_advertise_HASH = HashingUtils::HashString("failed-advertise");
static const int advertising_HASH = HashingUtils::HashString("advertising");
static const int withdrawn_HASH = HashingUtils::HashString("withdrawn");
static const int failed_withdraw_HASH = HashingUtils::HashString("failed-withdraw");
static const int withdrawing_HASH = HashingUtils::HashString("withdrawing");

IpamCidrStatus GetIpamCidrStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == provisioned_HASH) {
    return IpamCidrStatus::provisioned;
  } else if (hashCode == failed_provision_HASH) {
    return IpamCidrStatus::failed_provision;
  } else if (hashCode == provisioning_HASH) {
    return IpamCidrStatus::provisioning;
  } else if (hashCode == deprovisioned_HASH) {
    return IpamCidrStatus::deprovisioned;
  } else if (hashCode == failed_deprovision_HASH) {
    return IpamCidrStatus::failed_deprovision;
  } else if (hashCode == deprovisioning_HASH) {
    return IpamCidrStatus::deprovisioning;
  } else if (hashCode == advertised_HASH) {
    return IpamCidrStatus::advertised;
  } else if (hashCode == failed_advertise_HASH) {
    return IpamCidrStatus::failed_advertise;
  } else if (hashCode == advertising_HASH) {
    return IpamCidrStatus::advertising;
  } else if (hashCode == withdrawn_HASH) {
    return IpamCidrStatus::withdrawn;
  } else if (hashCode == failed_withdraw_HASH) {
    return IpamCidrStatus::failed_withdraw;
  } else if (hashCode == withdrawing_HASH) {
    return IpamCidrStatus::withdrawing;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IpamCidrStatus>(hashCode);
  }

  return IpamCidrStatus::NOT_SET;
}

Aws::String GetNameForIpamCidrStatus(IpamCidrStatus enumValue) {
  switch (enumValue) {
    case IpamCidrStatus::NOT_SET:
      return {};
    case IpamCidrStatus::provisioned:
      return "provisioned";
    case IpamCidrStatus::failed_provision:
      return "failed-provision";
    case IpamCidrStatus::provisioning:
      return "provisioning";
    case IpamCidrStatus::deprovisioned:
      return "deprovisioned";
    case IpamCidrStatus::failed_deprovision:
      return "failed-deprovision";
    case IpamCidrStatus::deprovisioning:
      return "deprovisioning";
    case IpamCidrStatus::advertised:
      return "advertised";
    case IpamCidrStatus::failed_advertise:
      return "failed-advertise";
    case IpamCidrStatus::advertising:
      return "advertising";
    case IpamCidrStatus::withdrawn:
      return "withdrawn";
    case IpamCidrStatus::failed_withdraw:
      return "failed-withdraw";
    case IpamCidrStatus::withdrawing:
      return "withdrawing";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IpamCidrStatusMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
