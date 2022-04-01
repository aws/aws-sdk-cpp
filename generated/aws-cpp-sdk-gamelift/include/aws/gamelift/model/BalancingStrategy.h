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
  enum class BalancingStrategy
  {
    NOT_SET,
    SPOT_ONLY,
    SPOT_PREFERRED,
    ON_DEMAND_ONLY
  };

namespace BalancingStrategyMapper
{
AWS_GAMELIFT_API BalancingStrategy GetBalancingStrategyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForBalancingStrategy(BalancingStrategy value);
} // namespace BalancingStrategyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
