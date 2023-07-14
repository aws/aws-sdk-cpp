/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointEmail
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
    RENDERING_FAILURE
  };

namespace EventTypeMapper
{
AWS_PINPOINTEMAIL_API EventType GetEventTypeForName(const Aws::String& name);

AWS_PINPOINTEMAIL_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
