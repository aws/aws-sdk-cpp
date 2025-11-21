/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class CreateScheduledQueryRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API CreateScheduledQueryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateScheduledQuery"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique name for the scheduled query within the region for an AWS account.
   * The name can contain letters, numbers, underscores, hyphens, forward slashes,
   * periods, and hash symbols.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateScheduledQueryRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description for the scheduled query to help identify its
   * purpose.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateScheduledQueryRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query language to use for the scheduled query. Valid values are LogsQL
   * (CloudWatch Logs Insights query language), PPL (OpenSearch Service Piped
   * Processing Language), and SQL (OpenSearch Service Structured Query
   * Language).</p>
   */
  inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
  inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
  inline void SetQueryLanguage(QueryLanguage value) {
    m_queryLanguageHasBeenSet = true;
    m_queryLanguage = value;
  }
  inline CreateScheduledQueryRequest& WithQueryLanguage(QueryLanguage value) {
    SetQueryLanguage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch Logs Insights query string to execute. This is the actual
   * query that will be run against your log data on the specified schedule.</p>
   */
  inline const Aws::String& GetQueryString() const { return m_queryString; }
  inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  CreateScheduledQueryRequest& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log group identifiers to query. You can specify log group names or log
   * group ARNs. If querying log groups in a source account from a monitoring
   * account, you must specify the ARN of the log group.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
  inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value);
  }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  CreateScheduledQueryRequest& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  template <typename LogGroupIdentifiersT = Aws::String>
  CreateScheduledQueryRequest& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A cron expression that defines when the scheduled query runs. The format is
   * cron(fields) where fields consist of six space-separated values: minutes, hours,
   * day_of_month, month, day_of_week, year.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  CreateScheduledQueryRequest& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone in which the schedule expression is evaluated. If not provided,
   * defaults to UTC.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  CreateScheduledQueryRequest& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time offset in seconds from the execution time for the start of the query
   * time range. This defines the lookback period for the query (for example, 3600
   * for the last hour).</p>
   */
  inline long long GetStartTimeOffset() const { return m_startTimeOffset; }
  inline bool StartTimeOffsetHasBeenSet() const { return m_startTimeOffsetHasBeenSet; }
  inline void SetStartTimeOffset(long long value) {
    m_startTimeOffsetHasBeenSet = true;
    m_startTimeOffset = value;
  }
  inline CreateScheduledQueryRequest& WithStartTimeOffset(long long value) {
    SetStartTimeOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for destinations where the query results will be delivered
   * after successful execution. You can configure delivery to S3 buckets or
   * EventBridge event buses.</p>
   */
  inline const DestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
  inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  void SetDestinationConfiguration(DestinationConfigurationT&& value) {
    m_destinationConfigurationHasBeenSet = true;
    m_destinationConfiguration = std::forward<DestinationConfigurationT>(value);
  }
  template <typename DestinationConfigurationT = DestinationConfiguration>
  CreateScheduledQueryRequest& WithDestinationConfiguration(DestinationConfigurationT&& value) {
    SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time for the query schedule in Unix epoch time (seconds since
   * January 1, 1970, 00:00:00 UTC). If not specified, the schedule starts
   * immediately.</p>
   */
  inline long long GetScheduleStartTime() const { return m_scheduleStartTime; }
  inline bool ScheduleStartTimeHasBeenSet() const { return m_scheduleStartTimeHasBeenSet; }
  inline void SetScheduleStartTime(long long value) {
    m_scheduleStartTimeHasBeenSet = true;
    m_scheduleStartTime = value;
  }
  inline CreateScheduledQueryRequest& WithScheduleStartTime(long long value) {
    SetScheduleStartTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time for the query schedule in Unix epoch time (seconds since January
   * 1, 1970, 00:00:00 UTC). If not specified, the schedule runs indefinitely.</p>
   */
  inline long long GetScheduleEndTime() const { return m_scheduleEndTime; }
  inline bool ScheduleEndTimeHasBeenSet() const { return m_scheduleEndTimeHasBeenSet; }
  inline void SetScheduleEndTime(long long value) {
    m_scheduleEndTimeHasBeenSet = true;
    m_scheduleEndTime = value;
  }
  inline CreateScheduledQueryRequest& WithScheduleEndTime(long long value) {
    SetScheduleEndTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that CloudWatch Logs will
   * assume to execute the scheduled query and deliver results to the specified
   * destinations.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  CreateScheduledQueryRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial state of the scheduled query. Valid values are ENABLED (the query
   * will run according to its schedule) and DISABLED (the query is paused and will
   * not run). If not provided, defaults to ENABLED.</p>
   */
  inline ScheduledQueryState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScheduledQueryState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateScheduledQueryRequest& WithState(ScheduledQueryState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional list of key-value pairs to associate with the resource.</p>
   * <p>For more information about tagging, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services resources</a> </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateScheduledQueryRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateScheduledQueryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
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

  long long m_scheduleStartTime{0};
  bool m_scheduleStartTimeHasBeenSet = false;

  long long m_scheduleEndTime{0};
  bool m_scheduleEndTimeHasBeenSet = false;

  Aws::String m_executionRoleArn;
  bool m_executionRoleArnHasBeenSet = false;

  ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};
  bool m_stateHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
