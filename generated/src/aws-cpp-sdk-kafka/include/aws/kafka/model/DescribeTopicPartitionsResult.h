/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicPartitionInfo.h>

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
class DescribeTopicPartitionsResult {
 public:
  AWS_KAFKA_API DescribeTopicPartitionsResult() = default;
  AWS_KAFKA_API DescribeTopicPartitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API DescribeTopicPartitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of partition information for the topic.</p>
   */
  inline const Aws::Vector<TopicPartitionInfo>& GetPartitions() const { return m_partitions; }
  template <typename PartitionsT = Aws::Vector<TopicPartitionInfo>>
  void SetPartitions(PartitionsT&& value) {
    m_partitionsHasBeenSet = true;
    m_partitions = std::forward<PartitionsT>(value);
  }
  template <typename PartitionsT = Aws::Vector<TopicPartitionInfo>>
  DescribeTopicPartitionsResult& WithPartitions(PartitionsT&& value) {
    SetPartitions(std::forward<PartitionsT>(value));
    return *this;
  }
  template <typename PartitionsT = TopicPartitionInfo>
  DescribeTopicPartitionsResult& AddPartitions(PartitionsT&& value) {
    m_partitionsHasBeenSet = true;
    m_partitions.emplace_back(std::forward<PartitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The paginated results marker. When the result of a
   * DescribeTopicPartitions operation is truncated, the call returns NextToken in
   * the response.
             To get another batch of configurations, provide
   * this token in your next request.</p>

   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeTopicPartitionsResult& WithNextToken(NextTokenT&& value) {
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
  DescribeTopicPartitionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TopicPartitionInfo> m_partitions;
  bool m_partitionsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
