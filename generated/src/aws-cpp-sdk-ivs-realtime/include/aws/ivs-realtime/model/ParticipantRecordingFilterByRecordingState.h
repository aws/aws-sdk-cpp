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
  enum class ParticipantRecordingFilterByRecordingState
  {
    NOT_SET,
    STARTING,
    ACTIVE,
    STOPPING,
    STOPPED,
    FAILED
  };

namespace ParticipantRecordingFilterByRecordingStateMapper
{
AWS_IVSREALTIME_API ParticipantRecordingFilterByRecordingState GetParticipantRecordingFilterByRecordingStateForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForParticipantRecordingFilterByRecordingState(ParticipantRecordingFilterByRecordingState value);
} // namespace ParticipantRecordingFilterByRecordingStateMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
