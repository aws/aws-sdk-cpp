/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{
  enum class EventName
  {
    NOT_SET,
    JOINED,
    LEFT,
    PUBLISH_STARTED,
    PUBLISH_STOPPED,
    SUBSCRIBE_STARTED,
    SUBSCRIBE_STOPPED,
    PUBLISH_ERROR,
    SUBSCRIBE_ERROR,
    JOIN_ERROR
  };

namespace EventNameMapper
{
AWS_IVSREALTIME_API EventName GetEventNameForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForEventName(EventName value);
} // namespace EventNameMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
