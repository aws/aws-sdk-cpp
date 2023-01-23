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
  enum class EventSourceState
  {
    NOT_SET,
    PENDING,
    ACTIVE,
    DELETED
  };

namespace EventSourceStateMapper
{
AWS_EVENTBRIDGE_API EventSourceState GetEventSourceStateForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForEventSourceState(EventSourceState value);
} // namespace EventSourceStateMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
