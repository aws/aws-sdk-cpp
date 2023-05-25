/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-media-pipelines/model/MediaEncoding.h>
#include <aws/chime-sdk-media-pipelines/model/StreamConfiguration.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The runtime configuration settings for the Kinesis video stream
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KinesisVideoStreamSourceRuntimeConfiguration">AWS
   * API Reference</a></p>
   */
  class KinesisVideoStreamSourceRuntimeConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamSourceRuntimeConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamSourceRuntimeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KinesisVideoStreamSourceRuntimeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline const Aws::Vector<StreamConfiguration>& GetStreams() const{ return m_streams; }

    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }

    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline void SetStreams(const Aws::Vector<StreamConfiguration>& value) { m_streamsHasBeenSet = true; m_streams = value; }

    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline void SetStreams(Aws::Vector<StreamConfiguration>&& value) { m_streamsHasBeenSet = true; m_streams = std::move(value); }

    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline KinesisVideoStreamSourceRuntimeConfiguration& WithStreams(const Aws::Vector<StreamConfiguration>& value) { SetStreams(value); return *this;}

    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline KinesisVideoStreamSourceRuntimeConfiguration& WithStreams(Aws::Vector<StreamConfiguration>&& value) { SetStreams(std::move(value)); return *this;}

    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline KinesisVideoStreamSourceRuntimeConfiguration& AddStreams(const StreamConfiguration& value) { m_streamsHasBeenSet = true; m_streams.push_back(value); return *this; }

    /**
     * <p>The streams in the source runtime configuration of a Kinesis video
     * stream.</p>
     */
    inline KinesisVideoStreamSourceRuntimeConfiguration& AddStreams(StreamConfiguration&& value) { m_streamsHasBeenSet = true; m_streams.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the encoding of your input audio. Supported format: PCM (only
     * signed 16-bit little-endian audio formats, which does not include WAV)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>Specifies the encoding of your input audio. Supported format: PCM (only
     * signed 16-bit little-endian audio formats, which does not include WAV)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>Specifies the encoding of your input audio. Supported format: PCM (only
     * signed 16-bit little-endian audio formats, which does not include WAV)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>Specifies the encoding of your input audio. Supported format: PCM (only
     * signed 16-bit little-endian audio formats, which does not include WAV)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>Specifies the encoding of your input audio. Supported format: PCM (only
     * signed 16-bit little-endian audio formats, which does not include WAV)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline KinesisVideoStreamSourceRuntimeConfiguration& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>Specifies the encoding of your input audio. Supported format: PCM (only
     * signed 16-bit little-endian audio formats, which does not include WAV)</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a> in the <i>Amazon Transcribe Developer Guide</i>.</p>
     */
    inline KinesisVideoStreamSourceRuntimeConfiguration& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p> <p>Valid Range: Minimum value of 8000. Maximum
     * value of 48000.</p>
     */
    inline int GetMediaSampleRate() const{ return m_mediaSampleRate; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p> <p>Valid Range: Minimum value of 8000. Maximum
     * value of 48000.</p>
     */
    inline bool MediaSampleRateHasBeenSet() const { return m_mediaSampleRateHasBeenSet; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p> <p>Valid Range: Minimum value of 8000. Maximum
     * value of 48000.</p>
     */
    inline void SetMediaSampleRate(int value) { m_mediaSampleRateHasBeenSet = true; m_mediaSampleRate = value; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p> <p>Valid Range: Minimum value of 8000. Maximum
     * value of 48000.</p>
     */
    inline KinesisVideoStreamSourceRuntimeConfiguration& WithMediaSampleRate(int value) { SetMediaSampleRate(value); return *this;}

  private:

    Aws::Vector<StreamConfiguration> m_streams;
    bool m_streamsHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    int m_mediaSampleRate;
    bool m_mediaSampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
