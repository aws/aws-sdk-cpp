/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameSparks
{
namespace Model
{
  enum class DeploymentState
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace DeploymentStateMapper
{
AWS_GAMESPARKS_API DeploymentState GetDeploymentStateForName(const Aws::String& name);

AWS_GAMESPARKS_API Aws::String GetNameForDeploymentState(DeploymentState value);
} // namespace DeploymentStateMapper
} // namespace Model
} // namespace GameSparks
} // namespace Aws
