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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/InputFilterEnable.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InputPsiControl.h>
#include <aws/mediaconvert/model/InputTimecodeSource.h>
#include <aws/mediaconvert/model/VideoSelector.h>
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
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Specifies media input<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Input">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Input
  {
  public:
    Input();
    Input(const Aws::Utils::Json::JsonValue& jsonValue);
    Input& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline Input& WithAudioSelectorGroups(const Aws::Map<Aws::String, AudioSelectorGroup>& value) { SetAudioSelectorGroups(value); return *this;}

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline Input& WithAudioSelectorGroups(Aws::Map<Aws::String, AudioSelectorGroup>&& value) { SetAudioSelectorGroups(std::move(value)); return *this;}

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline Input& AddAudioSelectorGroups(const Aws::String& key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, value); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline Input& AddAudioSelectorGroups(Aws::String&& key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(std::move(key), value); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline Input& AddAudioSelectorGroups(const Aws::String& key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, std::move(value)); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline Input& AddAudioSelectorGroups(Aws::String&& key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline Input& AddAudioSelectorGroups(const char* key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, std::move(value)); return *this; }

    /**
     * Specifies set of audio selectors within an input to combine. An input may have
     * multiple audio selector groups. See "Audio Selector
     * Group":#inputs-audio_selector_group for more information.
     */
    inline Input& AddAudioSelectorGroups(const char* key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, value); return *this; }


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
    inline Input& WithAudioSelectors(const Aws::Map<Aws::String, AudioSelector>& value) { SetAudioSelectors(value); return *this;}

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline Input& WithAudioSelectors(Aws::Map<Aws::String, AudioSelector>&& value) { SetAudioSelectors(std::move(value)); return *this;}

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline Input& AddAudioSelectors(const Aws::String& key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, value); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline Input& AddAudioSelectors(Aws::String&& key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(std::move(key), value); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline Input& AddAudioSelectors(const Aws::String& key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline Input& AddAudioSelectors(Aws::String&& key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline Input& AddAudioSelectors(const char* key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Audio selectors (AudioSelectors) to specify a track or set of tracks from
     * the input that you will use in your outputs. You can use mutiple Audio selectors
     * per input.
     */
    inline Input& AddAudioSelectors(const char* key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, value); return *this; }


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
    inline Input& WithCaptionSelectors(const Aws::Map<Aws::String, CaptionSelector>& value) { SetCaptionSelectors(value); return *this;}

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline Input& WithCaptionSelectors(Aws::Map<Aws::String, CaptionSelector>&& value) { SetCaptionSelectors(std::move(value)); return *this;}

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline Input& AddCaptionSelectors(const Aws::String& key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, value); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline Input& AddCaptionSelectors(Aws::String&& key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(std::move(key), value); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline Input& AddCaptionSelectors(const Aws::String& key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline Input& AddCaptionSelectors(Aws::String&& key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline Input& AddCaptionSelectors(const char* key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, std::move(value)); return *this; }

    /**
     * Use Captions selectors (CaptionSelectors) to specify the captions data from the
     * input that you will use in your outputs. You can use mutiple captions selectors
     * per input.
     */
    inline Input& AddCaptionSelectors(const char* key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, value); return *this; }


    
    inline const InputDeblockFilter& GetDeblockFilter() const{ return m_deblockFilter; }

    
    inline void SetDeblockFilter(const InputDeblockFilter& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = value; }

    
    inline void SetDeblockFilter(InputDeblockFilter&& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = std::move(value); }

    
    inline Input& WithDeblockFilter(const InputDeblockFilter& value) { SetDeblockFilter(value); return *this;}

    
    inline Input& WithDeblockFilter(InputDeblockFilter&& value) { SetDeblockFilter(std::move(value)); return *this;}


    
    inline const InputDenoiseFilter& GetDenoiseFilter() const{ return m_denoiseFilter; }

    
    inline void SetDenoiseFilter(const InputDenoiseFilter& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = value; }

    
    inline void SetDenoiseFilter(InputDenoiseFilter&& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = std::move(value); }

    
    inline Input& WithDenoiseFilter(const InputDenoiseFilter& value) { SetDenoiseFilter(value); return *this;}

    
    inline Input& WithDenoiseFilter(InputDenoiseFilter&& value) { SetDenoiseFilter(std::move(value)); return *this;}


    /**
     * Use Input (fileInput) to define the source file used in the transcode job. There
     * can be multiple inputs in a job. These inputs are concantenated, in the order
     * they are specified in the job, to create the output.
     */
    inline const Aws::String& GetFileInput() const{ return m_fileInput; }

    /**
     * Use Input (fileInput) to define the source file used in the transcode job. There
     * can be multiple inputs in a job. These inputs are concantenated, in the order
     * they are specified in the job, to create the output.
     */
    inline void SetFileInput(const Aws::String& value) { m_fileInputHasBeenSet = true; m_fileInput = value; }

    /**
     * Use Input (fileInput) to define the source file used in the transcode job. There
     * can be multiple inputs in a job. These inputs are concantenated, in the order
     * they are specified in the job, to create the output.
     */
    inline void SetFileInput(Aws::String&& value) { m_fileInputHasBeenSet = true; m_fileInput = std::move(value); }

    /**
     * Use Input (fileInput) to define the source file used in the transcode job. There
     * can be multiple inputs in a job. These inputs are concantenated, in the order
     * they are specified in the job, to create the output.
     */
    inline void SetFileInput(const char* value) { m_fileInputHasBeenSet = true; m_fileInput.assign(value); }

    /**
     * Use Input (fileInput) to define the source file used in the transcode job. There
     * can be multiple inputs in a job. These inputs are concantenated, in the order
     * they are specified in the job, to create the output.
     */
    inline Input& WithFileInput(const Aws::String& value) { SetFileInput(value); return *this;}

    /**
     * Use Input (fileInput) to define the source file used in the transcode job. There
     * can be multiple inputs in a job. These inputs are concantenated, in the order
     * they are specified in the job, to create the output.
     */
    inline Input& WithFileInput(Aws::String&& value) { SetFileInput(std::move(value)); return *this;}

    /**
     * Use Input (fileInput) to define the source file used in the transcode job. There
     * can be multiple inputs in a job. These inputs are concantenated, in the order
     * they are specified in the job, to create the output.
     */
    inline Input& WithFileInput(const char* value) { SetFileInput(value); return *this;}


    
    inline const InputFilterEnable& GetFilterEnable() const{ return m_filterEnable; }

    
    inline void SetFilterEnable(const InputFilterEnable& value) { m_filterEnableHasBeenSet = true; m_filterEnable = value; }

    
    inline void SetFilterEnable(InputFilterEnable&& value) { m_filterEnableHasBeenSet = true; m_filterEnable = std::move(value); }

    
    inline Input& WithFilterEnable(const InputFilterEnable& value) { SetFilterEnable(value); return *this;}

    
    inline Input& WithFilterEnable(InputFilterEnable&& value) { SetFilterEnable(std::move(value)); return *this;}


    /**
     * Use Filter strength (FilterStrength) to adjust the magnitude the input filter
     * settings (Deblock and Denoise). The range is -5 to 5. Default is 0.
     */
    inline int GetFilterStrength() const{ return m_filterStrength; }

    /**
     * Use Filter strength (FilterStrength) to adjust the magnitude the input filter
     * settings (Deblock and Denoise). The range is -5 to 5. Default is 0.
     */
    inline void SetFilterStrength(int value) { m_filterStrengthHasBeenSet = true; m_filterStrength = value; }

    /**
     * Use Filter strength (FilterStrength) to adjust the magnitude the input filter
     * settings (Deblock and Denoise). The range is -5 to 5. Default is 0.
     */
    inline Input& WithFilterStrength(int value) { SetFilterStrength(value); return *this;}


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
    inline Input& WithInputClippings(const Aws::Vector<InputClipping>& value) { SetInputClippings(value); return *this;}

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline Input& WithInputClippings(Aws::Vector<InputClipping>&& value) { SetInputClippings(std::move(value)); return *this;}

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline Input& AddInputClippings(const InputClipping& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(value); return *this; }

    /**
     * (InputClippings) contains sets of start and end times that together specify a
     * portion of the input to be used in the outputs. If you provide only a start
     * time, the clip will be the entire input from that point to the end. If you
     * provide only an end time, it will be the entire input up to that point. When you
     * specify more than one input clip, the transcoding service creates the job
     * outputs by stringing the clips together in the order you specify them.
     */
    inline Input& AddInputClippings(InputClipping&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(std::move(value)); return *this; }


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
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * Use Program (programNumber) to select a specific program from within a
     * multi-program transport stream. Note that Quad 4K is not currently supported.
     * Default is the first program within the transport stream. If the program you
     * specify doesn't exist, the transcoding service will use this default.
     */
    inline Input& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    
    inline const InputPsiControl& GetPsiControl() const{ return m_psiControl; }

    
    inline void SetPsiControl(const InputPsiControl& value) { m_psiControlHasBeenSet = true; m_psiControl = value; }

    
    inline void SetPsiControl(InputPsiControl&& value) { m_psiControlHasBeenSet = true; m_psiControl = std::move(value); }

    
    inline Input& WithPsiControl(const InputPsiControl& value) { SetPsiControl(value); return *this;}

    
    inline Input& WithPsiControl(InputPsiControl&& value) { SetPsiControl(std::move(value)); return *this;}


    
    inline const InputTimecodeSource& GetTimecodeSource() const{ return m_timecodeSource; }

    
    inline void SetTimecodeSource(const InputTimecodeSource& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = value; }

    
    inline void SetTimecodeSource(InputTimecodeSource&& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = std::move(value); }

    
    inline Input& WithTimecodeSource(const InputTimecodeSource& value) { SetTimecodeSource(value); return *this;}

    
    inline Input& WithTimecodeSource(InputTimecodeSource&& value) { SetTimecodeSource(std::move(value)); return *this;}


    
    inline const VideoSelector& GetVideoSelector() const{ return m_videoSelector; }

    
    inline void SetVideoSelector(const VideoSelector& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = value; }

    
    inline void SetVideoSelector(VideoSelector&& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = std::move(value); }

    
    inline Input& WithVideoSelector(const VideoSelector& value) { SetVideoSelector(value); return *this;}

    
    inline Input& WithVideoSelector(VideoSelector&& value) { SetVideoSelector(std::move(value)); return *this;}

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

    Aws::String m_fileInput;
    bool m_fileInputHasBeenSet;

    InputFilterEnable m_filterEnable;
    bool m_filterEnableHasBeenSet;

    int m_filterStrength;
    bool m_filterStrengthHasBeenSet;

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
