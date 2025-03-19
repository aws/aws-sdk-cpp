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
   * <p>The start and end of the timestamp range for the requested media.</p> <p>This
   * value should not be present if <code>PlaybackType</code> is
   * <code>LIVE</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/HLSTimestampRange">AWS
   * API Reference</a></p>
   */
  class HLSTimestampRange
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API HLSTimestampRange() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API HLSTimestampRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API HLSTimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start of the timestamp range for the requested media.</p> <p>If the
     * <code>HLSTimestampRange</code> value is specified, the
     * <code>StartTimestamp</code> value is required. </p> <p>Only fragments that start
     * exactly at or after <code>StartTimestamp</code> are included in the session.
     * Fragments that start before <code>StartTimestamp</code> and continue past it
     * aren't included in the session. If <code>FragmentSelectorType</code> is
     * <code>SERVER_TIMESTAMP</code>, the <code>StartTimestamp</code> must be later
     * than the stream head. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    HLSTimestampRange& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the timestamp range for the requested media. This value must be
     * within 24 hours of the specified <code>StartTimestamp</code>, and it must be
     * later than the <code>StartTimestamp</code> value.</p> <p>If
     * <code>FragmentSelectorType</code> for the request is
     * <code>SERVER_TIMESTAMP</code>, this value must be in the past.</p> <p>The
     * <code>EndTimestamp</code> value is required for <code>ON_DEMAND</code> mode, but
     * optional for <code>LIVE_REPLAY</code> mode. If the <code>EndTimestamp</code> is
     * not set for <code>LIVE_REPLAY</code> mode then the session will continue to
     * include newly ingested fragments until the session expires.</p>  <p>This
     * value is inclusive. The <code>EndTimestamp</code> is compared to the (starting)
     * timestamp of the fragment. Fragments that start before the
     * <code>EndTimestamp</code> value and continue past it are included in the
     * session.</p> 
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    HLSTimestampRange& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp{};
    bool m_endTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
