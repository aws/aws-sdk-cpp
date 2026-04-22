/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/OAuthGrantType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Configuration for an OAuth 2.0 credential provider used to authenticate tool
 * calls.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/OAuthCredentialProvider">AWS
 * API Reference</a></p>
 */
class OAuthCredentialProvider {
 public:
  AWS_BEDROCKAGENTCORE_API OAuthCredentialProvider() = default;
  AWS_BEDROCKAGENTCORE_API OAuthCredentialProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API OAuthCredentialProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the OAuth 2.0 credential provider in AgentCore Identity.</p>
   */
  inline const Aws::String& GetProviderArn() const { return m_providerArn; }
  inline bool ProviderArnHasBeenSet() const { return m_providerArnHasBeenSet; }
  template <typename ProviderArnT = Aws::String>
  void SetProviderArn(ProviderArnT&& value) {
    m_providerArnHasBeenSet = true;
    m_providerArn = std::forward<ProviderArnT>(value);
  }
  template <typename ProviderArnT = Aws::String>
  OAuthCredentialProvider& WithProviderArn(ProviderArnT&& value) {
    SetProviderArn(std::forward<ProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 scopes to request when obtaining an access token.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  OAuthCredentialProvider& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  OAuthCredentialProvider& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional custom parameters to include in the OAuth 2.0 token request.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetCustomParameters() const { return m_customParameters; }
  inline bool CustomParametersHasBeenSet() const { return m_customParametersHasBeenSet; }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomParameters(CustomParametersT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters = std::forward<CustomParametersT>(value);
  }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  OAuthCredentialProvider& WithCustomParameters(CustomParametersT&& value) {
    SetCustomParameters(std::forward<CustomParametersT>(value));
    return *this;
  }
  template <typename CustomParametersKeyT = Aws::String, typename CustomParametersValueT = Aws::String>
  OAuthCredentialProvider& AddCustomParameters(CustomParametersKeyT&& key, CustomParametersValueT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters.emplace(std::forward<CustomParametersKeyT>(key), std::forward<CustomParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 grant type to use for authentication.</p>
   */
  inline OAuthGrantType GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  inline void SetGrantType(OAuthGrantType value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = value;
  }
  inline OAuthCredentialProvider& WithGrantType(OAuthGrantType value) {
    SetGrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default return URL for the OAuth 2.0 authorization flow.</p>
   */
  inline const Aws::String& GetDefaultReturnUrl() const { return m_defaultReturnUrl; }
  inline bool DefaultReturnUrlHasBeenSet() const { return m_defaultReturnUrlHasBeenSet; }
  template <typename DefaultReturnUrlT = Aws::String>
  void SetDefaultReturnUrl(DefaultReturnUrlT&& value) {
    m_defaultReturnUrlHasBeenSet = true;
    m_defaultReturnUrl = std::forward<DefaultReturnUrlT>(value);
  }
  template <typename DefaultReturnUrlT = Aws::String>
  OAuthCredentialProvider& WithDefaultReturnUrl(DefaultReturnUrlT&& value) {
    SetDefaultReturnUrl(std::forward<DefaultReturnUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_providerArn;

  Aws::Vector<Aws::String> m_scopes;

  Aws::Map<Aws::String, Aws::String> m_customParameters;

  OAuthGrantType m_grantType{OAuthGrantType::NOT_SET};

  Aws::String m_defaultReturnUrl;
  bool m_providerArnHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_customParametersHasBeenSet = false;
  bool m_grantTypeHasBeenSet = false;
  bool m_defaultReturnUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
