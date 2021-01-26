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
  enum class DashboardUIState
  {
    NOT_SET,
    EXPANDED,
    COLLAPSED
  };

namespace DashboardUIStateMapper
{
AWS_QUICKSIGHT_API DashboardUIState GetDashboardUIStateForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDashboardUIState(DashboardUIState value);
} // namespace DashboardUIStateMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
