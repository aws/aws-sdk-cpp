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
  enum class PlacementStrategyType
  {
    NOT_SET,
    random,
    spread,
    binpack
  };

namespace PlacementStrategyTypeMapper
{
AWS_ECS_API PlacementStrategyType GetPlacementStrategyTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForPlacementStrategyType(PlacementStrategyType value);
} // namespace PlacementStrategyTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
