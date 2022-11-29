/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class LineChartLineStyle
  {
    NOT_SET,
    SOLID,
    DOTTED,
    DASHED
  };

namespace LineChartLineStyleMapper
{
AWS_QUICKSIGHT_API LineChartLineStyle GetLineChartLineStyleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLineChartLineStyle(LineChartLineStyle value);
} // namespace LineChartLineStyleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
