/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
 * <p>A block of reasoning text from the model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessReasoningTextBlock">AWS
 * API Reference</a></p>
 */
class HarnessReasoningTextBlock {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessReasoningTextBlock() = default;
  AWS_BEDROCKAGENTCORE_API HarnessReasoningTextBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessReasoningTextBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reasoning text.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  HarnessReasoningTextBlock& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Signature for verifying the reasoning content.</p>
   */
  inline const Aws::String& GetSignature() const { return m_signature; }
  inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
  template <typename SignatureT = Aws::String>
  void SetSignature(SignatureT&& value) {
    m_signatureHasBeenSet = true;
    m_signature = std::forward<SignatureT>(value);
  }
  template <typename SignatureT = Aws::String>
  HarnessReasoningTextBlock& WithSignature(SignatureT&& value) {
    SetSignature(std::forward<SignatureT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_signature;
  bool m_textHasBeenSet = false;
  bool m_signatureHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
