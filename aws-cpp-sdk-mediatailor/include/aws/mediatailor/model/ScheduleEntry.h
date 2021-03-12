/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The properties for a schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ScheduleEntry">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API ScheduleEntry
  {
  public:
    ScheduleEntry();
    ScheduleEntry(Aws::Utils::Json::JsonView jsonValue);
    ScheduleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The approximate duration of this program, in seconds.</p>
     */
    inline long long GetApproximateDurationSeconds() const{ return m_approximateDurationSeconds; }

    /**
     * <p>The approximate duration of this program, in seconds.</p>
     */
    inline bool ApproximateDurationSecondsHasBeenSet() const { return m_approximateDurationSecondsHasBeenSet; }

    /**
     * <p>The approximate duration of this program, in seconds.</p>
     */
    inline void SetApproximateDurationSeconds(long long value) { m_approximateDurationSecondsHasBeenSet = true; m_approximateDurationSeconds = value; }

    /**
     * <p>The approximate duration of this program, in seconds.</p>
     */
    inline ScheduleEntry& WithApproximateDurationSeconds(long long value) { SetApproximateDurationSeconds(value); return *this;}


    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateStartTime() const{ return m_approximateStartTime; }

    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline bool ApproximateStartTimeHasBeenSet() const { return m_approximateStartTimeHasBeenSet; }

    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline void SetApproximateStartTime(const Aws::Utils::DateTime& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = value; }

    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline void SetApproximateStartTime(Aws::Utils::DateTime&& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = std::move(value); }

    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline ScheduleEntry& WithApproximateStartTime(const Aws::Utils::DateTime& value) { SetApproximateStartTime(value); return *this;}

    /**
     * <p>The approximate time that the program will start playing.</p>
     */
    inline ScheduleEntry& WithApproximateStartTime(Aws::Utils::DateTime&& value) { SetApproximateStartTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of the program.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the program.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the program.</p>
     */
    inline ScheduleEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the program.</p>
     */
    inline ScheduleEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the program.</p>
     */
    inline ScheduleEntry& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline ScheduleEntry& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline ScheduleEntry& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel that uses this schedule.</p>
     */
    inline ScheduleEntry& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The name of the program.</p>
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }

    /**
     * <p>The name of the program.</p>
     */
    inline bool ProgramNameHasBeenSet() const { return m_programNameHasBeenSet; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const Aws::String& value) { m_programNameHasBeenSet = true; m_programName = value; }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(Aws::String&& value) { m_programNameHasBeenSet = true; m_programName = std::move(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline void SetProgramName(const char* value) { m_programNameHasBeenSet = true; m_programName.assign(value); }

    /**
     * <p>The name of the program.</p>
     */
    inline ScheduleEntry& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline ScheduleEntry& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}

    /**
     * <p>The name of the program.</p>
     */
    inline ScheduleEntry& WithProgramName(const char* value) { SetProgramName(value); return *this;}


    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline ScheduleEntry& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline ScheduleEntry& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline ScheduleEntry& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The name of the VOD source.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }

    /**
     * <p>The name of the VOD source.</p>
     */
    inline ScheduleEntry& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name of the VOD source.</p>
     */
    inline ScheduleEntry& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VOD source.</p>
     */
    inline ScheduleEntry& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    long long m_approximateDurationSeconds;
    bool m_approximateDurationSecondsHasBeenSet;

    Aws::Utils::DateTime m_approximateStartTime;
    bool m_approximateStartTimeHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    Aws::String m_programName;
    bool m_programNameHasBeenSet;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
