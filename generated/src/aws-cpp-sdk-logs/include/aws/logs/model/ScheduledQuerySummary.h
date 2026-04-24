/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DestinationConfiguration.h>
#include <aws/logs/model/ExecutionStatus.h>
#include <aws/logs/model/ScheduledQueryState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Summary information about a scheduled query, including basic configuration
 * and execution status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ScheduledQuerySummary">AWS
 * API Reference</a></p>
 */
class ScheduledQuerySummary {
 public:
  AWS_CLOUDWATCHLOGS_API ScheduledQuerySummary() = default;
  AWS_CLOUDWATCHLOGS_API ScheduledQuerySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API ScheduledQuerySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the scheduled query.</p>
   */
  inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
  inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }
  template <typename ScheduledQueryArnT = Aws::String>
  void SetScheduledQueryArn(ScheduledQueryArnT&& value) {
    m_scheduledQueryArnHasBeenSet = true;
    m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value);
  }
  template <typename ScheduledQueryArnT = Aws::String>
  ScheduledQuerySummary& WithScheduledQueryArn(ScheduledQueryArnT&& value) {
    SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the scheduled query.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ScheduledQuerySummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the scheduled query.</p>
   */
  inline ScheduledQueryState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScheduledQueryState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ScheduledQuerySummary& WithState(ScheduledQueryState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled query was last executed.</p>
   */
  inline long long GetLastTriggeredTime() const { return m_lastTriggeredTime; }
  inline bool LastTriggeredTimeHasBeenSet() const { return m_lastTriggeredTimeHasBeenSet; }
  inline void SetLastTriggeredTime(long long value) {
    m_lastTriggeredTimeHasBeenSet = true;
    m_lastTriggeredTime = value;
  }
  inline ScheduledQuerySummary& WithLastTriggeredTime(long long value) {
    SetLastTriggeredTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the most recent execution.</p>
   */
  inline ExecutionStatus GetLastExecutionStatus() const { return m_lastExecutionStatus; }
  inline bool LastExecutionStatusHasBeenSet() const { return m_lastExecutionStatusHasBeenSet; }
  inline void SetLastExecutionStatus(ExecutionStatus value) {
    m_lastExecutionStatusHasBeenSet = true;
    m_lastExecutionStatus = value;
  }
  inline ScheduledQuerySummary& WithLastExecutionStatus(ExecutionStatus value) {
    SetLastExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cron expression that defines when the scheduled query runs.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  ScheduledQuerySummary& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone used for evaluating the schedule expression.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  ScheduledQuerySummary& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for where query results are delivered.</p>
   */
  inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
  inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  void SetDestinationConfiguration(DestinationConfigurationT&& value) {
    m_destinationConfigurationHasBeenSet = true;
    m_destinationConfiguration = std::forward<DestinationConfigurationT>(value);
  }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  ScheduledQuerySummary& WithDestinationConfiguration(DestinationConfigurationT&& value) {
    SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled query was created.</p>
   */
  inline long long GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  inline void SetCreationTime(long long value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = value;
  }
  inline ScheduledQuerySummary& WithCreationTime(long long value) {
    SetCreationTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled query was last updated.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline ScheduledQuerySummary& WithLastUpdatedTime(long long value) {
    SetLastUpdatedTime(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduledQueryArn;

  Aws::String m_name;

  ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};

  long long m_lastTriggeredTime{0};

  ExecutionStatus m_lastExecutionStatus{ExecutionStatus::NOT_SET};

  Aws::String m_scheduleExpression;

  Aws::String m_timezone;

  DestinationConfiguration m_destinationConfiguration;

  long long m_creationTime{0};

  long long m_lastUpdatedTime{0};
  bool m_scheduledQueryArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastTriggeredTimeHasBeenSet = false;
  bool m_lastExecutionStatusHasBeenSet = false;
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_destinationConfigurationHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
