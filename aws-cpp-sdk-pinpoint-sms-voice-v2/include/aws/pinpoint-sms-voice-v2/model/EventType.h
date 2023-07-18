/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    ALL,
    TEXT_ALL,
    TEXT_SENT,
    TEXT_PENDING,
    TEXT_QUEUED,
    TEXT_SUCCESSFUL,
    TEXT_DELIVERED,
    TEXT_INVALID,
    TEXT_INVALID_MESSAGE,
    TEXT_UNREACHABLE,
    TEXT_CARRIER_UNREACHABLE,
    TEXT_BLOCKED,
    TEXT_CARRIER_BLOCKED,
    TEXT_SPAM,
    TEXT_UNKNOWN,
    TEXT_TTL_EXPIRED,
    VOICE_ALL,
    VOICE_INITIATED,
    VOICE_RINGING,
    VOICE_ANSWERED,
    VOICE_COMPLETED,
    VOICE_BUSY,
    VOICE_NO_ANSWER,
    VOICE_FAILED,
    VOICE_TTL_EXPIRED
  };

namespace EventTypeMapper
{
AWS_PINPOINTSMSVOICEV2_API EventType GetEventTypeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
