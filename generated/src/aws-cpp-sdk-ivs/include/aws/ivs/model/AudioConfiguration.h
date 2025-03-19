/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying a stream’s audio configuration, as set up by the
   * broadcaster (usually in an encoder). This is part of the
   * <a>IngestConfigurations</a> object and the deprecated <a>IngestConfiguration</a>
   * object. It is used for monitoring stream health.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/AudioConfiguration">AWS
   * API Reference</a></p>
   */
  class AudioConfiguration
  {
  public:
    AWS_IVS_API AudioConfiguration() = default;
    AWS_IVS_API AudioConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API AudioConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Number of audio channels.</p>
     */
    inline long long GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(long long value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline AudioConfiguration& WithChannels(long long value) { SetChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Codec used for the audio encoding.</p>
     */
    inline const Aws::String& GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    template<typename CodecT = Aws::String>
    void SetCodec(CodecT&& value) { m_codecHasBeenSet = true; m_codec = std::forward<CodecT>(value); }
    template<typename CodecT = Aws::String>
    AudioConfiguration& WithCodec(CodecT&& value) { SetCodec(std::forward<CodecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of audio samples recorded per second.</p>
     */
    inline long long GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(long long value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline AudioConfiguration& WithSampleRate(long long value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected ingest bitrate (bits per second). This is configured in the
     * encoder.</p>
     */
    inline long long GetTargetBitrate() const { return m_targetBitrate; }
    inline bool TargetBitrateHasBeenSet() const { return m_targetBitrateHasBeenSet; }
    inline void SetTargetBitrate(long long value) { m_targetBitrateHasBeenSet = true; m_targetBitrate = value; }
    inline AudioConfiguration& WithTargetBitrate(long long value) { SetTargetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the audio track (if the stream has an audio track). If multitrack is
     * not enabled, this is track0 (the sole track).</p>
     */
    inline const Aws::String& GetTrack() const { return m_track; }
    inline bool TrackHasBeenSet() const { return m_trackHasBeenSet; }
    template<typename TrackT = Aws::String>
    void SetTrack(TrackT&& value) { m_trackHasBeenSet = true; m_track = std::forward<TrackT>(value); }
    template<typename TrackT = Aws::String>
    AudioConfiguration& WithTrack(TrackT&& value) { SetTrack(std::forward<TrackT>(value)); return *this;}
    ///@}
  private:

    long long m_channels{0};
    bool m_channelsHasBeenSet = false;

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    long long m_sampleRate{0};
    bool m_sampleRateHasBeenSet = false;

    long long m_targetBitrate{0};
    bool m_targetBitrateHasBeenSet = false;

    Aws::String m_track;
    bool m_trackHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
