/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/ScheduledQuerySummary.h>

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
class ListScheduledQueriesResult {
 public:
  AWS_CLOUDWATCHLOGS_API ListScheduledQueriesResult() = default;
  AWS_CLOUDWATCHLOGS_API ListScheduledQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API ListScheduledQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScheduledQueriesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of scheduled query summary information.</p>
   */
  inline const Aws::Vector<ScheduledQuerySummary>& GetScheduledQueries() const { return m_scheduledQueries; }
  template <typename ScheduledQueriesT = Aws::Vector<ScheduledQuerySummary>>
  void SetScheduledQueries(ScheduledQueriesT&& value) {
    m_scheduledQueriesHasBeenSet = true;
    m_scheduledQueries = std::forward<ScheduledQueriesT>(value);
  }
  template <typename ScheduledQueriesT = Aws::Vector<ScheduledQuerySummary>>
  ListScheduledQueriesResult& WithScheduledQueries(ScheduledQueriesT&& value) {
    SetScheduledQueries(std::forward<ScheduledQueriesT>(value));
    return *this;
  }
  template <typename ScheduledQueriesT = ScheduledQuerySummary>
  ListScheduledQueriesResult& AddScheduledQueries(ScheduledQueriesT&& value) {
    m_scheduledQueriesHasBeenSet = true;
    m_scheduledQueries.emplace_back(std::forward<ScheduledQueriesT>(value));
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
  ListScheduledQueriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<ScheduledQuerySummary> m_scheduledQueries;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_scheduledQueriesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
