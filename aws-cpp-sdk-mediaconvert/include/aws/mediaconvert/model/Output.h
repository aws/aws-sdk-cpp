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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/ContainerSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/OutputSettings.h>
#include <aws/mediaconvert/model/VideoDescription.h>
#include <aws/mediaconvert/model/AudioDescription.h>
#include <aws/mediaconvert/model/CaptionDescription.h>
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
   * An output object describes the settings for a single output file or stream in an
   * output group.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Output">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Output
  {
  public:
    Output();
    Output(Aws::Utils::Json::JsonView jsonValue);
    Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline const Aws::Vector<AudioDescription>& GetAudioDescriptions() const{ return m_audioDescriptions; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline bool AudioDescriptionsHasBeenSet() const { return m_audioDescriptionsHasBeenSet; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline void SetAudioDescriptions(const Aws::Vector<AudioDescription>& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = value; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline void SetAudioDescriptions(Aws::Vector<AudioDescription>&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = std::move(value); }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline Output& WithAudioDescriptions(const Aws::Vector<AudioDescription>& value) { SetAudioDescriptions(value); return *this;}

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline Output& WithAudioDescriptions(Aws::Vector<AudioDescription>&& value) { SetAudioDescriptions(std::move(value)); return *this;}

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline Output& AddAudioDescriptions(const AudioDescription& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(value); return *this; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline Output& AddAudioDescriptions(AudioDescription&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(std::move(value)); return *this; }


    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline const Aws::Vector<CaptionDescription>& GetCaptionDescriptions() const{ return m_captionDescriptions; }

    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline bool CaptionDescriptionsHasBeenSet() const { return m_captionDescriptionsHasBeenSet; }

    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline void SetCaptionDescriptions(const Aws::Vector<CaptionDescription>& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = value; }

    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline void SetCaptionDescriptions(Aws::Vector<CaptionDescription>&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = std::move(value); }

    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline Output& WithCaptionDescriptions(const Aws::Vector<CaptionDescription>& value) { SetCaptionDescriptions(value); return *this;}

    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline Output& WithCaptionDescriptions(Aws::Vector<CaptionDescription>&& value) { SetCaptionDescriptions(std::move(value)); return *this;}

    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline Output& AddCaptionDescriptions(const CaptionDescription& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(value); return *this; }

    /**
     * (CaptionDescriptions) contains groups of captions settings. For each output that
     * has captions, include one instance of (CaptionDescriptions).
     * (CaptionDescriptions) can contain multiple groups of captions settings.
     */
    inline Output& AddCaptionDescriptions(CaptionDescription&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(std::move(value)); return *this; }


    /**
     * Container specific settings.
     */
    inline const ContainerSettings& GetContainerSettings() const{ return m_containerSettings; }

    /**
     * Container specific settings.
     */
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }

    /**
     * Container specific settings.
     */
    inline void SetContainerSettings(const ContainerSettings& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = value; }

    /**
     * Container specific settings.
     */
    inline void SetContainerSettings(ContainerSettings&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::move(value); }

    /**
     * Container specific settings.
     */
    inline Output& WithContainerSettings(const ContainerSettings& value) { SetContainerSettings(value); return *this;}

    /**
     * Container specific settings.
     */
    inline Output& WithContainerSettings(ContainerSettings&& value) { SetContainerSettings(std::move(value)); return *this;}


    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline const Aws::String& GetExtension() const{ return m_extension; }

    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }

    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline void SetExtension(const Aws::String& value) { m_extensionHasBeenSet = true; m_extension = value; }

    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline void SetExtension(Aws::String&& value) { m_extensionHasBeenSet = true; m_extension = std::move(value); }

    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline void SetExtension(const char* value) { m_extensionHasBeenSet = true; m_extension.assign(value); }

    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline Output& WithExtension(const Aws::String& value) { SetExtension(value); return *this;}

    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline Output& WithExtension(Aws::String&& value) { SetExtension(std::move(value)); return *this;}

    /**
     * Use Extension (Extension) to specify the file extension for outputs in File
     * output groups. If you do not specify a value, the service will use default
     * extensions by container type as follows * MPEG-2 transport stream, m2ts *
     * Quicktime, mov * MXF container, mxf * MPEG-4 container, mp4 * No Container, the
     * service will use codec extensions (e.g. AAC, H265, H265, AC3)
     */
    inline Output& WithExtension(const char* value) { SetExtension(value); return *this;}


    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline const Aws::String& GetNameModifier() const{ return m_nameModifier; }

    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }

    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline void SetNameModifier(const Aws::String& value) { m_nameModifierHasBeenSet = true; m_nameModifier = value; }

    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline void SetNameModifier(Aws::String&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::move(value); }

    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline void SetNameModifier(const char* value) { m_nameModifierHasBeenSet = true; m_nameModifier.assign(value); }

    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline Output& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}

    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline Output& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}

    /**
     * Use Name modifier (NameModifier) to have the service add a string to the end of
     * each output filename. You specify the base filename as part of your destination
     * URI. When you create multiple outputs in the same output group, Name modifier
     * (NameModifier) is required. Name modifier also accepts format identifiers. For
     * DASH ISO outputs, if you use the format identifiers $Number$ or $Time$ in one
     * output, you must use them in the same way in all outputs of the output group.
     */
    inline Output& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}


    /**
     * Specific settings for this type of output.
     */
    inline const OutputSettings& GetOutputSettings() const{ return m_outputSettings; }

    /**
     * Specific settings for this type of output.
     */
    inline bool OutputSettingsHasBeenSet() const { return m_outputSettingsHasBeenSet; }

    /**
     * Specific settings for this type of output.
     */
    inline void SetOutputSettings(const OutputSettings& value) { m_outputSettingsHasBeenSet = true; m_outputSettings = value; }

    /**
     * Specific settings for this type of output.
     */
    inline void SetOutputSettings(OutputSettings&& value) { m_outputSettingsHasBeenSet = true; m_outputSettings = std::move(value); }

    /**
     * Specific settings for this type of output.
     */
    inline Output& WithOutputSettings(const OutputSettings& value) { SetOutputSettings(value); return *this;}

    /**
     * Specific settings for this type of output.
     */
    inline Output& WithOutputSettings(OutputSettings&& value) { SetOutputSettings(std::move(value)); return *this;}


    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline const Aws::String& GetPreset() const{ return m_preset; }

    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline bool PresetHasBeenSet() const { return m_presetHasBeenSet; }

    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline void SetPreset(const Aws::String& value) { m_presetHasBeenSet = true; m_preset = value; }

    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline void SetPreset(Aws::String&& value) { m_presetHasBeenSet = true; m_preset = std::move(value); }

    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline void SetPreset(const char* value) { m_presetHasBeenSet = true; m_preset.assign(value); }

    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline Output& WithPreset(const Aws::String& value) { SetPreset(value); return *this;}

    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline Output& WithPreset(Aws::String&& value) { SetPreset(std::move(value)); return *this;}

    /**
     * Use Preset (Preset) to specifiy a preset for your transcoding settings. Provide
     * the system or custom preset name. You can specify either Preset (Preset) or
     * Container settings (ContainerSettings), but not both.
     */
    inline Output& WithPreset(const char* value) { SetPreset(value); return *this;}


    /**
     * (VideoDescription) contains a group of video encoding settings. The specific
     * video settings depend on the video codec you choose when you specify a value for
     * Video codec (codec). Include one instance of (VideoDescription) per output.
     */
    inline const VideoDescription& GetVideoDescription() const{ return m_videoDescription; }

    /**
     * (VideoDescription) contains a group of video encoding settings. The specific
     * video settings depend on the video codec you choose when you specify a value for
     * Video codec (codec). Include one instance of (VideoDescription) per output.
     */
    inline bool VideoDescriptionHasBeenSet() const { return m_videoDescriptionHasBeenSet; }

    /**
     * (VideoDescription) contains a group of video encoding settings. The specific
     * video settings depend on the video codec you choose when you specify a value for
     * Video codec (codec). Include one instance of (VideoDescription) per output.
     */
    inline void SetVideoDescription(const VideoDescription& value) { m_videoDescriptionHasBeenSet = true; m_videoDescription = value; }

    /**
     * (VideoDescription) contains a group of video encoding settings. The specific
     * video settings depend on the video codec you choose when you specify a value for
     * Video codec (codec). Include one instance of (VideoDescription) per output.
     */
    inline void SetVideoDescription(VideoDescription&& value) { m_videoDescriptionHasBeenSet = true; m_videoDescription = std::move(value); }

    /**
     * (VideoDescription) contains a group of video encoding settings. The specific
     * video settings depend on the video codec you choose when you specify a value for
     * Video codec (codec). Include one instance of (VideoDescription) per output.
     */
    inline Output& WithVideoDescription(const VideoDescription& value) { SetVideoDescription(value); return *this;}

    /**
     * (VideoDescription) contains a group of video encoding settings. The specific
     * video settings depend on the video codec you choose when you specify a value for
     * Video codec (codec). Include one instance of (VideoDescription) per output.
     */
    inline Output& WithVideoDescription(VideoDescription&& value) { SetVideoDescription(std::move(value)); return *this;}

  private:

    Aws::Vector<AudioDescription> m_audioDescriptions;
    bool m_audioDescriptionsHasBeenSet;

    Aws::Vector<CaptionDescription> m_captionDescriptions;
    bool m_captionDescriptionsHasBeenSet;

    ContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet;

    Aws::String m_extension;
    bool m_extensionHasBeenSet;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet;

    OutputSettings m_outputSettings;
    bool m_outputSettingsHasBeenSet;

    Aws::String m_preset;
    bool m_presetHasBeenSet;

    VideoDescription m_videoDescription;
    bool m_videoDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
