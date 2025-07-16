/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Oauth2Discovery.h>
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
   * <p>Output configuration for a Salesforce OAuth2 provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SalesforceOauth2ProviderConfigOutput">AWS
   * API Reference</a></p>
   */
  class SalesforceOauth2ProviderConfigOutput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API SalesforceOauth2ProviderConfigOutput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API SalesforceOauth2ProviderConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API SalesforceOauth2ProviderConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OAuth2 discovery information for the Salesforce provider.</p>
     */
    inline const Oauth2Discovery& GetOauthDiscovery() const { return m_oauthDiscovery; }
    inline bool OauthDiscoveryHasBeenSet() const { return m_oauthDiscoveryHasBeenSet; }
    template<typename OauthDiscoveryT = Oauth2Discovery>
    void SetOauthDiscovery(OauthDiscoveryT&& value) { m_oauthDiscoveryHasBeenSet = true; m_oauthDiscovery = std::forward<OauthDiscoveryT>(value); }
    template<typename OauthDiscoveryT = Oauth2Discovery>
    SalesforceOauth2ProviderConfigOutput& WithOauthDiscovery(OauthDiscoveryT&& value) { SetOauthDiscovery(std::forward<OauthDiscoveryT>(value)); return *this;}
    ///@}
  private:

    Oauth2Discovery m_oauthDiscovery;
    bool m_oauthDiscoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
