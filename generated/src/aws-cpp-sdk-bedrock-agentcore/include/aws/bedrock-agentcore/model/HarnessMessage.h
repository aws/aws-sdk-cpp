/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlock.h>
#include <aws/bedrock-agentcore/model/HarnessConversationRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>A message in the conversation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessMessage">AWS
 * API Reference</a></p>
 */
class HarnessMessage {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessMessage() = default;
  AWS_BEDROCKAGENTCORE_API HarnessMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The role of the message sender.</p>
   */
  inline HarnessConversationRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(HarnessConversationRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline HarnessMessage& WithRole(HarnessConversationRole value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content blocks of the message.</p>
   */
  inline const Aws::Vector<HarnessContentBlock>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Vector<HarnessContentBlock>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Vector<HarnessContentBlock>>
  HarnessMessage& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  template <typename ContentT = HarnessContentBlock>
  HarnessMessage& AddContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content.emplace_back(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessConversationRole m_role{HarnessConversationRole::NOT_SET};

  Aws::Vector<HarnessContentBlock> m_content;
  bool m_roleHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
