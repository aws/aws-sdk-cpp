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
  enum class DeploymentStatus
  {
    NOT_SET,
    IN_PROGRESS,
    IMPAIRED,
    COMPLETE,
    ROLLBACK_IN_PROGRESS,
    ROLLBACK_COMPLETE,
    CANCELLED,
    PENDING
  };

namespace DeploymentStatusMapper
{
AWS_GAMELIFT_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
