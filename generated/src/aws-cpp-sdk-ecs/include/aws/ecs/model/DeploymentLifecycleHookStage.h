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
  enum class DeploymentLifecycleHookStage
  {
    NOT_SET,
    RECONCILE_SERVICE,
    PRE_SCALE_UP,
    POST_SCALE_UP,
    TEST_TRAFFIC_SHIFT,
    POST_TEST_TRAFFIC_SHIFT,
    PRODUCTION_TRAFFIC_SHIFT,
    POST_PRODUCTION_TRAFFIC_SHIFT
  };

namespace DeploymentLifecycleHookStageMapper
{
AWS_ECS_API DeploymentLifecycleHookStage GetDeploymentLifecycleHookStageForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeploymentLifecycleHookStage(DeploymentLifecycleHookStage value);
} // namespace DeploymentLifecycleHookStageMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
