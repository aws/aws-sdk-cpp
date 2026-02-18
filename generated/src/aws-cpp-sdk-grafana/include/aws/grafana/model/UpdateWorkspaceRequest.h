/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AccountAccessType.h>
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
class UpdateWorkspaceRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API UpdateWorkspaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspace"; }

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
  inline UpdateWorkspaceRequest& WithAccountAccessType(AccountAccessType value) {
    SetAccountAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of an IAM role that already exists to use to access resources
   * through Organizations. This can only be used with a workspace that has the
   * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
   */
  inline const Aws::String& GetOrganizationRoleName() const { return m_organizationRoleName; }
  inline bool OrganizationRoleNameHasBeenSet() const { return m_organizationRoleNameHasBeenSet; }
  template <typename OrganizationRoleNameT = Aws::String>
  void SetOrganizationRoleName(OrganizationRoleNameT&& value) {
    m_organizationRoleNameHasBeenSet = true;
    m_organizationRoleName = std::forward<OrganizationRoleNameT>(value);
  }
  template <typename OrganizationRoleNameT = Aws::String>
  UpdateWorkspaceRequest& WithOrganizationRoleName(OrganizationRoleNameT&& value) {
    SetOrganizationRoleName(std::forward<OrganizationRoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter if you want to change a workspace from
   * <code>SERVICE_MANAGED</code> to <code>CUSTOMER_MANAGED</code>. This allows you
   * to manage the permissions that the workspace uses to access datasources and
   * notification channels. If the workspace is in a member Amazon Web Services
   * account of an organization, and that account is not a delegated administrator
   * account, and you want the workspace to access data sources in other Amazon Web
   * Services accounts in the organization, you must choose
   * <code>CUSTOMER_MANAGED</code>.</p> <p>If you specify this as
   * <code>CUSTOMER_MANAGED</code>, you must also specify a
   * <code>workspaceRoleArn</code> that the workspace will use for accessing Amazon
   * Web Services resources.</p> <p>For more information on the role and permissions
   * needed, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
   * Managed Grafana permissions and policies for Amazon Web Services data sources
   * and notification channels</a> </p>  <p>Do not use this to convert a
   * <code>CUSTOMER_MANAGED</code> workspace to <code>SERVICE_MANAGED</code>. Do not
   * include this parameter if you want to leave the workspace as
   * <code>SERVICE_MANAGED</code>.</p> <p>You can convert a
   * <code>CUSTOMER_MANAGED</code> workspace to <code>SERVICE_MANAGED</code> using
   * the Amazon Managed Grafana console. For more information, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-datasource-and-notification.html">Managing
   * permissions for data sources and notification channels</a>.</p>
   */
  inline PermissionType GetPermissionType() const { return m_permissionType; }
  inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
  inline void SetPermissionType(PermissionType value) {
    m_permissionTypeHasBeenSet = true;
    m_permissionType = value;
  }
  inline UpdateWorkspaceRequest& WithPermissionType(PermissionType value) {
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
  UpdateWorkspaceRequest& WithStackSetName(StackSetNameT&& value) {
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
  UpdateWorkspaceRequest& WithWorkspaceDataSources(WorkspaceDataSourcesT&& value) {
    SetWorkspaceDataSources(std::forward<WorkspaceDataSourcesT>(value));
    return *this;
  }
  inline UpdateWorkspaceRequest& AddWorkspaceDataSources(DataSourceType value) {
    m_workspaceDataSourcesHasBeenSet = true;
    m_workspaceDataSources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the workspace. This is used only to help you identify this
   * workspace.</p>
   */
  inline const Aws::String& GetWorkspaceDescription() const { return m_workspaceDescription; }
  inline bool WorkspaceDescriptionHasBeenSet() const { return m_workspaceDescriptionHasBeenSet; }
  template <typename WorkspaceDescriptionT = Aws::String>
  void SetWorkspaceDescription(WorkspaceDescriptionT&& value) {
    m_workspaceDescriptionHasBeenSet = true;
    m_workspaceDescription = std::forward<WorkspaceDescriptionT>(value);
  }
  template <typename WorkspaceDescriptionT = Aws::String>
  UpdateWorkspaceRequest& WithWorkspaceDescription(WorkspaceDescriptionT&& value) {
    SetWorkspaceDescription(std::forward<WorkspaceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace to update.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  UpdateWorkspaceRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new name for the workspace to update.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  UpdateWorkspaceRequest& WithWorkspaceName(WorkspaceNameT&& value) {
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
  UpdateWorkspaceRequest& WithWorkspaceNotificationDestinations(WorkspaceNotificationDestinationsT&& value) {
    SetWorkspaceNotificationDestinations(std::forward<WorkspaceNotificationDestinationsT>(value));
    return *this;
  }
  inline UpdateWorkspaceRequest& AddWorkspaceNotificationDestinations(NotificationDestinationType value) {
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
  UpdateWorkspaceRequest& WithWorkspaceOrganizationalUnits(WorkspaceOrganizationalUnitsT&& value) {
    SetWorkspaceOrganizationalUnits(std::forward<WorkspaceOrganizationalUnitsT>(value));
    return *this;
  }
  template <typename WorkspaceOrganizationalUnitsT = Aws::String>
  UpdateWorkspaceRequest& AddWorkspaceOrganizationalUnits(WorkspaceOrganizationalUnitsT&& value) {
    m_workspaceOrganizationalUnitsHasBeenSet = true;
    m_workspaceOrganizationalUnits.emplace_back(std::forward<WorkspaceOrganizationalUnitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies an IAM role that grants permissions to Amazon Web Services
   * resources that the workspace accesses, such as data sources and notification
   * channels. If this workspace has <code>permissionType</code>
   * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
   */
  inline const Aws::String& GetWorkspaceRoleArn() const { return m_workspaceRoleArn; }
  inline bool WorkspaceRoleArnHasBeenSet() const { return m_workspaceRoleArnHasBeenSet; }
  template <typename WorkspaceRoleArnT = Aws::String>
  void SetWorkspaceRoleArn(WorkspaceRoleArnT&& value) {
    m_workspaceRoleArnHasBeenSet = true;
    m_workspaceRoleArn = std::forward<WorkspaceRoleArnT>(value);
  }
  template <typename WorkspaceRoleArnT = Aws::String>
  UpdateWorkspaceRequest& WithWorkspaceRoleArn(WorkspaceRoleArnT&& value) {
    SetWorkspaceRoleArn(std::forward<WorkspaceRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for an Amazon VPC that contains data sources for
   * your Grafana workspace to connect to.</p>
   */
  inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
  template <typename VpcConfigurationT = VpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = VpcConfiguration>
  UpdateWorkspaceRequest& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to remove the VPC configuration from the workspace.</p> <p>Setting
   * this to <code>true</code> and providing a <code>vpcConfiguration</code> to set
   * will return an error.</p>
   */
  inline bool GetRemoveVpcConfiguration() const { return m_removeVpcConfiguration; }
  inline bool RemoveVpcConfigurationHasBeenSet() const { return m_removeVpcConfigurationHasBeenSet; }
  inline void SetRemoveVpcConfiguration(bool value) {
    m_removeVpcConfigurationHasBeenSet = true;
    m_removeVpcConfiguration = value;
  }
  inline UpdateWorkspaceRequest& WithRemoveVpcConfiguration(bool value) {
    SetRemoveVpcConfiguration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for network access to your workspace.</p> <p>When
   * this is configured, only listed IP addresses and VPC endpoints will be able to
   * access your workspace. Standard Grafana authentication and authorization will
   * still be required.</p> <p>If this is not configured, or is removed, then all IP
   * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
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
  UpdateWorkspaceRequest& WithNetworkAccessControl(NetworkAccessControlT&& value) {
    SetNetworkAccessControl(std::forward<NetworkAccessControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to remove the network access configuration from the workspace.</p>
   * <p>Setting this to <code>true</code> and providing a
   * <code>networkAccessControl</code> to set will return an error.</p> <p>If you
   * remove this configuration by setting this to <code>true</code>, then all IP
   * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
   * authorization will still be required.</p>
   */
  inline bool GetRemoveNetworkAccessConfiguration() const { return m_removeNetworkAccessConfiguration; }
  inline bool RemoveNetworkAccessConfigurationHasBeenSet() const { return m_removeNetworkAccessConfigurationHasBeenSet; }
  inline void SetRemoveNetworkAccessConfiguration(bool value) {
    m_removeNetworkAccessConfigurationHasBeenSet = true;
    m_removeNetworkAccessConfiguration = value;
  }
  inline UpdateWorkspaceRequest& WithRemoveNetworkAccessConfiguration(bool value) {
    SetRemoveNetworkAccessConfiguration(value);
    return *this;
  }
  ///@}
 private:
  AccountAccessType m_accountAccessType{AccountAccessType::NOT_SET};

  Aws::String m_organizationRoleName;

  PermissionType m_permissionType{PermissionType::NOT_SET};

  Aws::String m_stackSetName;

  Aws::Vector<DataSourceType> m_workspaceDataSources;

  Aws::String m_workspaceDescription;

  Aws::String m_workspaceId;

  Aws::String m_workspaceName;

  Aws::Vector<NotificationDestinationType> m_workspaceNotificationDestinations;

  Aws::Vector<Aws::String> m_workspaceOrganizationalUnits;

  Aws::String m_workspaceRoleArn;

  VpcConfiguration m_vpcConfiguration;

  bool m_removeVpcConfiguration{false};

  NetworkAccessConfiguration m_networkAccessControl;

  bool m_removeNetworkAccessConfiguration{false};
  bool m_accountAccessTypeHasBeenSet = false;
  bool m_organizationRoleNameHasBeenSet = false;
  bool m_permissionTypeHasBeenSet = false;
  bool m_stackSetNameHasBeenSet = false;
  bool m_workspaceDataSourcesHasBeenSet = false;
  bool m_workspaceDescriptionHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_workspaceNotificationDestinationsHasBeenSet = false;
  bool m_workspaceOrganizationalUnitsHasBeenSet = false;
  bool m_workspaceRoleArnHasBeenSet = false;
  bool m_vpcConfigurationHasBeenSet = false;
  bool m_removeVpcConfigurationHasBeenSet = false;
  bool m_networkAccessControlHasBeenSet = false;
  bool m_removeNetworkAccessConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
