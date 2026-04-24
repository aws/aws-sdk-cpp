/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Oauth2Discovery.h>
#include <aws/bedrock-agentcore-control/model/PrivateEndpoint.h>
#include <aws/bedrock-agentcore-control/model/PrivateEndpointOverride.h>
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
 * <p>Output configuration for a custom OAuth2 provider.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomOauth2ProviderConfigOutput">AWS
 * API Reference</a></p>
 */
class CustomOauth2ProviderConfigOutput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CustomOauth2ProviderConfigOutput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CustomOauth2ProviderConfigOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CustomOauth2ProviderConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth2 discovery information for the custom provider.</p>
   */
  inline const Oauth2Discovery& GetOauthDiscovery() const { return m_oauthDiscovery; }
  inline bool OauthDiscoveryHasBeenSet() const { return m_oauthDiscoveryHasBeenSet; }
  template <typename OauthDiscoveryT = Oauth2Discovery>
  void SetOauthDiscovery(OauthDiscoveryT&& value) {
    m_oauthDiscoveryHasBeenSet = true;
    m_oauthDiscovery = std::forward<OauthDiscoveryT>(value);
  }
  template <typename OauthDiscoveryT = Oauth2Discovery>
  CustomOauth2ProviderConfigOutput& WithOauthDiscovery(OauthDiscoveryT&& value) {
    SetOauthDiscovery(std::forward<OauthDiscoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client ID for the custom OAuth2 provider.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  CustomOauth2ProviderConfigOutput& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default private endpoint for the custom OAuth2 provider, enabling secure
   * connectivity through a VPC Lattice resource configuration.</p>
   */
  inline const PrivateEndpoint& GetPrivateEndpoint() const { return m_privateEndpoint; }
  inline bool PrivateEndpointHasBeenSet() const { return m_privateEndpointHasBeenSet; }
  template <typename PrivateEndpointT = PrivateEndpoint>
  void SetPrivateEndpoint(PrivateEndpointT&& value) {
    m_privateEndpointHasBeenSet = true;
    m_privateEndpoint = std::forward<PrivateEndpointT>(value);
  }
  template <typename PrivateEndpointT = PrivateEndpoint>
  CustomOauth2ProviderConfigOutput& WithPrivateEndpoint(PrivateEndpointT&& value) {
    SetPrivateEndpoint(std::forward<PrivateEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of private endpoint overrides for the custom OAuth2 provider. Each
   * override maps a specific domain to a private endpoint, enabling secure
   * connectivity through VPC Lattice resource configurations.</p>
   */
  inline const Aws::Vector<PrivateEndpointOverride>& GetPrivateEndpointOverrides() const { return m_privateEndpointOverrides; }
  inline bool PrivateEndpointOverridesHasBeenSet() const { return m_privateEndpointOverridesHasBeenSet; }
  template <typename PrivateEndpointOverridesT = Aws::Vector<PrivateEndpointOverride>>
  void SetPrivateEndpointOverrides(PrivateEndpointOverridesT&& value) {
    m_privateEndpointOverridesHasBeenSet = true;
    m_privateEndpointOverrides = std::forward<PrivateEndpointOverridesT>(value);
  }
  template <typename PrivateEndpointOverridesT = Aws::Vector<PrivateEndpointOverride>>
  CustomOauth2ProviderConfigOutput& WithPrivateEndpointOverrides(PrivateEndpointOverridesT&& value) {
    SetPrivateEndpointOverrides(std::forward<PrivateEndpointOverridesT>(value));
    return *this;
  }
  template <typename PrivateEndpointOverridesT = PrivateEndpointOverride>
  CustomOauth2ProviderConfigOutput& AddPrivateEndpointOverrides(PrivateEndpointOverridesT&& value) {
    m_privateEndpointOverridesHasBeenSet = true;
    m_privateEndpointOverrides.emplace_back(std::forward<PrivateEndpointOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Oauth2Discovery m_oauthDiscovery;

  Aws::String m_clientId;

  PrivateEndpoint m_privateEndpoint;

  Aws::Vector<PrivateEndpointOverride> m_privateEndpointOverrides;
  bool m_oauthDiscoveryHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_privateEndpointHasBeenSet = false;
  bool m_privateEndpointOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
