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
#include <aws/mediaconvert/model/WavFormat.h>
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
   * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
   * value WAV.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/WavSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API WavSettings
  {
  public:
    WavSettings();
    WavSettings(Aws::Utils::Json::JsonView jsonValue);
    WavSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline int GetBitDepth() const{ return m_bitDepth; }

    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }

    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline void SetBitDepth(int value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }

    /**
     * Specify Bit depth (BitDepth), in bits per sample, to choose the encoding quality
     * for this audio track.
     */
    inline WavSettings& WithBitDepth(int value) { SetBitDepth(value); return *this;}


    /**
     * Set Channels to specify the number of channels in this output audio track. With
     * WAV, valid values 1, 2, 4, and 8. In the console, these values are Mono, Stereo,
     * 4-Channel, and 8-Channel, respectively.
     */
    inline int GetChannels() const{ return m_channels; }

    /**
     * Set Channels to specify the number of channels in this output audio track. With
     * WAV, valid values 1, 2, 4, and 8. In the console, these values are Mono, Stereo,
     * 4-Channel, and 8-Channel, respectively.
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * Set Channels to specify the number of channels in this output audio track. With
     * WAV, valid values 1, 2, 4, and 8. In the console, these values are Mono, Stereo,
     * 4-Channel, and 8-Channel, respectively.
     */
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * Set Channels to specify the number of channels in this output audio track. With
     * WAV, valid values 1, 2, 4, and 8. In the console, these values are Mono, Stereo,
     * 4-Channel, and 8-Channel, respectively.
     */
    inline WavSettings& WithChannels(int value) { SetChannels(value); return *this;}


    /**
     * The service defaults to using RIFF for WAV outputs. If your output audio is
     * likely to exceed 4 GB in file size, or if you otherwise need the extended
     * support of the RF64 format, set your output WAV file format to RF64.
     */
    inline const WavFormat& GetFormat() const{ return m_format; }

    /**
     * The service defaults to using RIFF for WAV outputs. If your output audio is
     * likely to exceed 4 GB in file size, or if you otherwise need the extended
     * support of the RF64 format, set your output WAV file format to RF64.
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * The service defaults to using RIFF for WAV outputs. If your output audio is
     * likely to exceed 4 GB in file size, or if you otherwise need the extended
     * support of the RF64 format, set your output WAV file format to RF64.
     */
    inline void SetFormat(const WavFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * The service defaults to using RIFF for WAV outputs. If your output audio is
     * likely to exceed 4 GB in file size, or if you otherwise need the extended
     * support of the RF64 format, set your output WAV file format to RF64.
     */
    inline void SetFormat(WavFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * The service defaults to using RIFF for WAV outputs. If your output audio is
     * likely to exceed 4 GB in file size, or if you otherwise need the extended
     * support of the RF64 format, set your output WAV file format to RF64.
     */
    inline WavSettings& WithFormat(const WavFormat& value) { SetFormat(value); return *this;}

    /**
     * The service defaults to using RIFF for WAV outputs. If your output audio is
     * likely to exceed 4 GB in file size, or if you otherwise need the extended
     * support of the RF64 format, set your output WAV file format to RF64.
     */
    inline WavSettings& WithFormat(WavFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * Sample rate in Hz.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in Hz.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Sample rate in Hz.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in Hz.
     */
    inline WavSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}

  private:

    int m_bitDepth;
    bool m_bitDepthHasBeenSet;

    int m_channels;
    bool m_channelsHasBeenSet;

    WavFormat m_format;
    bool m_formatHasBeenSet;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
