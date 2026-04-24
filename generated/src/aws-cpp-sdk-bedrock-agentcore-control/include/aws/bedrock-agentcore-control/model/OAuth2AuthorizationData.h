/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>OAuth2-specific authorization data, including the authorization URL and user
 * identifier for the authorization session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OAuth2AuthorizationData">AWS
 * API Reference</a></p>
 */
class OAuth2AuthorizationData {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API OAuth2AuthorizationData() = default;
  AWS_BEDROCKAGENTCORECONTROL_API OAuth2AuthorizationData(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API OAuth2AuthorizationData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL to initiate the authorization process. This URL is provided when the
   * OAuth2 access token requires user authorization.</p>
   */
  inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
  inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }
  template <typename AuthorizationUrlT = Aws::String>
  void SetAuthorizationUrl(AuthorizationUrlT&& value) {
    m_authorizationUrlHasBeenSet = true;
    m_authorizationUrl = std::forward<AuthorizationUrlT>(value);
  }
  template <typename AuthorizationUrlT = Aws::String>
  OAuth2AuthorizationData& WithAuthorizationUrl(AuthorizationUrlT&& value) {
    SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user identifier associated with the OAuth2 authorization session that is
   * defined by AgentCore Gateway.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  OAuth2AuthorizationData& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authorizationUrl;

  Aws::String m_userId;
  bool m_authorizationUrlHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
