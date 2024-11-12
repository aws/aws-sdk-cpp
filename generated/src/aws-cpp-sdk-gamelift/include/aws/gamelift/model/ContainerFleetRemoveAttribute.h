/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{
  enum class ContainerFleetRemoveAttribute
  {
    NOT_SET,
    PER_INSTANCE_CONTAINER_GROUP_DEFINITION
  };

namespace ContainerFleetRemoveAttributeMapper
{
AWS_GAMELIFT_API ContainerFleetRemoveAttribute GetContainerFleetRemoveAttributeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerFleetRemoveAttribute(ContainerFleetRemoveAttribute value);
} // namespace ContainerFleetRemoveAttributeMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
