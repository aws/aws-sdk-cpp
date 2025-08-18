/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{
  enum class DashboardType
  {
    NOT_SET,
    CUSTOM
  };

namespace DashboardTypeMapper
{
AWS_BCMDASHBOARDS_API DashboardType GetDashboardTypeForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForDashboardType(DashboardType value);
} // namespace DashboardTypeMapper
} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
