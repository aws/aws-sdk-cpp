/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DestinationConfiguration.h>
#include <aws/logs/model/ExecutionStatus.h>
#include <aws/logs/model/QueryLanguage.h>
#include <aws/logs/model/ScheduledQueryState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class UpdateScheduledQueryResult {
 public:
  AWS_CLOUDWATCHLOGS_API UpdateScheduledQueryResult() = default;
  AWS_CLOUDWATCHLOGS_API UpdateScheduledQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API UpdateScheduledQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the updated scheduled query.</p>
   */
  inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
  template <typename ScheduledQueryArnT = Aws::String>
  void SetScheduledQueryArn(ScheduledQueryArnT&& value) {
    m_scheduledQueryArnHasBeenSet = true;
    m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value);
  }
  template <typename ScheduledQueryArnT = Aws::String>
  UpdateScheduledQueryResult& WithScheduledQueryArn(ScheduledQueryArnT&& value) {
    SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the updated scheduled query.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateScheduledQueryResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the updated scheduled query.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateScheduledQueryResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query language of the updated scheduled query.</p>
   */
  inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
  inline void SetQueryLanguage(QueryLanguage value) {
    m_queryLanguageHasBeenSet = true;
    m_queryLanguage = value;
  }
  inline UpdateScheduledQueryResult& WithQueryLanguage(QueryLanguage value) {
    SetQueryLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query string of the updated scheduled query.</p>
   */
  inline const Aws::String& GetQueryString() const { return m_queryString; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  UpdateScheduledQueryResult& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log groups queried by the updated scheduled query.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value);
  }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  UpdateScheduledQueryResult& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  template <typename LogGroupIdentifiersT = Aws::String>
  UpdateScheduledQueryResult& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cron expression of the updated scheduled query.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  UpdateScheduledQueryResult& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone of the updated scheduled query.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  UpdateScheduledQueryResult& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time offset of the updated scheduled query.</p>
   */
  inline long long GetStartTimeOffset() const { return m_startTimeOffset; }
  inline void SetStartTimeOffset(long long value) {
    m_startTimeOffsetHasBeenSet = true;
    m_startTimeOffset = value;
  }
  inline UpdateScheduledQueryResult& WithStartTimeOffset(long long value) {
    SetStartTimeOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination configuration of the updated scheduled query.</p>
   */
  inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  void SetDestinationConfiguration(DestinationConfigurationT&& value) {
    m_destinationConfigurationHasBeenSet = true;
    m_destinationConfiguration = std::forward<DestinationConfigurationT>(value);
  }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  UpdateScheduledQueryResult& WithDestinationConfiguration(DestinationConfigurationT&& value) {
    SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the updated scheduled query.</p>
   */
  inline ScheduledQueryState GetState() const { return m_state; }
  inline void SetState(ScheduledQueryState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateScheduledQueryResult& WithState(ScheduledQueryState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the updated scheduled query was last executed.</p>
   */
  inline long long GetLastTriggeredTime() const { return m_lastTriggeredTime; }
  inline void SetLastTriggeredTime(long long value) {
    m_lastTriggeredTimeHasBeenSet = true;
    m_lastTriggeredTime = value;
  }
  inline UpdateScheduledQueryResult& WithLastTriggeredTime(long long value) {
    SetLastTriggeredTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the most recent execution of the updated scheduled query.</p>
   */
  inline ExecutionStatus GetLastExecutionStatus() const { return m_lastExecutionStatus; }
  inline void SetLastExecutionStatus(ExecutionStatus value) {
    m_lastExecutionStatusHasBeenSet = true;
    m_lastExecutionStatus = value;
  }
  inline UpdateScheduledQueryResult& WithLastExecutionStatus(ExecutionStatus value) {
    SetLastExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time of the updated scheduled query.</p>
   */
  inline long long GetScheduleStartTime() const { return m_scheduleStartTime; }
  inline void SetScheduleStartTime(long long value) {
    m_scheduleStartTimeHasBeenSet = true;
    m_scheduleStartTime = value;
  }
  inline UpdateScheduledQueryResult& WithScheduleStartTime(long long value) {
    SetScheduleStartTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the updated scheduled query.</p>
   */
  inline long long GetScheduleEndTime() const { return m_scheduleEndTime; }
  inline void SetScheduleEndTime(long long value) {
    m_scheduleEndTimeHasBeenSet = true;
    m_scheduleEndTime = value;
  }
  inline UpdateScheduledQueryResult& WithScheduleEndTime(long long value) {
    SetScheduleEndTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution role ARN of the updated scheduled query.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateScheduledQueryResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled query was originally created.</p>
   */
  inline long long GetCreationTime() const { return m_creationTime; }
  inline void SetCreationTime(long long value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = value;
  }
  inline UpdateScheduledQueryResult& WithCreationTime(long long value) {
    SetCreationTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled query was last updated.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline UpdateScheduledQueryResult& WithLastUpdatedTime(long long value) {
    SetLastUpdatedTime(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateScheduledQueryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduledQueryArn;
  bool m_scheduledQueryArnHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};
  bool m_queryLanguageHasBeenSet = false;

  Aws::String m_queryString;
  bool m_queryStringHasBeenSet = false;

  Aws::Vector<Aws::String> m_logGroupIdentifiers;
  bool m_logGroupIdentifiersHasBeenSet = false;

  Aws::String m_scheduleExpression;
  bool m_scheduleExpressionHasBeenSet = false;

  Aws::String m_timezone;
  bool m_timezoneHasBeenSet = false;

  long long m_startTimeOffset{0};
  bool m_startTimeOffsetHasBeenSet = false;

  DestinationConfiguration m_destinationConfiguration;
  bool m_destinationConfigurationHasBeenSet = false;

  ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};
  bool m_stateHasBeenSet = false;

  long long m_lastTriggeredTime{0};
  bool m_lastTriggeredTimeHasBeenSet = false;

  ExecutionStatus m_lastExecutionStatus{ExecutionStatus::NOT_SET};
  bool m_lastExecutionStatusHasBeenSet = false;

  long long m_scheduleStartTime{0};
  bool m_scheduleStartTimeHasBeenSet = false;

  long long m_scheduleEndTime{0};
  bool m_scheduleEndTimeHasBeenSet = false;

  Aws::String m_executionRoleArn;
  bool m_executionRoleArnHasBeenSet = false;

  long long m_creationTime{0};
  bool m_creationTimeHasBeenSet = false;

  long long m_lastUpdatedTime{0};
  bool m_lastUpdatedTimeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
