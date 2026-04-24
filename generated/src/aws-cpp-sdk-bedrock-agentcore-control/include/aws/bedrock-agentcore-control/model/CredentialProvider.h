/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ApiKeyCredentialProvider.h>
#include <aws/bedrock-agentcore-control/model/IamCredentialProvider.h>
#include <aws/bedrock-agentcore-control/model/OAuthCredentialProvider.h>

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
 * <p>A credential provider for gateway authentication. This structure contains the
 * configuration for authenticating with the target endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CredentialProvider">AWS
 * API Reference</a></p>
 */
class CredentialProvider {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CredentialProvider() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CredentialProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CredentialProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth credential provider. This provider uses OAuth authentication to
   * access the target endpoint.</p>
   */
  inline const OAuthCredentialProvider& GetOauthCredentialProvider() const { return m_oauthCredentialProvider; }
  inline bool OauthCredentialProviderHasBeenSet() const { return m_oauthCredentialProviderHasBeenSet; }
  template <typename OauthCredentialProviderT = OAuthCredentialProvider>
  void SetOauthCredentialProvider(OauthCredentialProviderT&& value) {
    m_oauthCredentialProviderHasBeenSet = true;
    m_oauthCredentialProvider = std::forward<OauthCredentialProviderT>(value);
  }
  template <typename OauthCredentialProviderT = OAuthCredentialProvider>
  CredentialProvider& WithOauthCredentialProvider(OauthCredentialProviderT&& value) {
    SetOauthCredentialProvider(std::forward<OauthCredentialProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API key credential provider. This provider uses an API key to
   * authenticate with the target endpoint.</p>
   */
  inline const ApiKeyCredentialProvider& GetApiKeyCredentialProvider() const { return m_apiKeyCredentialProvider; }
  inline bool ApiKeyCredentialProviderHasBeenSet() const { return m_apiKeyCredentialProviderHasBeenSet; }
  template <typename ApiKeyCredentialProviderT = ApiKeyCredentialProvider>
  void SetApiKeyCredentialProvider(ApiKeyCredentialProviderT&& value) {
    m_apiKeyCredentialProviderHasBeenSet = true;
    m_apiKeyCredentialProvider = std::forward<ApiKeyCredentialProviderT>(value);
  }
  template <typename ApiKeyCredentialProviderT = ApiKeyCredentialProvider>
  CredentialProvider& WithApiKeyCredentialProvider(ApiKeyCredentialProviderT&& value) {
    SetApiKeyCredentialProvider(std::forward<ApiKeyCredentialProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM credential provider. This provider uses IAM authentication with SigV4
   * signing to access the target endpoint.</p>
   */
  inline const IamCredentialProvider& GetIamCredentialProvider() const { return m_iamCredentialProvider; }
  inline bool IamCredentialProviderHasBeenSet() const { return m_iamCredentialProviderHasBeenSet; }
  template <typename IamCredentialProviderT = IamCredentialProvider>
  void SetIamCredentialProvider(IamCredentialProviderT&& value) {
    m_iamCredentialProviderHasBeenSet = true;
    m_iamCredentialProvider = std::forward<IamCredentialProviderT>(value);
  }
  template <typename IamCredentialProviderT = IamCredentialProvider>
  CredentialProvider& WithIamCredentialProvider(IamCredentialProviderT&& value) {
    SetIamCredentialProvider(std::forward<IamCredentialProviderT>(value));
    return *this;
  }
  ///@}
 private:
  OAuthCredentialProvider m_oauthCredentialProvider;

  ApiKeyCredentialProvider m_apiKeyCredentialProvider;

  IamCredentialProvider m_iamCredentialProvider;
  bool m_oauthCredentialProviderHasBeenSet = false;
  bool m_apiKeyCredentialProviderHasBeenSet = false;
  bool m_iamCredentialProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
