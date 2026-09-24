/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/SnsMessageAttributeValue.h>

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
 * <p>SNS invocation parameters for subscribers. Values are forwarded to the SNS
 * PublishBatch API. All scalar values accept a literal or a JSONata expression
 * (e.g. &quot;{% $events.Data.groupId %}&quot;).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/SnsParameters">AWS
 * API Reference</a></p>
 */
class SnsParameters {
 public:
  AWS_EVENTBRIDGEV2_API SnsParameters() = default;
  AWS_EVENTBRIDGEV2_API SnsParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API SnsParameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Message group ID for FIFO topics. Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetMessageGroupId() const { return m_messageGroupId; }
  inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }
  template <typename MessageGroupIdT = Aws::String>
  void SetMessageGroupId(MessageGroupIdT&& value) {
    m_messageGroupIdHasBeenSet = true;
    m_messageGroupId = std::forward<MessageGroupIdT>(value);
  }
  template <typename MessageGroupIdT = Aws::String>
  SnsParameters& WithMessageGroupId(MessageGroupIdT&& value) {
    SetMessageGroupId(std::forward<MessageGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Message deduplication ID for FIFO topics. Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetMessageDeduplicationId() const { return m_messageDeduplicationId; }
  inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }
  template <typename MessageDeduplicationIdT = Aws::String>
  void SetMessageDeduplicationId(MessageDeduplicationIdT&& value) {
    m_messageDeduplicationIdHasBeenSet = true;
    m_messageDeduplicationId = std::forward<MessageDeduplicationIdT>(value);
  }
  template <typename MessageDeduplicationIdT = Aws::String>
  SnsParameters& WithMessageDeduplicationId(MessageDeduplicationIdT&& value) {
    SetMessageDeduplicationId(std::forward<MessageDeduplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Subject line for email protocol subscriptions. Accepts JSONata
   * expression.</p>
   */
  inline const Aws::String& GetSubject() const { return m_subject; }
  inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
  template <typename SubjectT = Aws::String>
  void SetSubject(SubjectT&& value) {
    m_subjectHasBeenSet = true;
    m_subject = std::forward<SubjectT>(value);
  }
  template <typename SubjectT = Aws::String>
  SnsParameters& WithSubject(SubjectT&& value) {
    SetSubject(std::forward<SubjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-protocol message formatting mode, forwarded to SNS Publish unchanged.
   * Accepts JSONata expression.</p>
   */
  inline const Aws::String& GetMessageStructure() const { return m_messageStructure; }
  inline bool MessageStructureHasBeenSet() const { return m_messageStructureHasBeenSet; }
  template <typename MessageStructureT = Aws::String>
  void SetMessageStructure(MessageStructureT&& value) {
    m_messageStructureHasBeenSet = true;
    m_messageStructure = std::forward<MessageStructureT>(value);
  }
  template <typename MessageStructureT = Aws::String>
  SnsParameters& WithMessageStructure(MessageStructureT&& value) {
    SetMessageStructure(std::forward<MessageStructureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom message attributes for SNS filtering.</p>
   */
  inline const Aws::Map<Aws::String, SnsMessageAttributeValue>& GetMessageAttributes() const { return m_messageAttributes; }
  inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
  template <typename MessageAttributesT = Aws::Map<Aws::String, SnsMessageAttributeValue>>
  void SetMessageAttributes(MessageAttributesT&& value) {
    m_messageAttributesHasBeenSet = true;
    m_messageAttributes = std::forward<MessageAttributesT>(value);
  }
  template <typename MessageAttributesT = Aws::Map<Aws::String, SnsMessageAttributeValue>>
  SnsParameters& WithMessageAttributes(MessageAttributesT&& value) {
    SetMessageAttributes(std::forward<MessageAttributesT>(value));
    return *this;
  }
  template <typename MessageAttributesKeyT = Aws::String, typename MessageAttributesValueT = SnsMessageAttributeValue>
  SnsParameters& AddMessageAttributes(MessageAttributesKeyT&& key, MessageAttributesValueT&& value) {
    m_messageAttributesHasBeenSet = true;
    m_messageAttributes.emplace(std::forward<MessageAttributesKeyT>(key), std::forward<MessageAttributesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_messageGroupId;

  Aws::String m_messageDeduplicationId;

  Aws::String m_subject;

  Aws::String m_messageStructure;

  Aws::Map<Aws::String, SnsMessageAttributeValue> m_messageAttributes;
  bool m_messageGroupIdHasBeenSet = false;
  bool m_messageDeduplicationIdHasBeenSet = false;
  bool m_subjectHasBeenSet = false;
  bool m_messageStructureHasBeenSet = false;
  bool m_messageAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
