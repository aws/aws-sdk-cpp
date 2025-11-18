/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/TriggerHistoryRecord.h>

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
class GetScheduledQueryHistoryResult {
 public:
  AWS_CLOUDWATCHLOGS_API GetScheduledQueryHistoryResult() = default;
  AWS_CLOUDWATCHLOGS_API GetScheduledQueryHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API GetScheduledQueryHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  GetScheduledQueryHistoryResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

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
  GetScheduledQueryHistoryResult& WithScheduledQueryArn(ScheduledQueryArnT&& value) {
    SetScheduledQueryArn(std::forward<ScheduledQueryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of execution history records for the scheduled query.</p>
   */
  inline const Aws::Vector<TriggerHistoryRecord>& GetTriggerHistory() const { return m_triggerHistory; }
  template <typename TriggerHistoryT = Aws::Vector<TriggerHistoryRecord>>
  void SetTriggerHistory(TriggerHistoryT&& value) {
    m_triggerHistoryHasBeenSet = true;
    m_triggerHistory = std::forward<TriggerHistoryT>(value);
  }
  template <typename TriggerHistoryT = Aws::Vector<TriggerHistoryRecord>>
  GetScheduledQueryHistoryResult& WithTriggerHistory(TriggerHistoryT&& value) {
    SetTriggerHistory(std::forward<TriggerHistoryT>(value));
    return *this;
  }
  template <typename TriggerHistoryT = TriggerHistoryRecord>
  GetScheduledQueryHistoryResult& AddTriggerHistory(TriggerHistoryT&& value) {
    m_triggerHistoryHasBeenSet = true;
    m_triggerHistory.emplace_back(std::forward<TriggerHistoryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetScheduledQueryHistoryResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  GetScheduledQueryHistoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_scheduledQueryArn;
  bool m_scheduledQueryArnHasBeenSet = false;

  Aws::Vector<TriggerHistoryRecord> m_triggerHistory;
  bool m_triggerHistoryHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
