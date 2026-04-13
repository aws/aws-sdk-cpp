/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordOAuthGrantType.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>OAuth credential provider configuration for authenticating with an external
 * source during synchronization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RegistryRecordOAuthCredentialProvider">AWS
 * API Reference</a></p>
 */
class RegistryRecordOAuthCredentialProvider {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordOAuthCredentialProvider() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordOAuthCredentialProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordOAuthCredentialProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the OAuth credential provider resource.</p>
   */
  inline const Aws::String& GetProviderArn() const { return m_providerArn; }
  inline bool ProviderArnHasBeenSet() const { return m_providerArnHasBeenSet; }
  template <typename ProviderArnT = Aws::String>
  void SetProviderArn(ProviderArnT&& value) {
    m_providerArnHasBeenSet = true;
    m_providerArn = std::forward<ProviderArnT>(value);
  }
  template <typename ProviderArnT = Aws::String>
  RegistryRecordOAuthCredentialProvider& WithProviderArn(ProviderArnT&& value) {
    SetProviderArn(std::forward<ProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth grant type. Currently only <code>CLIENT_CREDENTIALS</code> is
   * supported.</p>
   */
  inline RegistryRecordOAuthGrantType GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  inline void SetGrantType(RegistryRecordOAuthGrantType value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = value;
  }
  inline RegistryRecordOAuthCredentialProvider& WithGrantType(RegistryRecordOAuthGrantType value) {
    SetGrantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes to request during authentication.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  RegistryRecordOAuthCredentialProvider& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  RegistryRecordOAuthCredentialProvider& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional custom parameters for the OAuth flow.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetCustomParameters() const { return m_customParameters; }
  inline bool CustomParametersHasBeenSet() const { return m_customParametersHasBeenSet; }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomParameters(CustomParametersT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters = std::forward<CustomParametersT>(value);
  }
  template <typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
  RegistryRecordOAuthCredentialProvider& WithCustomParameters(CustomParametersT&& value) {
    SetCustomParameters(std::forward<CustomParametersT>(value));
    return *this;
  }
  template <typename CustomParametersKeyT = Aws::String, typename CustomParametersValueT = Aws::String>
  RegistryRecordOAuthCredentialProvider& AddCustomParameters(CustomParametersKeyT&& key, CustomParametersValueT&& value) {
    m_customParametersHasBeenSet = true;
    m_customParameters.emplace(std::forward<CustomParametersKeyT>(key), std::forward<CustomParametersValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_providerArn;

  RegistryRecordOAuthGrantType m_grantType{RegistryRecordOAuthGrantType::NOT_SET};

  Aws::Vector<Aws::String> m_scopes;

  Aws::Map<Aws::String, Aws::String> m_customParameters;
  bool m_providerArnHasBeenSet = false;
  bool m_grantTypeHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_customParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
