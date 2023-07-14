/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    INITIATED_CALL,
    RINGING,
    ANSWERED,
    COMPLETED_CALL,
    BUSY,
    FAILED,
    NO_ANSWER
  };

namespace EventTypeMapper
{
AWS_PINPOINTSMSVOICE_API EventType GetEventTypeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICE_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
