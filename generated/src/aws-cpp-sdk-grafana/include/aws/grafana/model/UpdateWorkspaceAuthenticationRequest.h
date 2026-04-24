/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <aws/grafana/model/SamlConfiguration.h>

#include <utility>

namespace Aws {
namespace ManagedGrafana {
namespace Model {

/**
 */
class UpdateWorkspaceAuthenticationRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API UpdateWorkspaceAuthenticationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceAuthentication"; }

  AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the workspace to update the authentication for.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  UpdateWorkspaceAuthenticationRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center, or both
   * to authenticate users for using the Grafana console within a workspace. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
   * authentication in Amazon Managed Grafana</a>.</p>
   */
  inline const Aws::Vector<AuthenticationProviderTypes>& GetAuthenticationProviders() const { return m_authenticationProviders; }
  inline bool AuthenticationProvidersHasBeenSet() const { return m_authenticationProvidersHasBeenSet; }
  template <typename AuthenticationProvidersT = Aws::Vector<AuthenticationProviderTypes>>
  void SetAuthenticationProviders(AuthenticationProvidersT&& value) {
    m_authenticationProvidersHasBeenSet = true;
    m_authenticationProviders = std::forward<AuthenticationProvidersT>(value);
  }
  template <typename AuthenticationProvidersT = Aws::Vector<AuthenticationProviderTypes>>
  UpdateWorkspaceAuthenticationRequest& WithAuthenticationProviders(AuthenticationProvidersT&& value) {
    SetAuthenticationProviders(std::forward<AuthenticationProvidersT>(value));
    return *this;
  }
  inline UpdateWorkspaceAuthenticationRequest& AddAuthenticationProviders(AuthenticationProviderTypes value) {
    m_authenticationProvidersHasBeenSet = true;
    m_authenticationProviders.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the workspace uses SAML, use this structure to map SAML assertion
   * attributes to workspace user information and define which groups in the
   * assertion attribute are to have the <code>Admin</code> and <code>Editor</code>
   * roles in the workspace.</p>
   */
  inline const SamlConfiguration& GetSamlConfiguration() const { return m_samlConfiguration; }
  inline bool SamlConfigurationHasBeenSet() const { return m_samlConfigurationHasBeenSet; }
  template <typename SamlConfigurationT = SamlConfiguration>
  void SetSamlConfiguration(SamlConfigurationT&& value) {
    m_samlConfigurationHasBeenSet = true;
    m_samlConfiguration = std::forward<SamlConfigurationT>(value);
  }
  template <typename SamlConfigurationT = SamlConfiguration>
  UpdateWorkspaceAuthenticationRequest& WithSamlConfiguration(SamlConfigurationT&& value) {
    SetSamlConfiguration(std::forward<SamlConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  Aws::Vector<AuthenticationProviderTypes> m_authenticationProviders;

  SamlConfiguration m_samlConfiguration;
  bool m_workspaceIdHasBeenSet = false;
  bool m_authenticationProvidersHasBeenSet = false;
  bool m_samlConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
