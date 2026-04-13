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
 * <p> A custom descriptor configuration for a registry record.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CustomDescriptor">AWS
 * API Reference</a></p>
 */
class CustomDescriptor {
 public:
  AWS_BEDROCKAGENTCORE_API CustomDescriptor() = default;
  AWS_BEDROCKAGENTCORE_API CustomDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CustomDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The inline content of the custom descriptor.</p>
   */
  inline const Aws::String& GetInlineContent() const { return m_inlineContent; }
  inline bool InlineContentHasBeenSet() const { return m_inlineContentHasBeenSet; }
  template <typename InlineContentT = Aws::String>
  void SetInlineContent(InlineContentT&& value) {
    m_inlineContentHasBeenSet = true;
    m_inlineContent = std::forward<InlineContentT>(value);
  }
  template <typename InlineContentT = Aws::String>
  CustomDescriptor& WithInlineContent(InlineContentT&& value) {
    SetInlineContent(std::forward<InlineContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inlineContent;
  bool m_inlineContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
