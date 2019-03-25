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
#include <aws/mediaconvert/model/ChannelMapping.h>
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
   * Use Manual audio remixing (RemixSettings) to adjust audio levels for each audio
   * channel in each output of your job. With audio remixing, you can output more or
   * fewer audio channels than your input audio source provides.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/RemixSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API RemixSettings
  {
  public:
    RemixSettings();
    RemixSettings(Aws::Utils::Json::JsonView jsonValue);
    RemixSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Channel mapping (ChannelMapping) contains the group of fields that hold the
     * remixing value for each channel. Units are in dB. Acceptable values are within
     * the range from -60 (mute) through 6. A setting of 0 passes the input channel
     * unchanged to the output channel (no attenuation or amplification).
     */
    inline const ChannelMapping& GetChannelMapping() const{ return m_channelMapping; }

    /**
     * Channel mapping (ChannelMapping) contains the group of fields that hold the
     * remixing value for each channel. Units are in dB. Acceptable values are within
     * the range from -60 (mute) through 6. A setting of 0 passes the input channel
     * unchanged to the output channel (no attenuation or amplification).
     */
    inline bool ChannelMappingHasBeenSet() const { return m_channelMappingHasBeenSet; }

    /**
     * Channel mapping (ChannelMapping) contains the group of fields that hold the
     * remixing value for each channel. Units are in dB. Acceptable values are within
     * the range from -60 (mute) through 6. A setting of 0 passes the input channel
     * unchanged to the output channel (no attenuation or amplification).
     */
    inline void SetChannelMapping(const ChannelMapping& value) { m_channelMappingHasBeenSet = true; m_channelMapping = value; }

    /**
     * Channel mapping (ChannelMapping) contains the group of fields that hold the
     * remixing value for each channel. Units are in dB. Acceptable values are within
     * the range from -60 (mute) through 6. A setting of 0 passes the input channel
     * unchanged to the output channel (no attenuation or amplification).
     */
    inline void SetChannelMapping(ChannelMapping&& value) { m_channelMappingHasBeenSet = true; m_channelMapping = std::move(value); }

    /**
     * Channel mapping (ChannelMapping) contains the group of fields that hold the
     * remixing value for each channel. Units are in dB. Acceptable values are within
     * the range from -60 (mute) through 6. A setting of 0 passes the input channel
     * unchanged to the output channel (no attenuation or amplification).
     */
    inline RemixSettings& WithChannelMapping(const ChannelMapping& value) { SetChannelMapping(value); return *this;}

    /**
     * Channel mapping (ChannelMapping) contains the group of fields that hold the
     * remixing value for each channel. Units are in dB. Acceptable values are within
     * the range from -60 (mute) through 6. A setting of 0 passes the input channel
     * unchanged to the output channel (no attenuation or amplification).
     */
    inline RemixSettings& WithChannelMapping(ChannelMapping&& value) { SetChannelMapping(std::move(value)); return *this;}


    /**
     * Specify the number of audio channels from your input that you want to use in
     * your output. With remixing, you might combine or split the data in these
     * channels, so the number of channels in your final output might be different.
     */
    inline int GetChannelsIn() const{ return m_channelsIn; }

    /**
     * Specify the number of audio channels from your input that you want to use in
     * your output. With remixing, you might combine or split the data in these
     * channels, so the number of channels in your final output might be different.
     */
    inline bool ChannelsInHasBeenSet() const { return m_channelsInHasBeenSet; }

    /**
     * Specify the number of audio channels from your input that you want to use in
     * your output. With remixing, you might combine or split the data in these
     * channels, so the number of channels in your final output might be different.
     */
    inline void SetChannelsIn(int value) { m_channelsInHasBeenSet = true; m_channelsIn = value; }

    /**
     * Specify the number of audio channels from your input that you want to use in
     * your output. With remixing, you might combine or split the data in these
     * channels, so the number of channels in your final output might be different.
     */
    inline RemixSettings& WithChannelsIn(int value) { SetChannelsIn(value); return *this;}


    /**
     * Specify the number of channels in this output after remixing. Valid values: 1,
     * 2, 4, 6, 8
     */
    inline int GetChannelsOut() const{ return m_channelsOut; }

    /**
     * Specify the number of channels in this output after remixing. Valid values: 1,
     * 2, 4, 6, 8
     */
    inline bool ChannelsOutHasBeenSet() const { return m_channelsOutHasBeenSet; }

    /**
     * Specify the number of channels in this output after remixing. Valid values: 1,
     * 2, 4, 6, 8
     */
    inline void SetChannelsOut(int value) { m_channelsOutHasBeenSet = true; m_channelsOut = value; }

    /**
     * Specify the number of channels in this output after remixing. Valid values: 1,
     * 2, 4, 6, 8
     */
    inline RemixSettings& WithChannelsOut(int value) { SetChannelsOut(value); return *this;}

  private:

    ChannelMapping m_channelMapping;
    bool m_channelMappingHasBeenSet;

    int m_channelsIn;
    bool m_channelsInHasBeenSet;

    int m_channelsOut;
    bool m_channelsOutHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
