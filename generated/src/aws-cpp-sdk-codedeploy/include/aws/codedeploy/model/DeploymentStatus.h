/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class DeploymentStatus
  {
    NOT_SET,
    Created,
    Queued,
    InProgress,
    Baking,
    Succeeded,
    Failed,
    Stopped,
    Ready
  };

namespace DeploymentStatusMapper
{
AWS_CODEDEPLOY_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
