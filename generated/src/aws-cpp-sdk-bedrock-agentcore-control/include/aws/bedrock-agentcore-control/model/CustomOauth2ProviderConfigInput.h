/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Oauth2Discovery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Input configuration for a custom OAuth2 provider.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomOauth2ProviderConfigInput">AWS
   * API Reference</a></p>
   */
  class CustomOauth2ProviderConfigInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CustomOauth2ProviderConfigInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CustomOauth2ProviderConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CustomOauth2ProviderConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OAuth2 discovery information for the custom provider.</p>
     */
    inline const Oauth2Discovery& GetOauthDiscovery() const { return m_oauthDiscovery; }
    inline bool OauthDiscoveryHasBeenSet() const { return m_oauthDiscoveryHasBeenSet; }
    template<typename OauthDiscoveryT = Oauth2Discovery>
    void SetOauthDiscovery(OauthDiscoveryT&& value) { m_oauthDiscoveryHasBeenSet = true; m_oauthDiscovery = std::forward<OauthDiscoveryT>(value); }
    template<typename OauthDiscoveryT = Oauth2Discovery>
    CustomOauth2ProviderConfigInput& WithOauthDiscovery(OauthDiscoveryT&& value) { SetOauthDiscovery(std::forward<OauthDiscoveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client ID for the custom OAuth2 provider.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    CustomOauth2ProviderConfigInput& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client secret for the custom OAuth2 provider.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    CustomOauth2ProviderConfigInput& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}
  private:

    Oauth2Discovery m_oauthDiscovery;
    bool m_oauthDiscoveryHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
