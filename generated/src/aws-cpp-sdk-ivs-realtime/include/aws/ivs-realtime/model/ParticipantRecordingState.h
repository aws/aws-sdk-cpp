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
  enum class ParticipantRecordingState
  {
    NOT_SET,
    STARTING,
    ACTIVE,
    STOPPING,
    STOPPED,
    FAILED,
    DISABLED
  };

namespace ParticipantRecordingStateMapper
{
AWS_IVSREALTIME_API ParticipantRecordingState GetParticipantRecordingStateForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForParticipantRecordingState(ParticipantRecordingState value);
} // namespace ParticipantRecordingStateMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
