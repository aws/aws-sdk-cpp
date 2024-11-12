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
  enum class DeploymentProtectionStrategy
  {
    NOT_SET,
    WITH_PROTECTION,
    IGNORE_PROTECTION
  };

namespace DeploymentProtectionStrategyMapper
{
AWS_GAMELIFT_API DeploymentProtectionStrategy GetDeploymentProtectionStrategyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForDeploymentProtectionStrategy(DeploymentProtectionStrategy value);
} // namespace DeploymentProtectionStrategyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
