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
  enum class ContainerInstanceStatus
  {
    NOT_SET,
    ACTIVE,
    DRAINING,
    REGISTERING,
    DEREGISTERING,
    REGISTRATION_FAILED
  };

namespace ContainerInstanceStatusMapper
{
AWS_ECS_API ContainerInstanceStatus GetContainerInstanceStatusForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForContainerInstanceStatus(ContainerInstanceStatus value);
} // namespace ContainerInstanceStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
