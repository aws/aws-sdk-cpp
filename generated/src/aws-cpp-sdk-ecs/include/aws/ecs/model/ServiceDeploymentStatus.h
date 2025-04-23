/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class ServiceDeploymentStatus
  {
    NOT_SET,
    PENDING,
    SUCCESSFUL,
    STOPPED,
    STOP_REQUESTED,
    IN_PROGRESS,
    ROLLBACK_REQUESTED,
    ROLLBACK_IN_PROGRESS,
    ROLLBACK_SUCCESSFUL,
    ROLLBACK_FAILED
  };

namespace ServiceDeploymentStatusMapper
{
AWS_ECS_API ServiceDeploymentStatus GetServiceDeploymentStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceDeploymentStatus(ServiceDeploymentStatus value);
} // namespace ServiceDeploymentStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
