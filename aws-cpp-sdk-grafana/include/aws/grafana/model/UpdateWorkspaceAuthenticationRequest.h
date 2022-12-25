/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/SamlConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <utility>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class UpdateWorkspaceAuthenticationRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceAuthenticationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspaceAuthentication"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline const Aws::Vector<AuthenticationProviderTypes>& GetAuthenticationProviders() const{ return m_authenticationProviders; }

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline bool AuthenticationProvidersHasBeenSet() const { return m_authenticationProvidersHasBeenSet; }

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline void SetAuthenticationProviders(const Aws::Vector<AuthenticationProviderTypes>& value) { m_authenticationProvidersHasBeenSet = true; m_authenticationProviders = value; }

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline void SetAuthenticationProviders(Aws::Vector<AuthenticationProviderTypes>&& value) { m_authenticationProvidersHasBeenSet = true; m_authenticationProviders = std::move(value); }

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& WithAuthenticationProviders(const Aws::Vector<AuthenticationProviderTypes>& value) { SetAuthenticationProviders(value); return *this;}

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& WithAuthenticationProviders(Aws::Vector<AuthenticationProviderTypes>&& value) { SetAuthenticationProviders(std::move(value)); return *this;}

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& AddAuthenticationProviders(const AuthenticationProviderTypes& value) { m_authenticationProvidersHasBeenSet = true; m_authenticationProviders.push_back(value); return *this; }

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& AddAuthenticationProviders(AuthenticationProviderTypes&& value) { m_authenticationProvidersHasBeenSet = true; m_authenticationProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>If the workspace uses SAML, use this structure to map SAML assertion
     * attributes to workspace user information and define which groups in the
     * assertion attribute are to have the <code>Admin</code> and <code>Editor</code>
     * roles in the workspace.</p>
     */
    inline const SamlConfiguration& GetSamlConfiguration() const{ return m_samlConfiguration; }

    /**
     * <p>If the workspace uses SAML, use this structure to map SAML assertion
     * attributes to workspace user information and define which groups in the
     * assertion attribute are to have the <code>Admin</code> and <code>Editor</code>
     * roles in the workspace.</p>
     */
    inline bool SamlConfigurationHasBeenSet() const { return m_samlConfigurationHasBeenSet; }

    /**
     * <p>If the workspace uses SAML, use this structure to map SAML assertion
     * attributes to workspace user information and define which groups in the
     * assertion attribute are to have the <code>Admin</code> and <code>Editor</code>
     * roles in the workspace.</p>
     */
    inline void SetSamlConfiguration(const SamlConfiguration& value) { m_samlConfigurationHasBeenSet = true; m_samlConfiguration = value; }

    /**
     * <p>If the workspace uses SAML, use this structure to map SAML assertion
     * attributes to workspace user information and define which groups in the
     * assertion attribute are to have the <code>Admin</code> and <code>Editor</code>
     * roles in the workspace.</p>
     */
    inline void SetSamlConfiguration(SamlConfiguration&& value) { m_samlConfigurationHasBeenSet = true; m_samlConfiguration = std::move(value); }

    /**
     * <p>If the workspace uses SAML, use this structure to map SAML assertion
     * attributes to workspace user information and define which groups in the
     * assertion attribute are to have the <code>Admin</code> and <code>Editor</code>
     * roles in the workspace.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& WithSamlConfiguration(const SamlConfiguration& value) { SetSamlConfiguration(value); return *this;}

    /**
     * <p>If the workspace uses SAML, use this structure to map SAML assertion
     * attributes to workspace user information and define which groups in the
     * assertion attribute are to have the <code>Admin</code> and <code>Editor</code>
     * roles in the workspace.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& WithSamlConfiguration(SamlConfiguration&& value) { SetSamlConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to update the authentication for.</p>
     */
    inline UpdateWorkspaceAuthenticationRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::Vector<AuthenticationProviderTypes> m_authenticationProviders;
    bool m_authenticationProvidersHasBeenSet = false;

    SamlConfiguration m_samlConfiguration;
    bool m_samlConfigurationHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
