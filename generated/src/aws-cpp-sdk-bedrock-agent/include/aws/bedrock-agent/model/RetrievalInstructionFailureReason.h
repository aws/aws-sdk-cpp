/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalInstructionFailureReasonCode.h>
#include <aws/bedrock-agent/model/RetrievalInstructionFieldName.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgent {
namespace Model {

/**
 * <p>One reason the most recent create or update did not succeed. code drives
 * programmatic branching (fix the text, fix the configuration, or retry); message
 * carries the specific cause.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/RetrievalInstructionFailureReason">AWS
 * API Reference</a></p>
 */
class RetrievalInstructionFailureReason {
 public:
  AWS_BEDROCKAGENT_API RetrievalInstructionFailureReason() = default;
  AWS_BEDROCKAGENT_API RetrievalInstructionFailureReason(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API RetrievalInstructionFailureReason& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instruction field this entry is about. Present on review rejections of a
   * specific field; absent when the failure applies to the whole review, because a
   * client-side execution failure or a service fault has no single field.</p>
   */
  inline RetrievalInstructionFieldName GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  inline void SetFieldName(RetrievalInstructionFieldName value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = value;
  }
  inline RetrievalInstructionFailureReason& WithFieldName(RetrievalInstructionFieldName value) {
    SetFieldName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Stable, machine-readable classification by fault attribution. Valid
   * values:</p> <ul> <li> <p>CONTENT_REJECTED – The review rejected the named
   * field's content; revise the text and resubmit.</p> </li> <li> <p>CLIENT_ERROR –
   * The review could not run for a customer-side reason, for example the customer
   * managed AWS KMS key could not be used; fix the configuration and resubmit.</p>
   * </li> <li> <p>INTERNAL_ERROR – The review could not complete due to a service
   * fault; retry the create or update.</p> </li> </ul> <p>New values may be added
   * over time; your client should tolerate values it does not recognize and treat
   * them as a failure.</p>
   */
  inline RetrievalInstructionFailureReasonCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(RetrievalInstructionFailureReasonCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline RetrievalInstructionFailureReason& WithCode(RetrievalInstructionFailureReasonCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human-readable explanation of the specific cause. Never contains the
   * customer's own text.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  RetrievalInstructionFailureReason& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  RetrievalInstructionFieldName m_fieldName{RetrievalInstructionFieldName::NOT_SET};

  RetrievalInstructionFailureReasonCode m_code{RetrievalInstructionFailureReasonCode::NOT_SET};

  Aws::String m_message;
  bool m_fieldNameHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
