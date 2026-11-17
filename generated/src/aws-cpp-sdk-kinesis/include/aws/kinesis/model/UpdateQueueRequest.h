/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/QueueAttributes.h>

#include <utility>

namespace Aws {
namespace Kinesis {
namespace Model {

/**
 */
class UpdateQueueRequest : public KinesisRequest {
 public:
  AWS_KINESIS_API UpdateQueueRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateQueue"; }

  AWS_KINESIS_API Aws::String SerializePayload() const override;

  AWS_KINESIS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_KINESIS_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ARN of the queue to update.</p>
   */
  inline const Aws::String& GetQueueARN() const { return m_queueARN; }
  inline bool QueueARNHasBeenSet() const { return m_queueARNHasBeenSet; }
  template <typename QueueARNT = Aws::String>
  void SetQueueARN(QueueARNT&& value) {
    m_queueARNHasBeenSet = true;
    m_queueARN = std::forward<QueueARNT>(value);
  }
  template <typename QueueARNT = Aws::String>
  UpdateQueueRequest& WithQueueARN(QueueARNT&& value) {
    SetQueueARN(std::forward<QueueARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration attributes to apply to the queue. Attributes you do not
   * specify are left unchanged.</p>
   */
  inline const QueueAttributes& GetQueueAttributes() const { return m_queueAttributes; }
  inline bool QueueAttributesHasBeenSet() const { return m_queueAttributesHasBeenSet; }
  template <typename QueueAttributesT = QueueAttributes>
  void SetQueueAttributes(QueueAttributesT&& value) {
    m_queueAttributesHasBeenSet = true;
    m_queueAttributes = std::forward<QueueAttributesT>(value);
  }
  template <typename QueueAttributesT = QueueAttributes>
  UpdateQueueRequest& WithQueueAttributes(QueueAttributesT&& value) {
    SetQueueAttributes(std::forward<QueueAttributesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queueARN;

  QueueAttributes m_queueAttributes;
  bool m_queueARNHasBeenSet = false;
  bool m_queueAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
