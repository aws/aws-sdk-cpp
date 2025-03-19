/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/DataPullMode.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Specifies the configuration details of a scheduled-trigger flow that you
   * define. Currently, these settings only apply to the scheduled-trigger
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ScheduledTriggerProperties">AWS
   * API Reference</a></p>
   */
  class ScheduledTriggerProperties
  {
  public:
    AWS_CUSTOMERPROFILES_API ScheduledTriggerProperties() = default;
    AWS_CUSTOMERPROFILES_API ScheduledTriggerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ScheduledTriggerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scheduling expression that determines the rate at which the schedule will
     * run, for example rate (5 minutes).</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    ScheduledTriggerProperties& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run.</p>
     */
    inline DataPullMode GetDataPullMode() const { return m_dataPullMode; }
    inline bool DataPullModeHasBeenSet() const { return m_dataPullModeHasBeenSet; }
    inline void SetDataPullMode(DataPullMode value) { m_dataPullModeHasBeenSet = true; m_dataPullMode = value; }
    inline ScheduledTriggerProperties& WithDataPullMode(DataPullMode value) { SetDataPullMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scheduled start time for a scheduled-trigger flow.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduleStartTime() const { return m_scheduleStartTime; }
    inline bool ScheduleStartTimeHasBeenSet() const { return m_scheduleStartTimeHasBeenSet; }
    template<typename ScheduleStartTimeT = Aws::Utils::DateTime>
    void SetScheduleStartTime(ScheduleStartTimeT&& value) { m_scheduleStartTimeHasBeenSet = true; m_scheduleStartTime = std::forward<ScheduleStartTimeT>(value); }
    template<typename ScheduleStartTimeT = Aws::Utils::DateTime>
    ScheduledTriggerProperties& WithScheduleStartTime(ScheduleStartTimeT&& value) { SetScheduleStartTime(std::forward<ScheduleStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the scheduled end time for a scheduled-trigger flow.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduleEndTime() const { return m_scheduleEndTime; }
    inline bool ScheduleEndTimeHasBeenSet() const { return m_scheduleEndTimeHasBeenSet; }
    template<typename ScheduleEndTimeT = Aws::Utils::DateTime>
    void SetScheduleEndTime(ScheduleEndTimeT&& value) { m_scheduleEndTimeHasBeenSet = true; m_scheduleEndTime = std::forward<ScheduleEndTimeT>(value); }
    template<typename ScheduleEndTimeT = Aws::Utils::DateTime>
    ScheduledTriggerProperties& WithScheduleEndTime(ScheduleEndTimeT&& value) { SetScheduleEndTime(std::forward<ScheduleEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time zone used when referring to the date and time of a
     * scheduled-triggered flow, such as America/New_York.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    ScheduledTriggerProperties& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the optional offset that is added to the time interval for a
     * schedule-triggered flow.</p>
     */
    inline long long GetScheduleOffset() const { return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(long long value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline ScheduledTriggerProperties& WithScheduleOffset(long long value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the date range for the records to import from the connector in the
     * first flow run.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstExecutionFrom() const { return m_firstExecutionFrom; }
    inline bool FirstExecutionFromHasBeenSet() const { return m_firstExecutionFromHasBeenSet; }
    template<typename FirstExecutionFromT = Aws::Utils::DateTime>
    void SetFirstExecutionFrom(FirstExecutionFromT&& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = std::forward<FirstExecutionFromT>(value); }
    template<typename FirstExecutionFromT = Aws::Utils::DateTime>
    ScheduledTriggerProperties& WithFirstExecutionFrom(FirstExecutionFromT&& value) { SetFirstExecutionFrom(std::forward<FirstExecutionFromT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    DataPullMode m_dataPullMode{DataPullMode::NOT_SET};
    bool m_dataPullModeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduleStartTime{};
    bool m_scheduleStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scheduleEndTime{};
    bool m_scheduleEndTimeHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    long long m_scheduleOffset{0};
    bool m_scheduleOffsetHasBeenSet = false;

    Aws::Utils::DateTime m_firstExecutionFrom{};
    bool m_firstExecutionFromHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
