/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/StatusReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BCMDashboards {
namespace Model {
namespace StatusReasonMapper {

static const int DATA_SOURCE_ACCESS_DENIED_HASH = HashingUtils::HashString("DATA_SOURCE_ACCESS_DENIED");
static const int EXECUTION_ROLE_ASSUME_FAILED_HASH = HashingUtils::HashString("EXECUTION_ROLE_ASSUME_FAILED");
static const int EXECUTION_ROLE_INSUFFICIENT_PERMISSIONS_HASH = HashingUtils::HashString("EXECUTION_ROLE_INSUFFICIENT_PERMISSIONS");
static const int DASHBOARD_NOT_FOUND_HASH = HashingUtils::HashString("DASHBOARD_NOT_FOUND");
static const int DASHBOARD_ACCESS_DENIED_HASH = HashingUtils::HashString("DASHBOARD_ACCESS_DENIED");
static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int WIDGET_ID_NOT_FOUND_HASH = HashingUtils::HashString("WIDGET_ID_NOT_FOUND");

StatusReason GetStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DATA_SOURCE_ACCESS_DENIED_HASH) {
    return StatusReason::DATA_SOURCE_ACCESS_DENIED;
  } else if (hashCode == EXECUTION_ROLE_ASSUME_FAILED_HASH) {
    return StatusReason::EXECUTION_ROLE_ASSUME_FAILED;
  } else if (hashCode == EXECUTION_ROLE_INSUFFICIENT_PERMISSIONS_HASH) {
    return StatusReason::EXECUTION_ROLE_INSUFFICIENT_PERMISSIONS;
  } else if (hashCode == DASHBOARD_NOT_FOUND_HASH) {
    return StatusReason::DASHBOARD_NOT_FOUND;
  } else if (hashCode == DASHBOARD_ACCESS_DENIED_HASH) {
    return StatusReason::DASHBOARD_ACCESS_DENIED;
  } else if (hashCode == INTERNAL_FAILURE_HASH) {
    return StatusReason::INTERNAL_FAILURE;
  } else if (hashCode == WIDGET_ID_NOT_FOUND_HASH) {
    return StatusReason::WIDGET_ID_NOT_FOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StatusReason>(hashCode);
  }

  return StatusReason::NOT_SET;
}

Aws::String GetNameForStatusReason(StatusReason enumValue) {
  switch (enumValue) {
    case StatusReason::NOT_SET:
      return {};
    case StatusReason::DATA_SOURCE_ACCESS_DENIED:
      return "DATA_SOURCE_ACCESS_DENIED";
    case StatusReason::EXECUTION_ROLE_ASSUME_FAILED:
      return "EXECUTION_ROLE_ASSUME_FAILED";
    case StatusReason::EXECUTION_ROLE_INSUFFICIENT_PERMISSIONS:
      return "EXECUTION_ROLE_INSUFFICIENT_PERMISSIONS";
    case StatusReason::DASHBOARD_NOT_FOUND:
      return "DASHBOARD_NOT_FOUND";
    case StatusReason::DASHBOARD_ACCESS_DENIED:
      return "DASHBOARD_ACCESS_DENIED";
    case StatusReason::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case StatusReason::WIDGET_ID_NOT_FOUND:
      return "WIDGET_ID_NOT_FOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusReasonMapper
}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
