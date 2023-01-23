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
  enum class PlacementConstraintType
  {
    NOT_SET,
    distinctInstance,
    memberOf
  };

namespace PlacementConstraintTypeMapper
{
AWS_CLOUDWATCHEVENTS_API PlacementConstraintType GetPlacementConstraintTypeForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForPlacementConstraintType(PlacementConstraintType value);
} // namespace PlacementConstraintTypeMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
