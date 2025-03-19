/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/model/FragmentSelectorType.h>
#include <aws/kinesis-video-archived-media/model/TimestampRange.h>
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
   * fragments.</p> <p>Only fragments with a start timestamp greater than or equal to
   * the given start time and less than or equal to the end time are returned. For
   * example, if a stream contains fragments with the following start timestamps:
   * </p> <ul> <li> <p>00:00:00</p> </li> <li> <p>00:00:02</p> </li> <li>
   * <p>00:00:04</p> </li> <li> <p>00:00:06</p> </li> </ul> <p> A fragment selector
   * range with a start time of 00:00:01 and end time of 00:00:04 would return the
   * fragments with start times of 00:00:02 and 00:00:04. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/FragmentSelector">AWS
   * API Reference</a></p>
   */
  class FragmentSelector
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API FragmentSelector() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API FragmentSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API FragmentSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline FragmentSelectorType GetFragmentSelectorType() const { return m_fragmentSelectorType; }
    inline bool FragmentSelectorTypeHasBeenSet() const { return m_fragmentSelectorTypeHasBeenSet; }
    inline void SetFragmentSelectorType(FragmentSelectorType value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = value; }
    inline FragmentSelector& WithFragmentSelectorType(FragmentSelectorType value) { SetFragmentSelectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of timestamps to return.</p>
     */
    inline const TimestampRange& GetTimestampRange() const { return m_timestampRange; }
    inline bool TimestampRangeHasBeenSet() const { return m_timestampRangeHasBeenSet; }
    template<typename TimestampRangeT = TimestampRange>
    void SetTimestampRange(TimestampRangeT&& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = std::forward<TimestampRangeT>(value); }
    template<typename TimestampRangeT = TimestampRange>
    FragmentSelector& WithTimestampRange(TimestampRangeT&& value) { SetTimestampRange(std::forward<TimestampRangeT>(value)); return *this;}
    ///@}
  private:

    FragmentSelectorType m_fragmentSelectorType{FragmentSelectorType::NOT_SET};
    bool m_fragmentSelectorTypeHasBeenSet = false;

    TimestampRange m_timestampRange;
    bool m_timestampRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
