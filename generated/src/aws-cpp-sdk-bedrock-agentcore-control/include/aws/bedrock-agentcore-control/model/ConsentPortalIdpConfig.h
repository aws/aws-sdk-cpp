/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>The identity provider configuration used to authenticate end users to the
 * consent portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConsentPortalIdpConfig">AWS
 * API Reference</a></p>
 */
class ConsentPortalIdpConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConsentPortalIdpConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConsentPortalIdpConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConsentPortalIdpConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the OAuth2 credential provider used to
   * authenticate end users to the consent portal.</p>
   */
  inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
  inline bool CredentialProviderArnHasBeenSet() const { return m_credentialProviderArnHasBeenSet; }
  template <typename CredentialProviderArnT = Aws::String>
  void SetCredentialProviderArn(CredentialProviderArnT&& value) {
    m_credentialProviderArnHasBeenSet = true;
    m_credentialProviderArn = std::forward<CredentialProviderArnT>(value);
  }
  template <typename CredentialProviderArnT = Aws::String>
  ConsentPortalIdpConfig& WithCredentialProviderArn(CredentialProviderArnT&& value) {
    SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth2 scopes that the consent portal requests when authenticating end
   * users.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  ConsentPortalIdpConfig& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  ConsentPortalIdpConfig& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audience value that the consent portal includes when requesting tokens
   * from the identity provider.</p>
   */
  inline const Aws::String& GetAudience() const { return m_audience; }
  inline bool AudienceHasBeenSet() const { return m_audienceHasBeenSet; }
  template <typename AudienceT = Aws::String>
  void SetAudience(AudienceT&& value) {
    m_audienceHasBeenSet = true;
    m_audience = std::forward<AudienceT>(value);
  }
  template <typename AudienceT = Aws::String>
  ConsentPortalIdpConfig& WithAudience(AudienceT&& value) {
    SetAudience(std::forward<AudienceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_credentialProviderArn;

  Aws::Vector<Aws::String> m_scopes;

  Aws::String m_audience;
  bool m_credentialProviderArnHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_audienceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
