/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/AssistantMessageBlock.h>
#include <aws/devops-agent/model/UserMessageBlock.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>A message in a conversation, either from the user or the
 * assistant.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Message">AWS
 * API Reference</a></p>
 */
class Message {
 public:
  AWS_DEVOPSAGENT_API Message() = default;
  AWS_DEVOPSAGENT_API Message(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A message from the user.</p>
   */
  inline const Aws::Vector<UserMessageBlock>& GetUserMessage() const { return m_userMessage; }
  inline bool UserMessageHasBeenSet() const { return m_userMessageHasBeenSet; }
  template <typename UserMessageT = Aws::Vector<UserMessageBlock>>
  void SetUserMessage(UserMessageT&& value) {
    m_userMessageHasBeenSet = true;
    m_userMessage = std::forward<UserMessageT>(value);
  }
  template <typename UserMessageT = Aws::Vector<UserMessageBlock>>
  Message& WithUserMessage(UserMessageT&& value) {
    SetUserMessage(std::forward<UserMessageT>(value));
    return *this;
  }
  template <typename UserMessageT = UserMessageBlock>
  Message& AddUserMessage(UserMessageT&& value) {
    m_userMessageHasBeenSet = true;
    m_userMessage.emplace_back(std::forward<UserMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message from the assistant.</p>
   */
  inline const Aws::Vector<AssistantMessageBlock>& GetAssistantMessage() const { return m_assistantMessage; }
  inline bool AssistantMessageHasBeenSet() const { return m_assistantMessageHasBeenSet; }
  template <typename AssistantMessageT = Aws::Vector<AssistantMessageBlock>>
  void SetAssistantMessage(AssistantMessageT&& value) {
    m_assistantMessageHasBeenSet = true;
    m_assistantMessage = std::forward<AssistantMessageT>(value);
  }
  template <typename AssistantMessageT = Aws::Vector<AssistantMessageBlock>>
  Message& WithAssistantMessage(AssistantMessageT&& value) {
    SetAssistantMessage(std::forward<AssistantMessageT>(value));
    return *this;
  }
  template <typename AssistantMessageT = AssistantMessageBlock>
  Message& AddAssistantMessage(AssistantMessageT&& value) {
    m_assistantMessageHasBeenSet = true;
    m_assistantMessage.emplace_back(std::forward<AssistantMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<UserMessageBlock> m_userMessage;

  Aws::Vector<AssistantMessageBlock> m_assistantMessage;
  bool m_userMessageHasBeenSet = false;
  bool m_assistantMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
