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
  enum class ServiceDeploymentLifecycleStage
  {
    NOT_SET,
    RECONCILE_SERVICE,
    PRE_SCALE_UP,
    SCALE_UP,
    POST_SCALE_UP,
    TEST_TRAFFIC_SHIFT,
    POST_TEST_TRAFFIC_SHIFT,
    PRODUCTION_TRAFFIC_SHIFT,
    POST_PRODUCTION_TRAFFIC_SHIFT,
    BAKE_TIME,
    CLEAN_UP
  };

namespace ServiceDeploymentLifecycleStageMapper
{
AWS_ECS_API ServiceDeploymentLifecycleStage GetServiceDeploymentLifecycleStageForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForServiceDeploymentLifecycleStage(ServiceDeploymentLifecycleStage value);
} // namespace ServiceDeploymentLifecycleStageMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
