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
  enum class EventSourceState
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    DELETED
  };

namespace EventSourceStateMapper
{
AWS_CLOUDWATCHEVENTS_API EventSourceState GetEventSourceStateForName(const Aws::String& name);

AWS_CLOUDWATCHEVENTS_API Aws::String GetNameForEventSourceState(EventSourceState value);
} // namespace EventSourceStateMapper
} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
