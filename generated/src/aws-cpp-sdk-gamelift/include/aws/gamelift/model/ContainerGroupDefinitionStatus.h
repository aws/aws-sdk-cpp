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
  enum class ContainerGroupDefinitionStatus
  {
    NOT_SET,
    READY,
    COPYING,
    FAILED
  };

namespace ContainerGroupDefinitionStatusMapper
{
AWS_GAMELIFT_API ContainerGroupDefinitionStatus GetContainerGroupDefinitionStatusForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForContainerGroupDefinitionStatus(ContainerGroupDefinitionStatus value);
} // namespace ContainerGroupDefinitionStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
