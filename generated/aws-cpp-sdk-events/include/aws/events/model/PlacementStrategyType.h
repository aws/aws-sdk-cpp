/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvents
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
AWS_CLOUDWATCHEVENTS_API PlacementStrategyType GetPlacementStrategyTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForPlacementStrategyType(PlacementStrategyType value);
} // namespace PlacementStrategyTypeMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
