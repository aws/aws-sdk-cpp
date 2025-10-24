/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/UserIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class CompleteResourceTokenAuthRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API CompleteResourceTokenAuthRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CompleteResourceTokenAuth"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The OAuth2.0 token or user ID that was used to generate the workload access
   * token used for initiating the user authorization flow to retrieve OAuth2.0
   * tokens.</p>
   */
  inline const UserIdentifier& GetUserIdentifier() const { return m_userIdentifier; }
  inline bool UserIdentifierHasBeenSet() const { return m_userIdentifierHasBeenSet; }
  template <typename UserIdentifierT = UserIdentifier>
  void SetUserIdentifier(UserIdentifierT&& value) {
    m_userIdentifierHasBeenSet = true;
    m_userIdentifier = std::forward<UserIdentifierT>(value);
  }
  template <typename UserIdentifierT = UserIdentifier>
  CompleteResourceTokenAuthRequest& WithUserIdentifier(UserIdentifierT&& value) {
    SetUserIdentifier(std::forward<UserIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier for the user's authentication session for retrieving OAuth2
   * tokens. This ID tracks the authorization flow state across multiple requests and
   * responses during the OAuth2 authentication process.</p>
   */
  inline const Aws::String& GetSessionUri() const { return m_sessionUri; }
  inline bool SessionUriHasBeenSet() const { return m_sessionUriHasBeenSet; }
  template <typename SessionUriT = Aws::String>
  void SetSessionUri(SessionUriT&& value) {
    m_sessionUriHasBeenSet = true;
    m_sessionUri = std::forward<SessionUriT>(value);
  }
  template <typename SessionUriT = Aws::String>
  CompleteResourceTokenAuthRequest& WithSessionUri(SessionUriT&& value) {
    SetSessionUri(std::forward<SessionUriT>(value));
    return *this;
  }
  ///@}
 private:
  UserIdentifier m_userIdentifier;
  bool m_userIdentifierHasBeenSet = false;

  Aws::String m_sessionUri;
  bool m_sessionUriHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
