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
enum class HealthStatusCode { NOT_SET, HEALTHY, UNHEALTHY };

namespace HealthStatusCodeMapper {
AWS_BCMDASHBOARDS_API HealthStatusCode GetHealthStatusCodeForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForHealthStatusCode(HealthStatusCode value);
}  // namespace HealthStatusCodeMapper
}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
