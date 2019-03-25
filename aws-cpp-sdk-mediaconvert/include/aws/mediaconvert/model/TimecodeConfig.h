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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/TimecodeSource.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * These settings control how the service handles timecodes throughout the job.
   * These settings don't affect input clipping.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TimecodeConfig">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API TimecodeConfig
  {
  public:
    TimecodeConfig();
    TimecodeConfig(Aws::Utils::Json::JsonView jsonValue);
    TimecodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline const Aws::String& GetAnchor() const{ return m_anchor; }

    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }

    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline void SetAnchor(const Aws::String& value) { m_anchorHasBeenSet = true; m_anchor = value; }

    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline void SetAnchor(Aws::String&& value) { m_anchorHasBeenSet = true; m_anchor = std::move(value); }

    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline void SetAnchor(const char* value) { m_anchorHasBeenSet = true; m_anchor.assign(value); }

    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline TimecodeConfig& WithAnchor(const Aws::String& value) { SetAnchor(value); return *this;}

    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline TimecodeConfig& WithAnchor(Aws::String&& value) { SetAnchor(std::move(value)); return *this;}

    /**
     * If you use an editing platform that relies on an anchor timecode, use Anchor
     * Timecode (Anchor) to specify a timecode that will match the input video frame to
     * the output video frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF). This setting ignores frame rate conversion. System behavior for
     * Anchor Timecode varies depending on your setting for Source (TimecodeSource). *
     * If Source (TimecodeSource) is set to Specified Start (SPECIFIEDSTART), the first
     * input frame is the specified value in Start Timecode (Start). Anchor Timecode
     * (Anchor) and Start Timecode (Start) are used calculate output timecode. * If
     * Source (TimecodeSource) is set to Start at 0 (ZEROBASED)  the  first frame is
     * 00:00:00:00. * If Source (TimecodeSource) is set to Embedded (EMBEDDED), the 
     * first frame is the timecode value on the first input frame of the input.
     */
    inline TimecodeConfig& WithAnchor(const char* value) { SetAnchor(value); return *this;}


    /**
     * Use Source (TimecodeSource) to set how timecodes are handled within this job. To
     * make sure that your video, audio, captions, and markers are synchronized and
     * that time-based features, such as image inserter, work correctly, choose the
     * Timecode source option that matches your assets. All timecodes are in a 24-hour
     * format with frame number (HH:MM:SS:FF). * Embedded (EMBEDDED) - Use the timecode
     * that is in the input video. If no embedded timecode is in the source, the
     * service will use Start at 0 (ZEROBASED) instead. * Start at 0 (ZEROBASED) - Set
     * the timecode of the initial frame to 00:00:00:00. * Specified Start
     * (SPECIFIEDSTART) - Set the timecode of the initial frame to a value other than
     * zero. You use Start timecode (Start) to provide this value.
     */
    inline const TimecodeSource& GetSource() const{ return m_source; }

    /**
     * Use Source (TimecodeSource) to set how timecodes are handled within this job. To
     * make sure that your video, audio, captions, and markers are synchronized and
     * that time-based features, such as image inserter, work correctly, choose the
     * Timecode source option that matches your assets. All timecodes are in a 24-hour
     * format with frame number (HH:MM:SS:FF). * Embedded (EMBEDDED) - Use the timecode
     * that is in the input video. If no embedded timecode is in the source, the
     * service will use Start at 0 (ZEROBASED) instead. * Start at 0 (ZEROBASED) - Set
     * the timecode of the initial frame to 00:00:00:00. * Specified Start
     * (SPECIFIEDSTART) - Set the timecode of the initial frame to a value other than
     * zero. You use Start timecode (Start) to provide this value.
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * Use Source (TimecodeSource) to set how timecodes are handled within this job. To
     * make sure that your video, audio, captions, and markers are synchronized and
     * that time-based features, such as image inserter, work correctly, choose the
     * Timecode source option that matches your assets. All timecodes are in a 24-hour
     * format with frame number (HH:MM:SS:FF). * Embedded (EMBEDDED) - Use the timecode
     * that is in the input video. If no embedded timecode is in the source, the
     * service will use Start at 0 (ZEROBASED) instead. * Start at 0 (ZEROBASED) - Set
     * the timecode of the initial frame to 00:00:00:00. * Specified Start
     * (SPECIFIEDSTART) - Set the timecode of the initial frame to a value other than
     * zero. You use Start timecode (Start) to provide this value.
     */
    inline void SetSource(const TimecodeSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * Use Source (TimecodeSource) to set how timecodes are handled within this job. To
     * make sure that your video, audio, captions, and markers are synchronized and
     * that time-based features, such as image inserter, work correctly, choose the
     * Timecode source option that matches your assets. All timecodes are in a 24-hour
     * format with frame number (HH:MM:SS:FF). * Embedded (EMBEDDED) - Use the timecode
     * that is in the input video. If no embedded timecode is in the source, the
     * service will use Start at 0 (ZEROBASED) instead. * Start at 0 (ZEROBASED) - Set
     * the timecode of the initial frame to 00:00:00:00. * Specified Start
     * (SPECIFIEDSTART) - Set the timecode of the initial frame to a value other than
     * zero. You use Start timecode (Start) to provide this value.
     */
    inline void SetSource(TimecodeSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * Use Source (TimecodeSource) to set how timecodes are handled within this job. To
     * make sure that your video, audio, captions, and markers are synchronized and
     * that time-based features, such as image inserter, work correctly, choose the
     * Timecode source option that matches your assets. All timecodes are in a 24-hour
     * format with frame number (HH:MM:SS:FF). * Embedded (EMBEDDED) - Use the timecode
     * that is in the input video. If no embedded timecode is in the source, the
     * service will use Start at 0 (ZEROBASED) instead. * Start at 0 (ZEROBASED) - Set
     * the timecode of the initial frame to 00:00:00:00. * Specified Start
     * (SPECIFIEDSTART) - Set the timecode of the initial frame to a value other than
     * zero. You use Start timecode (Start) to provide this value.
     */
    inline TimecodeConfig& WithSource(const TimecodeSource& value) { SetSource(value); return *this;}

    /**
     * Use Source (TimecodeSource) to set how timecodes are handled within this job. To
     * make sure that your video, audio, captions, and markers are synchronized and
     * that time-based features, such as image inserter, work correctly, choose the
     * Timecode source option that matches your assets. All timecodes are in a 24-hour
     * format with frame number (HH:MM:SS:FF). * Embedded (EMBEDDED) - Use the timecode
     * that is in the input video. If no embedded timecode is in the source, the
     * service will use Start at 0 (ZEROBASED) instead. * Start at 0 (ZEROBASED) - Set
     * the timecode of the initial frame to 00:00:00:00. * Specified Start
     * (SPECIFIEDSTART) - Set the timecode of the initial frame to a value other than
     * zero. You use Start timecode (Start) to provide this value.
     */
    inline TimecodeConfig& WithSource(TimecodeSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline const Aws::String& GetStart() const{ return m_start; }

    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline void SetStart(const Aws::String& value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline void SetStart(Aws::String&& value) { m_startHasBeenSet = true; m_start = std::move(value); }

    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline void SetStart(const char* value) { m_startHasBeenSet = true; m_start.assign(value); }

    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline TimecodeConfig& WithStart(const Aws::String& value) { SetStart(value); return *this;}

    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline TimecodeConfig& WithStart(Aws::String&& value) { SetStart(std::move(value)); return *this;}

    /**
     * Only use when you set Source (TimecodeSource) to Specified start
     * (SPECIFIEDSTART). Use Start timecode (Start) to specify the timecode for the
     * initial frame. Use 24-hour format with frame number, (HH:MM:SS:FF) or
     * (HH:MM:SS;FF).
     */
    inline TimecodeConfig& WithStart(const char* value) { SetStart(value); return *this;}


    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline const Aws::String& GetTimestampOffset() const{ return m_timestampOffset; }

    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline bool TimestampOffsetHasBeenSet() const { return m_timestampOffsetHasBeenSet; }

    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline void SetTimestampOffset(const Aws::String& value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset = value; }

    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline void SetTimestampOffset(Aws::String&& value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset = std::move(value); }

    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline void SetTimestampOffset(const char* value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset.assign(value); }

    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline TimecodeConfig& WithTimestampOffset(const Aws::String& value) { SetTimestampOffset(value); return *this;}

    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline TimecodeConfig& WithTimestampOffset(Aws::String&& value) { SetTimestampOffset(std::move(value)); return *this;}

    /**
     * Only applies to outputs that support program-date-time stamp. Use Timestamp
     * offset (TimestampOffset) to overwrite the timecode date without affecting the
     * time and frame number. Provide the new date as a string in the format
     * "yyyy-mm-dd".  To use Time stamp offset, you must also enable Insert
     * program-date-time (InsertProgramDateTime) in the output settings. For example,
     * if the date part of your timecodes is 2002-1-25 and you want to change it to one
     * year later, set Timestamp offset (TimestampOffset) to 2003-1-25.
     */
    inline TimecodeConfig& WithTimestampOffset(const char* value) { SetTimestampOffset(value); return *this;}

  private:

    Aws::String m_anchor;
    bool m_anchorHasBeenSet;

    TimecodeSource m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_start;
    bool m_startHasBeenSet;

    Aws::String m_timestampOffset;
    bool m_timestampOffsetHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
