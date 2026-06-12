/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>A session associated with a user intent cluster.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/UserIntentAffectedSession">AWS
 * API Reference</a></p>
 */
class UserIntentAffectedSession {
 public:
  AWS_BEDROCKAGENTCORE_API UserIntentAffectedSession() = default;
  AWS_BEDROCKAGENTCORE_API UserIntentAffectedSession(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API UserIntentAffectedSession& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  UserIntentAffectedSession& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user messages from this session that contributed to the intent
   * cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserMessages() const { return m_userMessages; }
  inline bool UserMessagesHasBeenSet() const { return m_userMessagesHasBeenSet; }
  template <typename UserMessagesT = Aws::Vector<Aws::String>>
  void SetUserMessages(UserMessagesT&& value) {
    m_userMessagesHasBeenSet = true;
    m_userMessages = std::forward<UserMessagesT>(value);
  }
  template <typename UserMessagesT = Aws::Vector<Aws::String>>
  UserIntentAffectedSession& WithUserMessages(UserMessagesT&& value) {
    SetUserMessages(std::forward<UserMessagesT>(value));
    return *this;
  }
  template <typename UserMessagesT = Aws::String>
  UserIntentAffectedSession& AddUserMessages(UserMessagesT&& value) {
    m_userMessagesHasBeenSet = true;
    m_userMessages.emplace_back(std::forward<UserMessagesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::Vector<Aws::String> m_userMessages;
  bool m_sessionIdHasBeenSet = false;
  bool m_userMessagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
