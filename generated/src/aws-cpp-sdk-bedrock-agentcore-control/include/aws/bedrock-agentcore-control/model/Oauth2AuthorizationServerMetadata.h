/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains the authorization server metadata for an OAuth2
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Oauth2AuthorizationServerMetadata">AWS
   * API Reference</a></p>
   */
  class Oauth2AuthorizationServerMetadata
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2AuthorizationServerMetadata() = default;
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2AuthorizationServerMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2AuthorizationServerMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The issuer URL for the OAuth2 authorization server.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    Oauth2AuthorizationServerMetadata& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization endpoint URL for the OAuth2 authorization server.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
    inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
    template<typename AuthorizationEndpointT = Aws::String>
    void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value); }
    template<typename AuthorizationEndpointT = Aws::String>
    Oauth2AuthorizationServerMetadata& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) { SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token endpoint URL for the OAuth2 authorization server.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
    inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
    template<typename TokenEndpointT = Aws::String>
    void SetTokenEndpoint(TokenEndpointT&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::forward<TokenEndpointT>(value); }
    template<typename TokenEndpointT = Aws::String>
    Oauth2AuthorizationServerMetadata& WithTokenEndpoint(TokenEndpointT&& value) { SetTokenEndpoint(std::forward<TokenEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported response types for the OAuth2 authorization server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResponseTypes() const { return m_responseTypes; }
    inline bool ResponseTypesHasBeenSet() const { return m_responseTypesHasBeenSet; }
    template<typename ResponseTypesT = Aws::Vector<Aws::String>>
    void SetResponseTypes(ResponseTypesT&& value) { m_responseTypesHasBeenSet = true; m_responseTypes = std::forward<ResponseTypesT>(value); }
    template<typename ResponseTypesT = Aws::Vector<Aws::String>>
    Oauth2AuthorizationServerMetadata& WithResponseTypes(ResponseTypesT&& value) { SetResponseTypes(std::forward<ResponseTypesT>(value)); return *this;}
    template<typename ResponseTypesT = Aws::String>
    Oauth2AuthorizationServerMetadata& AddResponseTypes(ResponseTypesT&& value) { m_responseTypesHasBeenSet = true; m_responseTypes.emplace_back(std::forward<ResponseTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    Aws::String m_tokenEndpoint;
    bool m_tokenEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_responseTypes;
    bool m_responseTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
