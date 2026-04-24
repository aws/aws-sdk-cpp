/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BrowserAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Request for the InvokeBrowser operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeBrowserRequest">AWS
 * API Reference</a></p>
 */
class InvokeBrowserRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeBrowserRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeBrowser"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the browser associated with the session. This must
   * match the identifier used when creating the session with
   * <code>StartBrowserSession</code>.</p>
   */
  inline const Aws::String& GetBrowserIdentifier() const { return m_browserIdentifier; }
  inline bool BrowserIdentifierHasBeenSet() const { return m_browserIdentifierHasBeenSet; }
  template <typename BrowserIdentifierT = Aws::String>
  void SetBrowserIdentifier(BrowserIdentifierT&& value) {
    m_browserIdentifierHasBeenSet = true;
    m_browserIdentifier = std::forward<BrowserIdentifierT>(value);
  }
  template <typename BrowserIdentifierT = Aws::String>
  InvokeBrowserRequest& WithBrowserIdentifier(BrowserIdentifierT&& value) {
    SetBrowserIdentifier(std::forward<BrowserIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the browser session on which to perform the action.
   * This must be an active session created with
   * <code>StartBrowserSession</code>.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  InvokeBrowserRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The browser action to perform. Exactly one member of the
   * <code>BrowserAction</code> union must be set per request.</p>
   */
  inline const BrowserAction& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = BrowserAction>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = BrowserAction>
  InvokeBrowserRequest& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_browserIdentifier;

  Aws::String m_sessionId;

  BrowserAction m_action;
  bool m_browserIdentifierHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
