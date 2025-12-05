/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/InputImageFormat.h>
#include <aws/core/utils/Array.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Contains the image data for multimodal knowledge base queries, including
 * format and content.</p> <p>This data type is used in the following API
 * operations:</p> <ul> <li> <p> <a
 * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_Retrieve.html#API_agent-runtime_Retrieve_RequestSyntax">Retrieve
 * request</a> – in the <code>image</code> field</p> </li> </ul><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InputImage">AWS
 * API Reference</a></p>
 */
class InputImage {
 public:
  AWS_BEDROCKAGENTRUNTIME_API InputImage() = default;
  AWS_BEDROCKAGENTRUNTIME_API InputImage(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API InputImage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The format of the input image. Supported formats include png, gif, jpeg, and
   * webp.</p>
   */
  inline InputImageFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(InputImageFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline InputImage& WithFormat(InputImageFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The base64-encoded image data for inline image content. Maximum size is
   * 5MB.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetInlineContent() const { return m_inlineContent; }
  inline bool InlineContentHasBeenSet() const { return m_inlineContentHasBeenSet; }
  template <typename InlineContentT = Aws::Utils::CryptoBuffer>
  void SetInlineContent(InlineContentT&& value) {
    m_inlineContentHasBeenSet = true;
    m_inlineContent = std::forward<InlineContentT>(value);
  }
  template <typename InlineContentT = Aws::Utils::CryptoBuffer>
  InputImage& WithInlineContent(InlineContentT&& value) {
    SetInlineContent(std::forward<InlineContentT>(value));
    return *this;
  }
  ///@}
 private:
  InputImageFormat m_format{InputImageFormat::NOT_SET};

  Aws::Utils::CryptoBuffer m_inlineContent{};
  bool m_formatHasBeenSet = false;
  bool m_inlineContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
