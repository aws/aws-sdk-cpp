/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/VoiceAnalyticsProcessorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{

VoiceAnalyticsProcessorConfiguration::VoiceAnalyticsProcessorConfiguration() : 
    m_speakerSearchStatus(VoiceAnalyticsConfigurationStatus::NOT_SET),
    m_speakerSearchStatusHasBeenSet(false),
    m_voiceToneAnalysisStatus(VoiceAnalyticsConfigurationStatus::NOT_SET),
    m_voiceToneAnalysisStatusHasBeenSet(false)
{
}

VoiceAnalyticsProcessorConfiguration::VoiceAnalyticsProcessorConfiguration(JsonView jsonValue) : 
    m_speakerSearchStatus(VoiceAnalyticsConfigurationStatus::NOT_SET),
    m_speakerSearchStatusHasBeenSet(false),
    m_voiceToneAnalysisStatus(VoiceAnalyticsConfigurationStatus::NOT_SET),
    m_voiceToneAnalysisStatusHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceAnalyticsProcessorConfiguration& VoiceAnalyticsProcessorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SpeakerSearchStatus"))
  {
    m_speakerSearchStatus = VoiceAnalyticsConfigurationStatusMapper::GetVoiceAnalyticsConfigurationStatusForName(jsonValue.GetString("SpeakerSearchStatus"));

    m_speakerSearchStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceToneAnalysisStatus"))
  {
    m_voiceToneAnalysisStatus = VoiceAnalyticsConfigurationStatusMapper::GetVoiceAnalyticsConfigurationStatusForName(jsonValue.GetString("VoiceToneAnalysisStatus"));

    m_voiceToneAnalysisStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceAnalyticsProcessorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_speakerSearchStatusHasBeenSet)
  {
   payload.WithString("SpeakerSearchStatus", VoiceAnalyticsConfigurationStatusMapper::GetNameForVoiceAnalyticsConfigurationStatus(m_speakerSearchStatus));
  }

  if(m_voiceToneAnalysisStatusHasBeenSet)
  {
   payload.WithString("VoiceToneAnalysisStatus", VoiceAnalyticsConfigurationStatusMapper::GetNameForVoiceAnalyticsConfigurationStatus(m_voiceToneAnalysisStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
