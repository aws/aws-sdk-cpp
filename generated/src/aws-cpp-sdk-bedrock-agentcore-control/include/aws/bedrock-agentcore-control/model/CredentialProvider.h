/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OAuthCredentialProvider.h>
#include <aws/bedrock-agentcore-control/model/ApiKeyCredentialProvider.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>A credential provider for gateway authentication. This structure contains the
   * configuration for authenticating with the target endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CredentialProvider">AWS
   * API Reference</a></p>
   */
  class CredentialProvider
  {
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
    template<typename OauthCredentialProviderT = OAuthCredentialProvider>
    void SetOauthCredentialProvider(OauthCredentialProviderT&& value) { m_oauthCredentialProviderHasBeenSet = true; m_oauthCredentialProvider = std::forward<OauthCredentialProviderT>(value); }
    template<typename OauthCredentialProviderT = OAuthCredentialProvider>
    CredentialProvider& WithOauthCredentialProvider(OauthCredentialProviderT&& value) { SetOauthCredentialProvider(std::forward<OauthCredentialProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API key credential provider. This provider uses an API key to
     * authenticate with the target endpoint.</p>
     */
    inline const ApiKeyCredentialProvider& GetApiKeyCredentialProvider() const { return m_apiKeyCredentialProvider; }
    inline bool ApiKeyCredentialProviderHasBeenSet() const { return m_apiKeyCredentialProviderHasBeenSet; }
    template<typename ApiKeyCredentialProviderT = ApiKeyCredentialProvider>
    void SetApiKeyCredentialProvider(ApiKeyCredentialProviderT&& value) { m_apiKeyCredentialProviderHasBeenSet = true; m_apiKeyCredentialProvider = std::forward<ApiKeyCredentialProviderT>(value); }
    template<typename ApiKeyCredentialProviderT = ApiKeyCredentialProvider>
    CredentialProvider& WithApiKeyCredentialProvider(ApiKeyCredentialProviderT&& value) { SetApiKeyCredentialProvider(std::forward<ApiKeyCredentialProviderT>(value)); return *this;}
    ///@}
  private:

    OAuthCredentialProvider m_oauthCredentialProvider;
    bool m_oauthCredentialProviderHasBeenSet = false;

    ApiKeyCredentialProvider m_apiKeyCredentialProvider;
    bool m_apiKeyCredentialProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
