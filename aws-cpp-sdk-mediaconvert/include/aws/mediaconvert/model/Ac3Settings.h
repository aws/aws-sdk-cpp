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
#include <aws/mediaconvert/model/Ac3BitstreamMode.h>
#include <aws/mediaconvert/model/Ac3CodingMode.h>
#include <aws/mediaconvert/model/Ac3DynamicRangeCompressionProfile.h>
#include <aws/mediaconvert/model/Ac3LfeFilter.h>
#include <aws/mediaconvert/model/Ac3MetadataControl.h>
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
   * value AC3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Ac3Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Ac3Settings
  {
  public:
    Ac3Settings();
    Ac3Settings(const Aws::Utils::Json::JsonValue& jsonValue);
    Ac3Settings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Ac3Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    
    inline const Ac3BitstreamMode& GetBitstreamMode() const{ return m_bitstreamMode; }

    
    inline void SetBitstreamMode(const Ac3BitstreamMode& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }

    
    inline void SetBitstreamMode(Ac3BitstreamMode&& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = std::move(value); }

    
    inline Ac3Settings& WithBitstreamMode(const Ac3BitstreamMode& value) { SetBitstreamMode(value); return *this;}

    
    inline Ac3Settings& WithBitstreamMode(Ac3BitstreamMode&& value) { SetBitstreamMode(std::move(value)); return *this;}


    
    inline const Ac3CodingMode& GetCodingMode() const{ return m_codingMode; }

    
    inline void SetCodingMode(const Ac3CodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    
    inline void SetCodingMode(Ac3CodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    
    inline Ac3Settings& WithCodingMode(const Ac3CodingMode& value) { SetCodingMode(value); return *this;}

    
    inline Ac3Settings& WithCodingMode(Ac3CodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline int GetDialnorm() const{ return m_dialnorm; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline void SetDialnorm(int value) { m_dialnormHasBeenSet = true; m_dialnorm = value; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline Ac3Settings& WithDialnorm(int value) { SetDialnorm(value); return *this;}


    
    inline const Ac3DynamicRangeCompressionProfile& GetDynamicRangeCompressionProfile() const{ return m_dynamicRangeCompressionProfile; }

    
    inline void SetDynamicRangeCompressionProfile(const Ac3DynamicRangeCompressionProfile& value) { m_dynamicRangeCompressionProfileHasBeenSet = true; m_dynamicRangeCompressionProfile = value; }

    
    inline void SetDynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile&& value) { m_dynamicRangeCompressionProfileHasBeenSet = true; m_dynamicRangeCompressionProfile = std::move(value); }

    
    inline Ac3Settings& WithDynamicRangeCompressionProfile(const Ac3DynamicRangeCompressionProfile& value) { SetDynamicRangeCompressionProfile(value); return *this;}

    
    inline Ac3Settings& WithDynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile&& value) { SetDynamicRangeCompressionProfile(std::move(value)); return *this;}


    
    inline const Ac3LfeFilter& GetLfeFilter() const{ return m_lfeFilter; }

    
    inline void SetLfeFilter(const Ac3LfeFilter& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }

    
    inline void SetLfeFilter(Ac3LfeFilter&& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = std::move(value); }

    
    inline Ac3Settings& WithLfeFilter(const Ac3LfeFilter& value) { SetLfeFilter(value); return *this;}

    
    inline Ac3Settings& WithLfeFilter(Ac3LfeFilter&& value) { SetLfeFilter(std::move(value)); return *this;}


    
    inline const Ac3MetadataControl& GetMetadataControl() const{ return m_metadataControl; }

    
    inline void SetMetadataControl(const Ac3MetadataControl& value) { m_metadataControlHasBeenSet = true; m_metadataControl = value; }

    
    inline void SetMetadataControl(Ac3MetadataControl&& value) { m_metadataControlHasBeenSet = true; m_metadataControl = std::move(value); }

    
    inline Ac3Settings& WithMetadataControl(const Ac3MetadataControl& value) { SetMetadataControl(value); return *this;}

    
    inline Ac3Settings& WithMetadataControl(Ac3MetadataControl&& value) { SetMetadataControl(std::move(value)); return *this;}


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
    inline Ac3Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}

  private:

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    Ac3BitstreamMode m_bitstreamMode;
    bool m_bitstreamModeHasBeenSet;

    Ac3CodingMode m_codingMode;
    bool m_codingModeHasBeenSet;

    int m_dialnorm;
    bool m_dialnormHasBeenSet;

    Ac3DynamicRangeCompressionProfile m_dynamicRangeCompressionProfile;
    bool m_dynamicRangeCompressionProfileHasBeenSet;

    Ac3LfeFilter m_lfeFilter;
    bool m_lfeFilterHasBeenSet;

    Ac3MetadataControl m_metadataControl;
    bool m_metadataControlHasBeenSet;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
