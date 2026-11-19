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
 * <p>Returns the result of stopping a topic reassignment operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/StopTopicReassignmentResponse">AWS
 * API Reference</a></p>
 */
class StopTopicReassignmentResult {
 public:
  AWS_KAFKA_API StopTopicReassignmentResult() = default;
  AWS_KAFKA_API StopTopicReassignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API StopTopicReassignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the operation. Will be STOPPING.</p>
   */
  inline TopicReassignmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(TopicReassignmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StopTopicReassignmentResult& WithStatus(TopicReassignmentStatus value) {
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
  StopTopicReassignmentResult& WithTopicReassignmentOperationArn(TopicReassignmentOperationArnT&& value) {
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
  StopTopicReassignmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TopicReassignmentStatus m_status{TopicReassignmentStatus::NOT_SET};

  Aws::String m_topicReassignmentOperationArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_topicReassignmentOperationArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
