/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ExecutionStatus.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class GetScheduledQueryHistoryRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API GetScheduledQueryHistoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetScheduledQueryHistory"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN or name of the scheduled query to retrieve history for.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  GetScheduledQueryHistoryRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time for the history query in Unix epoch format.</p>
   */
  inline long long GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  inline void SetStartTime(long long value) {
    m_startTimeHasBeenSet = true;
    m_startTime = value;
  }
  inline GetScheduledQueryHistoryRequest& WithStartTime(long long value) {
    SetStartTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time for the history query in Unix epoch format.</p>
   */
  inline long long GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  inline void SetEndTime(long long value) {
    m_endTimeHasBeenSet = true;
    m_endTime = value;
  }
  inline GetScheduledQueryHistoryRequest& WithEndTime(long long value) {
    SetEndTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of execution statuses to filter the history results. Only executions
   * with the specified statuses are returned.</p>
   */
  inline const Aws::Vector<ExecutionStatus>& GetExecutionStatuses() const { return m_executionStatuses; }
  inline bool ExecutionStatusesHasBeenSet() const { return m_executionStatusesHasBeenSet; }
  template <typename ExecutionStatusesT = Aws::Vector<ExecutionStatus>>
  void SetExecutionStatuses(ExecutionStatusesT&& value) {
    m_executionStatusesHasBeenSet = true;
    m_executionStatuses = std::forward<ExecutionStatusesT>(value);
  }
  template <typename ExecutionStatusesT = Aws::Vector<ExecutionStatus>>
  GetScheduledQueryHistoryRequest& WithExecutionStatuses(ExecutionStatusesT&& value) {
    SetExecutionStatuses(std::forward<ExecutionStatusesT>(value));
    return *this;
  }
  inline GetScheduledQueryHistoryRequest& AddExecutionStatuses(ExecutionStatus value) {
    m_executionStatusesHasBeenSet = true;
    m_executionStatuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of history records to return. Valid range is 1 to
   * 1000.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetScheduledQueryHistoryRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetScheduledQueryHistoryRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;

  long long m_startTime{0};
  bool m_startTimeHasBeenSet = false;

  long long m_endTime{0};
  bool m_endTimeHasBeenSet = false;

  Aws::Vector<ExecutionStatus> m_executionStatuses;
  bool m_executionStatusesHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
