/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ServiceQuotaWarningStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
namespace ServiceQuotaWarningStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int denied_HASH = HashingUtils::HashString("denied");
static const int insufficientPermissions_HASH = HashingUtils::HashString("insufficientPermissions");
static const int maxRegionSwitchRequestsExceeded_HASH = HashingUtils::HashString("maxRegionSwitchRequestsExceeded");
static const int maxAccountRequestsExceeded_HASH = HashingUtils::HashString("maxAccountRequestsExceeded");

ServiceQuotaWarningStatus GetServiceQuotaWarningStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return ServiceQuotaWarningStatus::pending;
  } else if (hashCode == denied_HASH) {
    return ServiceQuotaWarningStatus::denied;
  } else if (hashCode == insufficientPermissions_HASH) {
    return ServiceQuotaWarningStatus::insufficientPermissions;
  } else if (hashCode == maxRegionSwitchRequestsExceeded_HASH) {
    return ServiceQuotaWarningStatus::maxRegionSwitchRequestsExceeded;
  } else if (hashCode == maxAccountRequestsExceeded_HASH) {
    return ServiceQuotaWarningStatus::maxAccountRequestsExceeded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceQuotaWarningStatus>(hashCode);
  }

  return ServiceQuotaWarningStatus::NOT_SET;
}

Aws::String GetNameForServiceQuotaWarningStatus(ServiceQuotaWarningStatus enumValue) {
  switch (enumValue) {
    case ServiceQuotaWarningStatus::NOT_SET:
      return {};
    case ServiceQuotaWarningStatus::pending:
      return "pending";
    case ServiceQuotaWarningStatus::denied:
      return "denied";
    case ServiceQuotaWarningStatus::insufficientPermissions:
      return "insufficientPermissions";
    case ServiceQuotaWarningStatus::maxRegionSwitchRequestsExceeded:
      return "maxRegionSwitchRequestsExceeded";
    case ServiceQuotaWarningStatus::maxAccountRequestsExceeded:
      return "maxAccountRequestsExceeded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceQuotaWarningStatusMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
