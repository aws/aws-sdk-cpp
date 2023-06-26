/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The range of timestamps for which to return fragments.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ClipTimestampRange">AWS
   * API Reference</a></p>
   */
  class ClipTimestampRange
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ClipTimestampRange();
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ClipTimestampRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API ClipTimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The starting timestamp in the range of timestamps for which to return
     * fragments. </p> <p>Only fragments that start exactly at or after
     * <code>StartTimestamp</code> are included in the session. Fragments that start
     * before <code>StartTimestamp</code> and continue past it aren't included in the
     * session. If <code>FragmentSelectorType</code> is <code>SERVER_TIMESTAMP</code>,
     * the <code>StartTimestamp</code> must be later than the stream head. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>The starting timestamp in the range of timestamps for which to return
     * fragments. </p> <p>Only fragments that start exactly at or after
     * <code>StartTimestamp</code> are included in the session. Fragments that start
     * before <code>StartTimestamp</code> and continue past it aren't included in the
     * session. If <code>FragmentSelectorType</code> is <code>SERVER_TIMESTAMP</code>,
     * the <code>StartTimestamp</code> must be later than the stream head. </p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>The starting timestamp in the range of timestamps for which to return
     * fragments. </p> <p>Only fragments that start exactly at or after
     * <code>StartTimestamp</code> are included in the session. Fragments that start
     * before <code>StartTimestamp</code> and continue past it aren't included in the
     * session. If <code>FragmentSelectorType</code> is <code>SERVER_TIMESTAMP</code>,
     * the <code>StartTimestamp</code> must be later than the stream head. </p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The starting timestamp in the range of timestamps for which to return
     * fragments. </p> <p>Only fragments that start exactly at or after
     * <code>StartTimestamp</code> are included in the session. Fragments that start
     * before <code>StartTimestamp</code> and continue past it aren't included in the
     * session. If <code>FragmentSelectorType</code> is <code>SERVER_TIMESTAMP</code>,
     * the <code>StartTimestamp</code> must be later than the stream head. </p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>The starting timestamp in the range of timestamps for which to return
     * fragments. </p> <p>Only fragments that start exactly at or after
     * <code>StartTimestamp</code> are included in the session. Fragments that start
     * before <code>StartTimestamp</code> and continue past it aren't included in the
     * session. If <code>FragmentSelectorType</code> is <code>SERVER_TIMESTAMP</code>,
     * the <code>StartTimestamp</code> must be later than the stream head. </p>
     */
    inline ClipTimestampRange& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>The starting timestamp in the range of timestamps for which to return
     * fragments. </p> <p>Only fragments that start exactly at or after
     * <code>StartTimestamp</code> are included in the session. Fragments that start
     * before <code>StartTimestamp</code> and continue past it aren't included in the
     * session. If <code>FragmentSelectorType</code> is <code>SERVER_TIMESTAMP</code>,
     * the <code>StartTimestamp</code> must be later than the stream head. </p>
     */
    inline ClipTimestampRange& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The end of the timestamp range for the requested media.</p> <p>This value
     * must be within 24 hours of the specified <code>StartTimestamp</code>, and it
     * must be later than the <code>StartTimestamp</code> value. If
     * <code>FragmentSelectorType</code> for the request is
     * <code>SERVER_TIMESTAMP</code>, this value must be in the past. </p> <p>This
     * value is inclusive. The <code>EndTimestamp</code> is compared to the (starting)
     * timestamp of the fragment. Fragments that start before the
     * <code>EndTimestamp</code> value and continue past it are included in the
     * session. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }

    /**
     * <p>The end of the timestamp range for the requested media.</p> <p>This value
     * must be within 24 hours of the specified <code>StartTimestamp</code>, and it
     * must be later than the <code>StartTimestamp</code> value. If
     * <code>FragmentSelectorType</code> for the request is
     * <code>SERVER_TIMESTAMP</code>, this value must be in the past. </p> <p>This
     * value is inclusive. The <code>EndTimestamp</code> is compared to the (starting)
     * timestamp of the fragment. Fragments that start before the
     * <code>EndTimestamp</code> value and continue past it are included in the
     * session. </p>
     */
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }

    /**
     * <p>The end of the timestamp range for the requested media.</p> <p>This value
     * must be within 24 hours of the specified <code>StartTimestamp</code>, and it
     * must be later than the <code>StartTimestamp</code> value. If
     * <code>FragmentSelectorType</code> for the request is
     * <code>SERVER_TIMESTAMP</code>, this value must be in the past. </p> <p>This
     * value is inclusive. The <code>EndTimestamp</code> is compared to the (starting)
     * timestamp of the fragment. Fragments that start before the
     * <code>EndTimestamp</code> value and continue past it are included in the
     * session. </p>
     */
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }

    /**
     * <p>The end of the timestamp range for the requested media.</p> <p>This value
     * must be within 24 hours of the specified <code>StartTimestamp</code>, and it
     * must be later than the <code>StartTimestamp</code> value. If
     * <code>FragmentSelectorType</code> for the request is
     * <code>SERVER_TIMESTAMP</code>, this value must be in the past. </p> <p>This
     * value is inclusive. The <code>EndTimestamp</code> is compared to the (starting)
     * timestamp of the fragment. Fragments that start before the
     * <code>EndTimestamp</code> value and continue past it are included in the
     * session. </p>
     */
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }

    /**
     * <p>The end of the timestamp range for the requested media.</p> <p>This value
     * must be within 24 hours of the specified <code>StartTimestamp</code>, and it
     * must be later than the <code>StartTimestamp</code> value. If
     * <code>FragmentSelectorType</code> for the request is
     * <code>SERVER_TIMESTAMP</code>, this value must be in the past. </p> <p>This
     * value is inclusive. The <code>EndTimestamp</code> is compared to the (starting)
     * timestamp of the fragment. Fragments that start before the
     * <code>EndTimestamp</code> value and continue past it are included in the
     * session. </p>
     */
    inline ClipTimestampRange& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}

    /**
     * <p>The end of the timestamp range for the requested media.</p> <p>This value
     * must be within 24 hours of the specified <code>StartTimestamp</code>, and it
     * must be later than the <code>StartTimestamp</code> value. If
     * <code>FragmentSelectorType</code> for the request is
     * <code>SERVER_TIMESTAMP</code>, this value must be in the past. </p> <p>This
     * value is inclusive. The <code>EndTimestamp</code> is compared to the (starting)
     * timestamp of the fragment. Fragments that start before the
     * <code>EndTimestamp</code> value and continue past it are included in the
     * session. </p>
     */
    inline ClipTimestampRange& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp;
    bool m_endTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
