/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
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
AWS_EVENTBRIDGE_API PlacementStrategyType GetPlacementStrategyTypeForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForPlacementStrategyType(PlacementStrategyType value);
} // namespace PlacementStrategyTypeMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
