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
  enum class ServiceDeploymentRollbackMonitorsStatus
  {
    NOT_SET,
    TRIGGERED,
    MONITORING,
    MONITORING_COMPLETE,
    DISABLED
  };

namespace ServiceDeploymentRollbackMonitorsStatusMapper
{
AWS_ECS_API ServiceDeploymentRollbackMonitorsStatus GetServiceDeploymentRollbackMonitorsStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceDeploymentRollbackMonitorsStatus(ServiceDeploymentRollbackMonitorsStatus value);
} // namespace ServiceDeploymentRollbackMonitorsStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
