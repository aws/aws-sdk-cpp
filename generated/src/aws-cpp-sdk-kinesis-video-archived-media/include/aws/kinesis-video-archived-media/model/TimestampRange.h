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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/TimestampRange">AWS
   * API Reference</a></p>
   */
  class TimestampRange
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API TimestampRange() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API TimestampRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API TimestampRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting timestamp in the range of timestamps for which to return
     * fragments.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    TimestampRange& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending timestamp in the range of timestamps for which to return
     * fragments.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    TimestampRange& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
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
