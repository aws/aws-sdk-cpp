/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Mp2Settings
  {
  public:
    AWS_MEDIACONVERT_API Mp2Settings();
    AWS_MEDIACONVERT_API Mp2Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Mp2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the average bitrate in bits per second.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the average bitrate in bits per second.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the average bitrate in bits per second.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the average bitrate in bits per second.
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
    bool m_bitrateHasBeenSet = false;

    int m_channels;
    bool m_channelsHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
