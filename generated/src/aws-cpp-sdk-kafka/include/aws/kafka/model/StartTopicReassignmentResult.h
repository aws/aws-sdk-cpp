/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicReassignmentStatus.h>

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
 * <p>Returns information about the initiated topic reassignment
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/StartTopicReassignmentResponse">AWS
 * API Reference</a></p>
 */
class StartTopicReassignmentResult {
 public:
  AWS_KAFKA_API StartTopicReassignmentResult() = default;
  AWS_KAFKA_API StartTopicReassignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API StartTopicReassignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  StartTopicReassignmentResult& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the reassignment operation.</p>
   */
  inline TopicReassignmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(TopicReassignmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartTopicReassignmentResult& WithStatus(TopicReassignmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the topic reassignment operation.</p>
   */
  inline const Aws::String& GetTopicReassignmentOperationArn() const { return m_topicReassignmentOperationArn; }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  void SetTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    m_topicReassignmentOperationArnHasBeenSet = true;
    m_topicReassignmentOperationArn = std::forward<TopicReassignmentOperationArnT>(value);
  }
  template <typename TopicReassignmentOperationArnT = Aws::String>
  StartTopicReassignmentResult& WithTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
    SetTopicReassignmentOperationArn(std::forward<TopicReassignmentOperationArnT>(value));
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
  StartTopicReassignmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_clusterArn;

  TopicReassignmentStatus m_status{TopicReassignmentStatus::NOT_SET};

  Aws::String m_topicReassignmentOperationArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_clusterArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_topicReassignmentOperationArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
