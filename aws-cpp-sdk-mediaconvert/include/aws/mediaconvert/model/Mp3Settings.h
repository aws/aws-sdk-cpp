/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Mp3RateControlMode.h>
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
   * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
   * MP3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Mp3Settings">AWS
   * API Reference</a></p>
   */
  class Mp3Settings
  {
  public:
    AWS_MEDIACONVERT_API Mp3Settings();
    AWS_MEDIACONVERT_API Mp3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Mp3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Mp3Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are 1 and 2.
     */
    inline int GetChannels() const{ return m_channels; }

    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are 1 and 2.
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are 1 and 2.
     */
    inline void SetChannels(int value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * Specify the number of channels in this output audio track. Choosing Mono on the
     * console gives you 1 output channel; choosing Stereo gives you 2. In the API,
     * valid values are 1 and 2.
     */
    inline Mp3Settings& WithChannels(int value) { SetChannels(value); return *this;}


    /**
     * Specify whether the service encodes this MP3 audio output with a constant
     * bitrate (CBR) or a variable bitrate (VBR).
     */
    inline const Mp3RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * Specify whether the service encodes this MP3 audio output with a constant
     * bitrate (CBR) or a variable bitrate (VBR).
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * Specify whether the service encodes this MP3 audio output with a constant
     * bitrate (CBR) or a variable bitrate (VBR).
     */
    inline void SetRateControlMode(const Mp3RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * Specify whether the service encodes this MP3 audio output with a constant
     * bitrate (CBR) or a variable bitrate (VBR).
     */
    inline void SetRateControlMode(Mp3RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * Specify whether the service encodes this MP3 audio output with a constant
     * bitrate (CBR) or a variable bitrate (VBR).
     */
    inline Mp3Settings& WithRateControlMode(const Mp3RateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * Specify whether the service encodes this MP3 audio output with a constant
     * bitrate (CBR) or a variable bitrate (VBR).
     */
    inline Mp3Settings& WithRateControlMode(Mp3RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


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
    inline Mp3Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}


    /**
     * Required when you set Bitrate control mode (rateControlMode) to VBR. Specify the
     * audio quality of this MP3 output from 0 (highest quality) to 9 (lowest quality).
     */
    inline int GetVbrQuality() const{ return m_vbrQuality; }

    /**
     * Required when you set Bitrate control mode (rateControlMode) to VBR. Specify the
     * audio quality of this MP3 output from 0 (highest quality) to 9 (lowest quality).
     */
    inline bool VbrQualityHasBeenSet() const { return m_vbrQualityHasBeenSet; }

    /**
     * Required when you set Bitrate control mode (rateControlMode) to VBR. Specify the
     * audio quality of this MP3 output from 0 (highest quality) to 9 (lowest quality).
     */
    inline void SetVbrQuality(int value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }

    /**
     * Required when you set Bitrate control mode (rateControlMode) to VBR. Specify the
     * audio quality of this MP3 output from 0 (highest quality) to 9 (lowest quality).
     */
    inline Mp3Settings& WithVbrQuality(int value) { SetVbrQuality(value); return *this;}

  private:

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    int m_channels;
    bool m_channelsHasBeenSet = false;

    Mp3RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    int m_vbrQuality;
    bool m_vbrQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
