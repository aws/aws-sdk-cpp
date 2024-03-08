/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{
  enum class DeploymentStatus
  {
    NOT_SET,
    COMPLETED,
    CREATING,
    DELETE_IN_PROGRESS,
    DELETE_INITIATING,
    DELETE_FAILED,
    DELETED,
    FAILED,
    IN_PROGRESS,
    VALIDATING
  };

namespace DeploymentStatusMapper
{
AWS_LAUNCHWIZARD_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_LAUNCHWIZARD_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
