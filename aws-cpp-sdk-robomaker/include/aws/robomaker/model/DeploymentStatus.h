/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class DeploymentStatus
  {
    NOT_SET,
    Pending,
    Preparing,
    InProgress,
    Failed,
    Succeeded,
    Canceled
  };

namespace DeploymentStatusMapper
{
AWS_ROBOMAKER_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
