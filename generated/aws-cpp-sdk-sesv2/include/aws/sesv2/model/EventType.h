/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    SEND,
    REJECT,
    BOUNCE,
    COMPLAINT,
    DELIVERY,
    OPEN,
    CLICK,
    RENDERING_FAILURE,
    DELIVERY_DELAY,
    SUBSCRIPTION
  };

namespace EventTypeMapper
{
AWS_SESV2_API EventType GetEventTypeForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
