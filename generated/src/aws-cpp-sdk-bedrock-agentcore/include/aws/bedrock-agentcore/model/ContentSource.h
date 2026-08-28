/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/InlineMemoryContent.h>

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
 * <p>The source of the content to ingest. Only inline content is
 * supported.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ContentSource">AWS
 * API Reference</a></p>
 */
class ContentSource {
 public:
  AWS_BEDROCKAGENTCORE_API ContentSource() = default;
  AWS_BEDROCKAGENTCORE_API ContentSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ContentSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content included directly in the request.</p>
   */
  inline const InlineMemoryContent& GetInline() const { return m_inline; }
  inline bool InlineHasBeenSet() const { return m_inlineHasBeenSet; }
  template <typename InlineT = InlineMemoryContent>
  void SetInline(InlineT&& value) {
    m_inlineHasBeenSet = true;
    m_inline = std::forward<InlineT>(value);
  }
  template <typename InlineT = InlineMemoryContent>
  ContentSource& WithInline(InlineT&& value) {
    SetInline(std::forward<InlineT>(value));
    return *this;
  }
  ///@}
 private:
  InlineMemoryContent m_inline;
  bool m_inlineHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
