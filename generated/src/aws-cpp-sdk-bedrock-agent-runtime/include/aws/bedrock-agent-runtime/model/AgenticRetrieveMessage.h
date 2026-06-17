/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMessageContent.h>
#include <aws/bedrock-agent-runtime/model/ConversationRole.h>

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
 * <p>A message in the agentic retrieval conversation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMessage">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMessage {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMessage() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content of the message.</p>
   */
  inline const AgenticRetrieveMessageContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = AgenticRetrieveMessageContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = AgenticRetrieveMessageContent>
  AgenticRetrieveMessage& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of the message sender (e.g., user or assistant).</p>
   */
  inline ConversationRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(ConversationRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline AgenticRetrieveMessage& WithRole(ConversationRole value) {
    SetRole(value);
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveMessageContent m_content;

  ConversationRole m_role{ConversationRole::NOT_SET};
  bool m_contentHasBeenSet = false;
  bool m_roleHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
