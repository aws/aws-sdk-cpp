/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Oauth2Discovery.h>
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
 * <p>Output configuration for a GitHub OAuth2 provider.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GithubOauth2ProviderConfigOutput">AWS
 * API Reference</a></p>
 */
class GithubOauth2ProviderConfigOutput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GithubOauth2ProviderConfigOutput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GithubOauth2ProviderConfigOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API GithubOauth2ProviderConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth2 discovery information for the GitHub provider.</p>
   */
  inline const Oauth2Discovery& GetOauthDiscovery() const { return m_oauthDiscovery; }
  inline bool OauthDiscoveryHasBeenSet() const { return m_oauthDiscoveryHasBeenSet; }
  template <typename OauthDiscoveryT = Oauth2Discovery>
  void SetOauthDiscovery(OauthDiscoveryT&& value) {
    m_oauthDiscoveryHasBeenSet = true;
    m_oauthDiscovery = std::forward<OauthDiscoveryT>(value);
  }
  template <typename OauthDiscoveryT = Oauth2Discovery>
  GithubOauth2ProviderConfigOutput& WithOauthDiscovery(OauthDiscoveryT&& value) {
    SetOauthDiscovery(std::forward<OauthDiscoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client ID for the GitHub OAuth2 provider.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GithubOauth2ProviderConfigOutput& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}
 private:
  Oauth2Discovery m_oauthDiscovery;
  bool m_oauthDiscoveryHasBeenSet = false;

  Aws::String m_clientId;
  bool m_clientIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
