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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/AudioCodecOptions.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   * <p>Parameters required for transcoding audio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/AudioParameters">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API AudioParameters
  {
  public:
    AudioParameters();
    AudioParameters(Aws::Utils::Json::JsonView jsonValue);
    AudioParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline const Aws::String& GetCodec() const{ return m_codec; }

    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline void SetCodec(const Aws::String& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline void SetCodec(Aws::String&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline void SetCodec(const char* value) { m_codecHasBeenSet = true; m_codec.assign(value); }

    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline AudioParameters& WithCodec(const Aws::String& value) { SetCodec(value); return *this;}

    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline AudioParameters& WithCodec(Aws::String&& value) { SetCodec(std::move(value)); return *this;}

    /**
     * <p>The audio codec for the output file. Valid values include <code>aac</code>,
     * <code>flac</code>, <code>mp2</code>, <code>mp3</code>, <code>pcm</code>, and
     * <code>vorbis</code>.</p>
     */
    inline AudioParameters& WithCodec(const char* value) { SetCodec(value); return *this;}


    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline const Aws::String& GetSampleRate() const{ return m_sampleRate; }

    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline void SetSampleRate(const Aws::String& value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline void SetSampleRate(Aws::String&& value) { m_sampleRateHasBeenSet = true; m_sampleRate = std::move(value); }

    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline void SetSampleRate(const char* value) { m_sampleRateHasBeenSet = true; m_sampleRate.assign(value); }

    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline AudioParameters& WithSampleRate(const Aws::String& value) { SetSampleRate(value); return *this;}

    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline AudioParameters& WithSampleRate(Aws::String&& value) { SetSampleRate(std::move(value)); return *this;}

    /**
     * <p>The sample rate of the audio stream in the output file, in Hertz. Valid
     * values include:</p> <p> <code>auto</code>, <code>22050</code>,
     * <code>32000</code>, <code>44100</code>, <code>48000</code>, <code>96000</code>
     * </p> <p>If you specify <code>auto</code>, Elastic Transcoder automatically
     * detects the sample rate.</p>
     */
    inline AudioParameters& WithSampleRate(const char* value) { SetSampleRate(value); return *this;}


    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline const Aws::String& GetBitRate() const{ return m_bitRate; }

    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline bool BitRateHasBeenSet() const { return m_bitRateHasBeenSet; }

    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline void SetBitRate(const Aws::String& value) { m_bitRateHasBeenSet = true; m_bitRate = value; }

    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline void SetBitRate(Aws::String&& value) { m_bitRateHasBeenSet = true; m_bitRate = std::move(value); }

    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline void SetBitRate(const char* value) { m_bitRateHasBeenSet = true; m_bitRate.assign(value); }

    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline AudioParameters& WithBitRate(const Aws::String& value) { SetBitRate(value); return *this;}

    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline AudioParameters& WithBitRate(Aws::String&& value) { SetBitRate(std::move(value)); return *this;}

    /**
     * <p>The bit rate of the audio stream in the output file, in kilobits/second.
     * Enter an integer between 64 and 320, inclusive.</p>
     */
    inline AudioParameters& WithBitRate(const char* value) { SetBitRate(value); return *this;}


    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline const Aws::String& GetChannels() const{ return m_channels; }

    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline void SetChannels(const Aws::String& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline void SetChannels(Aws::String&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline void SetChannels(const char* value) { m_channelsHasBeenSet = true; m_channels.assign(value); }

    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline AudioParameters& WithChannels(const Aws::String& value) { SetChannels(value); return *this;}

    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline AudioParameters& WithChannels(Aws::String&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The number of audio channels in the output file. The following values are
     * valid:</p> <p> <code>auto</code>, <code>0</code>, <code>1</code>, <code>2</code>
     * </p> <p>One channel carries the information played by a single speaker. For
     * example, a stereo track with two channels sends one channel to the left speaker,
     * and the other channel to the right speaker. The output channels are organized
     * into tracks. If you want Elastic Transcoder to automatically detect the number
     * of audio channels in the input file and use that value for the output file,
     * select <code>auto</code>.</p> <p>The output of a specific channel value and
     * inputs are as follows:</p> <ul> <li> <p> <code>auto</code> <b> channel
     * specified, with any input:</b> Pass through up to eight input channels.</p>
     * </li> <li> <p> <code>0</code> <b> channels specified, with any input:</b> Audio
     * omitted from the output.</p> </li> <li> <p> <code>1</code> <b> channel
     * specified, with at least one input channel:</b> Mono sound.</p> </li> <li> <p>
     * <code>2</code> <b> channels specified, with any input:</b> Two identical mono
     * channels or stereo. For more information about tracks, see
     * <code>Audio:AudioPackingMode.</code> </p> </li> </ul> <p> For more information
     * about how Elastic Transcoder organizes channels and tracks, see
     * <code>Audio:AudioPackingMode</code>.</p>
     */
    inline AudioParameters& WithChannels(const char* value) { SetChannels(value); return *this;}


    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline const Aws::String& GetAudioPackingMode() const{ return m_audioPackingMode; }

    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline bool AudioPackingModeHasBeenSet() const { return m_audioPackingModeHasBeenSet; }

    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline void SetAudioPackingMode(const Aws::String& value) { m_audioPackingModeHasBeenSet = true; m_audioPackingMode = value; }

    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline void SetAudioPackingMode(Aws::String&& value) { m_audioPackingModeHasBeenSet = true; m_audioPackingMode = std::move(value); }

    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline void SetAudioPackingMode(const char* value) { m_audioPackingModeHasBeenSet = true; m_audioPackingMode.assign(value); }

    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline AudioParameters& WithAudioPackingMode(const Aws::String& value) { SetAudioPackingMode(value); return *this;}

    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline AudioParameters& WithAudioPackingMode(Aws::String&& value) { SetAudioPackingMode(std::move(value)); return *this;}

    /**
     * <p>The method of organizing audio channels and tracks. Use
     * <code>Audio:Channels</code> to specify the number of channels in your output,
     * and <code>Audio:AudioPackingMode</code> to specify the number of tracks and
     * their relation to the channels. If you do not specify an
     * <code>Audio:AudioPackingMode</code>, Elastic Transcoder uses
     * <code>SingleTrack</code>.</p> <p>The following values are valid:</p> <p>
     * <code>SingleTrack</code>, <code>OneChannelPerTrack</code>, and
     * <code>OneChannelPerTrackWithMosTo8Tracks</code> </p> <p>When you specify
     * <code>SingleTrack</code>, Elastic Transcoder creates a single track for your
     * output. The track can have up to eight channels. Use <code>SingleTrack</code>
     * for all non-<code>mxf</code> containers.</p> <p>The outputs of
     * <code>SingleTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0</code> <b> channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> One track with two identical
     * channels</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks
     * with one channel each:</b> One track with two channels</p> </li> <li> <p>
     * <code>2 or auto </code> <b>channels with one track with two channels:</b> One
     * track with two channels</p> </li> <li> <p> <code>2 </code> <b>channels with one
     * track with multiple channels:</b> One track with two channels</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with multiple channels:</b> One track with multiple channels</p> </li>
     * </ul> <p>When you specify <code>OneChannelPerTrack</code>, Elastic Transcoder
     * creates a new track for every channel in your output. Your output can have up to
     * eight single-channel tracks.</p> <p>The outputs of
     * <code>OneChannelPerTrack</code> for a specific channel value and inputs are as
     * follows:</p> <ul> <li> <p> <code>0 </code> <b>channels with any input:</b> Audio
     * omitted from the output</p> </li> <li> <p> <code>1, 2, or auto </code>
     * <b>channels with no audio input:</b> Audio omitted from the output</p> </li>
     * <li> <p> <code>1 </code> <b>channel with any input with audio:</b> One track
     * with one channel, downmixed if necessary</p> </li> <li> <p> <code>2 </code>
     * <b>channels with one track with one channel:</b> Two tracks with one identical
     * channel each</p> </li> <li> <p> <code>2 or auto </code> <b>channels with two
     * tracks with one channel each:</b> Two tracks with one channel each</p> </li>
     * <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each</p> </li> <li> <p> <code>2
     * </code> <b>channels with one track with multiple channels:</b> Two tracks with
     * one channel each</p> </li> <li> <p> <code>auto </code> <b>channels with one
     * track with one channel:</b> One track with one channel</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with multiple channels:</b> Up to
     * eight tracks with one channel each</p> </li> </ul> <p>When you specify
     * <code>OneChannelPerTrackWithMosTo8Tracks</code>, Elastic Transcoder creates
     * eight single-channel tracks for your output. All tracks that do not contain
     * audio data from an input channel are MOS, or Mit Out Sound, tracks.</p> <p>The
     * outputs of <code>OneChannelPerTrackWithMosTo8Tracks</code> for a specific
     * channel value and inputs are as follows:</p> <ul> <li> <p> <code>0 </code>
     * <b>channels with any input:</b> Audio omitted from the output</p> </li> <li> <p>
     * <code>1, 2, or auto </code> <b>channels with no audio input:</b> Audio omitted
     * from the output</p> </li> <li> <p> <code>1 </code> <b>channel with any input
     * with audio:</b> One track with one channel, downmixed if necessary, plus six MOS
     * tracks</p> </li> <li> <p> <code>2 </code> <b>channels with one track with one
     * channel:</b> Two tracks with one identical channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with two tracks with one
     * channel each:</b> Two tracks with one channel each, plus six MOS tracks</p>
     * </li> <li> <p> <code>2 or auto </code> <b>channels with one track with two
     * channels:</b> Two tracks with one channel each, plus six MOS tracks</p> </li>
     * <li> <p> <code>2 </code> <b>channels with one track with multiple channels:</b>
     * Two tracks with one channel each, plus six MOS tracks</p> </li> <li> <p>
     * <code>auto </code> <b>channels with one track with one channel:</b> One track
     * with one channel, plus seven MOS tracks</p> </li> <li> <p> <code>auto </code>
     * <b>channels with one track with multiple channels:</b> Up to eight tracks with
     * one channel each, plus MOS tracks until there are eight tracks in all</p> </li>
     * </ul>
     */
    inline AudioParameters& WithAudioPackingMode(const char* value) { SetAudioPackingMode(value); return *this;}


    /**
     * <p>If you specified <code>AAC</code> for <code>Audio:Codec</code>, this is the
     * <code>AAC</code> compression profile to use. Valid values include:</p> <p>
     * <code>auto</code>, <code>AAC-LC</code>, <code>HE-AAC</code>,
     * <code>HE-AACv2</code> </p> <p>If you specify <code>auto</code>, Elastic
     * Transcoder chooses a profile based on the bit rate of the output file.</p>
     */
    inline const AudioCodecOptions& GetCodecOptions() const{ return m_codecOptions; }

    /**
     * <p>If you specified <code>AAC</code> for <code>Audio:Codec</code>, this is the
     * <code>AAC</code> compression profile to use. Valid values include:</p> <p>
     * <code>auto</code>, <code>AAC-LC</code>, <code>HE-AAC</code>,
     * <code>HE-AACv2</code> </p> <p>If you specify <code>auto</code>, Elastic
     * Transcoder chooses a profile based on the bit rate of the output file.</p>
     */
    inline bool CodecOptionsHasBeenSet() const { return m_codecOptionsHasBeenSet; }

    /**
     * <p>If you specified <code>AAC</code> for <code>Audio:Codec</code>, this is the
     * <code>AAC</code> compression profile to use. Valid values include:</p> <p>
     * <code>auto</code>, <code>AAC-LC</code>, <code>HE-AAC</code>,
     * <code>HE-AACv2</code> </p> <p>If you specify <code>auto</code>, Elastic
     * Transcoder chooses a profile based on the bit rate of the output file.</p>
     */
    inline void SetCodecOptions(const AudioCodecOptions& value) { m_codecOptionsHasBeenSet = true; m_codecOptions = value; }

    /**
     * <p>If you specified <code>AAC</code> for <code>Audio:Codec</code>, this is the
     * <code>AAC</code> compression profile to use. Valid values include:</p> <p>
     * <code>auto</code>, <code>AAC-LC</code>, <code>HE-AAC</code>,
     * <code>HE-AACv2</code> </p> <p>If you specify <code>auto</code>, Elastic
     * Transcoder chooses a profile based on the bit rate of the output file.</p>
     */
    inline void SetCodecOptions(AudioCodecOptions&& value) { m_codecOptionsHasBeenSet = true; m_codecOptions = std::move(value); }

    /**
     * <p>If you specified <code>AAC</code> for <code>Audio:Codec</code>, this is the
     * <code>AAC</code> compression profile to use. Valid values include:</p> <p>
     * <code>auto</code>, <code>AAC-LC</code>, <code>HE-AAC</code>,
     * <code>HE-AACv2</code> </p> <p>If you specify <code>auto</code>, Elastic
     * Transcoder chooses a profile based on the bit rate of the output file.</p>
     */
    inline AudioParameters& WithCodecOptions(const AudioCodecOptions& value) { SetCodecOptions(value); return *this;}

    /**
     * <p>If you specified <code>AAC</code> for <code>Audio:Codec</code>, this is the
     * <code>AAC</code> compression profile to use. Valid values include:</p> <p>
     * <code>auto</code>, <code>AAC-LC</code>, <code>HE-AAC</code>,
     * <code>HE-AACv2</code> </p> <p>If you specify <code>auto</code>, Elastic
     * Transcoder chooses a profile based on the bit rate of the output file.</p>
     */
    inline AudioParameters& WithCodecOptions(AudioCodecOptions&& value) { SetCodecOptions(std::move(value)); return *this;}

  private:

    Aws::String m_codec;
    bool m_codecHasBeenSet;

    Aws::String m_sampleRate;
    bool m_sampleRateHasBeenSet;

    Aws::String m_bitRate;
    bool m_bitRateHasBeenSet;

    Aws::String m_channels;
    bool m_channelsHasBeenSet;

    Aws::String m_audioPackingMode;
    bool m_audioPackingModeHasBeenSet;

    AudioCodecOptions m_codecOptions;
    bool m_codecOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
