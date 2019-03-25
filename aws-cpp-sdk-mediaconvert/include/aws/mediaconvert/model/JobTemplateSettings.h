/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AvailBlanking.h>
#include <aws/mediaconvert/model/EsamSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/MotionImageInserter.h>
#include <aws/mediaconvert/model/NielsenConfiguration.h>
#include <aws/mediaconvert/model/TimecodeConfig.h>
#include <aws/mediaconvert/model/TimedMetadataInsertion.h>
#include <aws/mediaconvert/model/InputTemplate.h>
#include <aws/mediaconvert/model/OutputGroup.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * JobTemplateSettings contains all the transcode settings saved in the template
   * that will be applied to jobs created from it.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobTemplateSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API JobTemplateSettings
  {
  public:
    JobTemplateSettings();
    JobTemplateSettings(Aws::Utils::Json::JsonView jsonValue);
    JobTemplateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline int GetAdAvailOffset() const{ return m_adAvailOffset; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }

    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline JobTemplateSettings& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}


    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline const AvailBlanking& GetAvailBlanking() const{ return m_availBlanking; }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline bool AvailBlankingHasBeenSet() const { return m_availBlankingHasBeenSet; }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline void SetAvailBlanking(const AvailBlanking& value) { m_availBlankingHasBeenSet = true; m_availBlanking = value; }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline void SetAvailBlanking(AvailBlanking&& value) { m_availBlankingHasBeenSet = true; m_availBlanking = std::move(value); }

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline JobTemplateSettings& WithAvailBlanking(const AvailBlanking& value) { SetAvailBlanking(value); return *this;}

    /**
     * Settings for ad avail blanking.  Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline JobTemplateSettings& WithAvailBlanking(AvailBlanking&& value) { SetAvailBlanking(std::move(value)); return *this;}


    /**
     * Settings for Event Signaling And Messaging (ESAM).
     */
    inline const EsamSettings& GetEsam() const{ return m_esam; }

    /**
     * Settings for Event Signaling And Messaging (ESAM).
     */
    inline bool EsamHasBeenSet() const { return m_esamHasBeenSet; }

    /**
     * Settings for Event Signaling And Messaging (ESAM).
     */
    inline void SetEsam(const EsamSettings& value) { m_esamHasBeenSet = true; m_esam = value; }

    /**
     * Settings for Event Signaling And Messaging (ESAM).
     */
    inline void SetEsam(EsamSettings&& value) { m_esamHasBeenSet = true; m_esam = std::move(value); }

    /**
     * Settings for Event Signaling And Messaging (ESAM).
     */
    inline JobTemplateSettings& WithEsam(const EsamSettings& value) { SetEsam(value); return *this;}

    /**
     * Settings for Event Signaling And Messaging (ESAM).
     */
    inline JobTemplateSettings& WithEsam(EsamSettings&& value) { SetEsam(std::move(value)); return *this;}


    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline const Aws::Vector<InputTemplate>& GetInputs() const{ return m_inputs; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline void SetInputs(const Aws::Vector<InputTemplate>& value) { m_inputsHasBeenSet = true; m_inputs = value; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline void SetInputs(Aws::Vector<InputTemplate>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& WithInputs(const Aws::Vector<InputTemplate>& value) { SetInputs(value); return *this;}

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& WithInputs(Aws::Vector<InputTemplate>&& value) { SetInputs(std::move(value)); return *this;}

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& AddInputs(const InputTemplate& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }

    /**
     * Use Inputs (inputs) to define the source file used in the transcode job. There
     * can only be one input in a job template.  Using the API, you can include
     * multiple inputs when referencing a job template.
     */
    inline JobTemplateSettings& AddInputs(InputTemplate&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }


    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups.
     */
    inline const MotionImageInserter& GetMotionImageInserter() const{ return m_motionImageInserter; }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups.
     */
    inline bool MotionImageInserterHasBeenSet() const { return m_motionImageInserterHasBeenSet; }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups.
     */
    inline void SetMotionImageInserter(const MotionImageInserter& value) { m_motionImageInserterHasBeenSet = true; m_motionImageInserter = value; }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups.
     */
    inline void SetMotionImageInserter(MotionImageInserter&& value) { m_motionImageInserterHasBeenSet = true; m_motionImageInserter = std::move(value); }

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups.
     */
    inline JobTemplateSettings& WithMotionImageInserter(const MotionImageInserter& value) { SetMotionImageInserter(value); return *this;}

    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups.
     */
    inline JobTemplateSettings& WithMotionImageInserter(MotionImageInserter&& value) { SetMotionImageInserter(std::move(value)); return *this;}


    /**
     * Settings for Nielsen Configuration
     */
    inline const NielsenConfiguration& GetNielsenConfiguration() const{ return m_nielsenConfiguration; }

    /**
     * Settings for Nielsen Configuration
     */
    inline bool NielsenConfigurationHasBeenSet() const { return m_nielsenConfigurationHasBeenSet; }

    /**
     * Settings for Nielsen Configuration
     */
    inline void SetNielsenConfiguration(const NielsenConfiguration& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = value; }

    /**
     * Settings for Nielsen Configuration
     */
    inline void SetNielsenConfiguration(NielsenConfiguration&& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = std::move(value); }

    /**
     * Settings for Nielsen Configuration
     */
    inline JobTemplateSettings& WithNielsenConfiguration(const NielsenConfiguration& value) { SetNielsenConfiguration(value); return *this;}

    /**
     * Settings for Nielsen Configuration
     */
    inline JobTemplateSettings& WithNielsenConfiguration(NielsenConfiguration&& value) { SetNielsenConfiguration(std::move(value)); return *this;}


    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline const Aws::Vector<OutputGroup>& GetOutputGroups() const{ return m_outputGroups; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline bool OutputGroupsHasBeenSet() const { return m_outputGroupsHasBeenSet; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline void SetOutputGroups(const Aws::Vector<OutputGroup>& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = value; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline void SetOutputGroups(Aws::Vector<OutputGroup>&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = std::move(value); }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& WithOutputGroups(const Aws::Vector<OutputGroup>& value) { SetOutputGroups(value); return *this;}

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& WithOutputGroups(Aws::Vector<OutputGroup>&& value) { SetOutputGroups(std::move(value)); return *this;}

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& AddOutputGroups(const OutputGroup& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(value); return *this; }

    /**
     * (OutputGroups) contains one group of settings for each set of outputs that share
     * a common package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF,
     * and no container) are grouped in a single output group as well. Required in
     * (OutputGroups) is a group of settings that apply to the whole group. This
     * required object depends on the value you set for (Type) under
     * (OutputGroups)>(OutputGroupSettings). Type, settings object pairs are as
     * follows. * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS,
     * HlsGroupSettings * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings *
     * MS_SMOOTH_GROUP_SETTINGS, MsSmoothGroupSettings * CMAF_GROUP_SETTINGS,
     * CmafGroupSettings
     */
    inline JobTemplateSettings& AddOutputGroups(OutputGroup&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(std::move(value)); return *this; }


    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline const TimecodeConfig& GetTimecodeConfig() const{ return m_timecodeConfig; }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline bool TimecodeConfigHasBeenSet() const { return m_timecodeConfigHasBeenSet; }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline void SetTimecodeConfig(const TimecodeConfig& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = value; }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline void SetTimecodeConfig(TimecodeConfig&& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = std::move(value); }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline JobTemplateSettings& WithTimecodeConfig(const TimecodeConfig& value) { SetTimecodeConfig(value); return *this;}

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline JobTemplateSettings& WithTimecodeConfig(TimecodeConfig&& value) { SetTimecodeConfig(std::move(value)); return *this;}


    /**
     * Enable Timed metadata insertion (TimedMetadataInsertion) to include ID3 tags in
     * your job. To include timed metadata, you must enable it here, enable it in each
     * output container, and specify tags and timecodes in ID3 insertion (Id3Insertion)
     * objects.
     */
    inline const TimedMetadataInsertion& GetTimedMetadataInsertion() const{ return m_timedMetadataInsertion; }

    /**
     * Enable Timed metadata insertion (TimedMetadataInsertion) to include ID3 tags in
     * your job. To include timed metadata, you must enable it here, enable it in each
     * output container, and specify tags and timecodes in ID3 insertion (Id3Insertion)
     * objects.
     */
    inline bool TimedMetadataInsertionHasBeenSet() const { return m_timedMetadataInsertionHasBeenSet; }

    /**
     * Enable Timed metadata insertion (TimedMetadataInsertion) to include ID3 tags in
     * your job. To include timed metadata, you must enable it here, enable it in each
     * output container, and specify tags and timecodes in ID3 insertion (Id3Insertion)
     * objects.
     */
    inline void SetTimedMetadataInsertion(const TimedMetadataInsertion& value) { m_timedMetadataInsertionHasBeenSet = true; m_timedMetadataInsertion = value; }

    /**
     * Enable Timed metadata insertion (TimedMetadataInsertion) to include ID3 tags in
     * your job. To include timed metadata, you must enable it here, enable it in each
     * output container, and specify tags and timecodes in ID3 insertion (Id3Insertion)
     * objects.
     */
    inline void SetTimedMetadataInsertion(TimedMetadataInsertion&& value) { m_timedMetadataInsertionHasBeenSet = true; m_timedMetadataInsertion = std::move(value); }

    /**
     * Enable Timed metadata insertion (TimedMetadataInsertion) to include ID3 tags in
     * your job. To include timed metadata, you must enable it here, enable it in each
     * output container, and specify tags and timecodes in ID3 insertion (Id3Insertion)
     * objects.
     */
    inline JobTemplateSettings& WithTimedMetadataInsertion(const TimedMetadataInsertion& value) { SetTimedMetadataInsertion(value); return *this;}

    /**
     * Enable Timed metadata insertion (TimedMetadataInsertion) to include ID3 tags in
     * your job. To include timed metadata, you must enable it here, enable it in each
     * output container, and specify tags and timecodes in ID3 insertion (Id3Insertion)
     * objects.
     */
    inline JobTemplateSettings& WithTimedMetadataInsertion(TimedMetadataInsertion&& value) { SetTimedMetadataInsertion(std::move(value)); return *this;}

  private:

    int m_adAvailOffset;
    bool m_adAvailOffsetHasBeenSet;

    AvailBlanking m_availBlanking;
    bool m_availBlankingHasBeenSet;

    EsamSettings m_esam;
    bool m_esamHasBeenSet;

    Aws::Vector<InputTemplate> m_inputs;
    bool m_inputsHasBeenSet;

    MotionImageInserter m_motionImageInserter;
    bool m_motionImageInserterHasBeenSet;

    NielsenConfiguration m_nielsenConfiguration;
    bool m_nielsenConfigurationHasBeenSet;

    Aws::Vector<OutputGroup> m_outputGroups;
    bool m_outputGroupsHasBeenSet;

    TimecodeConfig m_timecodeConfig;
    bool m_timecodeConfigHasBeenSet;

    TimedMetadataInsertion m_timedMetadataInsertion;
    bool m_timedMetadataInsertionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
