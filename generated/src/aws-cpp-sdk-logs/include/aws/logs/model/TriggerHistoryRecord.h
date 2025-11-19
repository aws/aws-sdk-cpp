/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ExecutionStatus.h>
#include <aws/logs/model/ScheduledQueryDestination.h>

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
 * <p>A record of a scheduled query execution, including its status and destination
 * processing information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TriggerHistoryRecord">AWS
 * API Reference</a></p>
 */
class TriggerHistoryRecord {
 public:
  AWS_CLOUDWATCHLOGS_API TriggerHistoryRecord() = default;
  AWS_CLOUDWATCHLOGS_API TriggerHistoryRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API TriggerHistoryRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the query execution.</p>
   */
  inline const Aws::String& GetQueryId() const { return m_queryId; }
  inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
  template <typename QueryIdT = Aws::String>
  void SetQueryId(QueryIdT&& value) {
    m_queryIdHasBeenSet = true;
    m_queryId = std::forward<QueryIdT>(value);
  }
  template <typename QueryIdT = Aws::String>
  TriggerHistoryRecord& WithQueryId(QueryIdT&& value) {
    SetQueryId(std::forward<QueryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the query execution (Running, Complete, Failed, Timeout, or
   * InvalidQuery).</p>
   */
  inline ExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
  inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
  inline void SetExecutionStatus(ExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline TriggerHistoryRecord& WithExecutionStatus(ExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the scheduled query was triggered, in Unix epoch time.</p>
   */
  inline long long GetTriggeredTimestamp() const { return m_triggeredTimestamp; }
  inline bool TriggeredTimestampHasBeenSet() const { return m_triggeredTimestampHasBeenSet; }
  inline void SetTriggeredTimestamp(long long value) {
    m_triggeredTimestampHasBeenSet = true;
    m_triggeredTimestamp = value;
  }
  inline TriggerHistoryRecord& WithTriggeredTimestamp(long long value) {
    SetTriggeredTimestamp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message if the scheduled query execution failed. This field is only
   * populated when the execution status indicates a failure.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  TriggerHistoryRecord& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of destinations where the scheduled query results were delivered for
   * this execution. This includes S3 buckets configured for the scheduled query.</p>
   */
  inline const Aws::Vector<ScheduledQueryDestination>& GetDestinations() const { return m_destinations; }
  inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
  template <typename DestinationsT = Aws::Vector<ScheduledQueryDestination>>
  void SetDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations = std::forward<DestinationsT>(value);
  }
  template <typename DestinationsT = Aws::Vector<ScheduledQueryDestination>>
  TriggerHistoryRecord& WithDestinations(DestinationsT&& value) {
    SetDestinations(std::forward<DestinationsT>(value));
    return *this;
  }
  template <typename DestinationsT = ScheduledQueryDestination>
  TriggerHistoryRecord& AddDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations.emplace_back(std::forward<DestinationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryId;
  bool m_queryIdHasBeenSet = false;

  ExecutionStatus m_executionStatus{ExecutionStatus::NOT_SET};
  bool m_executionStatusHasBeenSet = false;

  long long m_triggeredTimestamp{0};
  bool m_triggeredTimestampHasBeenSet = false;

  Aws::String m_errorMessage;
  bool m_errorMessageHasBeenSet = false;

  Aws::Vector<ScheduledQueryDestination> m_destinations;
  bool m_destinationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
