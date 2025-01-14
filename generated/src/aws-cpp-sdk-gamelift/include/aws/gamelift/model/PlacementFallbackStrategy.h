/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class PlacementFallbackStrategy
  {
    NOT_SET,
    DEFAULT_AFTER_SINGLE_PASS,
    NONE
  };

namespace PlacementFallbackStrategyMapper
{
AWS_GAMELIFT_API PlacementFallbackStrategy GetPlacementFallbackStrategyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForPlacementFallbackStrategy(PlacementFallbackStrategy value);
} // namespace PlacementFallbackStrategyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
