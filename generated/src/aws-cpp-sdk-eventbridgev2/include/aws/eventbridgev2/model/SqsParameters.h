/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/SqsMessageAttributeValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>SQS invocation parameters for subscribers. Values are forwarded to the SQS
 * SendMessageBatch API. All scalar values accept a literal or a JSONata expression
 * (e.g. &quot;{% $events.Data.groupId %}&quot;).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/SqsParameters">AWS
 * API Reference</a></p>
 */
class SqsParameters {
 public:
  AWS_EVENTBRIDGEV2_API SqsParameters() = default;
  AWS_EVENTBRIDGEV2_API SqsParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API SqsParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Message group ID for FIFO queues. Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetMessageGroupId() const { return m_messageGroupId; }
  inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }
  template <typename MessageGroupIdT = Aws::String>
  void SetMessageGroupId(MessageGroupIdT&& value) {
    m_messageGroupIdHasBeenSet = true;
    m_messageGroupId = std::forward<MessageGroupIdT>(value);
  }
  template <typename MessageGroupIdT = Aws::String>
  SqsParameters& WithMessageGroupId(MessageGroupIdT&& value) {
    SetMessageGroupId(std::forward<MessageGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Message deduplication ID for FIFO queues. Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetMessageDeduplicationId() const { return m_messageDeduplicationId; }
  inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }
  template <typename MessageDeduplicationIdT = Aws::String>
  void SetMessageDeduplicationId(MessageDeduplicationIdT&& value) {
    m_messageDeduplicationIdHasBeenSet = true;
    m_messageDeduplicationId = std::forward<MessageDeduplicationIdT>(value);
  }
  template <typename MessageDeduplicationIdT = Aws::String>
  SqsParameters& WithMessageDeduplicationId(MessageDeduplicationIdT&& value) {
    SetMessageDeduplicationId(std::forward<MessageDeduplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Delay in seconds before the message becomes visible, standard queues only.
   * Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetDelaySeconds() const { return m_delaySeconds; }
  inline bool DelaySecondsHasBeenSet() const { return m_delaySecondsHasBeenSet; }
  template <typename DelaySecondsT = Aws::String>
  void SetDelaySeconds(DelaySecondsT&& value) {
    m_delaySecondsHasBeenSet = true;
    m_delaySeconds = std::forward<DelaySecondsT>(value);
  }
  template <typename DelaySecondsT = Aws::String>
  SqsParameters& WithDelaySeconds(DelaySecondsT&& value) {
    SetDelaySeconds(std::forward<DelaySecondsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom message attributes (name/type/value).</p>
   */
  inline const Aws::Map<Aws::String, SqsMessageAttributeValue>& GetMessageAttributes() const { return m_messageAttributes; }
  inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
  template <typename MessageAttributesT = Aws::Map<Aws::String, SqsMessageAttributeValue>>
  void SetMessageAttributes(MessageAttributesT&& value) {
    m_messageAttributesHasBeenSet = true;
    m_messageAttributes = std::forward<MessageAttributesT>(value);
  }
  template <typename MessageAttributesT = Aws::Map<Aws::String, SqsMessageAttributeValue>>
  SqsParameters& WithMessageAttributes(MessageAttributesT&& value) {
    SetMessageAttributes(std::forward<MessageAttributesT>(value));
    return *this;
  }
  template <typename MessageAttributesKeyT = Aws::String, typename MessageAttributesValueT = SqsMessageAttributeValue>
  SqsParameters& AddMessageAttributes(MessageAttributesKeyT&& key, MessageAttributesValueT&& value) {
    m_messageAttributesHasBeenSet = true;
    m_messageAttributes.emplace(std::forward<MessageAttributesKeyT>(key), std::forward<MessageAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>System message attributes (e.g., AWSTraceHeader).</p>
   */
  inline const Aws::Map<Aws::String, SqsMessageAttributeValue>& GetMessageSystemAttributes() const { return m_messageSystemAttributes; }
  inline bool MessageSystemAttributesHasBeenSet() const { return m_messageSystemAttributesHasBeenSet; }
  template <typename MessageSystemAttributesT = Aws::Map<Aws::String, SqsMessageAttributeValue>>
  void SetMessageSystemAttributes(MessageSystemAttributesT&& value) {
    m_messageSystemAttributesHasBeenSet = true;
    m_messageSystemAttributes = std::forward<MessageSystemAttributesT>(value);
  }
  template <typename MessageSystemAttributesT = Aws::Map<Aws::String, SqsMessageAttributeValue>>
  SqsParameters& WithMessageSystemAttributes(MessageSystemAttributesT&& value) {
    SetMessageSystemAttributes(std::forward<MessageSystemAttributesT>(value));
    return *this;
  }
  template <typename MessageSystemAttributesKeyT = Aws::String, typename MessageSystemAttributesValueT = SqsMessageAttributeValue>
  SqsParameters& AddMessageSystemAttributes(MessageSystemAttributesKeyT&& key, MessageSystemAttributesValueT&& value) {
    m_messageSystemAttributesHasBeenSet = true;
    m_messageSystemAttributes.emplace(std::forward<MessageSystemAttributesKeyT>(key), std::forward<MessageSystemAttributesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_messageGroupId;

  Aws::String m_messageDeduplicationId;

  Aws::String m_delaySeconds;

  Aws::Map<Aws::String, SqsMessageAttributeValue> m_messageAttributes;

  Aws::Map<Aws::String, SqsMessageAttributeValue> m_messageSystemAttributes;
  bool m_messageGroupIdHasBeenSet = false;
  bool m_messageDeduplicationIdHasBeenSet = false;
  bool m_delaySecondsHasBeenSet = false;
  bool m_messageAttributesHasBeenSet = false;
  bool m_messageSystemAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
