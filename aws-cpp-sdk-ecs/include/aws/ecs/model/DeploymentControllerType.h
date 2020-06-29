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
  enum class DeploymentControllerType
  {
    NOT_SET,
    ECS,
    CODE_DEPLOY,
    EXTERNAL
  };

namespace DeploymentControllerTypeMapper
{
AWS_ECS_API DeploymentControllerType GetDeploymentControllerTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForDeploymentControllerType(DeploymentControllerType value);
} // namespace DeploymentControllerTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
