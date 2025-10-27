/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The configuration to invoke a self-managed memory processing pipeline
 * with.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InvocationConfiguration">AWS
 * API Reference</a></p>
 */
class InvocationConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InvocationConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InvocationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InvocationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the SNS topic for job notifications.</p>
   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  InvocationConfiguration& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 bucket name for event payload delivery.</p>
   */
  inline const Aws::String& GetPayloadDeliveryBucketName() const { return m_payloadDeliveryBucketName; }
  inline bool PayloadDeliveryBucketNameHasBeenSet() const { return m_payloadDeliveryBucketNameHasBeenSet; }
  template <typename PayloadDeliveryBucketNameT = Aws::String>
  void SetPayloadDeliveryBucketName(PayloadDeliveryBucketNameT&& value) {
    m_payloadDeliveryBucketNameHasBeenSet = true;
    m_payloadDeliveryBucketName = std::forward<PayloadDeliveryBucketNameT>(value);
  }
  template <typename PayloadDeliveryBucketNameT = Aws::String>
  InvocationConfiguration& WithPayloadDeliveryBucketName(PayloadDeliveryBucketNameT&& value) {
    SetPayloadDeliveryBucketName(std::forward<PayloadDeliveryBucketNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_topicArn;
  bool m_topicArnHasBeenSet = false;

  Aws::String m_payloadDeliveryBucketName;
  bool m_payloadDeliveryBucketNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
