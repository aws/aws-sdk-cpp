/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/model/AccountAccessType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/PermissionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/grafana/model/VpcConfiguration.h>
#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <aws/grafana/model/DataSourceType.h>
#include <aws/grafana/model/NotificationDestinationType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class CreateWorkspaceRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API CreateWorkspaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspace"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies whether the workspace can access Amazon Web Services resources in
     * this Amazon Web Services account only, or whether it can also access Amazon Web
     * Services resources in other accounts in the same organization. If you specify
     * <code>ORGANIZATION</code>, you must specify which organizational units the
     * workspace can access in the <code>workspaceOrganizationalUnits</code>
     * parameter.</p>
     */
    inline const AccountAccessType& GetAccountAccessType() const{ return m_accountAccessType; }

    /**
     * <p>Specifies whether the workspace can access Amazon Web Services resources in
     * this Amazon Web Services account only, or whether it can also access Amazon Web
     * Services resources in other accounts in the same organization. If you specify
     * <code>ORGANIZATION</code>, you must specify which organizational units the
     * workspace can access in the <code>workspaceOrganizationalUnits</code>
     * parameter.</p>
     */
    inline bool AccountAccessTypeHasBeenSet() const { return m_accountAccessTypeHasBeenSet; }

    /**
     * <p>Specifies whether the workspace can access Amazon Web Services resources in
     * this Amazon Web Services account only, or whether it can also access Amazon Web
     * Services resources in other accounts in the same organization. If you specify
     * <code>ORGANIZATION</code>, you must specify which organizational units the
     * workspace can access in the <code>workspaceOrganizationalUnits</code>
     * parameter.</p>
     */
    inline void SetAccountAccessType(const AccountAccessType& value) { m_accountAccessTypeHasBeenSet = true; m_accountAccessType = value; }

    /**
     * <p>Specifies whether the workspace can access Amazon Web Services resources in
     * this Amazon Web Services account only, or whether it can also access Amazon Web
     * Services resources in other accounts in the same organization. If you specify
     * <code>ORGANIZATION</code>, you must specify which organizational units the
     * workspace can access in the <code>workspaceOrganizationalUnits</code>
     * parameter.</p>
     */
    inline void SetAccountAccessType(AccountAccessType&& value) { m_accountAccessTypeHasBeenSet = true; m_accountAccessType = std::move(value); }

    /**
     * <p>Specifies whether the workspace can access Amazon Web Services resources in
     * this Amazon Web Services account only, or whether it can also access Amazon Web
     * Services resources in other accounts in the same organization. If you specify
     * <code>ORGANIZATION</code>, you must specify which organizational units the
     * workspace can access in the <code>workspaceOrganizationalUnits</code>
     * parameter.</p>
     */
    inline CreateWorkspaceRequest& WithAccountAccessType(const AccountAccessType& value) { SetAccountAccessType(value); return *this;}

    /**
     * <p>Specifies whether the workspace can access Amazon Web Services resources in
     * this Amazon Web Services account only, or whether it can also access Amazon Web
     * Services resources in other accounts in the same organization. If you specify
     * <code>ORGANIZATION</code>, you must specify which organizational units the
     * workspace can access in the <code>workspaceOrganizationalUnits</code>
     * parameter.</p>
     */
    inline CreateWorkspaceRequest& WithAccountAccessType(AccountAccessType&& value) { SetAccountAccessType(std::move(value)); return *this;}


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
    inline CreateWorkspaceRequest& WithAuthenticationProviders(const Aws::Vector<AuthenticationProviderTypes>& value) { SetAuthenticationProviders(value); return *this;}

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline CreateWorkspaceRequest& WithAuthenticationProviders(Aws::Vector<AuthenticationProviderTypes>&& value) { SetAuthenticationProviders(std::move(value)); return *this;}

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline CreateWorkspaceRequest& AddAuthenticationProviders(const AuthenticationProviderTypes& value) { m_authenticationProvidersHasBeenSet = true; m_authenticationProviders.push_back(value); return *this; }

    /**
     * <p>Specifies whether this workspace uses SAML 2.0, IAM Identity Center
     * (successor to Single Sign-On), or both to authenticate users for using the
     * Grafana console within a workspace. For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/authentication-in-AMG.html">User
     * authentication in Amazon Managed Grafana</a>.</p>
     */
    inline CreateWorkspaceRequest& AddAuthenticationProviders(AuthenticationProviderTypes&& value) { m_authenticationProvidersHasBeenSet = true; m_authenticationProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
     * of the request.</p>
     */
    inline CreateWorkspaceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline const Aws::String& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(const Aws::String& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(Aws::String&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline void SetConfiguration(const char* value) { m_configurationHasBeenSet = true; m_configuration.assign(value); }

    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline CreateWorkspaceRequest& WithConfiguration(const Aws::String& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline CreateWorkspaceRequest& WithConfiguration(Aws::String&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration string for the workspace that you create. For more
     * information about the format and configuration options available, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
     * in your Grafana workspace</a>.</p>
     */
    inline CreateWorkspaceRequest& WithConfiguration(const char* value) { SetConfiguration(value); return *this;}


    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline const Aws::String& GetOrganizationRoleName() const{ return m_organizationRoleName; }

    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline bool OrganizationRoleNameHasBeenSet() const { return m_organizationRoleNameHasBeenSet; }

    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline void SetOrganizationRoleName(const Aws::String& value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName = value; }

    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline void SetOrganizationRoleName(Aws::String&& value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName = std::move(value); }

    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline void SetOrganizationRoleName(const char* value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName.assign(value); }

    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline CreateWorkspaceRequest& WithOrganizationRoleName(const Aws::String& value) { SetOrganizationRoleName(value); return *this;}

    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline CreateWorkspaceRequest& WithOrganizationRoleName(Aws::String&& value) { SetOrganizationRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of an IAM role that already exists to use with Organizations to
     * access Amazon Web Services data sources and notification channels in other
     * accounts in an organization.</p>
     */
    inline CreateWorkspaceRequest& WithOrganizationRoleName(const char* value) { SetOrganizationRoleName(value); return *this;}


    /**
     * <p>If you specify <code>SERVICE_MANAGED</code> on AWS Grafana console, Amazon
     * Managed Grafana automatically creates the IAM roles and provisions the
     * permissions that the workspace needs to use Amazon Web Services data sources and
     * notification channels. In the CLI mode, the permissionType
     * <code>SERVICE_MANAGED</code> will not create the IAM role for you. The ability
     * for the Amazon Managed Grafana to create the IAM role on behalf of the user is
     * supported only in the Amazon Managed Grafana AWS console. Use only the
     * <code>CUSTOMER_MANAGED</code> permission type when creating a workspace in the
     * CLI. </p> <p>If you specify <code>CUSTOMER_MANAGED</code>, you will manage those
     * roles and permissions yourself. If you are creating this workspace in a member
     * account of an organization that is not a delegated administrator account, and
     * you want the workspace to access data sources in other Amazon Web Services
     * accounts in the organization, you must choose <code>CUSTOMER_MANAGED</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
     * Managed Grafana permissions and policies for Amazon Web Services data sources
     * and notification channels</a>.</p>
     */
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }

    /**
     * <p>If you specify <code>SERVICE_MANAGED</code> on AWS Grafana console, Amazon
     * Managed Grafana automatically creates the IAM roles and provisions the
     * permissions that the workspace needs to use Amazon Web Services data sources and
     * notification channels. In the CLI mode, the permissionType
     * <code>SERVICE_MANAGED</code> will not create the IAM role for you. The ability
     * for the Amazon Managed Grafana to create the IAM role on behalf of the user is
     * supported only in the Amazon Managed Grafana AWS console. Use only the
     * <code>CUSTOMER_MANAGED</code> permission type when creating a workspace in the
     * CLI. </p> <p>If you specify <code>CUSTOMER_MANAGED</code>, you will manage those
     * roles and permissions yourself. If you are creating this workspace in a member
     * account of an organization that is not a delegated administrator account, and
     * you want the workspace to access data sources in other Amazon Web Services
     * accounts in the organization, you must choose <code>CUSTOMER_MANAGED</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
     * Managed Grafana permissions and policies for Amazon Web Services data sources
     * and notification channels</a>.</p>
     */
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

    /**
     * <p>If you specify <code>SERVICE_MANAGED</code> on AWS Grafana console, Amazon
     * Managed Grafana automatically creates the IAM roles and provisions the
     * permissions that the workspace needs to use Amazon Web Services data sources and
     * notification channels. In the CLI mode, the permissionType
     * <code>SERVICE_MANAGED</code> will not create the IAM role for you. The ability
     * for the Amazon Managed Grafana to create the IAM role on behalf of the user is
     * supported only in the Amazon Managed Grafana AWS console. Use only the
     * <code>CUSTOMER_MANAGED</code> permission type when creating a workspace in the
     * CLI. </p> <p>If you specify <code>CUSTOMER_MANAGED</code>, you will manage those
     * roles and permissions yourself. If you are creating this workspace in a member
     * account of an organization that is not a delegated administrator account, and
     * you want the workspace to access data sources in other Amazon Web Services
     * accounts in the organization, you must choose <code>CUSTOMER_MANAGED</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
     * Managed Grafana permissions and policies for Amazon Web Services data sources
     * and notification channels</a>.</p>
     */
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

    /**
     * <p>If you specify <code>SERVICE_MANAGED</code> on AWS Grafana console, Amazon
     * Managed Grafana automatically creates the IAM roles and provisions the
     * permissions that the workspace needs to use Amazon Web Services data sources and
     * notification channels. In the CLI mode, the permissionType
     * <code>SERVICE_MANAGED</code> will not create the IAM role for you. The ability
     * for the Amazon Managed Grafana to create the IAM role on behalf of the user is
     * supported only in the Amazon Managed Grafana AWS console. Use only the
     * <code>CUSTOMER_MANAGED</code> permission type when creating a workspace in the
     * CLI. </p> <p>If you specify <code>CUSTOMER_MANAGED</code>, you will manage those
     * roles and permissions yourself. If you are creating this workspace in a member
     * account of an organization that is not a delegated administrator account, and
     * you want the workspace to access data sources in other Amazon Web Services
     * accounts in the organization, you must choose <code>CUSTOMER_MANAGED</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
     * Managed Grafana permissions and policies for Amazon Web Services data sources
     * and notification channels</a>.</p>
     */
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

    /**
     * <p>If you specify <code>SERVICE_MANAGED</code> on AWS Grafana console, Amazon
     * Managed Grafana automatically creates the IAM roles and provisions the
     * permissions that the workspace needs to use Amazon Web Services data sources and
     * notification channels. In the CLI mode, the permissionType
     * <code>SERVICE_MANAGED</code> will not create the IAM role for you. The ability
     * for the Amazon Managed Grafana to create the IAM role on behalf of the user is
     * supported only in the Amazon Managed Grafana AWS console. Use only the
     * <code>CUSTOMER_MANAGED</code> permission type when creating a workspace in the
     * CLI. </p> <p>If you specify <code>CUSTOMER_MANAGED</code>, you will manage those
     * roles and permissions yourself. If you are creating this workspace in a member
     * account of an organization that is not a delegated administrator account, and
     * you want the workspace to access data sources in other Amazon Web Services
     * accounts in the organization, you must choose <code>CUSTOMER_MANAGED</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
     * Managed Grafana permissions and policies for Amazon Web Services data sources
     * and notification channels</a>.</p>
     */
    inline CreateWorkspaceRequest& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}

    /**
     * <p>If you specify <code>SERVICE_MANAGED</code> on AWS Grafana console, Amazon
     * Managed Grafana automatically creates the IAM roles and provisions the
     * permissions that the workspace needs to use Amazon Web Services data sources and
     * notification channels. In the CLI mode, the permissionType
     * <code>SERVICE_MANAGED</code> will not create the IAM role for you. The ability
     * for the Amazon Managed Grafana to create the IAM role on behalf of the user is
     * supported only in the Amazon Managed Grafana AWS console. Use only the
     * <code>CUSTOMER_MANAGED</code> permission type when creating a workspace in the
     * CLI. </p> <p>If you specify <code>CUSTOMER_MANAGED</code>, you will manage those
     * roles and permissions yourself. If you are creating this workspace in a member
     * account of an organization that is not a delegated administrator account, and
     * you want the workspace to access data sources in other Amazon Web Services
     * accounts in the organization, you must choose <code>CUSTOMER_MANAGED</code>.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
     * Managed Grafana permissions and policies for Amazon Web Services data sources
     * and notification channels</a>.</p>
     */
    inline CreateWorkspaceRequest& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}


    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline CreateWorkspaceRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline CreateWorkspaceRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline CreateWorkspaceRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline CreateWorkspaceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The configuration settings for an Amazon VPC that contains data sources for
     * your Grafana workspace to connect to.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>The configuration settings for an Amazon VPC that contains data sources for
     * your Grafana workspace to connect to.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings for an Amazon VPC that contains data sources for
     * your Grafana workspace to connect to.</p>
     */
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>The configuration settings for an Amazon VPC that contains data sources for
     * your Grafana workspace to connect to.</p>
     */
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>The configuration settings for an Amazon VPC that contains data sources for
     * your Grafana workspace to connect to.</p>
     */
    inline CreateWorkspaceRequest& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for an Amazon VPC that contains data sources for
     * your Grafana workspace to connect to.</p>
     */
    inline CreateWorkspaceRequest& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline const Aws::Vector<DataSourceType>& GetWorkspaceDataSources() const{ return m_workspaceDataSources; }

    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline bool WorkspaceDataSourcesHasBeenSet() const { return m_workspaceDataSourcesHasBeenSet; }

    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline void SetWorkspaceDataSources(const Aws::Vector<DataSourceType>& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources = value; }

    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline void SetWorkspaceDataSources(Aws::Vector<DataSourceType>&& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources = std::move(value); }

    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceDataSources(const Aws::Vector<DataSourceType>& value) { SetWorkspaceDataSources(value); return *this;}

    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceDataSources(Aws::Vector<DataSourceType>&& value) { SetWorkspaceDataSources(std::move(value)); return *this;}

    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline CreateWorkspaceRequest& AddWorkspaceDataSources(const DataSourceType& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources.push_back(value); return *this; }

    /**
     * <p>Specify the Amazon Web Services data sources that you want to be queried in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * read data from these sources. You must still add them as data sources in the
     * Grafana console in the workspace.</p> <p>If you don't specify a data source
     * here, you can still add it as a data source in the workspace console later.
     * However, you will then have to manually configure permissions for it.</p>
     */
    inline CreateWorkspaceRequest& AddWorkspaceDataSources(DataSourceType&& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline const Aws::String& GetWorkspaceDescription() const{ return m_workspaceDescription; }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline bool WorkspaceDescriptionHasBeenSet() const { return m_workspaceDescriptionHasBeenSet; }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline void SetWorkspaceDescription(const Aws::String& value) { m_workspaceDescriptionHasBeenSet = true; m_workspaceDescription = value; }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline void SetWorkspaceDescription(Aws::String&& value) { m_workspaceDescriptionHasBeenSet = true; m_workspaceDescription = std::move(value); }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline void SetWorkspaceDescription(const char* value) { m_workspaceDescriptionHasBeenSet = true; m_workspaceDescription.assign(value); }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceDescription(const Aws::String& value) { SetWorkspaceDescription(value); return *this;}

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceDescription(Aws::String&& value) { SetWorkspaceDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
     * </p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceDescription(const char* value) { SetWorkspaceDescription(value); return *this;}


    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline const Aws::String& GetWorkspaceName() const{ return m_workspaceName; }

    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }

    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline void SetWorkspaceName(const Aws::String& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = value; }

    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline void SetWorkspaceName(Aws::String&& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = std::move(value); }

    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline void SetWorkspaceName(const char* value) { m_workspaceNameHasBeenSet = true; m_workspaceName.assign(value); }

    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceName(const Aws::String& value) { SetWorkspaceName(value); return *this;}

    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceName(Aws::String&& value) { SetWorkspaceName(std::move(value)); return *this;}

    /**
     * <p>The name for the workspace. It does not have to be unique.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceName(const char* value) { SetWorkspaceName(value); return *this;}


    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline const Aws::Vector<NotificationDestinationType>& GetWorkspaceNotificationDestinations() const{ return m_workspaceNotificationDestinations; }

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline bool WorkspaceNotificationDestinationsHasBeenSet() const { return m_workspaceNotificationDestinationsHasBeenSet; }

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline void SetWorkspaceNotificationDestinations(const Aws::Vector<NotificationDestinationType>& value) { m_workspaceNotificationDestinationsHasBeenSet = true; m_workspaceNotificationDestinations = value; }

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline void SetWorkspaceNotificationDestinations(Aws::Vector<NotificationDestinationType>&& value) { m_workspaceNotificationDestinationsHasBeenSet = true; m_workspaceNotificationDestinations = std::move(value); }

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceNotificationDestinations(const Aws::Vector<NotificationDestinationType>& value) { SetWorkspaceNotificationDestinations(value); return *this;}

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceNotificationDestinations(Aws::Vector<NotificationDestinationType>&& value) { SetWorkspaceNotificationDestinations(std::move(value)); return *this;}

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline CreateWorkspaceRequest& AddWorkspaceNotificationDestinations(const NotificationDestinationType& value) { m_workspaceNotificationDestinationsHasBeenSet = true; m_workspaceNotificationDestinations.push_back(value); return *this; }

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline CreateWorkspaceRequest& AddWorkspaceNotificationDestinations(NotificationDestinationType&& value) { m_workspaceNotificationDestinationsHasBeenSet = true; m_workspaceNotificationDestinations.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkspaceOrganizationalUnits() const{ return m_workspaceOrganizationalUnits; }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline bool WorkspaceOrganizationalUnitsHasBeenSet() const { return m_workspaceOrganizationalUnitsHasBeenSet; }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline void SetWorkspaceOrganizationalUnits(const Aws::Vector<Aws::String>& value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits = value; }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline void SetWorkspaceOrganizationalUnits(Aws::Vector<Aws::String>&& value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits = std::move(value); }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceOrganizationalUnits(const Aws::Vector<Aws::String>& value) { SetWorkspaceOrganizationalUnits(value); return *this;}

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceOrganizationalUnits(Aws::Vector<Aws::String>&& value) { SetWorkspaceOrganizationalUnits(std::move(value)); return *this;}

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline CreateWorkspaceRequest& AddWorkspaceOrganizationalUnits(const Aws::String& value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits.push_back(value); return *this; }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline CreateWorkspaceRequest& AddWorkspaceOrganizationalUnits(Aws::String&& value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline CreateWorkspaceRequest& AddWorkspaceOrganizationalUnits(const char* value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits.push_back(value); return *this; }


    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline const Aws::String& GetWorkspaceRoleArn() const{ return m_workspaceRoleArn; }

    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline bool WorkspaceRoleArnHasBeenSet() const { return m_workspaceRoleArnHasBeenSet; }

    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline void SetWorkspaceRoleArn(const Aws::String& value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn = value; }

    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline void SetWorkspaceRoleArn(Aws::String&& value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn = std::move(value); }

    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline void SetWorkspaceRoleArn(const char* value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn.assign(value); }

    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceRoleArn(const Aws::String& value) { SetWorkspaceRoleArn(value); return *this;}

    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceRoleArn(Aws::String&& value) { SetWorkspaceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The workspace needs an IAM role that grants permissions to the Amazon Web
     * Services resources that the workspace will view data from. If you already have a
     * role that you want to use, specify it here. The permission type should be set to
     * <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline CreateWorkspaceRequest& WithWorkspaceRoleArn(const char* value) { SetWorkspaceRoleArn(value); return *this;}

  private:

    AccountAccessType m_accountAccessType;
    bool m_accountAccessTypeHasBeenSet = false;

    Aws::Vector<AuthenticationProviderTypes> m_authenticationProviders;
    bool m_authenticationProvidersHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_organizationRoleName;
    bool m_organizationRoleNameHasBeenSet = false;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<DataSourceType> m_workspaceDataSources;
    bool m_workspaceDataSourcesHasBeenSet = false;

    Aws::String m_workspaceDescription;
    bool m_workspaceDescriptionHasBeenSet = false;

    Aws::String m_workspaceName;
    bool m_workspaceNameHasBeenSet = false;

    Aws::Vector<NotificationDestinationType> m_workspaceNotificationDestinations;
    bool m_workspaceNotificationDestinationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_workspaceOrganizationalUnits;
    bool m_workspaceOrganizationalUnitsHasBeenSet = false;

    Aws::String m_workspaceRoleArn;
    bool m_workspaceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
