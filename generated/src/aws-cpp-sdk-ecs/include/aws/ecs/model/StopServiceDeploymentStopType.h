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
  enum class StopServiceDeploymentStopType
  {
    NOT_SET,
    ABORT,
    ROLLBACK
  };

namespace StopServiceDeploymentStopTypeMapper
{
AWS_ECS_API StopServiceDeploymentStopType GetStopServiceDeploymentStopTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForStopServiceDeploymentStopType(StopServiceDeploymentStopType value);
} // namespace StopServiceDeploymentStopTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
