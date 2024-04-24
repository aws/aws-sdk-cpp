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
  enum class ContainerSchedulingStrategy
  {
    NOT_SET,
    REPLICA,
    DAEMON
  };

namespace ContainerSchedulingStrategyMapper
{
AWS_GAMELIFT_API ContainerSchedulingStrategy GetContainerSchedulingStrategyForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerSchedulingStrategy(ContainerSchedulingStrategy value);
} // namespace ContainerSchedulingStrategyMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
