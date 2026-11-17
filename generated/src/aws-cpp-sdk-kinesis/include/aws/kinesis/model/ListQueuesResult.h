/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {
class ListQueuesResult {
 public:
  AWS_KINESIS_API ListQueuesResult() = default;
  AWS_KINESIS_API ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KINESIS_API ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A summary of each queue that matched the request.</p>
   */
  inline const Aws::Vector<QueueSummary>& GetQueueSummaries() const { return m_queueSummaries; }
  template <typename QueueSummariesT = Aws::Vector<QueueSummary>>
  void SetQueueSummaries(QueueSummariesT&& value) {
    m_queueSummariesHasBeenSet = true;
    m_queueSummaries = std::forward<QueueSummariesT>(value);
  }
  template <typename QueueSummariesT = Aws::Vector<QueueSummary>>
  ListQueuesResult& WithQueueSummaries(QueueSummariesT&& value) {
    SetQueueSummaries(std::forward<QueueSummariesT>(value));
    return *this;
  }
  template <typename QueueSummariesT = QueueSummary>
  ListQueuesResult& AddQueueSummaries(QueueSummariesT&& value) {
    m_queueSummariesHasBeenSet = true;
    m_queueSummaries.emplace_back(std::forward<QueueSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to pass to the next <code>ListQueues</code> request to retrieve the
   * next page of queue summaries. This member is absent when no more queues are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListQueuesResult& WithNextToken(NextTokenT&& value) {
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
  ListQueuesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<QueueSummary> m_queueSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_queueSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
