/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicReassignmentInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {
/**
 * <p>Returns a list of topic reassignment operations for a cluster.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListTopicReassignmentsResponse">AWS
 * API Reference</a></p>
 */
class ListTopicReassignmentsResult {
 public:
  AWS_KAFKA_API ListTopicReassignmentsResult() = default;
  AWS_KAFKA_API ListTopicReassignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API ListTopicReassignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>If the response is truncated, it returns a nextToken. Send this in the
   * subsequent request to get the remaining results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTopicReassignmentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of topic reassignment operation summaries.</p>
   */
  inline const Aws::Vector<TopicReassignmentInfo>& GetReassignments() const { return m_reassignments; }
  template <typename ReassignmentsT = Aws::Vector<TopicReassignmentInfo>>
  void SetReassignments(ReassignmentsT&& value) {
    m_reassignmentsHasBeenSet = true;
    m_reassignments = std::forward<ReassignmentsT>(value);
  }
  template <typename ReassignmentsT = Aws::Vector<TopicReassignmentInfo>>
  ListTopicReassignmentsResult& WithReassignments(ReassignmentsT&& value) {
    SetReassignments(std::forward<ReassignmentsT>(value));
    return *this;
  }
  template <typename ReassignmentsT = TopicReassignmentInfo>
  ListTopicReassignmentsResult& AddReassignments(ReassignmentsT&& value) {
    m_reassignmentsHasBeenSet = true;
    m_reassignments.emplace_back(std::forward<ReassignmentsT>(value));
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
  ListTopicReassignmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<TopicReassignmentInfo> m_reassignments;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_reassignmentsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
