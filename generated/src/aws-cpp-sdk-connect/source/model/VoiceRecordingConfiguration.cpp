/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VoiceRecordingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

VoiceRecordingConfiguration::VoiceRecordingConfiguration() : 
    m_voiceRecordingTrack(VoiceRecordingTrack::NOT_SET),
    m_voiceRecordingTrackHasBeenSet(false)
{
}

VoiceRecordingConfiguration::VoiceRecordingConfiguration(JsonView jsonValue) : 
    m_voiceRecordingTrack(VoiceRecordingTrack::NOT_SET),
    m_voiceRecordingTrackHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceRecordingConfiguration& VoiceRecordingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceRecordingTrack"))
  {
    m_voiceRecordingTrack = VoiceRecordingTrackMapper::GetVoiceRecordingTrackForName(jsonValue.GetString("VoiceRecordingTrack"));

    m_voiceRecordingTrackHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceRecordingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_voiceRecordingTrackHasBeenSet)
  {
   payload.WithString("VoiceRecordingTrack", VoiceRecordingTrackMapper::GetNameForVoiceRecordingTrack(m_voiceRecordingTrack));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
