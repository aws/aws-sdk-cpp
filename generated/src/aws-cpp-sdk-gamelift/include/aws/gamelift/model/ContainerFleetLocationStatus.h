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
  enum class ContainerFleetLocationStatus
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

namespace ContainerFleetLocationStatusMapper
{
AWS_GAMELIFT_API ContainerFleetLocationStatus GetContainerFleetLocationStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerFleetLocationStatus(ContainerFleetLocationStatus value);
} // namespace ContainerFleetLocationStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
