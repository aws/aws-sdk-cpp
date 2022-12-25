/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputDeblockFilter.h>
#include <aws/medialive/model/InputDenoiseFilter.h>
#include <aws/medialive/model/InputFilter.h>
#include <aws/medialive/model/NetworkInputSettings.h>
#include <aws/medialive/model/Smpte2038DataPreference.h>
#include <aws/medialive/model/InputSourceEndBehavior.h>
#include <aws/medialive/model/VideoSelector.h>
#include <aws/medialive/model/AudioSelector.h>
#include <aws/medialive/model/CaptionSelector.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Live Event input parameters. There can be multiple inputs in a single Live
   * Event.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSettings">AWS
   * API Reference</a></p>
   */
  class InputSettings
  {
  public:
    AWS_MEDIALIVE_API InputSettings();
    AWS_MEDIALIVE_API InputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline const Aws::Vector<AudioSelector>& GetAudioSelectors() const{ return m_audioSelectors; }

    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline bool AudioSelectorsHasBeenSet() const { return m_audioSelectorsHasBeenSet; }

    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline void SetAudioSelectors(const Aws::Vector<AudioSelector>& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = value; }

    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline void SetAudioSelectors(Aws::Vector<AudioSelector>&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = std::move(value); }

    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline InputSettings& WithAudioSelectors(const Aws::Vector<AudioSelector>& value) { SetAudioSelectors(value); return *this;}

    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline InputSettings& WithAudioSelectors(Aws::Vector<AudioSelector>&& value) { SetAudioSelectors(std::move(value)); return *this;}

    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline InputSettings& AddAudioSelectors(const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.push_back(value); return *this; }

    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline InputSettings& AddAudioSelectors(AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.push_back(std::move(value)); return *this; }


    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline const Aws::Vector<CaptionSelector>& GetCaptionSelectors() const{ return m_captionSelectors; }

    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline bool CaptionSelectorsHasBeenSet() const { return m_captionSelectorsHasBeenSet; }

    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline void SetCaptionSelectors(const Aws::Vector<CaptionSelector>& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = value; }

    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline void SetCaptionSelectors(Aws::Vector<CaptionSelector>&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = std::move(value); }

    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline InputSettings& WithCaptionSelectors(const Aws::Vector<CaptionSelector>& value) { SetCaptionSelectors(value); return *this;}

    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline InputSettings& WithCaptionSelectors(Aws::Vector<CaptionSelector>&& value) { SetCaptionSelectors(std::move(value)); return *this;}

    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline InputSettings& AddCaptionSelectors(const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.push_back(value); return *this; }

    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline InputSettings& AddCaptionSelectors(CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.push_back(std::move(value)); return *this; }


    /**
     * Enable or disable the deblock filter when filtering.
     */
    inline const InputDeblockFilter& GetDeblockFilter() const{ return m_deblockFilter; }

    /**
     * Enable or disable the deblock filter when filtering.
     */
    inline bool DeblockFilterHasBeenSet() const { return m_deblockFilterHasBeenSet; }

    /**
     * Enable or disable the deblock filter when filtering.
     */
    inline void SetDeblockFilter(const InputDeblockFilter& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = value; }

    /**
     * Enable or disable the deblock filter when filtering.
     */
    inline void SetDeblockFilter(InputDeblockFilter&& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = std::move(value); }

    /**
     * Enable or disable the deblock filter when filtering.
     */
    inline InputSettings& WithDeblockFilter(const InputDeblockFilter& value) { SetDeblockFilter(value); return *this;}

    /**
     * Enable or disable the deblock filter when filtering.
     */
    inline InputSettings& WithDeblockFilter(InputDeblockFilter&& value) { SetDeblockFilter(std::move(value)); return *this;}


    /**
     * Enable or disable the denoise filter when filtering.
     */
    inline const InputDenoiseFilter& GetDenoiseFilter() const{ return m_denoiseFilter; }

    /**
     * Enable or disable the denoise filter when filtering.
     */
    inline bool DenoiseFilterHasBeenSet() const { return m_denoiseFilterHasBeenSet; }

    /**
     * Enable or disable the denoise filter when filtering.
     */
    inline void SetDenoiseFilter(const InputDenoiseFilter& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = value; }

    /**
     * Enable or disable the denoise filter when filtering.
     */
    inline void SetDenoiseFilter(InputDenoiseFilter&& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = std::move(value); }

    /**
     * Enable or disable the denoise filter when filtering.
     */
    inline InputSettings& WithDenoiseFilter(const InputDenoiseFilter& value) { SetDenoiseFilter(value); return *this;}

    /**
     * Enable or disable the denoise filter when filtering.
     */
    inline InputSettings& WithDenoiseFilter(InputDenoiseFilter&& value) { SetDenoiseFilter(std::move(value)); return *this;}


    /**
     * Adjusts the magnitude of filtering from 1 (minimal) to 5 (strongest).
     */
    inline int GetFilterStrength() const{ return m_filterStrength; }

    /**
     * Adjusts the magnitude of filtering from 1 (minimal) to 5 (strongest).
     */
    inline bool FilterStrengthHasBeenSet() const { return m_filterStrengthHasBeenSet; }

    /**
     * Adjusts the magnitude of filtering from 1 (minimal) to 5 (strongest).
     */
    inline void SetFilterStrength(int value) { m_filterStrengthHasBeenSet = true; m_filterStrength = value; }

    /**
     * Adjusts the magnitude of filtering from 1 (minimal) to 5 (strongest).
     */
    inline InputSettings& WithFilterStrength(int value) { SetFilterStrength(value); return *this;}


    /**
     * Turns on the filter for this input. MPEG-2 inputs have the deblocking filter
     * enabled by default.
1) auto - filtering will be applied depending on input
     * type/quality
2) disabled - no filtering will be applied to the input
3) forced -
     * filtering will be applied regardless of input type
     */
    inline const InputFilter& GetInputFilter() const{ return m_inputFilter; }

    /**
     * Turns on the filter for this input. MPEG-2 inputs have the deblocking filter
     * enabled by default.
1) auto - filtering will be applied depending on input
     * type/quality
2) disabled - no filtering will be applied to the input
3) forced -
     * filtering will be applied regardless of input type
     */
    inline bool InputFilterHasBeenSet() const { return m_inputFilterHasBeenSet; }

    /**
     * Turns on the filter for this input. MPEG-2 inputs have the deblocking filter
     * enabled by default.
1) auto - filtering will be applied depending on input
     * type/quality
2) disabled - no filtering will be applied to the input
3) forced -
     * filtering will be applied regardless of input type
     */
    inline void SetInputFilter(const InputFilter& value) { m_inputFilterHasBeenSet = true; m_inputFilter = value; }

    /**
     * Turns on the filter for this input. MPEG-2 inputs have the deblocking filter
     * enabled by default.
1) auto - filtering will be applied depending on input
     * type/quality
2) disabled - no filtering will be applied to the input
3) forced -
     * filtering will be applied regardless of input type
     */
    inline void SetInputFilter(InputFilter&& value) { m_inputFilterHasBeenSet = true; m_inputFilter = std::move(value); }

    /**
     * Turns on the filter for this input. MPEG-2 inputs have the deblocking filter
     * enabled by default.
1) auto - filtering will be applied depending on input
     * type/quality
2) disabled - no filtering will be applied to the input
3) forced -
     * filtering will be applied regardless of input type
     */
    inline InputSettings& WithInputFilter(const InputFilter& value) { SetInputFilter(value); return *this;}

    /**
     * Turns on the filter for this input. MPEG-2 inputs have the deblocking filter
     * enabled by default.
1) auto - filtering will be applied depending on input
     * type/quality
2) disabled - no filtering will be applied to the input
3) forced -
     * filtering will be applied regardless of input type
     */
    inline InputSettings& WithInputFilter(InputFilter&& value) { SetInputFilter(std::move(value)); return *this;}


    /**
     * Input settings.
     */
    inline const NetworkInputSettings& GetNetworkInputSettings() const{ return m_networkInputSettings; }

    /**
     * Input settings.
     */
    inline bool NetworkInputSettingsHasBeenSet() const { return m_networkInputSettingsHasBeenSet; }

    /**
     * Input settings.
     */
    inline void SetNetworkInputSettings(const NetworkInputSettings& value) { m_networkInputSettingsHasBeenSet = true; m_networkInputSettings = value; }

    /**
     * Input settings.
     */
    inline void SetNetworkInputSettings(NetworkInputSettings&& value) { m_networkInputSettingsHasBeenSet = true; m_networkInputSettings = std::move(value); }

    /**
     * Input settings.
     */
    inline InputSettings& WithNetworkInputSettings(const NetworkInputSettings& value) { SetNetworkInputSettings(value); return *this;}

    /**
     * Input settings.
     */
    inline InputSettings& WithNetworkInputSettings(NetworkInputSettings&& value) { SetNetworkInputSettings(std::move(value)); return *this;}


    /**
     * PID from which to read SCTE-35 messages. If left undefined, EML will select the
     * first SCTE-35 PID found in the input.
     */
    inline int GetScte35Pid() const{ return m_scte35Pid; }

    /**
     * PID from which to read SCTE-35 messages. If left undefined, EML will select the
     * first SCTE-35 PID found in the input.
     */
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }

    /**
     * PID from which to read SCTE-35 messages. If left undefined, EML will select the
     * first SCTE-35 PID found in the input.
     */
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    /**
     * PID from which to read SCTE-35 messages. If left undefined, EML will select the
     * first SCTE-35 PID found in the input.
     */
    inline InputSettings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}


    /**
     * Specifies whether to extract applicable ancillary data from a SMPTE-2038 source
     * in this input. Applicable data types are captions, timecode, AFD, and SCTE-104
     * messages.
- PREFER: Extract from SMPTE-2038 if present in this input, otherwise
     * extract from another source (if any).
- IGNORE: Never extract any ancillary data
     * from SMPTE-2038.
     */
    inline const Smpte2038DataPreference& GetSmpte2038DataPreference() const{ return m_smpte2038DataPreference; }

    /**
     * Specifies whether to extract applicable ancillary data from a SMPTE-2038 source
     * in this input. Applicable data types are captions, timecode, AFD, and SCTE-104
     * messages.
- PREFER: Extract from SMPTE-2038 if present in this input, otherwise
     * extract from another source (if any).
- IGNORE: Never extract any ancillary data
     * from SMPTE-2038.
     */
    inline bool Smpte2038DataPreferenceHasBeenSet() const { return m_smpte2038DataPreferenceHasBeenSet; }

    /**
     * Specifies whether to extract applicable ancillary data from a SMPTE-2038 source
     * in this input. Applicable data types are captions, timecode, AFD, and SCTE-104
     * messages.
- PREFER: Extract from SMPTE-2038 if present in this input, otherwise
     * extract from another source (if any).
- IGNORE: Never extract any ancillary data
     * from SMPTE-2038.
     */
    inline void SetSmpte2038DataPreference(const Smpte2038DataPreference& value) { m_smpte2038DataPreferenceHasBeenSet = true; m_smpte2038DataPreference = value; }

    /**
     * Specifies whether to extract applicable ancillary data from a SMPTE-2038 source
     * in this input. Applicable data types are captions, timecode, AFD, and SCTE-104
     * messages.
- PREFER: Extract from SMPTE-2038 if present in this input, otherwise
     * extract from another source (if any).
- IGNORE: Never extract any ancillary data
     * from SMPTE-2038.
     */
    inline void SetSmpte2038DataPreference(Smpte2038DataPreference&& value) { m_smpte2038DataPreferenceHasBeenSet = true; m_smpte2038DataPreference = std::move(value); }

    /**
     * Specifies whether to extract applicable ancillary data from a SMPTE-2038 source
     * in this input. Applicable data types are captions, timecode, AFD, and SCTE-104
     * messages.
- PREFER: Extract from SMPTE-2038 if present in this input, otherwise
     * extract from another source (if any).
- IGNORE: Never extract any ancillary data
     * from SMPTE-2038.
     */
    inline InputSettings& WithSmpte2038DataPreference(const Smpte2038DataPreference& value) { SetSmpte2038DataPreference(value); return *this;}

    /**
     * Specifies whether to extract applicable ancillary data from a SMPTE-2038 source
     * in this input. Applicable data types are captions, timecode, AFD, and SCTE-104
     * messages.
- PREFER: Extract from SMPTE-2038 if present in this input, otherwise
     * extract from another source (if any).
- IGNORE: Never extract any ancillary data
     * from SMPTE-2038.
     */
    inline InputSettings& WithSmpte2038DataPreference(Smpte2038DataPreference&& value) { SetSmpte2038DataPreference(std::move(value)); return *this;}


    /**
     * Loop input if it is a file. This allows a file input to be streamed
     * indefinitely.
     */
    inline const InputSourceEndBehavior& GetSourceEndBehavior() const{ return m_sourceEndBehavior; }

    /**
     * Loop input if it is a file. This allows a file input to be streamed
     * indefinitely.
     */
    inline bool SourceEndBehaviorHasBeenSet() const { return m_sourceEndBehaviorHasBeenSet; }

    /**
     * Loop input if it is a file. This allows a file input to be streamed
     * indefinitely.
     */
    inline void SetSourceEndBehavior(const InputSourceEndBehavior& value) { m_sourceEndBehaviorHasBeenSet = true; m_sourceEndBehavior = value; }

    /**
     * Loop input if it is a file. This allows a file input to be streamed
     * indefinitely.
     */
    inline void SetSourceEndBehavior(InputSourceEndBehavior&& value) { m_sourceEndBehaviorHasBeenSet = true; m_sourceEndBehavior = std::move(value); }

    /**
     * Loop input if it is a file. This allows a file input to be streamed
     * indefinitely.
     */
    inline InputSettings& WithSourceEndBehavior(const InputSourceEndBehavior& value) { SetSourceEndBehavior(value); return *this;}

    /**
     * Loop input if it is a file. This allows a file input to be streamed
     * indefinitely.
     */
    inline InputSettings& WithSourceEndBehavior(InputSourceEndBehavior&& value) { SetSourceEndBehavior(std::move(value)); return *this;}


    /**
     * Informs which video elementary stream to decode for input types that have
     * multiple available.
     */
    inline const VideoSelector& GetVideoSelector() const{ return m_videoSelector; }

    /**
     * Informs which video elementary stream to decode for input types that have
     * multiple available.
     */
    inline bool VideoSelectorHasBeenSet() const { return m_videoSelectorHasBeenSet; }

    /**
     * Informs which video elementary stream to decode for input types that have
     * multiple available.
     */
    inline void SetVideoSelector(const VideoSelector& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = value; }

    /**
     * Informs which video elementary stream to decode for input types that have
     * multiple available.
     */
    inline void SetVideoSelector(VideoSelector&& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = std::move(value); }

    /**
     * Informs which video elementary stream to decode for input types that have
     * multiple available.
     */
    inline InputSettings& WithVideoSelector(const VideoSelector& value) { SetVideoSelector(value); return *this;}

    /**
     * Informs which video elementary stream to decode for input types that have
     * multiple available.
     */
    inline InputSettings& WithVideoSelector(VideoSelector&& value) { SetVideoSelector(std::move(value)); return *this;}

  private:

    Aws::Vector<AudioSelector> m_audioSelectors;
    bool m_audioSelectorsHasBeenSet = false;

    Aws::Vector<CaptionSelector> m_captionSelectors;
    bool m_captionSelectorsHasBeenSet = false;

    InputDeblockFilter m_deblockFilter;
    bool m_deblockFilterHasBeenSet = false;

    InputDenoiseFilter m_denoiseFilter;
    bool m_denoiseFilterHasBeenSet = false;

    int m_filterStrength;
    bool m_filterStrengthHasBeenSet = false;

    InputFilter m_inputFilter;
    bool m_inputFilterHasBeenSet = false;

    NetworkInputSettings m_networkInputSettings;
    bool m_networkInputSettingsHasBeenSet = false;

    int m_scte35Pid;
    bool m_scte35PidHasBeenSet = false;

    Smpte2038DataPreference m_smpte2038DataPreference;
    bool m_smpte2038DataPreferenceHasBeenSet = false;

    InputSourceEndBehavior m_sourceEndBehavior;
    bool m_sourceEndBehaviorHasBeenSet = false;

    VideoSelector m_videoSelector;
    bool m_videoSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
