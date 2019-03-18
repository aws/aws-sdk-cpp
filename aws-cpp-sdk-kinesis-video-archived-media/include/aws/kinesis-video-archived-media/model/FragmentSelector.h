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
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API FragmentSelector
  {
  public:
    FragmentSelector();
    FragmentSelector(Aws::Utils::Json::JsonView jsonValue);
    FragmentSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline const FragmentSelectorType& GetFragmentSelectorType() const{ return m_fragmentSelectorType; }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline bool FragmentSelectorTypeHasBeenSet() const { return m_fragmentSelectorTypeHasBeenSet; }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline void SetFragmentSelectorType(const FragmentSelectorType& value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = value; }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline void SetFragmentSelectorType(FragmentSelectorType&& value) { m_fragmentSelectorTypeHasBeenSet = true; m_fragmentSelectorType = std::move(value); }

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline FragmentSelector& WithFragmentSelectorType(const FragmentSelectorType& value) { SetFragmentSelectorType(value); return *this;}

    /**
     * <p>The origin of the timestamps to use (Server or Producer).</p>
     */
    inline FragmentSelector& WithFragmentSelectorType(FragmentSelectorType&& value) { SetFragmentSelectorType(std::move(value)); return *this;}


    /**
     * <p>The range of timestamps to return.</p>
     */
    inline const TimestampRange& GetTimestampRange() const{ return m_timestampRange; }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline bool TimestampRangeHasBeenSet() const { return m_timestampRangeHasBeenSet; }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline void SetTimestampRange(const TimestampRange& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = value; }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline void SetTimestampRange(TimestampRange&& value) { m_timestampRangeHasBeenSet = true; m_timestampRange = std::move(value); }

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline FragmentSelector& WithTimestampRange(const TimestampRange& value) { SetTimestampRange(value); return *this;}

    /**
     * <p>The range of timestamps to return.</p>
     */
    inline FragmentSelector& WithTimestampRange(TimestampRange&& value) { SetTimestampRange(std::move(value)); return *this;}

  private:

    FragmentSelectorType m_fragmentSelectorType;
    bool m_fragmentSelectorTypeHasBeenSet;

    TimestampRange m_timestampRange;
    bool m_timestampRangeHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
