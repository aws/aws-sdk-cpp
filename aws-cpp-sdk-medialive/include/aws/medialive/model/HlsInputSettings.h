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
#include <aws/medialive/MediaLive_EXPORTS.h>

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
namespace MediaLive
{
namespace Model
{

  /**
   * Hls Input Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsInputSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API HlsInputSettings
  {
  public:
    HlsInputSettings();
    HlsInputSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsInputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When specified the HLS stream with the m3u8 BANDWIDTH that most closely matches
     * this value will be chosen, otherwise the highest bandwidth stream in the m3u8
     * will be chosen.  The bitrate is specified in bits per second, as in an HLS
     * manifest.
     */
    inline int GetBandwidth() const{ return m_bandwidth; }

    /**
     * When specified the HLS stream with the m3u8 BANDWIDTH that most closely matches
     * this value will be chosen, otherwise the highest bandwidth stream in the m3u8
     * will be chosen.  The bitrate is specified in bits per second, as in an HLS
     * manifest.
     */
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }

    /**
     * When specified the HLS stream with the m3u8 BANDWIDTH that most closely matches
     * this value will be chosen, otherwise the highest bandwidth stream in the m3u8
     * will be chosen.  The bitrate is specified in bits per second, as in an HLS
     * manifest.
     */
    inline void SetBandwidth(int value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * When specified the HLS stream with the m3u8 BANDWIDTH that most closely matches
     * this value will be chosen, otherwise the highest bandwidth stream in the m3u8
     * will be chosen.  The bitrate is specified in bits per second, as in an HLS
     * manifest.
     */
    inline HlsInputSettings& WithBandwidth(int value) { SetBandwidth(value); return *this;}


    /**
     * When specified, reading of the HLS input will begin this many buffer segments
     * from the end (most recently written segment).  When not specified, the HLS input
     * will begin with the first segment specified in the m3u8.
     */
    inline int GetBufferSegments() const{ return m_bufferSegments; }

    /**
     * When specified, reading of the HLS input will begin this many buffer segments
     * from the end (most recently written segment).  When not specified, the HLS input
     * will begin with the first segment specified in the m3u8.
     */
    inline bool BufferSegmentsHasBeenSet() const { return m_bufferSegmentsHasBeenSet; }

    /**
     * When specified, reading of the HLS input will begin this many buffer segments
     * from the end (most recently written segment).  When not specified, the HLS input
     * will begin with the first segment specified in the m3u8.
     */
    inline void SetBufferSegments(int value) { m_bufferSegmentsHasBeenSet = true; m_bufferSegments = value; }

    /**
     * When specified, reading of the HLS input will begin this many buffer segments
     * from the end (most recently written segment).  When not specified, the HLS input
     * will begin with the first segment specified in the m3u8.
     */
    inline HlsInputSettings& WithBufferSegments(int value) { SetBufferSegments(value); return *this;}


    /**
     * The number of consecutive times that attempts to read a manifest or segment must
     * fail before the input is considered unavailable.
     */
    inline int GetRetries() const{ return m_retries; }

    /**
     * The number of consecutive times that attempts to read a manifest or segment must
     * fail before the input is considered unavailable.
     */
    inline bool RetriesHasBeenSet() const { return m_retriesHasBeenSet; }

    /**
     * The number of consecutive times that attempts to read a manifest or segment must
     * fail before the input is considered unavailable.
     */
    inline void SetRetries(int value) { m_retriesHasBeenSet = true; m_retries = value; }

    /**
     * The number of consecutive times that attempts to read a manifest or segment must
     * fail before the input is considered unavailable.
     */
    inline HlsInputSettings& WithRetries(int value) { SetRetries(value); return *this;}


    /**
     * The number of seconds between retries when an attempt to read a manifest or
     * segment fails.
     */
    inline int GetRetryInterval() const{ return m_retryInterval; }

    /**
     * The number of seconds between retries when an attempt to read a manifest or
     * segment fails.
     */
    inline bool RetryIntervalHasBeenSet() const { return m_retryIntervalHasBeenSet; }

    /**
     * The number of seconds between retries when an attempt to read a manifest or
     * segment fails.
     */
    inline void SetRetryInterval(int value) { m_retryIntervalHasBeenSet = true; m_retryInterval = value; }

    /**
     * The number of seconds between retries when an attempt to read a manifest or
     * segment fails.
     */
    inline HlsInputSettings& WithRetryInterval(int value) { SetRetryInterval(value); return *this;}

  private:

    int m_bandwidth;
    bool m_bandwidthHasBeenSet;

    int m_bufferSegments;
    bool m_bufferSegmentsHasBeenSet;

    int m_retries;
    bool m_retriesHasBeenSet;

    int m_retryInterval;
    bool m_retryIntervalHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
