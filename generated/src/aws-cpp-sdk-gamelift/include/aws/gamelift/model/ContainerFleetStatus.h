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
  enum class ContainerFleetStatus
  {
    NOT_SET,
    PENDING,
    CREATING,
    CREATED,
    ACTIVATING,
    ACTIVE,
    UPDATING,
    DELETING
  };

namespace ContainerFleetStatusMapper
{
AWS_GAMELIFT_API ContainerFleetStatus GetContainerFleetStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerFleetStatus(ContainerFleetStatus value);
} // namespace ContainerFleetStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
