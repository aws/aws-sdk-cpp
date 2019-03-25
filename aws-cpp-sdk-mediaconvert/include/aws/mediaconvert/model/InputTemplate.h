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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/InputDeblockFilter.h>
#include <aws/mediaconvert/model/InputDenoiseFilter.h>
#include <aws/mediaconvert/model/InputFilterEnable.h>
#include <aws/mediaconvert/model/ImageInserter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InputPsiControl.h>
#include <aws/mediaconvert/model/InputTimecodeSource.h>
#include <aws/mediaconvert/model/VideoSelector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/AudioSelectorGroup.h>
#include <aws/mediaconvert/model/AudioSelector.h>
#include <aws/mediaconvert/model/CaptionSelector.h>
#include <aws/mediaconvert/model/InputClipping.h>
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
   * Specified video input in a template.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputTemplate">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API InputTemplate
  {
  public:
    InputTemplate();
    InputTemplate(Aws::Utils::Json::JsonView jsonValue);
    InputTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline const Aws::Map<Aws::String, AudioSelectorGroup>& GetAudioSelectorGroups() const{ return m_audioSelectorGroups; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline bool AudioSelectorGroupsHasBeenSet() const { return m_audioSelectorGroupsHasBeenSet; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline void SetAudioSelectorGroups(const Aws::Map<Aws::String, AudioSelectorGroup>& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups = value; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline void SetAudioSelectorGroups(Aws::Map<Aws::String, AudioSelectorGroup>&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups = std::move(value); }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& WithAudioSelectorGroups(const Aws::Map<Aws::String, AudioSelectorGroup>& value) { SetAudioSelectorGroups(value); return *this;}

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& WithAudioSelectorGroups(Aws::Map<Aws::String, AudioSelectorGroup>&& value) { SetAudioSelectorGroups(std::move(value)); return *this;}

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& AddAudioSelectorGroups(const Aws::String& key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, value); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& AddAudioSelectorGroups(Aws::String&& key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(std::move(key), value); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& AddAudioSelectorGroups(const Aws::String& key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, std::move(value)); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& AddAudioSelectorGroups(Aws::String&& key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& AddAudioSelectorGroups(const char* key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, std::move(value)); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline InputTemplate& AddAudioSelectorGroups(const char* key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, value); return *this; }


    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline const Aws::Map<Aws::String, AudioSelector>& GetAudioSelectors() const{ return m_audioSelectors; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline bool AudioSelectorsHasBeenSet() const { return m_audioSelectorsHasBeenSet; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline void SetAudioSelectors(const Aws::Map<Aws::String, AudioSelector>& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = value; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline void SetAudioSelectors(Aws::Map<Aws::String, AudioSelector>&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = std::move(value); }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& WithAudioSelectors(const Aws::Map<Aws::String, AudioSelector>& value) { SetAudioSelectors(value); return *this;}

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& WithAudioSelectors(Aws::Map<Aws::String, AudioSelector>&& value) { SetAudioSelectors(std::move(value)); return *this;}

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& AddAudioSelectors(const Aws::String& key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, value); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& AddAudioSelectors(Aws::String&& key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(std::move(key), value); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& AddAudioSelectors(const Aws::String& key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& AddAudioSelectors(Aws::String&& key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& AddAudioSelectors(const char* key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline InputTemplate& AddAudioSelectors(const char* key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, value); return *this; }


    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline const Aws::Map<Aws::String, CaptionSelector>& GetCaptionSelectors() const{ return m_captionSelectors; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline bool CaptionSelectorsHasBeenSet() const { return m_captionSelectorsHasBeenSet; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline void SetCaptionSelectors(const Aws::Map<Aws::String, CaptionSelector>& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = value; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline void SetCaptionSelectors(Aws::Map<Aws::String, CaptionSelector>&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = std::move(value); }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& WithCaptionSelectors(const Aws::Map<Aws::String, CaptionSelector>& value) { SetCaptionSelectors(value); return *this;}

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& WithCaptionSelectors(Aws::Map<Aws::String, CaptionSelector>&& value) { SetCaptionSelectors(std::move(value)); return *this;}

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& AddCaptionSelectors(const Aws::String& key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, value); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& AddCaptionSelectors(Aws::String&& key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(std::move(key), value); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& AddCaptionSelectors(const Aws::String& key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& AddCaptionSelectors(Aws::String&& key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& AddCaptionSelectors(const char* key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline InputTemplate& AddCaptionSelectors(const char* key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, value); return *this; }


    /**
     * Enable Deblock (InputDeblockFilter) to produce smoother motion in the output.
     * Default is disabled. Only manaully controllable for MPEG2 and uncompressed video
     * inputs.
     */
    inline const InputDeblockFilter& GetDeblockFilter() const{ return m_deblockFilter; }

    /**
     * Enable Deblock (InputDeblockFilter) to produce smoother motion in the output.
     * Default is disabled. Only manaully controllable for MPEG2 and uncompressed video
     * inputs.
     */
    inline bool DeblockFilterHasBeenSet() const { return m_deblockFilterHasBeenSet; }

    /**
     * Enable Deblock (InputDeblockFilter) to produce smoother motion in the output.
     * Default is disabled. Only manaully controllable for MPEG2 and uncompressed video
     * inputs.
     */
    inline void SetDeblockFilter(const InputDeblockFilter& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = value; }

    /**
     * Enable Deblock (InputDeblockFilter) to produce smoother motion in the output.
     * Default is disabled. Only manaully controllable for MPEG2 and uncompressed video
     * inputs.
     */
    inline void SetDeblockFilter(InputDeblockFilter&& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = std::move(value); }

    /**
     * Enable Deblock (InputDeblockFilter) to produce smoother motion in the output.
     * Default is disabled. Only manaully controllable for MPEG2 and uncompressed video
     * inputs.
     */
    inline InputTemplate& WithDeblockFilter(const InputDeblockFilter& value) { SetDeblockFilter(value); return *this;}

    /**
     * Enable Deblock (InputDeblockFilter) to produce smoother motion in the output.
     * Default is disabled. Only manaully controllable for MPEG2 and uncompressed video
     * inputs.
     */
    inline InputTemplate& WithDeblockFilter(InputDeblockFilter&& value) { SetDeblockFilter(std::move(value)); return *this;}


    /**
     * Enable Denoise (InputDenoiseFilter) to filter noise from the input.  Default is
     * disabled. Only applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline const InputDenoiseFilter& GetDenoiseFilter() const{ return m_denoiseFilter; }

    /**
     * Enable Denoise (InputDenoiseFilter) to filter noise from the input.  Default is
     * disabled. Only applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline bool DenoiseFilterHasBeenSet() const { return m_denoiseFilterHasBeenSet; }

    /**
     * Enable Denoise (InputDenoiseFilter) to filter noise from the input.  Default is
     * disabled. Only applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline void SetDenoiseFilter(const InputDenoiseFilter& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = value; }

    /**
     * Enable Denoise (InputDenoiseFilter) to filter noise from the input.  Default is
     * disabled. Only applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline void SetDenoiseFilter(InputDenoiseFilter&& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = std::move(value); }

    /**
     * Enable Denoise (InputDenoiseFilter) to filter noise from the input.  Default is
     * disabled. Only applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline InputTemplate& WithDenoiseFilter(const InputDenoiseFilter& value) { SetDenoiseFilter(value); return *this;}

    /**
     * Enable Denoise (InputDenoiseFilter) to filter noise from the input.  Default is
     * disabled. Only applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline InputTemplate& WithDenoiseFilter(InputDenoiseFilter&& value) { SetDenoiseFilter(std::move(value)); return *this;}


    /**
     * Use Filter enable (InputFilterEnable) to specify how the transcoding service
     * applies the denoise and deblock filters. You must also enable the filters
     * separately, with Denoise (InputDenoiseFilter) and Deblock (InputDeblockFilter).
     * * Auto - The transcoding service determines whether to apply filtering,
     * depending on input type and quality. * Disable - The input is not filtered. This
     * is true even if you use the API to enable them in (InputDeblockFilter) and
     * (InputDeblockFilter). * Force - The in put is filtered regardless of input type.
     */
    inline const InputFilterEnable& GetFilterEnable() const{ return m_filterEnable; }

    /**
     * Use Filter enable (InputFilterEnable) to specify how the transcoding service
     * applies the denoise and deblock filters. You must also enable the filters
     * separately, with Denoise (InputDenoiseFilter) and Deblock (InputDeblockFilter).
     * * Auto - The transcoding service determines whether to apply filtering,
     * depending on input type and quality. * Disable - The input is not filtered. This
     * is true even if you use the API to enable them in (InputDeblockFilter) and
     * (InputDeblockFilter). * Force - The in put is filtered regardless of input type.
     */
    inline bool FilterEnableHasBeenSet() const { return m_filterEnableHasBeenSet; }

    /**
     * Use Filter enable (InputFilterEnable) to specify how the transcoding service
     * applies the denoise and deblock filters. You must also enable the filters
     * separately, with Denoise (InputDenoiseFilter) and Deblock (InputDeblockFilter).
     * * Auto - The transcoding service determines whether to apply filtering,
     * depending on input type and quality. * Disable - The input is not filtered. This
     * is true even if you use the API to enable them in (InputDeblockFilter) and
     * (InputDeblockFilter). * Force - The in put is filtered regardless of input type.
     */
    inline void SetFilterEnable(const InputFilterEnable& value) { m_filterEnableHasBeenSet = true; m_filterEnable = value; }

    /**
     * Use Filter enable (InputFilterEnable) to specify how the transcoding service
     * applies the denoise and deblock filters. You must also enable the filters
     * separately, with Denoise (InputDenoiseFilter) and Deblock (InputDeblockFilter).
     * * Auto - The transcoding service determines whether to apply filtering,
     * depending on input type and quality. * Disable - The input is not filtered. This
     * is true even if you use the API to enable them in (InputDeblockFilter) and
     * (InputDeblockFilter). * Force - The in put is filtered regardless of input type.
     */
    inline void SetFilterEnable(InputFilterEnable&& value) { m_filterEnableHasBeenSet = true; m_filterEnable = std::move(value); }

    /**
     * Use Filter enable (InputFilterEnable) to specify how the transcoding service
     * applies the denoise and deblock filters. You must also enable the filters
     * separately, with Denoise (InputDenoiseFilter) and Deblock (InputDeblockFilter).
     * * Auto - The transcoding service determines whether to apply filtering,
     * depending on input type and quality. * Disable - The input is not filtered. This
     * is true even if you use the API to enable them in (InputDeblockFilter) and
     * (InputDeblockFilter). * Force - The in put is filtered regardless of input type.
     */
    inline InputTemplate& WithFilterEnable(const InputFilterEnable& value) { SetFilterEnable(value); return *this;}

    /**
     * Use Filter enable (InputFilterEnable) to specify how the transcoding service
     * applies the denoise and deblock filters. You must also enable the filters
     * separately, with Denoise (InputDenoiseFilter) and Deblock (InputDeblockFilter).
     * * Auto - The transcoding service determines whether to apply filtering,
     * depending on input type and quality. * Disable - The input is not filtered. This
     * is true even if you use the API to enable them in (InputDeblockFilter) and
     * (InputDeblockFilter). * Force - The in put is filtered regardless of input type.
     */
    inline InputTemplate& WithFilterEnable(InputFilterEnable&& value) { SetFilterEnable(std::move(value)); return *this;}


    /**
     * Use Filter strength (FilterStrength) to adjust the magnitude the input filter
     * settings (Deblock and Denoise). The range is -5 to 5. Default is 0.
     */
    inline int GetFilterStrength() const{ return m_filterStrength; }

    /**
     * Use Filter strength (FilterStrength) to adjust the magnitude the input filter
     * settings (Deblock and Denoise). The range is -5 to 5. Default is 0.
     */
    inline bool FilterStrengthHasBeenSet() const { return m_filterStrengthHasBeenSet; }

    /**
     * Use Filter strength (FilterStrength) to adjust the magnitude the input filter
     * settings (Deblock and Denoise). The range is -5 to 5. Default is 0.
     */
    inline void SetFilterStrength(int value) { m_filterStrengthHasBeenSet = true; m_filterStrength = value; }

    /**
     * Use Filter strength (FilterStrength) to adjust the magnitude the input filter
     * settings (Deblock and Denoise). The range is -5 to 5. Default is 0.
     */
    inline InputTemplate& WithFilterStrength(int value) { SetFilterStrength(value); return *this;}


    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline const ImageInserter& GetImageInserter() const{ return m_imageInserter; }

    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline bool ImageInserterHasBeenSet() const { return m_imageInserterHasBeenSet; }

    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline void SetImageInserter(const ImageInserter& value) { m_imageInserterHasBeenSet = true; m_imageInserter = value; }

    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline void SetImageInserter(ImageInserter&& value) { m_imageInserterHasBeenSet = true; m_imageInserter = std::move(value); }

    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline InputTemplate& WithImageInserter(const ImageInserter& value) { SetImageInserter(value); return *this;}

    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline InputTemplate& WithImageInserter(ImageInserter&& value) { SetImageInserter(std::move(value)); return *this;}


    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline const Aws::Vector<InputClipping>& GetInputClippings() const{ return m_inputClippings; }

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline bool InputClippingsHasBeenSet() const { return m_inputClippingsHasBeenSet; }

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline void SetInputClippings(const Aws::Vector<InputClipping>& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = value; }

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline void SetInputClippings(Aws::Vector<InputClipping>&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = std::move(value); }

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline InputTemplate& WithInputClippings(const Aws::Vector<InputClipping>& value) { SetInputClippings(value); return *this;}

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline InputTemplate& WithInputClippings(Aws::Vector<InputClipping>&& value) { SetInputClippings(std::move(value)); return *this;}

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline InputTemplate& AddInputClippings(const InputClipping& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(value); return *this; }

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline InputTemplate& AddInputClippings(InputClipping&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(std::move(value)); return *this; }


    /**
     * Use Program (programNumber) to select a specific program from within a
     * multi-program transport stream. Note that Quad 4K is not currently supported.
     * Default is the first program within the transport stream. If the program you
     * specify doesn't exist, the transcoding service will use this default.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * Use Program (programNumber) to select a specific program from within a
     * multi-program transport stream. Note that Quad 4K is not currently supported.
     * Default is the first program within the transport stream. If the program you
     * specify doesn't exist, the transcoding service will use this default.
     */
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }

    /**
     * Use Program (programNumber) to select a specific program from within a
     * multi-program transport stream. Note that Quad 4K is not currently supported.
     * Default is the first program within the transport stream. If the program you
     * specify doesn't exist, the transcoding service will use this default.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * Use Program (programNumber) to select a specific program from within a
     * multi-program transport stream. Note that Quad 4K is not currently supported.
     * Default is the first program within the transport stream. If the program you
     * specify doesn't exist, the transcoding service will use this default.
     */
    inline InputTemplate& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    /**
     * Set PSI control (InputPsiControl) for transport stream inputs to specify which
     * data the demux process to scans. * Ignore PSI - Scan all PIDs for audio and
     * video. * Use PSI - Scan only PSI data.
     */
    inline const InputPsiControl& GetPsiControl() const{ return m_psiControl; }

    /**
     * Set PSI control (InputPsiControl) for transport stream inputs to specify which
     * data the demux process to scans. * Ignore PSI - Scan all PIDs for audio and
     * video. * Use PSI - Scan only PSI data.
     */
    inline bool PsiControlHasBeenSet() const { return m_psiControlHasBeenSet; }

    /**
     * Set PSI control (InputPsiControl) for transport stream inputs to specify which
     * data the demux process to scans. * Ignore PSI - Scan all PIDs for audio and
     * video. * Use PSI - Scan only PSI data.
     */
    inline void SetPsiControl(const InputPsiControl& value) { m_psiControlHasBeenSet = true; m_psiControl = value; }

    /**
     * Set PSI control (InputPsiControl) for transport stream inputs to specify which
     * data the demux process to scans. * Ignore PSI - Scan all PIDs for audio and
     * video. * Use PSI - Scan only PSI data.
     */
    inline void SetPsiControl(InputPsiControl&& value) { m_psiControlHasBeenSet = true; m_psiControl = std::move(value); }

    /**
     * Set PSI control (InputPsiControl) for transport stream inputs to specify which
     * data the demux process to scans. * Ignore PSI - Scan all PIDs for audio and
     * video. * Use PSI - Scan only PSI data.
     */
    inline InputTemplate& WithPsiControl(const InputPsiControl& value) { SetPsiControl(value); return *this;}

    /**
     * Set PSI control (InputPsiControl) for transport stream inputs to specify which
     * data the demux process to scans. * Ignore PSI - Scan all PIDs for audio and
     * video. * Use PSI - Scan only PSI data.
     */
    inline InputTemplate& WithPsiControl(InputPsiControl&& value) { SetPsiControl(std::move(value)); return *this;}


    /**
     * Timecode source under input settings (InputTimecodeSource) only affects the
     * behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Use this setting to specify
     * whether the service counts frames by timecodes embedded in the video (EMBEDDED)
     * or by starting the first frame at zero (ZEROBASED). In both cases, the timecode
     * format is HH:MM:SS:FF or HH:MM:SS;FF, where FF is the frame number. Only set
     * this to EMBEDDED if your source video has embedded timecodes.
     */
    inline const InputTimecodeSource& GetTimecodeSource() const{ return m_timecodeSource; }

    /**
     * Timecode source under input settings (InputTimecodeSource) only affects the
     * behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Use this setting to specify
     * whether the service counts frames by timecodes embedded in the video (EMBEDDED)
     * or by starting the first frame at zero (ZEROBASED). In both cases, the timecode
     * format is HH:MM:SS:FF or HH:MM:SS;FF, where FF is the frame number. Only set
     * this to EMBEDDED if your source video has embedded timecodes.
     */
    inline bool TimecodeSourceHasBeenSet() const { return m_timecodeSourceHasBeenSet; }

    /**
     * Timecode source under input settings (InputTimecodeSource) only affects the
     * behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Use this setting to specify
     * whether the service counts frames by timecodes embedded in the video (EMBEDDED)
     * or by starting the first frame at zero (ZEROBASED). In both cases, the timecode
     * format is HH:MM:SS:FF or HH:MM:SS;FF, where FF is the frame number. Only set
     * this to EMBEDDED if your source video has embedded timecodes.
     */
    inline void SetTimecodeSource(const InputTimecodeSource& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = value; }

    /**
     * Timecode source under input settings (InputTimecodeSource) only affects the
     * behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Use this setting to specify
     * whether the service counts frames by timecodes embedded in the video (EMBEDDED)
     * or by starting the first frame at zero (ZEROBASED). In both cases, the timecode
     * format is HH:MM:SS:FF or HH:MM:SS;FF, where FF is the frame number. Only set
     * this to EMBEDDED if your source video has embedded timecodes.
     */
    inline void SetTimecodeSource(InputTimecodeSource&& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = std::move(value); }

    /**
     * Timecode source under input settings (InputTimecodeSource) only affects the
     * behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Use this setting to specify
     * whether the service counts frames by timecodes embedded in the video (EMBEDDED)
     * or by starting the first frame at zero (ZEROBASED). In both cases, the timecode
     * format is HH:MM:SS:FF or HH:MM:SS;FF, where FF is the frame number. Only set
     * this to EMBEDDED if your source video has embedded timecodes.
     */
    inline InputTemplate& WithTimecodeSource(const InputTimecodeSource& value) { SetTimecodeSource(value); return *this;}

    /**
     * Timecode source under input settings (InputTimecodeSource) only affects the
     * behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Use this setting to specify
     * whether the service counts frames by timecodes embedded in the video (EMBEDDED)
     * or by starting the first frame at zero (ZEROBASED). In both cases, the timecode
     * format is HH:MM:SS:FF or HH:MM:SS;FF, where FF is the frame number. Only set
     * this to EMBEDDED if your source video has embedded timecodes.
     */
    inline InputTemplate& WithTimecodeSource(InputTimecodeSource&& value) { SetTimecodeSource(std::move(value)); return *this;}


    /**
     * Selector for video.
     */
    inline const VideoSelector& GetVideoSelector() const{ return m_videoSelector; }

    /**
     * Selector for video.
     */
    inline bool VideoSelectorHasBeenSet() const { return m_videoSelectorHasBeenSet; }

    /**
     * Selector for video.
     */
    inline void SetVideoSelector(const VideoSelector& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = value; }

    /**
     * Selector for video.
     */
    inline void SetVideoSelector(VideoSelector&& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = std::move(value); }

    /**
     * Selector for video.
     */
    inline InputTemplate& WithVideoSelector(const VideoSelector& value) { SetVideoSelector(value); return *this;}

    /**
     * Selector for video.
     */
    inline InputTemplate& WithVideoSelector(VideoSelector&& value) { SetVideoSelector(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, AudioSelectorGroup> m_audioSelectorGroups;
    bool m_audioSelectorGroupsHasBeenSet;

    Aws::Map<Aws::String, AudioSelector> m_audioSelectors;
    bool m_audioSelectorsHasBeenSet;

    Aws::Map<Aws::String, CaptionSelector> m_captionSelectors;
    bool m_captionSelectorsHasBeenSet;

    InputDeblockFilter m_deblockFilter;
    bool m_deblockFilterHasBeenSet;

    InputDenoiseFilter m_denoiseFilter;
    bool m_denoiseFilterHasBeenSet;

    InputFilterEnable m_filterEnable;
    bool m_filterEnableHasBeenSet;

    int m_filterStrength;
    bool m_filterStrengthHasBeenSet;

    ImageInserter m_imageInserter;
    bool m_imageInserterHasBeenSet;

    Aws::Vector<InputClipping> m_inputClippings;
    bool m_inputClippingsHasBeenSet;

    int m_programNumber;
    bool m_programNumberHasBeenSet;

    InputPsiControl m_psiControl;
    bool m_psiControlHasBeenSet;

    InputTimecodeSource m_timecodeSource;
    bool m_timecodeSourceHasBeenSet;

    VideoSelector m_videoSelector;
    bool m_videoSelectorHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
