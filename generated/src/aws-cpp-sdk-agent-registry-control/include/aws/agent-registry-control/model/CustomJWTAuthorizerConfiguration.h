/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/CustomClaimValidationType.h>
#include <aws/agent-registry-control/model/PrivateEndpoint.h>
#include <aws/agent-registry-control/model/PrivateEndpointOverride.h>
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
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Configuration for a custom JWT authorizer that validates inbound bearer
 * tokens against an OpenID Connect identity provider.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/CustomJWTAuthorizerConfiguration">AWS
 * API Reference</a></p>
 */
class CustomJWTAuthorizerConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API CustomJWTAuthorizerConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API CustomJWTAuthorizerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API CustomJWTAuthorizerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OpenID Connect discovery URL used to retrieve the identity provider's
   * metadata and signing keys.</p>
   */
  inline const Aws::String& GetDiscoveryUrl() const { return m_discoveryUrl; }
  inline bool DiscoveryUrlHasBeenSet() const { return m_discoveryUrlHasBeenSet; }
  template <typename DiscoveryUrlT = Aws::String>
  void SetDiscoveryUrl(DiscoveryUrlT&& value) {
    m_discoveryUrlHasBeenSet = true;
    m_discoveryUrl = std::forward<DiscoveryUrlT>(value);
  }
  template <typename DiscoveryUrlT = Aws::String>
  CustomJWTAuthorizerConfiguration& WithDiscoveryUrl(DiscoveryUrlT&& value) {
    SetDiscoveryUrl(std::forward<DiscoveryUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audience values accepted during JWT validation. A token is rejected if
   * none of its audience claims match.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedAudience() const { return m_allowedAudience; }
  inline bool AllowedAudienceHasBeenSet() const { return m_allowedAudienceHasBeenSet; }
  template <typename AllowedAudienceT = Aws::Vector<Aws::String>>
  void SetAllowedAudience(AllowedAudienceT&& value) {
    m_allowedAudienceHasBeenSet = true;
    m_allowedAudience = std::forward<AllowedAudienceT>(value);
  }
  template <typename AllowedAudienceT = Aws::Vector<Aws::String>>
  CustomJWTAuthorizerConfiguration& WithAllowedAudience(AllowedAudienceT&& value) {
    SetAllowedAudience(std::forward<AllowedAudienceT>(value));
    return *this;
  }
  template <typename AllowedAudienceT = Aws::String>
  CustomJWTAuthorizerConfiguration& AddAllowedAudience(AllowedAudienceT&& value) {
    m_allowedAudienceHasBeenSet = true;
    m_allowedAudience.emplace_back(std::forward<AllowedAudienceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client identifiers accepted during JWT validation. A token is rejected if
   * it was not issued to one of these clients.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedClients() const { return m_allowedClients; }
  inline bool AllowedClientsHasBeenSet() const { return m_allowedClientsHasBeenSet; }
  template <typename AllowedClientsT = Aws::Vector<Aws::String>>
  void SetAllowedClients(AllowedClientsT&& value) {
    m_allowedClientsHasBeenSet = true;
    m_allowedClients = std::forward<AllowedClientsT>(value);
  }
  template <typename AllowedClientsT = Aws::Vector<Aws::String>>
  CustomJWTAuthorizerConfiguration& WithAllowedClients(AllowedClientsT&& value) {
    SetAllowedClients(std::forward<AllowedClientsT>(value));
    return *this;
  }
  template <typename AllowedClientsT = Aws::String>
  CustomJWTAuthorizerConfiguration& AddAllowedClients(AllowedClientsT&& value) {
    m_allowedClientsHasBeenSet = true;
    m_allowedClients.emplace_back(std::forward<AllowedClientsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scopes accepted during JWT validation. A token is rejected if it does not
   * carry one of these scopes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedScopes() const { return m_allowedScopes; }
  inline bool AllowedScopesHasBeenSet() const { return m_allowedScopesHasBeenSet; }
  template <typename AllowedScopesT = Aws::Vector<Aws::String>>
  void SetAllowedScopes(AllowedScopesT&& value) {
    m_allowedScopesHasBeenSet = true;
    m_allowedScopes = std::forward<AllowedScopesT>(value);
  }
  template <typename AllowedScopesT = Aws::Vector<Aws::String>>
  CustomJWTAuthorizerConfiguration& WithAllowedScopes(AllowedScopesT&& value) {
    SetAllowedScopes(std::forward<AllowedScopesT>(value));
    return *this;
  }
  template <typename AllowedScopesT = Aws::String>
  CustomJWTAuthorizerConfiguration& AddAllowedScopes(AllowedScopesT&& value) {
    m_allowedScopesHasBeenSet = true;
    m_allowedScopes.emplace_back(std::forward<AllowedScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional custom claim validations applied to the inbound JWT.</p>
   */
  inline const Aws::Vector<CustomClaimValidationType>& GetCustomClaims() const { return m_customClaims; }
  inline bool CustomClaimsHasBeenSet() const { return m_customClaimsHasBeenSet; }
  template <typename CustomClaimsT = Aws::Vector<CustomClaimValidationType>>
  void SetCustomClaims(CustomClaimsT&& value) {
    m_customClaimsHasBeenSet = true;
    m_customClaims = std::forward<CustomClaimsT>(value);
  }
  template <typename CustomClaimsT = Aws::Vector<CustomClaimValidationType>>
  CustomJWTAuthorizerConfiguration& WithCustomClaims(CustomClaimsT&& value) {
    SetCustomClaims(std::forward<CustomClaimsT>(value));
    return *this;
  }
  template <typename CustomClaimsT = CustomClaimValidationType>
  CustomJWTAuthorizerConfiguration& AddCustomClaims(CustomClaimsT&& value) {
    m_customClaimsHasBeenSet = true;
    m_customClaims.emplace_back(std::forward<CustomClaimsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private endpoint used to reach the identity provider's discovery URL over
   * a private network path.</p>
   */
  inline const PrivateEndpoint& GetPrivateEndpoint() const { return m_privateEndpoint; }
  inline bool PrivateEndpointHasBeenSet() const { return m_privateEndpointHasBeenSet; }
  template <typename PrivateEndpointT = PrivateEndpoint>
  void SetPrivateEndpoint(PrivateEndpointT&& value) {
    m_privateEndpointHasBeenSet = true;
    m_privateEndpoint = std::forward<PrivateEndpointT>(value);
  }
  template <typename PrivateEndpointT = PrivateEndpoint>
  CustomJWTAuthorizerConfiguration& WithPrivateEndpoint(PrivateEndpointT&& value) {
    SetPrivateEndpoint(std::forward<PrivateEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-domain private endpoint overrides that route specific identity provider
   * domains through distinct private endpoints.</p>
   */
  inline const Aws::Vector<PrivateEndpointOverride>& GetPrivateEndpointOverrides() const { return m_privateEndpointOverrides; }
  inline bool PrivateEndpointOverridesHasBeenSet() const { return m_privateEndpointOverridesHasBeenSet; }
  template <typename PrivateEndpointOverridesT = Aws::Vector<PrivateEndpointOverride>>
  void SetPrivateEndpointOverrides(PrivateEndpointOverridesT&& value) {
    m_privateEndpointOverridesHasBeenSet = true;
    m_privateEndpointOverrides = std::forward<PrivateEndpointOverridesT>(value);
  }
  template <typename PrivateEndpointOverridesT = Aws::Vector<PrivateEndpointOverride>>
  CustomJWTAuthorizerConfiguration& WithPrivateEndpointOverrides(PrivateEndpointOverridesT&& value) {
    SetPrivateEndpointOverrides(std::forward<PrivateEndpointOverridesT>(value));
    return *this;
  }
  template <typename PrivateEndpointOverridesT = PrivateEndpointOverride>
  CustomJWTAuthorizerConfiguration& AddPrivateEndpointOverrides(PrivateEndpointOverridesT&& value) {
    m_privateEndpointOverridesHasBeenSet = true;
    m_privateEndpointOverrides.emplace_back(std::forward<PrivateEndpointOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_discoveryUrl;

  Aws::Vector<Aws::String> m_allowedAudience;

  Aws::Vector<Aws::String> m_allowedClients;

  Aws::Vector<Aws::String> m_allowedScopes;

  Aws::Vector<CustomClaimValidationType> m_customClaims;

  PrivateEndpoint m_privateEndpoint;

  Aws::Vector<PrivateEndpointOverride> m_privateEndpointOverrides;
  bool m_discoveryUrlHasBeenSet = false;
  bool m_allowedAudienceHasBeenSet = false;
  bool m_allowedClientsHasBeenSet = false;
  bool m_allowedScopesHasBeenSet = false;
  bool m_customClaimsHasBeenSet = false;
  bool m_privateEndpointHasBeenSet = false;
  bool m_privateEndpointOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
