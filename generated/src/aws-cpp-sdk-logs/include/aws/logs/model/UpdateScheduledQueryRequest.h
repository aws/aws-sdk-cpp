/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DestinationConfiguration.h>
#include <aws/logs/model/QueryLanguage.h>
#include <aws/logs/model/ScheduledQueryState.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class UpdateScheduledQueryRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API UpdateScheduledQueryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateScheduledQuery"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN or name of the scheduled query to update.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateScheduledQueryRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An updated description for the scheduled query.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateScheduledQueryRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated query language for the scheduled query.</p>
   */
  inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
  inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
  inline void SetQueryLanguage(QueryLanguage value) {
    m_queryLanguageHasBeenSet = true;
    m_queryLanguage = value;
  }
  inline UpdateScheduledQueryRequest& WithQueryLanguage(QueryLanguage value) {
    SetQueryLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated query string to execute.</p>
   */
  inline const Aws::String& GetQueryString() const { return m_queryString; }
  inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  UpdateScheduledQueryRequest& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated array of log group names or ARNs to query.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
  inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value);
  }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  UpdateScheduledQueryRequest& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  template <typename LogGroupIdentifiersT = Aws::String>
  UpdateScheduledQueryRequest& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated cron expression that defines when the scheduled query runs.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  UpdateScheduledQueryRequest& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated timezone for evaluating the schedule expression.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  UpdateScheduledQueryRequest& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated time offset in seconds that defines the lookback period for the
   * query.</p>
   */
  inline long long GetStartTimeOffset() const { return m_startTimeOffset; }
  inline bool StartTimeOffsetHasBeenSet() const { return m_startTimeOffsetHasBeenSet; }
  inline void SetStartTimeOffset(long long value) {
    m_startTimeOffsetHasBeenSet = true;
    m_startTimeOffset = value;
  }
  inline UpdateScheduledQueryRequest& WithStartTimeOffset(long long value) {
    SetStartTimeOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration for where to deliver query results.</p>
   */
  inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
  inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  void SetDestinationConfiguration(DestinationConfigurationT&& value) {
    m_destinationConfigurationHasBeenSet = true;
    m_destinationConfiguration = std::forward<DestinationConfigurationT>(value);
  }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  UpdateScheduledQueryRequest& WithDestinationConfiguration(DestinationConfigurationT&& value) {
    SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated start time for the scheduled query in Unix epoch format.</p>
   */
  inline long long GetScheduleStartTime() const { return m_scheduleStartTime; }
  inline bool ScheduleStartTimeHasBeenSet() const { return m_scheduleStartTimeHasBeenSet; }
  inline void SetScheduleStartTime(long long value) {
    m_scheduleStartTimeHasBeenSet = true;
    m_scheduleStartTime = value;
  }
  inline UpdateScheduledQueryRequest& WithScheduleStartTime(long long value) {
    SetScheduleStartTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated end time for the scheduled query in Unix epoch format.</p>
   */
  inline long long GetScheduleEndTime() const { return m_scheduleEndTime; }
  inline bool ScheduleEndTimeHasBeenSet() const { return m_scheduleEndTimeHasBeenSet; }
  inline void SetScheduleEndTime(long long value) {
    m_scheduleEndTimeHasBeenSet = true;
    m_scheduleEndTime = value;
  }
  inline UpdateScheduledQueryRequest& WithScheduleEndTime(long long value) {
    SetScheduleEndTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated ARN of the IAM role that grants permissions to execute the query
   * and deliver results.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateScheduledQueryRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated state of the scheduled query.</p>
   */
  inline ScheduledQueryState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScheduledQueryState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateScheduledQueryRequest& WithState(ScheduledQueryState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_description;

  QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};

  Aws::String m_queryString;

  Aws::Vector<Aws::String> m_logGroupIdentifiers;

  Aws::String m_scheduleExpression;

  Aws::String m_timezone;

  long long m_startTimeOffset{0};

  DestinationConfiguration m_destinationConfiguration;

  long long m_scheduleStartTime{0};

  long long m_scheduleEndTime{0};

  Aws::String m_executionRoleArn;

  ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};
  bool m_identifierHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_queryLanguageHasBeenSet = false;
  bool m_queryStringHasBeenSet = false;
  bool m_logGroupIdentifiersHasBeenSet = false;
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_startTimeOffsetHasBeenSet = false;
  bool m_destinationConfigurationHasBeenSet = false;
  bool m_scheduleStartTimeHasBeenSet = false;
  bool m_scheduleEndTimeHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
