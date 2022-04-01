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
  enum class FraudDetectionReason
  {
    NOT_SET,
    KNOWN_FRAUDSTER,
    VOICE_SPOOFING
  };

namespace FraudDetectionReasonMapper
{
AWS_VOICEID_API FraudDetectionReason GetFraudDetectionReasonForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForFraudDetectionReason(FraudDetectionReason value);
} // namespace FraudDetectionReasonMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
