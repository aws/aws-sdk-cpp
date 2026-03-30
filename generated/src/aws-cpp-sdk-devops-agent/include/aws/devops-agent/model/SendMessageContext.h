/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Context object for additional message metadata</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageContext">AWS
 * API Reference</a></p>
 */
class SendMessageContext {
 public:
  AWS_DEVOPSAGENT_API SendMessageContext() = default;
  AWS_DEVOPSAGENT_API SendMessageContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current page or view the user is on</p>
   */
  inline const Aws::String& GetCurrentPage() const { return m_currentPage; }
  inline bool CurrentPageHasBeenSet() const { return m_currentPageHasBeenSet; }
  template <typename CurrentPageT = Aws::String>
  void SetCurrentPage(CurrentPageT&& value) {
    m_currentPageHasBeenSet = true;
    m_currentPage = std::forward<CurrentPageT>(value);
  }
  template <typename CurrentPageT = Aws::String>
  SendMessageContext& WithCurrentPage(CurrentPageT&& value) {
    SetCurrentPage(std::forward<CurrentPageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the last message in the conversation</p>
   */
  inline const Aws::String& GetLastMessage() const { return m_lastMessage; }
  inline bool LastMessageHasBeenSet() const { return m_lastMessageHasBeenSet; }
  template <typename LastMessageT = Aws::String>
  void SetLastMessage(LastMessageT&& value) {
    m_lastMessageHasBeenSet = true;
    m_lastMessage = std::forward<LastMessageT>(value);
  }
  template <typename LastMessageT = Aws::String>
  SendMessageContext& WithLastMessage(LastMessageT&& value) {
    SetLastMessage(std::forward<LastMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Response to a UI prompt (not a text conversation message)</p>
   */
  inline const Aws::String& GetUserActionResponse() const { return m_userActionResponse; }
  inline bool UserActionResponseHasBeenSet() const { return m_userActionResponseHasBeenSet; }
  template <typename UserActionResponseT = Aws::String>
  void SetUserActionResponse(UserActionResponseT&& value) {
    m_userActionResponseHasBeenSet = true;
    m_userActionResponse = std::forward<UserActionResponseT>(value);
  }
  template <typename UserActionResponseT = Aws::String>
  SendMessageContext& WithUserActionResponse(UserActionResponseT&& value) {
    SetUserActionResponse(std::forward<UserActionResponseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_currentPage;

  Aws::String m_lastMessage;

  Aws::String m_userActionResponse;
  bool m_currentPageHasBeenSet = false;
  bool m_lastMessageHasBeenSet = false;
  bool m_userActionResponseHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
