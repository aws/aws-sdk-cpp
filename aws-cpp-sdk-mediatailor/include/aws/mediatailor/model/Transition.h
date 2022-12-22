/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/RelativePosition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Program transition configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Transition">AWS
   * API Reference</a></p>
   */
  class Transition
  {
  public:
    AWS_MEDIATAILOR_API Transition();
    AWS_MEDIATAILOR_API Transition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Transition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The duration of the live program in seconds.</p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }

    /**
     * <p>The duration of the live program in seconds.</p>
     */
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }

    /**
     * <p>The duration of the live program in seconds.</p>
     */
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }

    /**
     * <p>The duration of the live program in seconds.</p>
     */
    inline Transition& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}


    /**
     * <p>The position where this program will be inserted relative to the
     * <code>RelativePosition</code>.</p>
     */
    inline const RelativePosition& GetRelativePosition() const{ return m_relativePosition; }

    /**
     * <p>The position where this program will be inserted relative to the
     * <code>RelativePosition</code>.</p>
     */
    inline bool RelativePositionHasBeenSet() const { return m_relativePositionHasBeenSet; }

    /**
     * <p>The position where this program will be inserted relative to the
     * <code>RelativePosition</code>.</p>
     */
    inline void SetRelativePosition(const RelativePosition& value) { m_relativePositionHasBeenSet = true; m_relativePosition = value; }

    /**
     * <p>The position where this program will be inserted relative to the
     * <code>RelativePosition</code>.</p>
     */
    inline void SetRelativePosition(RelativePosition&& value) { m_relativePositionHasBeenSet = true; m_relativePosition = std::move(value); }

    /**
     * <p>The position where this program will be inserted relative to the
     * <code>RelativePosition</code>.</p>
     */
    inline Transition& WithRelativePosition(const RelativePosition& value) { SetRelativePosition(value); return *this;}

    /**
     * <p>The position where this program will be inserted relative to the
     * <code>RelativePosition</code>.</p>
     */
    inline Transition& WithRelativePosition(RelativePosition&& value) { SetRelativePosition(std::move(value)); return *this;}


    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline const Aws::String& GetRelativeProgram() const{ return m_relativeProgram; }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline bool RelativeProgramHasBeenSet() const { return m_relativeProgramHasBeenSet; }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline void SetRelativeProgram(const Aws::String& value) { m_relativeProgramHasBeenSet = true; m_relativeProgram = value; }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline void SetRelativeProgram(Aws::String&& value) { m_relativeProgramHasBeenSet = true; m_relativeProgram = std::move(value); }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline void SetRelativeProgram(const char* value) { m_relativeProgramHasBeenSet = true; m_relativeProgram.assign(value); }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline Transition& WithRelativeProgram(const Aws::String& value) { SetRelativeProgram(value); return *this;}

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline Transition& WithRelativeProgram(Aws::String&& value) { SetRelativeProgram(std::move(value)); return *this;}

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline Transition& WithRelativeProgram(const char* value) { SetRelativeProgram(value); return *this;}


    /**
     * <p>The date and time that the program is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline long long GetScheduledStartTimeMillis() const{ return m_scheduledStartTimeMillis; }

    /**
     * <p>The date and time that the program is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline bool ScheduledStartTimeMillisHasBeenSet() const { return m_scheduledStartTimeMillisHasBeenSet; }

    /**
     * <p>The date and time that the program is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline void SetScheduledStartTimeMillis(long long value) { m_scheduledStartTimeMillisHasBeenSet = true; m_scheduledStartTimeMillis = value; }

    /**
     * <p>The date and time that the program is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline Transition& WithScheduledStartTimeMillis(long long value) { SetScheduledStartTimeMillis(value); return *this;}


    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline Transition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline Transition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline Transition& WithType(const char* value) { SetType(value); return *this;}

  private:

    long long m_durationMillis;
    bool m_durationMillisHasBeenSet = false;

    RelativePosition m_relativePosition;
    bool m_relativePositionHasBeenSet = false;

    Aws::String m_relativeProgram;
    bool m_relativeProgramHasBeenSet = false;

    long long m_scheduledStartTimeMillis;
    bool m_scheduledStartTimeMillisHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
