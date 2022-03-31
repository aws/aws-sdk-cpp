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
  enum class VoiceMessageBodyTextType
  {
    NOT_SET,
    TEXT,
    SSML
  };

namespace VoiceMessageBodyTextTypeMapper
{
AWS_PINPOINTSMSVOICEV2_API VoiceMessageBodyTextType GetVoiceMessageBodyTextTypeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForVoiceMessageBodyTextType(VoiceMessageBodyTextType value);
} // namespace VoiceMessageBodyTextTypeMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
