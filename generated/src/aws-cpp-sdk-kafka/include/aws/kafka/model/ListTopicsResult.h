/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicInfo.h>

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
class ListTopicsResult {
 public:
  AWS_KAFKA_API ListTopicsResult() = default;
  AWS_KAFKA_API ListTopicsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API ListTopicsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   *
          <p>List containing topics info.</p>

   */
  inline const Aws::Vector<TopicInfo>& GetTopics() const { return m_topics; }
  template <typename TopicsT = Aws::Vector<TopicInfo>>
  void SetTopics(TopicsT&& value) {
    m_topicsHasBeenSet = true;
    m_topics = std::forward<TopicsT>(value);
  }
  template <typename TopicsT = Aws::Vector<TopicInfo>>
  ListTopicsResult& WithTopics(TopicsT&& value) {
    SetTopics(std::forward<TopicsT>(value));
    return *this;
  }
  template <typename TopicsT = TopicInfo>
  ListTopicsResult& AddTopics(TopicsT&& value) {
    m_topicsHasBeenSet = true;
    m_topics.emplace_back(std::forward<TopicsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The paginated results marker. When the result of a ListTopics
   * operation is truncated, the call returns NextToken in the response.

   * To get another batch of configurations, provide this token in your next
   * request.</p>

   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTopicsResult& WithNextToken(NextTokenT&& value) {
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
  ListTopicsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TopicInfo> m_topics;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_topicsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
