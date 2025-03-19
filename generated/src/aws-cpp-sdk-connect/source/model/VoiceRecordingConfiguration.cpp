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

VoiceRecordingConfiguration::VoiceRecordingConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("IvrRecordingTrack"))
  {
    m_ivrRecordingTrack = IvrRecordingTrackMapper::GetIvrRecordingTrackForName(jsonValue.GetString("IvrRecordingTrack"));
    m_ivrRecordingTrackHasBeenSet = true;
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

  if(m_ivrRecordingTrackHasBeenSet)
  {
   payload.WithString("IvrRecordingTrack", IvrRecordingTrackMapper::GetNameForIvrRecordingTrack(m_ivrRecordingTrack));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
