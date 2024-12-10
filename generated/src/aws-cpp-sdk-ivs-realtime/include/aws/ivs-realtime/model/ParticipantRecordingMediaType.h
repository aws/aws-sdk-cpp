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
  enum class ParticipantRecordingMediaType
  {
    NOT_SET,
    AUDIO_VIDEO,
    AUDIO_ONLY,
    NONE
  };

namespace ParticipantRecordingMediaTypeMapper
{
AWS_IVSREALTIME_API ParticipantRecordingMediaType GetParticipantRecordingMediaTypeForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForParticipantRecordingMediaType(ParticipantRecordingMediaType value);
} // namespace ParticipantRecordingMediaTypeMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
