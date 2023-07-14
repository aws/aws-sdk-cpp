/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class VoiceRecordingTrack
  {
    NOT_SET,
    FROM_AGENT,
    TO_AGENT,
    ALL
  };

namespace VoiceRecordingTrackMapper
{
AWS_CONNECT_API VoiceRecordingTrack GetVoiceRecordingTrackForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForVoiceRecordingTrack(VoiceRecordingTrack value);
} // namespace VoiceRecordingTrackMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
