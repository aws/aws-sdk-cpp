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
  enum class ForecastComputationSeasonality
  {
    NOT_SET,
    AUTOMATIC,
    CUSTOM
  };

namespace ForecastComputationSeasonalityMapper
{
AWS_QUICKSIGHT_API ForecastComputationSeasonality GetForecastComputationSeasonalityForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForForecastComputationSeasonality(ForecastComputationSeasonality value);
} // namespace ForecastComputationSeasonalityMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
