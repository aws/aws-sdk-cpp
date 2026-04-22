/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A delta update to a reasoning content block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessReasoningContentBlockDelta">AWS
 * API Reference</a></p>
 */
class HarnessReasoningContentBlockDelta {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessReasoningContentBlockDelta() = default;
  AWS_BEDROCKAGENTCORE_API HarnessReasoningContentBlockDelta(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessReasoningContentBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Reasoning text delta.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  HarnessReasoningContentBlockDelta& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Redacted reasoning content.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetRedactedContent() const { return m_redactedContent; }
  inline bool RedactedContentHasBeenSet() const { return m_redactedContentHasBeenSet; }
  template <typename RedactedContentT = Aws::Utils::CryptoBuffer>
  void SetRedactedContent(RedactedContentT&& value) {
    m_redactedContentHasBeenSet = true;
    m_redactedContent = std::forward<RedactedContentT>(value);
  }
  template <typename RedactedContentT = Aws::Utils::CryptoBuffer>
  HarnessReasoningContentBlockDelta& WithRedactedContent(RedactedContentT&& value) {
    SetRedactedContent(std::forward<RedactedContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Signature for the reasoning content.</p>
   */
  inline const Aws::String& GetSignature() const { return m_signature; }
  inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
  template <typename SignatureT = Aws::String>
  void SetSignature(SignatureT&& value) {
    m_signatureHasBeenSet = true;
    m_signature = std::forward<SignatureT>(value);
  }
  template <typename SignatureT = Aws::String>
  HarnessReasoningContentBlockDelta& WithSignature(SignatureT&& value) {
    SetSignature(std::forward<SignatureT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::Utils::CryptoBuffer m_redactedContent{};

  Aws::String m_signature;
  bool m_textHasBeenSet = false;
  bool m_redactedContentHasBeenSet = false;
  bool m_signatureHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
