/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BCMDashboards {
namespace Model {
enum class StatusReason {
  NOT_SET,
  DATA_SOURCE_ACCESS_DENIED,
  EXECUTION_ROLE_ASSUME_FAILED,
  EXECUTION_ROLE_INSUFFICIENT_PERMISSIONS,
  DASHBOARD_NOT_FOUND,
  DASHBOARD_ACCESS_DENIED,
  INTERNAL_FAILURE,
  WIDGET_ID_NOT_FOUND
};

namespace StatusReasonMapper {
AWS_BCMDASHBOARDS_API StatusReason GetStatusReasonForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForStatusReason(StatusReason value);
}  // namespace StatusReasonMapper
}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
