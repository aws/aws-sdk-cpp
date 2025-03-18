/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/DataPullMode.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Specifies the configuration details of a schedule-triggered flow as defined
   * by the user. Currently, these settings only apply to the <code>Scheduled</code>
   * trigger type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ScheduledTriggerProperties">AWS
   * API Reference</a></p>
   */
  class ScheduledTriggerProperties
  {
  public:
    AWS_APPFLOW_API ScheduledTriggerProperties() = default;
    AWS_APPFLOW_API ScheduledTriggerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ScheduledTriggerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The scheduling expression that determines the rate at which the schedule
     * will run, for example <code>rate(5minutes)</code>. </p>
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
     * <p> Specifies whether a scheduled flow has an incremental data transfer or a
     * complete data transfer for each flow run. </p>
     */
    inline DataPullMode GetDataPullMode() const { return m_dataPullMode; }
    inline bool DataPullModeHasBeenSet() const { return m_dataPullModeHasBeenSet; }
    inline void SetDataPullMode(DataPullMode value) { m_dataPullModeHasBeenSet = true; m_dataPullMode = value; }
    inline ScheduledTriggerProperties& WithDataPullMode(DataPullMode value) { SetDataPullMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the scheduled flow starts. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-26T13:00:00-07:00</code>.</p>
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
     * <p>The time at which the scheduled flow ends. The time is formatted as a
     * timestamp that follows the ISO 8601 standard, such as
     * <code>2022-04-27T13:00:00-07:00</code>.</p>
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
     * <p>Specifies the time zone used when referring to the dates and times of a
     * scheduled flow, such as <code>America/New_York</code>. This time zone is only a
     * descriptive label. It doesn't affect how Amazon AppFlow interprets the
     * timestamps that you specify to schedule the flow.</p> <p>If you want to schedule
     * a flow by using times in a particular time zone, indicate the time zone as a UTC
     * offset in your timestamps. For example, the UTC offsets for the
     * <code>America/New_York</code> timezone are <code>-04:00</code> EDT and
     * <code>-05:00 EST</code>.</p>
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
     * <p> Specifies the optional offset that is added to the time interval for a
     * schedule-triggered flow. </p>
     */
    inline long long GetScheduleOffset() const { return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(long long value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline ScheduledTriggerProperties& WithScheduleOffset(long long value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the date range for the records to import from the connector in the
     * first flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetFirstExecutionFrom() const { return m_firstExecutionFrom; }
    inline bool FirstExecutionFromHasBeenSet() const { return m_firstExecutionFromHasBeenSet; }
    template<typename FirstExecutionFromT = Aws::Utils::DateTime>
    void SetFirstExecutionFrom(FirstExecutionFromT&& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = std::forward<FirstExecutionFromT>(value); }
    template<typename FirstExecutionFromT = Aws::Utils::DateTime>
    ScheduledTriggerProperties& WithFirstExecutionFrom(FirstExecutionFromT&& value) { SetFirstExecutionFrom(std::forward<FirstExecutionFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how many times a scheduled flow fails consecutively before Amazon
     * AppFlow deactivates it.</p>
     */
    inline int GetFlowErrorDeactivationThreshold() const { return m_flowErrorDeactivationThreshold; }
    inline bool FlowErrorDeactivationThresholdHasBeenSet() const { return m_flowErrorDeactivationThresholdHasBeenSet; }
    inline void SetFlowErrorDeactivationThreshold(int value) { m_flowErrorDeactivationThresholdHasBeenSet = true; m_flowErrorDeactivationThreshold = value; }
    inline ScheduledTriggerProperties& WithFlowErrorDeactivationThreshold(int value) { SetFlowErrorDeactivationThreshold(value); return *this;}
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

    int m_flowErrorDeactivationThreshold{0};
    bool m_flowErrorDeactivationThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
