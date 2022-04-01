/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VoiceID
{
namespace Model
{
  enum class SpeakerStatus
  {
    NOT_SET,
    ENROLLED,
    EXPIRED,
    OPTED_OUT,
    PENDING
  };

namespace SpeakerStatusMapper
{
AWS_VOICEID_API SpeakerStatus GetSpeakerStatusForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForSpeakerStatus(SpeakerStatus value);
} // namespace SpeakerStatusMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
