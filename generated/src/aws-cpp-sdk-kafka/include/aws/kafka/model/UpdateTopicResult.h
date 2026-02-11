/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/TopicState.h>

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
class UpdateTopicResult {
 public:
  AWS_KAFKA_API UpdateTopicResult() = default;
  AWS_KAFKA_API UpdateTopicResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KAFKA_API UpdateTopicResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) of the topic.</p>

   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  UpdateTopicResult& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The name of the topic whose configuration was updated.</p>

   *
   */
  inline const Aws::String& GetTopicName() const { return m_topicName; }
  template <typename TopicNameT = Aws::String>
  void SetTopicName(TopicNameT&& value) {
    m_topicNameHasBeenSet = true;
    m_topicName = std::forward<TopicNameT>(value);
  }
  template <typename TopicNameT = Aws::String>
  UpdateTopicResult& WithTopicName(TopicNameT&& value) {
    SetTopicName(std::forward<TopicNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The status of the topic update.</p>

   */
  inline TopicState GetStatus() const { return m_status; }
  inline void SetStatus(TopicState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateTopicResult& WithStatus(TopicState value) {
    SetStatus(value);
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
  UpdateTopicResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  Aws::String m_topicArn;

  Aws::String m_topicName;

  TopicState m_status{TopicState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_topicArnHasBeenSet = false;
  bool m_topicNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
