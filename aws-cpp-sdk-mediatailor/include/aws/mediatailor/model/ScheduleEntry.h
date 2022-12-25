/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/ScheduleEntryType.h>
#include <aws/mediatailor/model/ScheduleAdBreak.h>
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
  class ScheduleEntry
  {
  public:
    AWS_MEDIATAILOR_API ScheduleEntry();
    AWS_MEDIATAILOR_API ScheduleEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ScheduleEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The name of the live source used for the program.</p>
     */
    inline const Aws::String& GetLiveSourceName() const{ return m_liveSourceName; }

    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline bool LiveSourceNameHasBeenSet() const { return m_liveSourceNameHasBeenSet; }

    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline void SetLiveSourceName(const Aws::String& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = value; }

    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline void SetLiveSourceName(Aws::String&& value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName = std::move(value); }

    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline void SetLiveSourceName(const char* value) { m_liveSourceNameHasBeenSet = true; m_liveSourceName.assign(value); }

    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline ScheduleEntry& WithLiveSourceName(const Aws::String& value) { SetLiveSourceName(value); return *this;}

    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline ScheduleEntry& WithLiveSourceName(Aws::String&& value) { SetLiveSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the live source used for the program.</p>
     */
    inline ScheduleEntry& WithLiveSourceName(const char* value) { SetLiveSourceName(value); return *this;}


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
     * <p>The schedule's ad break properties.</p>
     */
    inline const Aws::Vector<ScheduleAdBreak>& GetScheduleAdBreaks() const{ return m_scheduleAdBreaks; }

    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline bool ScheduleAdBreaksHasBeenSet() const { return m_scheduleAdBreaksHasBeenSet; }

    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline void SetScheduleAdBreaks(const Aws::Vector<ScheduleAdBreak>& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks = value; }

    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline void SetScheduleAdBreaks(Aws::Vector<ScheduleAdBreak>&& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks = std::move(value); }

    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline ScheduleEntry& WithScheduleAdBreaks(const Aws::Vector<ScheduleAdBreak>& value) { SetScheduleAdBreaks(value); return *this;}

    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline ScheduleEntry& WithScheduleAdBreaks(Aws::Vector<ScheduleAdBreak>&& value) { SetScheduleAdBreaks(std::move(value)); return *this;}

    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline ScheduleEntry& AddScheduleAdBreaks(const ScheduleAdBreak& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks.push_back(value); return *this; }

    /**
     * <p>The schedule's ad break properties.</p>
     */
    inline ScheduleEntry& AddScheduleAdBreaks(ScheduleAdBreak&& value) { m_scheduleAdBreaksHasBeenSet = true; m_scheduleAdBreaks.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of schedule entry.</p>
     */
    inline const ScheduleEntryType& GetScheduleEntryType() const{ return m_scheduleEntryType; }

    /**
     * <p>The type of schedule entry.</p>
     */
    inline bool ScheduleEntryTypeHasBeenSet() const { return m_scheduleEntryTypeHasBeenSet; }

    /**
     * <p>The type of schedule entry.</p>
     */
    inline void SetScheduleEntryType(const ScheduleEntryType& value) { m_scheduleEntryTypeHasBeenSet = true; m_scheduleEntryType = value; }

    /**
     * <p>The type of schedule entry.</p>
     */
    inline void SetScheduleEntryType(ScheduleEntryType&& value) { m_scheduleEntryTypeHasBeenSet = true; m_scheduleEntryType = std::move(value); }

    /**
     * <p>The type of schedule entry.</p>
     */
    inline ScheduleEntry& WithScheduleEntryType(const ScheduleEntryType& value) { SetScheduleEntryType(value); return *this;}

    /**
     * <p>The type of schedule entry.</p>
     */
    inline ScheduleEntry& WithScheduleEntryType(ScheduleEntryType&& value) { SetScheduleEntryType(std::move(value)); return *this;}


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
    bool m_approximateDurationSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_approximateStartTime;
    bool m_approximateStartTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_liveSourceName;
    bool m_liveSourceNameHasBeenSet = false;

    Aws::String m_programName;
    bool m_programNameHasBeenSet = false;

    Aws::Vector<ScheduleAdBreak> m_scheduleAdBreaks;
    bool m_scheduleAdBreaksHasBeenSet = false;

    ScheduleEntryType m_scheduleEntryType;
    bool m_scheduleEntryTypeHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
