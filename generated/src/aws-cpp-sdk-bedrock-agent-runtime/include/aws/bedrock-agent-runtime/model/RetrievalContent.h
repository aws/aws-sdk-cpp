/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>The content retrieved from a knowledge source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrievalContent">AWS
 * API Reference</a></p>
 */
class RetrievalContent {
 public:
  AWS_BEDROCKAGENTRUNTIME_API RetrievalContent() = default;
  AWS_BEDROCKAGENTRUNTIME_API RetrievalContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API RetrievalContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The binary content of the retrieved item.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetByteContent() const { return m_byteContent; }
  inline bool ByteContentHasBeenSet() const { return m_byteContentHasBeenSet; }
  template <typename ByteContentT = Aws::Utils::ByteBuffer>
  void SetByteContent(ByteContentT&& value) {
    m_byteContentHasBeenSet = true;
    m_byteContent = std::forward<ByteContentT>(value);
  }
  template <typename ByteContentT = Aws::Utils::ByteBuffer>
  RetrievalContent& WithByteContent(ByteContentT&& value) {
    SetByteContent(std::forward<ByteContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type of the retrieved content.</p>
   */
  inline const Aws::String& GetMimeType() const { return m_mimeType; }
  inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
  template <typename MimeTypeT = Aws::String>
  void SetMimeType(MimeTypeT&& value) {
    m_mimeTypeHasBeenSet = true;
    m_mimeType = std::forward<MimeTypeT>(value);
  }
  template <typename MimeTypeT = Aws::String>
  RetrievalContent& WithMimeType(MimeTypeT&& value) {
    SetMimeType(std::forward<MimeTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text content of the retrieved item.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  RetrievalContent& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_byteContent{};

  Aws::String m_mimeType;

  Aws::String m_text;
  bool m_byteContentHasBeenSet = false;
  bool m_mimeTypeHasBeenSet = false;
  bool m_textHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
