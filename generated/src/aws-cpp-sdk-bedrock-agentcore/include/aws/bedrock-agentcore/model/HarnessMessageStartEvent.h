/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessConversationRole.h>

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
 * <p>Event indicating the start of a message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessMessageStartEvent">AWS
 * API Reference</a></p>
 */
class HarnessMessageStartEvent {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessMessageStartEvent() = default;
  AWS_BEDROCKAGENTCORE_API HarnessMessageStartEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessMessageStartEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline HarnessMessageStartEvent& WithRole(HarnessConversationRole value) {
    SetRole(value);
    return *this;
  }
  ///@}
 private:
  HarnessConversationRole m_role{HarnessConversationRole::NOT_SET};
  bool m_roleHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
