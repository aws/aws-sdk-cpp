/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for external Identity Provider OIDC authentication flow for the
 * Operator App.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/IdpAuthConfiguration">AWS
 * API Reference</a></p>
 */
class IdpAuthConfiguration {
 public:
  AWS_DEVOPSAGENT_API IdpAuthConfiguration() = default;
  AWS_DEVOPSAGENT_API IdpAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API IdpAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OIDC issuer URL of the external Identity Provider</p>
   */
  inline const Aws::String& GetIssuerUrl() const { return m_issuerUrl; }
  inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
  template <typename IssuerUrlT = Aws::String>
  void SetIssuerUrl(IssuerUrlT&& value) {
    m_issuerUrlHasBeenSet = true;
    m_issuerUrl = std::forward<IssuerUrlT>(value);
  }
  template <typename IssuerUrlT = Aws::String>
  IdpAuthConfiguration& WithIssuerUrl(IssuerUrlT&& value) {
    SetIssuerUrl(std::forward<IssuerUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OIDC client ID for the IdP application</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  IdpAuthConfiguration& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role end users assume to access AIDevOps APIs</p>
   */
  inline const Aws::String& GetOperatorAppRoleArn() const { return m_operatorAppRoleArn; }
  inline bool OperatorAppRoleArnHasBeenSet() const { return m_operatorAppRoleArnHasBeenSet; }
  template <typename OperatorAppRoleArnT = Aws::String>
  void SetOperatorAppRoleArn(OperatorAppRoleArnT&& value) {
    m_operatorAppRoleArnHasBeenSet = true;
    m_operatorAppRoleArn = std::forward<OperatorAppRoleArnT>(value);
  }
  template <typename OperatorAppRoleArnT = Aws::String>
  IdpAuthConfiguration& WithOperatorAppRoleArn(OperatorAppRoleArnT&& value) {
    SetOperatorAppRoleArn(std::forward<OperatorAppRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Identity Provider name (e.g., Entra, Okta, Google)</p>
   */
  inline const Aws::String& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = Aws::String>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Aws::String>
  IdpAuthConfiguration& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Operator App IdP auth flow was enabled.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  IdpAuthConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Operator App IdP auth flow was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  IdpAuthConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_issuerUrl;

  Aws::String m_clientId;

  Aws::String m_operatorAppRoleArn;

  Aws::String m_provider;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_issuerUrlHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_operatorAppRoleArnHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
