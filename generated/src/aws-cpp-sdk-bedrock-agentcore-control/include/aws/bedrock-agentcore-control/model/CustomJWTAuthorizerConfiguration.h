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
   * <p>Configuration for inbound JWT-based authorization, specifying how incoming
   * requests should be authenticated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomJWTAuthorizerConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomJWTAuthorizerConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CustomJWTAuthorizerConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CustomJWTAuthorizerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CustomJWTAuthorizerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This URL is used to fetch OpenID Connect configuration or authorization
     * server metadata for validating incoming tokens.</p>
     */
    inline const Aws::String& GetDiscoveryUrl() const { return m_discoveryUrl; }
    inline bool DiscoveryUrlHasBeenSet() const { return m_discoveryUrlHasBeenSet; }
    template<typename DiscoveryUrlT = Aws::String>
    void SetDiscoveryUrl(DiscoveryUrlT&& value) { m_discoveryUrlHasBeenSet = true; m_discoveryUrl = std::forward<DiscoveryUrlT>(value); }
    template<typename DiscoveryUrlT = Aws::String>
    CustomJWTAuthorizerConfiguration& WithDiscoveryUrl(DiscoveryUrlT&& value) { SetDiscoveryUrl(std::forward<DiscoveryUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents individual audience values that are validated in the incoming JWT
     * token validation process.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAudience() const { return m_allowedAudience; }
    inline bool AllowedAudienceHasBeenSet() const { return m_allowedAudienceHasBeenSet; }
    template<typename AllowedAudienceT = Aws::Vector<Aws::String>>
    void SetAllowedAudience(AllowedAudienceT&& value) { m_allowedAudienceHasBeenSet = true; m_allowedAudience = std::forward<AllowedAudienceT>(value); }
    template<typename AllowedAudienceT = Aws::Vector<Aws::String>>
    CustomJWTAuthorizerConfiguration& WithAllowedAudience(AllowedAudienceT&& value) { SetAllowedAudience(std::forward<AllowedAudienceT>(value)); return *this;}
    template<typename AllowedAudienceT = Aws::String>
    CustomJWTAuthorizerConfiguration& AddAllowedAudience(AllowedAudienceT&& value) { m_allowedAudienceHasBeenSet = true; m_allowedAudience.emplace_back(std::forward<AllowedAudienceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents individual client IDs that are validated in the incoming JWT token
     * validation process.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedClients() const { return m_allowedClients; }
    inline bool AllowedClientsHasBeenSet() const { return m_allowedClientsHasBeenSet; }
    template<typename AllowedClientsT = Aws::Vector<Aws::String>>
    void SetAllowedClients(AllowedClientsT&& value) { m_allowedClientsHasBeenSet = true; m_allowedClients = std::forward<AllowedClientsT>(value); }
    template<typename AllowedClientsT = Aws::Vector<Aws::String>>
    CustomJWTAuthorizerConfiguration& WithAllowedClients(AllowedClientsT&& value) { SetAllowedClients(std::forward<AllowedClientsT>(value)); return *this;}
    template<typename AllowedClientsT = Aws::String>
    CustomJWTAuthorizerConfiguration& AddAllowedClients(AllowedClientsT&& value) { m_allowedClientsHasBeenSet = true; m_allowedClients.emplace_back(std::forward<AllowedClientsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_discoveryUrl;
    bool m_discoveryUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedAudience;
    bool m_allowedAudienceHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedClients;
    bool m_allowedClientsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
