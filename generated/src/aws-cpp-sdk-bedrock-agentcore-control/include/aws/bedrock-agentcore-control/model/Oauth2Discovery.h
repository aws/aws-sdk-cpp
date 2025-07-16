/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/Oauth2AuthorizationServerMetadata.h>
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
   * <p>Contains the discovery information for an OAuth2 provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Oauth2Discovery">AWS
   * API Reference</a></p>
   */
  class Oauth2Discovery
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2Discovery() = default;
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2Discovery(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2Discovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The discovery URL for the OAuth2 provider.</p>
     */
    inline const Aws::String& GetDiscoveryUrl() const { return m_discoveryUrl; }
    inline bool DiscoveryUrlHasBeenSet() const { return m_discoveryUrlHasBeenSet; }
    template<typename DiscoveryUrlT = Aws::String>
    void SetDiscoveryUrl(DiscoveryUrlT&& value) { m_discoveryUrlHasBeenSet = true; m_discoveryUrl = std::forward<DiscoveryUrlT>(value); }
    template<typename DiscoveryUrlT = Aws::String>
    Oauth2Discovery& WithDiscoveryUrl(DiscoveryUrlT&& value) { SetDiscoveryUrl(std::forward<DiscoveryUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization server metadata for the OAuth2 provider.</p>
     */
    inline const Oauth2AuthorizationServerMetadata& GetAuthorizationServerMetadata() const { return m_authorizationServerMetadata; }
    inline bool AuthorizationServerMetadataHasBeenSet() const { return m_authorizationServerMetadataHasBeenSet; }
    template<typename AuthorizationServerMetadataT = Oauth2AuthorizationServerMetadata>
    void SetAuthorizationServerMetadata(AuthorizationServerMetadataT&& value) { m_authorizationServerMetadataHasBeenSet = true; m_authorizationServerMetadata = std::forward<AuthorizationServerMetadataT>(value); }
    template<typename AuthorizationServerMetadataT = Oauth2AuthorizationServerMetadata>
    Oauth2Discovery& WithAuthorizationServerMetadata(AuthorizationServerMetadataT&& value) { SetAuthorizationServerMetadata(std::forward<AuthorizationServerMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discoveryUrl;
    bool m_discoveryUrlHasBeenSet = false;

    Oauth2AuthorizationServerMetadata m_authorizationServerMetadata;
    bool m_authorizationServerMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
