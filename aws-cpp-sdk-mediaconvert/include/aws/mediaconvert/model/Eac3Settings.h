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
#include <aws/mediaconvert/model/Eac3AttenuationControl.h>
#include <aws/mediaconvert/model/Eac3BitstreamMode.h>
#include <aws/mediaconvert/model/Eac3CodingMode.h>
#include <aws/mediaconvert/model/Eac3DcFilter.h>
#include <aws/mediaconvert/model/Eac3DynamicRangeCompressionLine.h>
#include <aws/mediaconvert/model/Eac3DynamicRangeCompressionRf.h>
#include <aws/mediaconvert/model/Eac3LfeControl.h>
#include <aws/mediaconvert/model/Eac3LfeFilter.h>
#include <aws/mediaconvert/model/Eac3MetadataControl.h>
#include <aws/mediaconvert/model/Eac3PassthroughControl.h>
#include <aws/mediaconvert/model/Eac3PhaseControl.h>
#include <aws/mediaconvert/model/Eac3StereoDownmix.h>
#include <aws/mediaconvert/model/Eac3SurroundExMode.h>
#include <aws/mediaconvert/model/Eac3SurroundMode.h>
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
   * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
   * value EAC3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Eac3Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Eac3Settings
  {
  public:
    Eac3Settings();
    Eac3Settings(const Aws::Utils::Json::JsonValue& jsonValue);
    Eac3Settings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Eac3AttenuationControl& GetAttenuationControl() const{ return m_attenuationControl; }

    
    inline void SetAttenuationControl(const Eac3AttenuationControl& value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = value; }

    
    inline void SetAttenuationControl(Eac3AttenuationControl&& value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = std::move(value); }

    
    inline Eac3Settings& WithAttenuationControl(const Eac3AttenuationControl& value) { SetAttenuationControl(value); return *this;}

    
    inline Eac3Settings& WithAttenuationControl(Eac3AttenuationControl&& value) { SetAttenuationControl(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline Eac3Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    
    inline const Eac3BitstreamMode& GetBitstreamMode() const{ return m_bitstreamMode; }

    
    inline void SetBitstreamMode(const Eac3BitstreamMode& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }

    
    inline void SetBitstreamMode(Eac3BitstreamMode&& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = std::move(value); }

    
    inline Eac3Settings& WithBitstreamMode(const Eac3BitstreamMode& value) { SetBitstreamMode(value); return *this;}

    
    inline Eac3Settings& WithBitstreamMode(Eac3BitstreamMode&& value) { SetBitstreamMode(std::move(value)); return *this;}


    
    inline const Eac3CodingMode& GetCodingMode() const{ return m_codingMode; }

    
    inline void SetCodingMode(const Eac3CodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    
    inline void SetCodingMode(Eac3CodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    
    inline Eac3Settings& WithCodingMode(const Eac3CodingMode& value) { SetCodingMode(value); return *this;}

    
    inline Eac3Settings& WithCodingMode(Eac3CodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    
    inline const Eac3DcFilter& GetDcFilter() const{ return m_dcFilter; }

    
    inline void SetDcFilter(const Eac3DcFilter& value) { m_dcFilterHasBeenSet = true; m_dcFilter = value; }

    
    inline void SetDcFilter(Eac3DcFilter&& value) { m_dcFilterHasBeenSet = true; m_dcFilter = std::move(value); }

    
    inline Eac3Settings& WithDcFilter(const Eac3DcFilter& value) { SetDcFilter(value); return *this;}

    
    inline Eac3Settings& WithDcFilter(Eac3DcFilter&& value) { SetDcFilter(std::move(value)); return *this;}


    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline int GetDialnorm() const{ return m_dialnorm; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline void SetDialnorm(int value) { m_dialnormHasBeenSet = true; m_dialnorm = value; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline Eac3Settings& WithDialnorm(int value) { SetDialnorm(value); return *this;}


    
    inline const Eac3DynamicRangeCompressionLine& GetDynamicRangeCompressionLine() const{ return m_dynamicRangeCompressionLine; }

    
    inline void SetDynamicRangeCompressionLine(const Eac3DynamicRangeCompressionLine& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = value; }

    
    inline void SetDynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine&& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = std::move(value); }

    
    inline Eac3Settings& WithDynamicRangeCompressionLine(const Eac3DynamicRangeCompressionLine& value) { SetDynamicRangeCompressionLine(value); return *this;}

    
    inline Eac3Settings& WithDynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine&& value) { SetDynamicRangeCompressionLine(std::move(value)); return *this;}


    
    inline const Eac3DynamicRangeCompressionRf& GetDynamicRangeCompressionRf() const{ return m_dynamicRangeCompressionRf; }

    
    inline void SetDynamicRangeCompressionRf(const Eac3DynamicRangeCompressionRf& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = value; }

    
    inline void SetDynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf&& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = std::move(value); }

    
    inline Eac3Settings& WithDynamicRangeCompressionRf(const Eac3DynamicRangeCompressionRf& value) { SetDynamicRangeCompressionRf(value); return *this;}

    
    inline Eac3Settings& WithDynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf&& value) { SetDynamicRangeCompressionRf(std::move(value)); return *this;}


    
    inline const Eac3LfeControl& GetLfeControl() const{ return m_lfeControl; }

    
    inline void SetLfeControl(const Eac3LfeControl& value) { m_lfeControlHasBeenSet = true; m_lfeControl = value; }

    
    inline void SetLfeControl(Eac3LfeControl&& value) { m_lfeControlHasBeenSet = true; m_lfeControl = std::move(value); }

    
    inline Eac3Settings& WithLfeControl(const Eac3LfeControl& value) { SetLfeControl(value); return *this;}

    
    inline Eac3Settings& WithLfeControl(Eac3LfeControl&& value) { SetLfeControl(std::move(value)); return *this;}


    
    inline const Eac3LfeFilter& GetLfeFilter() const{ return m_lfeFilter; }

    
    inline void SetLfeFilter(const Eac3LfeFilter& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }

    
    inline void SetLfeFilter(Eac3LfeFilter&& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = std::move(value); }

    
    inline Eac3Settings& WithLfeFilter(const Eac3LfeFilter& value) { SetLfeFilter(value); return *this;}

    
    inline Eac3Settings& WithLfeFilter(Eac3LfeFilter&& value) { SetLfeFilter(std::move(value)); return *this;}


    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
Valid
     * values: 3.0, 1.5, 0.0, -1.5 -3.0 -4.5 -6.0 -60
     */
    inline double GetLoRoCenterMixLevel() const{ return m_loRoCenterMixLevel; }

    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
Valid
     * values: 3.0, 1.5, 0.0, -1.5 -3.0 -4.5 -6.0 -60
     */
    inline void SetLoRoCenterMixLevel(double value) { m_loRoCenterMixLevelHasBeenSet = true; m_loRoCenterMixLevel = value; }

    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
Valid
     * values: 3.0, 1.5, 0.0, -1.5 -3.0 -4.5 -6.0 -60
     */
    inline Eac3Settings& WithLoRoCenterMixLevel(double value) { SetLoRoCenterMixLevel(value); return *this;}


    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
Valid
     * values: -1.5 -3.0 -4.5 -6.0 -60
     */
    inline double GetLoRoSurroundMixLevel() const{ return m_loRoSurroundMixLevel; }

    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
Valid
     * values: -1.5 -3.0 -4.5 -6.0 -60
     */
    inline void SetLoRoSurroundMixLevel(double value) { m_loRoSurroundMixLevelHasBeenSet = true; m_loRoSurroundMixLevel = value; }

    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
Valid
     * values: -1.5 -3.0 -4.5 -6.0 -60
     */
    inline Eac3Settings& WithLoRoSurroundMixLevel(double value) { SetLoRoSurroundMixLevel(value); return *this;}


    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
Valid
     * values: 3.0, 1.5, 0.0, -1.5 -3.0 -4.5 -6.0 -60
     */
    inline double GetLtRtCenterMixLevel() const{ return m_ltRtCenterMixLevel; }

    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
Valid
     * values: 3.0, 1.5, 0.0, -1.5 -3.0 -4.5 -6.0 -60
     */
    inline void SetLtRtCenterMixLevel(double value) { m_ltRtCenterMixLevelHasBeenSet = true; m_ltRtCenterMixLevel = value; }

    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
Valid
     * values: 3.0, 1.5, 0.0, -1.5 -3.0 -4.5 -6.0 -60
     */
    inline Eac3Settings& WithLtRtCenterMixLevel(double value) { SetLtRtCenterMixLevel(value); return *this;}


    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
Valid
     * values: -1.5 -3.0 -4.5 -6.0 -60
     */
    inline double GetLtRtSurroundMixLevel() const{ return m_ltRtSurroundMixLevel; }

    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
Valid
     * values: -1.5 -3.0 -4.5 -6.0 -60
     */
    inline void SetLtRtSurroundMixLevel(double value) { m_ltRtSurroundMixLevelHasBeenSet = true; m_ltRtSurroundMixLevel = value; }

    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
Valid
     * values: -1.5 -3.0 -4.5 -6.0 -60
     */
    inline Eac3Settings& WithLtRtSurroundMixLevel(double value) { SetLtRtSurroundMixLevel(value); return *this;}


    
    inline const Eac3MetadataControl& GetMetadataControl() const{ return m_metadataControl; }

    
    inline void SetMetadataControl(const Eac3MetadataControl& value) { m_metadataControlHasBeenSet = true; m_metadataControl = value; }

    
    inline void SetMetadataControl(Eac3MetadataControl&& value) { m_metadataControlHasBeenSet = true; m_metadataControl = std::move(value); }

    
    inline Eac3Settings& WithMetadataControl(const Eac3MetadataControl& value) { SetMetadataControl(value); return *this;}

    
    inline Eac3Settings& WithMetadataControl(Eac3MetadataControl&& value) { SetMetadataControl(std::move(value)); return *this;}


    
    inline const Eac3PassthroughControl& GetPassthroughControl() const{ return m_passthroughControl; }

    
    inline void SetPassthroughControl(const Eac3PassthroughControl& value) { m_passthroughControlHasBeenSet = true; m_passthroughControl = value; }

    
    inline void SetPassthroughControl(Eac3PassthroughControl&& value) { m_passthroughControlHasBeenSet = true; m_passthroughControl = std::move(value); }

    
    inline Eac3Settings& WithPassthroughControl(const Eac3PassthroughControl& value) { SetPassthroughControl(value); return *this;}

    
    inline Eac3Settings& WithPassthroughControl(Eac3PassthroughControl&& value) { SetPassthroughControl(std::move(value)); return *this;}


    
    inline const Eac3PhaseControl& GetPhaseControl() const{ return m_phaseControl; }

    
    inline void SetPhaseControl(const Eac3PhaseControl& value) { m_phaseControlHasBeenSet = true; m_phaseControl = value; }

    
    inline void SetPhaseControl(Eac3PhaseControl&& value) { m_phaseControlHasBeenSet = true; m_phaseControl = std::move(value); }

    
    inline Eac3Settings& WithPhaseControl(const Eac3PhaseControl& value) { SetPhaseControl(value); return *this;}

    
    inline Eac3Settings& WithPhaseControl(Eac3PhaseControl&& value) { SetPhaseControl(std::move(value)); return *this;}


    /**
     * Sample rate in hz. Sample rate is always 48000.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in hz. Sample rate is always 48000.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in hz. Sample rate is always 48000.
     */
    inline Eac3Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}


    
    inline const Eac3StereoDownmix& GetStereoDownmix() const{ return m_stereoDownmix; }

    
    inline void SetStereoDownmix(const Eac3StereoDownmix& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = value; }

    
    inline void SetStereoDownmix(Eac3StereoDownmix&& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = std::move(value); }

    
    inline Eac3Settings& WithStereoDownmix(const Eac3StereoDownmix& value) { SetStereoDownmix(value); return *this;}

    
    inline Eac3Settings& WithStereoDownmix(Eac3StereoDownmix&& value) { SetStereoDownmix(std::move(value)); return *this;}


    
    inline const Eac3SurroundExMode& GetSurroundExMode() const{ return m_surroundExMode; }

    
    inline void SetSurroundExMode(const Eac3SurroundExMode& value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = value; }

    
    inline void SetSurroundExMode(Eac3SurroundExMode&& value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = std::move(value); }

    
    inline Eac3Settings& WithSurroundExMode(const Eac3SurroundExMode& value) { SetSurroundExMode(value); return *this;}

    
    inline Eac3Settings& WithSurroundExMode(Eac3SurroundExMode&& value) { SetSurroundExMode(std::move(value)); return *this;}


    
    inline const Eac3SurroundMode& GetSurroundMode() const{ return m_surroundMode; }

    
    inline void SetSurroundMode(const Eac3SurroundMode& value) { m_surroundModeHasBeenSet = true; m_surroundMode = value; }

    
    inline void SetSurroundMode(Eac3SurroundMode&& value) { m_surroundModeHasBeenSet = true; m_surroundMode = std::move(value); }

    
    inline Eac3Settings& WithSurroundMode(const Eac3SurroundMode& value) { SetSurroundMode(value); return *this;}

    
    inline Eac3Settings& WithSurroundMode(Eac3SurroundMode&& value) { SetSurroundMode(std::move(value)); return *this;}

  private:

    Eac3AttenuationControl m_attenuationControl;
    bool m_attenuationControlHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    Eac3BitstreamMode m_bitstreamMode;
    bool m_bitstreamModeHasBeenSet;

    Eac3CodingMode m_codingMode;
    bool m_codingModeHasBeenSet;

    Eac3DcFilter m_dcFilter;
    bool m_dcFilterHasBeenSet;

    int m_dialnorm;
    bool m_dialnormHasBeenSet;

    Eac3DynamicRangeCompressionLine m_dynamicRangeCompressionLine;
    bool m_dynamicRangeCompressionLineHasBeenSet;

    Eac3DynamicRangeCompressionRf m_dynamicRangeCompressionRf;
    bool m_dynamicRangeCompressionRfHasBeenSet;

    Eac3LfeControl m_lfeControl;
    bool m_lfeControlHasBeenSet;

    Eac3LfeFilter m_lfeFilter;
    bool m_lfeFilterHasBeenSet;

    double m_loRoCenterMixLevel;
    bool m_loRoCenterMixLevelHasBeenSet;

    double m_loRoSurroundMixLevel;
    bool m_loRoSurroundMixLevelHasBeenSet;

    double m_ltRtCenterMixLevel;
    bool m_ltRtCenterMixLevelHasBeenSet;

    double m_ltRtSurroundMixLevel;
    bool m_ltRtSurroundMixLevelHasBeenSet;

    Eac3MetadataControl m_metadataControl;
    bool m_metadataControlHasBeenSet;

    Eac3PassthroughControl m_passthroughControl;
    bool m_passthroughControlHasBeenSet;

    Eac3PhaseControl m_phaseControl;
    bool m_phaseControlHasBeenSet;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet;

    Eac3StereoDownmix m_stereoDownmix;
    bool m_stereoDownmixHasBeenSet;

    Eac3SurroundExMode m_surroundExMode;
    bool m_surroundExModeHasBeenSet;

    Eac3SurroundMode m_surroundMode;
    bool m_surroundModeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
