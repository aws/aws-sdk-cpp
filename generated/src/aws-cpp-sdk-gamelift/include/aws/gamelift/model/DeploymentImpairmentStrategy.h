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
  enum class DeploymentImpairmentStrategy
  {
    NOT_SET,
    MAINTAIN,
    ROLLBACK
  };

namespace DeploymentImpairmentStrategyMapper
{
AWS_GAMELIFT_API DeploymentImpairmentStrategy GetDeploymentImpairmentStrategyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForDeploymentImpairmentStrategy(DeploymentImpairmentStrategy value);
} // namespace DeploymentImpairmentStrategyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
