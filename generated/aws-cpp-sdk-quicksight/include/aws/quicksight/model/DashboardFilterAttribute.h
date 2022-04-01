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
  enum class DashboardFilterAttribute
  {
    NOT_SET,
    QUICKSIGHT_USER
  };

namespace DashboardFilterAttributeMapper
{
AWS_QUICKSIGHT_API DashboardFilterAttribute GetDashboardFilterAttributeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDashboardFilterAttribute(DashboardFilterAttribute value);
} // namespace DashboardFilterAttributeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
