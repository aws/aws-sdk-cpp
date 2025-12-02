/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/AggregateLogGroupSummary.h>

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
class ListAggregateLogGroupSummariesResult {
 public:
  AWS_CLOUDWATCHLOGS_API ListAggregateLogGroupSummariesResult() = default;
  AWS_CLOUDWATCHLOGS_API ListAggregateLogGroupSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API ListAggregateLogGroupSummariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of aggregate log group summaries grouped by the specified data
   * source characteristics.</p>
   */
  inline const Aws::Vector<AggregateLogGroupSummary>& GetAggregateLogGroupSummaries() const { return m_aggregateLogGroupSummaries; }
  template <typename AggregateLogGroupSummariesT = Aws::Vector<AggregateLogGroupSummary>>
  void SetAggregateLogGroupSummaries(AggregateLogGroupSummariesT&& value) {
    m_aggregateLogGroupSummariesHasBeenSet = true;
    m_aggregateLogGroupSummaries = std::forward<AggregateLogGroupSummariesT>(value);
  }
  template <typename AggregateLogGroupSummariesT = Aws::Vector<AggregateLogGroupSummary>>
  ListAggregateLogGroupSummariesResult& WithAggregateLogGroupSummaries(AggregateLogGroupSummariesT&& value) {
    SetAggregateLogGroupSummaries(std::forward<AggregateLogGroupSummariesT>(value));
    return *this;
  }
  template <typename AggregateLogGroupSummariesT = AggregateLogGroupSummary>
  ListAggregateLogGroupSummariesResult& AddAggregateLogGroupSummaries(AggregateLogGroupSummariesT&& value) {
    m_aggregateLogGroupSummariesHasBeenSet = true;
    m_aggregateLogGroupSummaries.emplace_back(std::forward<AggregateLogGroupSummariesT>(value));
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
  ListAggregateLogGroupSummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListAggregateLogGroupSummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AggregateLogGroupSummary> m_aggregateLogGroupSummaries;
  bool m_aggregateLogGroupSummariesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
