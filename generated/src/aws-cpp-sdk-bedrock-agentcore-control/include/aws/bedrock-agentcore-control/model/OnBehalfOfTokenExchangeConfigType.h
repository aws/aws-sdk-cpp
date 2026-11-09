/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OnBehalfOfAuthenticationConfig.h>
#include <aws/bedrock-agentcore-control/model/OnBehalfOfTokenExchangeGrantTypeType.h>
#include <aws/bedrock-agentcore-control/model/TokenExchangeGrantTypeConfigType.h>

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
 * <p>Configuration for on-behalf-of token exchange.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/OnBehalfOfTokenExchangeConfigType">AWS
 * API Reference</a></p>
 */
class OnBehalfOfTokenExchangeConfigType {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API OnBehalfOfTokenExchangeConfigType() = default;
  AWS_BEDROCKAGENTCORECONTROL_API OnBehalfOfTokenExchangeConfigType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API OnBehalfOfTokenExchangeConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The grant type for the on-behalf-of token exchange.</p>
   */
  inline OnBehalfOfTokenExchangeGrantTypeType GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  inline void SetGrantType(OnBehalfOfTokenExchangeGrantTypeType value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = value;
  }
  inline OnBehalfOfTokenExchangeConfigType& WithGrantType(OnBehalfOfTokenExchangeGrantTypeType value) {
    SetGrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration specific to the TOKEN_EXCHANGE grant type (RFC 8693).</p>
   */
  inline const TokenExchangeGrantTypeConfigType& GetTokenExchangeGrantTypeConfig() const { return m_tokenExchangeGrantTypeConfig; }
  inline bool TokenExchangeGrantTypeConfigHasBeenSet() const { return m_tokenExchangeGrantTypeConfigHasBeenSet; }
  template <typename TokenExchangeGrantTypeConfigT = TokenExchangeGrantTypeConfigType>
  void SetTokenExchangeGrantTypeConfig(TokenExchangeGrantTypeConfigT&& value) {
    m_tokenExchangeGrantTypeConfigHasBeenSet = true;
    m_tokenExchangeGrantTypeConfig = std::forward<TokenExchangeGrantTypeConfigT>(value);
  }
  template <typename TokenExchangeGrantTypeConfigT = TokenExchangeGrantTypeConfigType>
  OnBehalfOfTokenExchangeConfigType& WithTokenExchangeGrantTypeConfig(TokenExchangeGrantTypeConfigT&& value) {
    SetTokenExchangeGrantTypeConfig(std::forward<TokenExchangeGrantTypeConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the client authentication configuration to use for the on-behalf-of
   * token exchange. With this configuration, you override the provider level client
   * authentication method for the on-behalf-of exchange with the identity provider.
   * If you don't specify this configuration, we use the provider level client
   * authentication method.</p>
   */
  inline const OnBehalfOfAuthenticationConfig& GetOnBehalfOfAuthenticationConfig() const { return m_onBehalfOfAuthenticationConfig; }
  inline bool OnBehalfOfAuthenticationConfigHasBeenSet() const { return m_onBehalfOfAuthenticationConfigHasBeenSet; }
  template <typename OnBehalfOfAuthenticationConfigT = OnBehalfOfAuthenticationConfig>
  void SetOnBehalfOfAuthenticationConfig(OnBehalfOfAuthenticationConfigT&& value) {
    m_onBehalfOfAuthenticationConfigHasBeenSet = true;
    m_onBehalfOfAuthenticationConfig = std::forward<OnBehalfOfAuthenticationConfigT>(value);
  }
  template <typename OnBehalfOfAuthenticationConfigT = OnBehalfOfAuthenticationConfig>
  OnBehalfOfTokenExchangeConfigType& WithOnBehalfOfAuthenticationConfig(OnBehalfOfAuthenticationConfigT&& value) {
    SetOnBehalfOfAuthenticationConfig(std::forward<OnBehalfOfAuthenticationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  OnBehalfOfTokenExchangeGrantTypeType m_grantType{OnBehalfOfTokenExchangeGrantTypeType::NOT_SET};

  TokenExchangeGrantTypeConfigType m_tokenExchangeGrantTypeConfig;

  OnBehalfOfAuthenticationConfig m_onBehalfOfAuthenticationConfig;
  bool m_grantTypeHasBeenSet = false;
  bool m_tokenExchangeGrantTypeConfigHasBeenSet = false;
  bool m_onBehalfOfAuthenticationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
