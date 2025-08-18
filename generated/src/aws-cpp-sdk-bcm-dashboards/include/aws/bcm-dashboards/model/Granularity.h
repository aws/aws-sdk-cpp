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
  enum class Granularity
  {
    NOT_SET,
    HOURLY,
    DAILY,
    MONTHLY
  };

namespace GranularityMapper
{
AWS_BCMDASHBOARDS_API Granularity GetGranularityForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForGranularity(Granularity value);
} // namespace GranularityMapper
} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
