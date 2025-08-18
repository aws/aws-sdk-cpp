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
  enum class DateTimeType
  {
    NOT_SET,
    ABSOLUTE,
    RELATIVE
  };

namespace DateTimeTypeMapper
{
AWS_BCMDASHBOARDS_API DateTimeType GetDateTimeTypeForName(const Aws::String& name);

AWS_BCMDASHBOARDS_API Aws::String GetNameForDateTimeType(DateTimeType value);
} // namespace DateTimeTypeMapper
} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
