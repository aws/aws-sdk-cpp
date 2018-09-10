﻿/*
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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/model/HLSFragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/HLSTimestampRange.h>
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
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   * <p>Contains the range of time stamps for the requested media, and the source of
   * the time stamps.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/HLSFragmentSelector">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API HLSFragmentSelector
  {
  public:
    HLSFragmentSelector();
    HLSFragmentSelector(Aws::Utils::Json::JsonView jsonValue);
    HLSFragmentSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source of the time stamps for the requested media.</p> <p>When
     * <code>FragmentSelectorType</code> is set to <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>ON_DEMAND</code>,
     * the first fragment ingested with a producer time stamp within the specified
     * <a>FragmentSelector$TimestampRange</a> is included in the media playlist. In
     * addition, the fragments with producer time stamps within the
     * <code>TimestampRange</code> ingested immediately following the first fragment
     * (up to the <a>GetHLSStreamingSessionURLInput$MaxMediaPlaylistFragmentResults</a>
     * value) are included. </p> <p>Fragments that have duplicate producer time stamps
     * are deduplicated. This means that if producers are producing a stream of
     * fragments with producer time stamps that are approximately equal to the true
     * clock time, the HLS media playlists will contain all of the fragments within the
     * requested time stamp range. If some fragments are ingested within the same time
     * range and very different points in time, only the oldest ingested collection of
     * fragments are returned.</p> <p>When <code>FragmentSelectorType</code> is set to
     * <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>LIVE</code>, the
     * producer time stamps are used in the MP4 fragments and for deduplication. But
     * the most recently ingested fragments based on server time stamps are included in
     * the HLS media playlist. This means that even if fragments ingested in the past
     * have producer time stamps with values now, they are not included in the HLS
     * media playlist.</p> <p>The default is <code>SERVER_TIMESTAMP</code>.</p>
     */
    inline const HLSFragmentSelectorType& GetFragmentSelectorType() const{ return m_fragmentSelectorType; }

    /**
     * <p>The source of the time stamps for the requested media.</p> <p>When
     * <code>FragmentSelectorType</code> is set to <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>ON_DEMAND</code>,
     * the first fragment ingested with a producer time stamp within the specified
     * <a>FragmentSelector$TimestampRange</a> is included in the media playlist. In
     * addition, the fragments with producer time stamps within the
     * <code>TimestampRange</code> ingested immediately following the first fragment
     * (up to the <a>GetHLSStreamingSessionURLInput$MaxMediaPlaylistFragmentResults</a>
     * value) are included. </p> <p>Fragments that have duplicate producer time stamps
     * are deduplicated. This means that if producers are producing a stream of
     * fragments with producer time stamps that are approximately equal to the true
     * clock time, the HLS media playlists will contain all of the fragments within the
     * requested time stamp range. If some fragments are ingested within the same time
     * range and very different points in time, only the oldest ingested collection of
     * fragments are returned.</p> <p>When <code>FragmentSelectorType</code> is set to
     * <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>LIVE</code>, the
     * producer time stamps are used in the MP4 fragments and for deduplication. But
     * the most recently ingested fragments based on server time stamps are included in
     * the HLS media playlist. This means that even if fragments ingested in the past
     * have producer time stamps with values now, they are not included in the HLS
     * media playlist.</p> <p>The default is <code>SERVER_TIMESTAMP</code>.</p>
     */
    inline void SetFragmentSelectorType(const HLSFragmentSelectorType& value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = value; }

    /**
     * <p>The source of the time stamps for the requested media.</p> <p>When
     * <code>FragmentSelectorType</code> is set to <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>ON_DEMAND</code>,
     * the first fragment ingested with a producer time stamp within the specified
     * <a>FragmentSelector$TimestampRange</a> is included in the media playlist. In
     * addition, the fragments with producer time stamps within the
     * <code>TimestampRange</code> ingested immediately following the first fragment
     * (up to the <a>GetHLSStreamingSessionURLInput$MaxMediaPlaylistFragmentResults</a>
     * value) are included. </p> <p>Fragments that have duplicate producer time stamps
     * are deduplicated. This means that if producers are producing a stream of
     * fragments with producer time stamps that are approximately equal to the true
     * clock time, the HLS media playlists will contain all of the fragments within the
     * requested time stamp range. If some fragments are ingested within the same time
     * range and very different points in time, only the oldest ingested collection of
     * fragments are returned.</p> <p>When <code>FragmentSelectorType</code> is set to
     * <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>LIVE</code>, the
     * producer time stamps are used in the MP4 fragments and for deduplication. But
     * the most recently ingested fragments based on server time stamps are included in
     * the HLS media playlist. This means that even if fragments ingested in the past
     * have producer time stamps with values now, they are not included in the HLS
     * media playlist.</p> <p>The default is <code>SERVER_TIMESTAMP</code>.</p>
     */
    inline void SetFragmentSelectorType(HLSFragmentSelectorType&& value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = std::move(value); }

    /**
     * <p>The source of the time stamps for the requested media.</p> <p>When
     * <code>FragmentSelectorType</code> is set to <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>ON_DEMAND</code>,
     * the first fragment ingested with a producer time stamp within the specified
     * <a>FragmentSelector$TimestampRange</a> is included in the media playlist. In
     * addition, the fragments with producer time stamps within the
     * <code>TimestampRange</code> ingested immediately following the first fragment
     * (up to the <a>GetHLSStreamingSessionURLInput$MaxMediaPlaylistFragmentResults</a>
     * value) are included. </p> <p>Fragments that have duplicate producer time stamps
     * are deduplicated. This means that if producers are producing a stream of
     * fragments with producer time stamps that are approximately equal to the true
     * clock time, the HLS media playlists will contain all of the fragments within the
     * requested time stamp range. If some fragments are ingested within the same time
     * range and very different points in time, only the oldest ingested collection of
     * fragments are returned.</p> <p>When <code>FragmentSelectorType</code> is set to
     * <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>LIVE</code>, the
     * producer time stamps are used in the MP4 fragments and for deduplication. But
     * the most recently ingested fragments based on server time stamps are included in
     * the HLS media playlist. This means that even if fragments ingested in the past
     * have producer time stamps with values now, they are not included in the HLS
     * media playlist.</p> <p>The default is <code>SERVER_TIMESTAMP</code>.</p>
     */
    inline HLSFragmentSelector& WithFragmentSelectorType(const HLSFragmentSelectorType& value) { SetFragmentSelectorType(value); return *this;}

    /**
     * <p>The source of the time stamps for the requested media.</p> <p>When
     * <code>FragmentSelectorType</code> is set to <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>ON_DEMAND</code>,
     * the first fragment ingested with a producer time stamp within the specified
     * <a>FragmentSelector$TimestampRange</a> is included in the media playlist. In
     * addition, the fragments with producer time stamps within the
     * <code>TimestampRange</code> ingested immediately following the first fragment
     * (up to the <a>GetHLSStreamingSessionURLInput$MaxMediaPlaylistFragmentResults</a>
     * value) are included. </p> <p>Fragments that have duplicate producer time stamps
     * are deduplicated. This means that if producers are producing a stream of
     * fragments with producer time stamps that are approximately equal to the true
     * clock time, the HLS media playlists will contain all of the fragments within the
     * requested time stamp range. If some fragments are ingested within the same time
     * range and very different points in time, only the oldest ingested collection of
     * fragments are returned.</p> <p>When <code>FragmentSelectorType</code> is set to
     * <code>PRODUCER_TIMESTAMP</code> and
     * <a>GetHLSStreamingSessionURLInput$PlaybackMode</a> is <code>LIVE</code>, the
     * producer time stamps are used in the MP4 fragments and for deduplication. But
     * the most recently ingested fragments based on server time stamps are included in
     * the HLS media playlist. This means that even if fragments ingested in the past
     * have producer time stamps with values now, they are not included in the HLS
     * media playlist.</p> <p>The default is <code>SERVER_TIMESTAMP</code>.</p>
     */
    inline HLSFragmentSelector& WithFragmentSelectorType(HLSFragmentSelectorType&& value) { SetFragmentSelectorType(std::move(value)); return *this;}


    /**
     * <p>The start and end of the time stamp range for the requested media.</p>
     * <p>This value should not be present if <code>PlaybackType</code> is
     * <code>LIVE</code>.</p>
     */
    inline const HLSTimestampRange& GetTimestampRange() const{ return m_timestampRange; }

    /**
     * <p>The start and end of the time stamp range for the requested media.</p>
     * <p>This value should not be present if <code>PlaybackType</code> is
     * <code>LIVE</code>.</p>
     */
    inline void SetTimestampRange(const HLSTimestampRange& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = value; }

    /**
     * <p>The start and end of the time stamp range for the requested media.</p>
     * <p>This value should not be present if <code>PlaybackType</code> is
     * <code>LIVE</code>.</p>
     */
    inline void SetTimestampRange(HLSTimestampRange&& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = std::move(value); }

    /**
     * <p>The start and end of the time stamp range for the requested media.</p>
     * <p>This value should not be present if <code>PlaybackType</code> is
     * <code>LIVE</code>.</p>
     */
    inline HLSFragmentSelector& WithTimestampRange(const HLSTimestampRange& value) { SetTimestampRange(value); return *this;}

    /**
     * <p>The start and end of the time stamp range for the requested media.</p>
     * <p>This value should not be present if <code>PlaybackType</code> is
     * <code>LIVE</code>.</p>
     */
    inline HLSFragmentSelector& WithTimestampRange(HLSTimestampRange&& value) { SetTimestampRange(std::move(value)); return *this;}

  private:

    HLSFragmentSelectorType m_fragmentSelectorType;
    bool m_fragmentSelectorTypeHasBeenSet;

    HLSTimestampRange m_timestampRange;
    bool m_timestampRangeHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
