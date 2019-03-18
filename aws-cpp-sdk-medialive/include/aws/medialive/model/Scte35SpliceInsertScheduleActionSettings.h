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
   * Settings for a SCTE-35 splice_insert message.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35SpliceInsertScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte35SpliceInsertScheduleActionSettings
  {
  public:
    Scte35SpliceInsertScheduleActionSettings();
    Scte35SpliceInsertScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    Scte35SpliceInsertScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional, the duration for the splice_insert, in 90 KHz ticks. To convert
     * seconds to ticks, multiple the seconds by 90,000. If you enter a duration, there
     * is an expectation that the downstream system can read the duration and cue in at
     * that time. If you do not enter a duration, the splice_insert will continue
     * indefinitely and there is an expectation that you will enter a return_to_network
     * to end the splice_insert at the appropriate time.
     */
    inline long long GetDuration() const{ return m_duration; }

    /**
     * Optional, the duration for the splice_insert, in 90 KHz ticks. To convert
     * seconds to ticks, multiple the seconds by 90,000. If you enter a duration, there
     * is an expectation that the downstream system can read the duration and cue in at
     * that time. If you do not enter a duration, the splice_insert will continue
     * indefinitely and there is an expectation that you will enter a return_to_network
     * to end the splice_insert at the appropriate time.
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * Optional, the duration for the splice_insert, in 90 KHz ticks. To convert
     * seconds to ticks, multiple the seconds by 90,000. If you enter a duration, there
     * is an expectation that the downstream system can read the duration and cue in at
     * that time. If you do not enter a duration, the splice_insert will continue
     * indefinitely and there is an expectation that you will enter a return_to_network
     * to end the splice_insert at the appropriate time.
     */
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * Optional, the duration for the splice_insert, in 90 KHz ticks. To convert
     * seconds to ticks, multiple the seconds by 90,000. If you enter a duration, there
     * is an expectation that the downstream system can read the duration and cue in at
     * that time. If you do not enter a duration, the splice_insert will continue
     * indefinitely and there is an expectation that you will enter a return_to_network
     * to end the splice_insert at the appropriate time.
     */
    inline Scte35SpliceInsertScheduleActionSettings& WithDuration(long long value) { SetDuration(value); return *this;}


    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline long long GetSpliceEventId() const{ return m_spliceEventId; }

    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline bool SpliceEventIdHasBeenSet() const { return m_spliceEventIdHasBeenSet; }

    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline void SetSpliceEventId(long long value) { m_spliceEventIdHasBeenSet = true; m_spliceEventId = value; }

    /**
     * The splice_event_id for the SCTE-35 splice_insert, as defined in SCTE-35.
     */
    inline Scte35SpliceInsertScheduleActionSettings& WithSpliceEventId(long long value) { SetSpliceEventId(value); return *this;}

  private:

    long long m_duration;
    bool m_durationHasBeenSet;

    long long m_spliceEventId;
    bool m_spliceEventIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
