/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AccountAccessType.h>
#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <aws/grafana/model/DataSourceType.h>
#include <aws/grafana/model/NetworkAccessConfiguration.h>
#include <aws/grafana/model/NotificationDestinationType.h>
#include <aws/grafana/model/PermissionType.h>
#include <aws/grafana/model/VpcConfiguration.h>

#include <utility>

namespace Aws {
namespace ManagedGrafana {
namespace Model {

/**
 */
class CreateWorkspaceRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API CreateWorkspaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspace"; }

  AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies whether the workspace can access Amazon Web Services resources in
   * this Amazon Web Services account only, or whether it can also access Amazon Web
   * Services resources in other accounts in the same organization. If you specify
   * <code>ORGANIZATION</code>, you must specify which organizational units the
   * workspace can access in the <code>workspaceOrganizationalUnits</code>
   * parameter.</p>
   */
  inline AccountAccessType GetAccountAccessType() const { return m_accountAccessType; }
  inline bool AccountAccessTypeHasBeenSet() const { return m_accountAccessTypeHasBeenSet; }
  inline void SetAccountAccessType(AccountAccessType value) {
    m_accountAccessTypeHasBeenSet = true;
    m_accountAccessType = value;
  }
  inline CreateWorkspaceRequest& WithAccountAccessType(AccountAccessType value) {
    SetAccountAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive, user-provided identifier to ensure the idempotency
   * of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateWorkspaceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of an IAM role that already exists to use with Organizations to
   * access Amazon Web Services data sources and notification channels in other
   * accounts in an organization.</p>
   */
  inline const Aws::String& GetOrganizationRoleName() const { return m_organizationRoleName; }
  inline bool OrganizationRoleNameHasBeenSet() const { return m_organizationRoleNameHasBeenSet; }
  template <typename OrganizationRoleNameT = Aws::String>
  void SetOrganizationRoleName(OrganizationRoleNameT&& value) {
    m_organizationRoleNameHasBeenSet = true;
    m_organizationRoleName = std::forward<OrganizationRoleNameT>(value);
  }
  template <typename OrganizationRoleNameT = Aws::String>
  CreateWorkspaceRequest& WithOrganizationRoleName(OrganizationRoleNameT&& value) {
    SetOrganizationRoleName(std::forward<OrganizationRoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When creating a workspace through the Amazon Web Services API, CLI or Amazon
   * Web Services CloudFormation, you must manage IAM roles and provision the
   * permissions that the workspace needs to use Amazon Web Services data sources and
   * notification channels.</p> <p>You must also specify a
   * <code>workspaceRoleArn</code> for a role that you will manage for the workspace
   * to use when accessing those datasources and notification channels.</p> <p>The
   * ability for Amazon Managed Grafana to create and update IAM roles on behalf of
   * the user is supported only in the Amazon Managed Grafana console, where this
   * value may be set to <code>SERVICE_MANAGED</code>.</p>  <p>Use only the
   * <code>CUSTOMER_MANAGED</code> permission type when creating a workspace with the
   * API, CLI or Amazon Web Services CloudFormation. </p>  <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
   * Managed Grafana permissions and policies for Amazon Web Services data sources
   * and notification channels</a>.</p>
   */
  inline PermissionType GetPermissionType() const { return m_permissionType; }
  inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
  inline void SetPermissionType(PermissionType value) {
    m_permissionTypeHasBeenSet = true;
    m_permissionType = value;
  }
  inline CreateWorkspaceRequest& WithPermissionType(PermissionType value) {
    SetPermissionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
   * used for this workspace.</p>
   */
  inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
  inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
  template <typename StackSetNameT = Aws::String>
  void SetStackSetName(StackSetNameT&& value) {
    m_stackSetNameHasBeenSet = true;
    m_stackSetName = std::forward<StackSetNameT>(value);
  }
  template <typename StackSetNameT = Aws::String>
  CreateWorkspaceRequest& WithStackSetName(StackSetNameT&& value) {
    SetStackSetName(std::forward<StackSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This parameter is for internal use only, and should not be used.</p>
   */
  inline const Aws::Vector<DataSourceType>& GetWorkspaceDataSources() const { return m_workspaceDataSources; }
  inline bool WorkspaceDataSourcesHasBeenSet() const { return m_workspaceDataSourcesHasBeenSet; }
  template <typename WorkspaceDataSourcesT = Aws::Vector<DataSourceType>>
  void SetWorkspaceDataSources(WorkspaceDataSourcesT&& value) {
    m_workspaceDataSourcesHasBeenSet = true;
    m_workspaceDataSources = std::forward<WorkspaceDataSourcesT>(value);
  }
  template <typename WorkspaceDataSourcesT = Aws::Vector<DataSourceType>>
  CreateWorkspaceRequest& WithWorkspaceDataSources(WorkspaceDataSourcesT&& value) {
    SetWorkspaceDataSources(std::forward<WorkspaceDataSourcesT>(value));
    return *this;
  }
  inline CreateWorkspaceRequest& AddWorkspaceDataSources(DataSourceType value) {
    m_workspaceDataSourcesHasBeenSet = true;
    m_workspaceDataSources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the workspace. This is used only to help you identify this
   * workspace.</p> <p>Pattern: <code>^[\\p{L}\\p{Z}\\p{N}\\p{P}]{0,2048}$</code>
   * </p>
   */
  inline const Aws::String& GetWorkspaceDescription() const { return m_workspaceDescription; }
  inline bool WorkspaceDescriptionHasBeenSet() const { return m_workspaceDescriptionHasBeenSet; }
  template <typename WorkspaceDescriptionT = Aws::String>
  void SetWorkspaceDescription(WorkspaceDescriptionT&& value) {
    m_workspaceDescriptionHasBeenSet = true;
    m_workspaceDescription = std::forward<WorkspaceDescriptionT>(value);
  }
  template <typename WorkspaceDescriptionT = Aws::String>
  CreateWorkspaceRequest& WithWorkspaceDescription(WorkspaceDescriptionT&& value) {
    SetWorkspaceDescription(std::forward<WorkspaceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the workspace. It does not have to be unique.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  CreateWorkspaceRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specify the Amazon Web Services notification channels that you plan to use in
   * this workspace. Specifying these data sources here enables Amazon Managed
   * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
   * use these channels.</p>
   */
  inline const Aws::Vector<NotificationDestinationType>& GetWorkspaceNotificationDestinations() const {
    return m_workspaceNotificationDestinations;
  }
  inline bool WorkspaceNotificationDestinationsHasBeenSet() const { return m_workspaceNotificationDestinationsHasBeenSet; }
  template <typename WorkspaceNotificationDestinationsT = Aws::Vector<NotificationDestinationType>>
  void SetWorkspaceNotificationDestinations(WorkspaceNotificationDestinationsT&& value) {
    m_workspaceNotificationDestinationsHasBeenSet = true;
    m_workspaceNotificationDestinations = std::forward<WorkspaceNotificationDestinationsT>(value);
  }
  template <typename WorkspaceNotificationDestinationsT = Aws::Vector<NotificationDestinationType>>
  CreateWorkspaceRequest& WithWorkspaceNotificationDestinations(WorkspaceNotificationDestinationsT&& value) {
    SetWorkspaceNotificationDestinations(std::forward<WorkspaceNotificationDestinationsT>(value));
    return *this;
  }
  inline CreateWorkspaceRequest& AddWorkspaceNotificationDestinations(NotificationDestinationType value) {
    m_workspaceNotificationDestinationsHasBeenSet = true;
    m_workspaceNotificationDestinations.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the organizational units that this workspace is allowed to use data
   * sources from, if this workspace is in an account that is part of an
   * organization.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWorkspaceOrganizationalUnits() const { return m_workspaceOrganizationalUnits; }
  inline bool WorkspaceOrganizationalUnitsHasBeenSet() const { return m_workspaceOrganizationalUnitsHasBeenSet; }
  template <typename WorkspaceOrganizationalUnitsT = Aws::Vector<Aws::String>>
  void SetWorkspaceOrganizationalUnits(WorkspaceOrganizationalUnitsT&& value) {
    m_workspaceOrganizationalUnitsHasBeenSet = true;
    m_workspaceOrganizationalUnits = std::forward<WorkspaceOrganizationalUnitsT>(value);
  }
  template <typename WorkspaceOrganizationalUnitsT = Aws::Vector<Aws::String>>
  CreateWorkspaceRequest& WithWorkspaceOrganizationalUnits(WorkspaceOrganizationalUnitsT&& value) {
    SetWorkspaceOrganizationalUnits(std::forward<WorkspaceOrganizationalUnitsT>(value));
    return *this;
  }
  template <typename WorkspaceOrganizationalUnitsT = Aws::String>
  CreateWorkspaceRequest& AddWorkspaceOrganizationalUnits(WorkspaceOrganizationalUnitsT&& value) {
    m_workspaceOrganizationalUnitsHasBeenSet = true;
    m_workspaceOrganizationalUnits.emplace_back(std::forward<WorkspaceOrganizationalUnitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specified the IAM role that grants permissions to the Amazon Web Services
   * resources that the workspace will view data from, including both data sources
   * and notification channels. You are responsible for managing the permissions for
   * this role as new data sources or notification channels are added. </p>
   */
  inline const Aws::String& GetWorkspaceRoleArn() const { return m_workspaceRoleArn; }
  inline bool WorkspaceRoleArnHasBeenSet() const { return m_workspaceRoleArnHasBeenSet; }
  template <typename WorkspaceRoleArnT = Aws::String>
  void SetWorkspaceRoleArn(WorkspaceRoleArnT&& value) {
    m_workspaceRoleArnHasBeenSet = true;
    m_workspaceRoleArn = std::forward<WorkspaceRoleArnT>(value);
  }
  template <typename WorkspaceRoleArnT = Aws::String>
  CreateWorkspaceRequest& WithWorkspaceRoleArn(WorkspaceRoleArnT&& value) {
    SetWorkspaceRoleArn(std::forward<WorkspaceRoleArnT>(value));
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
  CreateWorkspaceRequest& WithAuthenticationProviders(AuthenticationProvidersT&& value) {
    SetAuthenticationProviders(std::forward<AuthenticationProvidersT>(value));
    return *this;
  }
  inline CreateWorkspaceRequest& AddAuthenticationProviders(AuthenticationProviderTypes value) {
    m_authenticationProvidersHasBeenSet = true;
    m_authenticationProviders.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of tags associated with the workspace.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateWorkspaceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateWorkspaceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for an Amazon VPC that contains data sources for
   * your Grafana workspace to connect to.</p>  <p>Connecting to a private VPC
   * is not yet available in the Asia Pacific (Seoul) Region (ap-northeast-2).</p>
   *
   */
  inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
  template <typename VpcConfigurationT = VpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = VpcConfiguration>
  CreateWorkspaceRequest& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration string for the workspace that you create. For more
   * information about the format and configuration options available, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-configure-workspace.html">Working
   * in your Grafana workspace</a>.</p>
   */
  inline const Aws::String& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = Aws::String>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = Aws::String>
  CreateWorkspaceRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for network access to your workspace.</p> <p>When this is
   * configured, only listed IP addresses and VPC endpoints will be able to access
   * your workspace. Standard Grafana authentication and authorization will still be
   * required.</p> <p>If this is not configured, or is removed, then all IP addresses
   * and VPC endpoints will be allowed. Standard Grafana authentication and
   * authorization will still be required.</p>
   */
  inline const NetworkAccessConfiguration& GetNetworkAccessControl() const { return m_networkAccessControl; }
  inline bool NetworkAccessControlHasBeenSet() const { return m_networkAccessControlHasBeenSet; }
  template <typename NetworkAccessControlT = NetworkAccessConfiguration>
  void SetNetworkAccessControl(NetworkAccessControlT&& value) {
    m_networkAccessControlHasBeenSet = true;
    m_networkAccessControl = std::forward<NetworkAccessControlT>(value);
  }
  template <typename NetworkAccessControlT = NetworkAccessConfiguration>
  CreateWorkspaceRequest& WithNetworkAccessControl(NetworkAccessControlT&& value) {
    SetNetworkAccessControl(std::forward<NetworkAccessControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the version of Grafana to support in the new workspace. If not
   * specified, defaults to the latest version (for example, 10.4).</p> <p>To get a
   * list of supported versions, use the <code>ListVersions</code> operation.</p>
   */
  inline const Aws::String& GetGrafanaVersion() const { return m_grafanaVersion; }
  inline bool GrafanaVersionHasBeenSet() const { return m_grafanaVersionHasBeenSet; }
  template <typename GrafanaVersionT = Aws::String>
  void SetGrafanaVersion(GrafanaVersionT&& value) {
    m_grafanaVersionHasBeenSet = true;
    m_grafanaVersion = std::forward<GrafanaVersionT>(value);
  }
  template <typename GrafanaVersionT = Aws::String>
  CreateWorkspaceRequest& WithGrafanaVersion(GrafanaVersionT&& value) {
    SetGrafanaVersion(std::forward<GrafanaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID or ARN of the Key Management Service key to use for encrypting
   * workspace data.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateWorkspaceRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  AccountAccessType m_accountAccessType{AccountAccessType::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_organizationRoleName;

  PermissionType m_permissionType{PermissionType::NOT_SET};

  Aws::String m_stackSetName;

  Aws::Vector<DataSourceType> m_workspaceDataSources;

  Aws::String m_workspaceDescription;

  Aws::String m_workspaceName;

  Aws::Vector<NotificationDestinationType> m_workspaceNotificationDestinations;

  Aws::Vector<Aws::String> m_workspaceOrganizationalUnits;

  Aws::String m_workspaceRoleArn;

  Aws::Vector<AuthenticationProviderTypes> m_authenticationProviders;

  Aws::Map<Aws::String, Aws::String> m_tags;

  VpcConfiguration m_vpcConfiguration;

  Aws::String m_configuration;

  NetworkAccessConfiguration m_networkAccessControl;

  Aws::String m_grafanaVersion;

  Aws::String m_kmsKeyId;
  bool m_accountAccessTypeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_organizationRoleNameHasBeenSet = false;
  bool m_permissionTypeHasBeenSet = false;
  bool m_stackSetNameHasBeenSet = false;
  bool m_workspaceDataSourcesHasBeenSet = false;
  bool m_workspaceDescriptionHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_workspaceNotificationDestinationsHasBeenSet = false;
  bool m_workspaceOrganizationalUnitsHasBeenSet = false;
  bool m_workspaceRoleArnHasBeenSet = false;
  bool m_authenticationProvidersHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_vpcConfigurationHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_networkAccessControlHasBeenSet = false;
  bool m_grafanaVersionHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
