﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/VoiceAnalyticsConfigurationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The configuration settings for a voice analytics processor.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/VoiceAnalyticsProcessorConfiguration">AWS
   * API Reference</a></p>
   */
  class VoiceAnalyticsProcessorConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceAnalyticsProcessorConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceAnalyticsProcessorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API VoiceAnalyticsProcessorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the speaker search task.</p>
     */
    inline VoiceAnalyticsConfigurationStatus GetSpeakerSearchStatus() const { return m_speakerSearchStatus; }
    inline bool SpeakerSearchStatusHasBeenSet() const { return m_speakerSearchStatusHasBeenSet; }
    inline void SetSpeakerSearchStatus(VoiceAnalyticsConfigurationStatus value) { m_speakerSearchStatusHasBeenSet = true; m_speakerSearchStatus = value; }
    inline VoiceAnalyticsProcessorConfiguration& WithSpeakerSearchStatus(VoiceAnalyticsConfigurationStatus value) { SetSpeakerSearchStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the voice tone analysis task.</p>
     */
    inline VoiceAnalyticsConfigurationStatus GetVoiceToneAnalysisStatus() const { return m_voiceToneAnalysisStatus; }
    inline bool VoiceToneAnalysisStatusHasBeenSet() const { return m_voiceToneAnalysisStatusHasBeenSet; }
    inline void SetVoiceToneAnalysisStatus(VoiceAnalyticsConfigurationStatus value) { m_voiceToneAnalysisStatusHasBeenSet = true; m_voiceToneAnalysisStatus = value; }
    inline VoiceAnalyticsProcessorConfiguration& WithVoiceToneAnalysisStatus(VoiceAnalyticsConfigurationStatus value) { SetVoiceToneAnalysisStatus(value); return *this;}
    ///@}
  private:

    VoiceAnalyticsConfigurationStatus m_speakerSearchStatus{VoiceAnalyticsConfigurationStatus::NOT_SET};
    bool m_speakerSearchStatusHasBeenSet = false;

    VoiceAnalyticsConfigurationStatus m_voiceToneAnalysisStatus{VoiceAnalyticsConfigurationStatus::NOT_SET};
    bool m_voiceToneAnalysisStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
