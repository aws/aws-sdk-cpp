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
  enum class FraudsterRegistrationJobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED,
    COMPLETED_WITH_ERRORS,
    FAILED
  };

namespace FraudsterRegistrationJobStatusMapper
{
AWS_VOICEID_API FraudsterRegistrationJobStatus GetFraudsterRegistrationJobStatusForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForFraudsterRegistrationJobStatus(FraudsterRegistrationJobStatus value);
} // namespace FraudsterRegistrationJobStatusMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
