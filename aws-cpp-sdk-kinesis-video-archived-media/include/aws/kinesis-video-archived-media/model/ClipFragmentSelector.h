/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/model/ClipFragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/ClipTimestampRange.h>
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
   * <p>Describes the timestamp range and timestamp origin of a range of
   * fragments.</p> <p>Fragments that have duplicate producer timestamps are
   * deduplicated. This means that if producers are producing a stream of fragments
   * with producer timestamps that are approximately equal to the true clock time,
   * the clip will contain all of the fragments within the requested timestamp range.
   * If some fragments are ingested within the same time range and very different
   * points in time, only the oldest ingested collection of fragments are
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ClipFragmentSelector">AWS
   * API Reference</a></p>
   */
  class ClipFragmentSelector
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ClipFragmentSelector();
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ClipFragmentSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ClipFragmentSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline const ClipFragmentSelectorType& GetFragmentSelectorType() const{ return m_fragmentSelectorType; }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline bool FragmentSelectorTypeHasBeenSet() const { return m_fragmentSelectorTypeHasBeenSet; }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline void SetFragmentSelectorType(const ClipFragmentSelectorType& value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = value; }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline void SetFragmentSelectorType(ClipFragmentSelectorType&& value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = std::move(value); }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline ClipFragmentSelector& WithFragmentSelectorType(const ClipFragmentSelectorType& value) { SetFragmentSelectorType(value); return *this;}

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline ClipFragmentSelector& WithFragmentSelectorType(ClipFragmentSelectorType&& value) { SetFragmentSelectorType(std::move(value)); return *this;}


    /**
     * <p>The range of timestamps to return.</p>
     */
    inline const ClipTimestampRange& GetTimestampRange() const{ return m_timestampRange; }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline bool TimestampRangeHasBeenSet() const { return m_timestampRangeHasBeenSet; }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline void SetTimestampRange(const ClipTimestampRange& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = value; }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline void SetTimestampRange(ClipTimestampRange&& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = std::move(value); }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline ClipFragmentSelector& WithTimestampRange(const ClipTimestampRange& value) { SetTimestampRange(value); return *this;}

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline ClipFragmentSelector& WithTimestampRange(ClipTimestampRange&& value) { SetTimestampRange(std::move(value)); return *this;}

  private:

    ClipFragmentSelectorType m_fragmentSelectorType;
    bool m_fragmentSelectorTypeHasBeenSet = false;

    ClipTimestampRange m_timestampRange;
    bool m_timestampRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
