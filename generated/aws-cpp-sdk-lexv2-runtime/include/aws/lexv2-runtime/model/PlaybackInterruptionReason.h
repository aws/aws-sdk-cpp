/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{
  enum class PlaybackInterruptionReason
  {
    NOT_SET,
    DTMF_START_DETECTED,
    TEXT_DETECTED,
    VOICE_START_DETECTED
  };

namespace PlaybackInterruptionReasonMapper
{
AWS_LEXRUNTIMEV2_API PlaybackInterruptionReason GetPlaybackInterruptionReasonForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForPlaybackInterruptionReason(PlaybackInterruptionReason value);
} // namespace PlaybackInterruptionReasonMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
