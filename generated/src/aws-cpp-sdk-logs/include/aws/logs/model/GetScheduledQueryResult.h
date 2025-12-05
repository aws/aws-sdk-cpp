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
class GetScheduledQueryResult {
 public:
  AWS_CLOUDWATCHLOGS_API GetScheduledQueryResult() = default;
  AWS_CLOUDWATCHLOGS_API GetScheduledQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API GetScheduledQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the scheduled query.</p>
   */
  inline const Aws::String& GetScheduledQueryArn() const { return m_scheduledQueryArn; }
  template <typename ScheduledQueryArnT = Aws::String>
  void SetScheduledQueryArn(ScheduledQueryArnT&& value) {
    m_scheduledQueryArnHasBeenSet = true;
    m_scheduledQueryArn = std::forward<ScheduledQueryArnT>(value);
  }
  template <typename ScheduledQueryArnT = Aws::String>
  GetScheduledQueryResult& WithScheduledQueryArn(ScheduledQueryArnT&& value) {
    SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the scheduled query.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetScheduledQueryResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the scheduled query.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetScheduledQueryResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query language used by the scheduled query.</p>
   */
  inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
  inline void SetQueryLanguage(QueryLanguage value) {
    m_queryLanguageHasBeenSet = true;
    m_queryLanguage = value;
  }
  inline GetScheduledQueryResult& WithQueryLanguage(QueryLanguage value) {
    SetQueryLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query string executed by the scheduled query.</p>
   */
  inline const Aws::String& GetQueryString() const { return m_queryString; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  GetScheduledQueryResult& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log groups queried by the scheduled query.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value);
  }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  GetScheduledQueryResult& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  template <typename LogGroupIdentifiersT = Aws::String>
  GetScheduledQueryResult& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cron expression that defines when the scheduled query runs.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  GetScheduledQueryResult& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone used for evaluating the schedule expression.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  GetScheduledQueryResult& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time offset in seconds that defines the lookback period for the
   * query.</p>
   */
  inline long long GetStartTimeOffset() const { return m_startTimeOffset; }
  inline void SetStartTimeOffset(long long value) {
    m_startTimeOffsetHasBeenSet = true;
    m_startTimeOffset = value;
  }
  inline GetScheduledQueryResult& WithStartTimeOffset(long long value) {
    SetStartTimeOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for where query results are delivered.</p>
   */
  inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  void SetDestinationConfiguration(DestinationConfigurationT&& value) {
    m_destinationConfigurationHasBeenSet = true;
    m_destinationConfiguration = std::forward<DestinationConfigurationT>(value);
  }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  GetScheduledQueryResult& WithDestinationConfiguration(DestinationConfigurationT&& value) {
    SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the scheduled query.</p>
   */
  inline ScheduledQueryState GetState() const { return m_state; }
  inline void SetState(ScheduledQueryState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetScheduledQueryResult& WithState(ScheduledQueryState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled query was last executed.</p>
   */
  inline long long GetLastTriggeredTime() const { return m_lastTriggeredTime; }
  inline void SetLastTriggeredTime(long long value) {
    m_lastTriggeredTimeHasBeenSet = true;
    m_lastTriggeredTime = value;
  }
  inline GetScheduledQueryResult& WithLastTriggeredTime(long long value) {
    SetLastTriggeredTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the most recent execution of the scheduled query.</p>
   */
  inline ExecutionStatus GetLastExecutionStatus() const { return m_lastExecutionStatus; }
  inline void SetLastExecutionStatus(ExecutionStatus value) {
    m_lastExecutionStatusHasBeenSet = true;
    m_lastExecutionStatus = value;
  }
  inline GetScheduledQueryResult& WithLastExecutionStatus(ExecutionStatus value) {
    SetLastExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time for the scheduled query in Unix epoch format.</p>
   */
  inline long long GetScheduleStartTime() const { return m_scheduleStartTime; }
  inline void SetScheduleStartTime(long long value) {
    m_scheduleStartTimeHasBeenSet = true;
    m_scheduleStartTime = value;
  }
  inline GetScheduledQueryResult& WithScheduleStartTime(long long value) {
    SetScheduleStartTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time for the scheduled query in Unix epoch format.</p>
   */
  inline long long GetScheduleEndTime() const { return m_scheduleEndTime; }
  inline void SetScheduleEndTime(long long value) {
    m_scheduleEndTimeHasBeenSet = true;
    m_scheduleEndTime = value;
  }
  inline GetScheduledQueryResult& WithScheduleEndTime(long long value) {
    SetScheduleEndTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role used to execute the query and deliver results.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  GetScheduledQueryResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled query was created.</p>
   */
  inline long long GetCreationTime() const { return m_creationTime; }
  inline void SetCreationTime(long long value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = value;
  }
  inline GetScheduledQueryResult& WithCreationTime(long long value) {
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
  inline GetScheduledQueryResult& WithLastUpdatedTime(long long value) {
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
  GetScheduledQueryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduledQueryArn;

  Aws::String m_name;

  Aws::String m_description;

  QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};

  Aws::String m_queryString;

  Aws::Vector<Aws::String> m_logGroupIdentifiers;

  Aws::String m_scheduleExpression;

  Aws::String m_timezone;

  long long m_startTimeOffset{0};

  DestinationConfiguration m_destinationConfiguration;

  ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};

  long long m_lastTriggeredTime{0};

  ExecutionStatus m_lastExecutionStatus{ExecutionStatus::NOT_SET};

  long long m_scheduleStartTime{0};

  long long m_scheduleEndTime{0};

  Aws::String m_executionRoleArn;

  long long m_creationTime{0};

  long long m_lastUpdatedTime{0};

  Aws::String m_requestId;
  bool m_scheduledQueryArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_queryLanguageHasBeenSet = false;
  bool m_queryStringHasBeenSet = false;
  bool m_logGroupIdentifiersHasBeenSet = false;
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_startTimeOffsetHasBeenSet = false;
  bool m_destinationConfigurationHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_lastTriggeredTimeHasBeenSet = false;
  bool m_lastExecutionStatusHasBeenSet = false;
  bool m_scheduleStartTimeHasBeenSet = false;
  bool m_scheduleEndTimeHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
