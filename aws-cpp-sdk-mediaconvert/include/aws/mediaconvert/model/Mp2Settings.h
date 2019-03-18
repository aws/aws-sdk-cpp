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
   * value MP2.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Mp2Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Mp2Settings
  {
  public:
    Mp2Settings();
    Mp2Settings(Aws::Utils::Json::JsonView jsonValue);
    Mp2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Average bitrate in bits/second.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second.
     */
    inline Mp2Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Set Channels to specify the number of channels in this output audio track.
     * Choosing Mono in the console will give you 1 output channel; choosing Stereo
     * will give you 2. In the API, valid values are 1 and 2.
     */
    inline int GetChannels() const{ return m_channels; }

    /**
     * Set Channels to specify the number of channels in this output audio track.
     * Choosing Mono in the console will give you 1 output channel; choosing Stereo
     * will give you 2. In the API, valid values are 1 and 2.
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * Set Channels to specify the number of channels in this output audio track.
     * Choosing Mono in the console will give you 1 output channel; choosing Stereo
     * will give you 2. In the API, valid values are 1 and 2.
     */
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * Set Channels to specify the number of channels in this output audio track.
     * Choosing Mono in the console will give you 1 output channel; choosing Stereo
     * will give you 2. In the API, valid values are 1 and 2.
     */
    inline Mp2Settings& WithChannels(int value) { SetChannels(value); return *this;}


    /**
     * Sample rate in hz.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in hz.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Sample rate in hz.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in hz.
     */
    inline Mp2Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}

  private:

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    int m_channels;
    bool m_channelsHasBeenSet;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
