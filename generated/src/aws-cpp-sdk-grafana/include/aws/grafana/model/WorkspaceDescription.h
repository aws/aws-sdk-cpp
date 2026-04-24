/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AccountAccessType.h>
#include <aws/grafana/model/AuthenticationSummary.h>
#include <aws/grafana/model/DataSourceType.h>
#include <aws/grafana/model/LicenseType.h>
#include <aws/grafana/model/NetworkAccessConfiguration.h>
#include <aws/grafana/model/NotificationDestinationType.h>
#include <aws/grafana/model/PermissionType.h>
#include <aws/grafana/model/VpcConfiguration.h>
#include <aws/grafana/model/WorkspaceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {

/**
 * <p>A structure containing information about an Amazon Managed Grafana workspace
 * in your account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/WorkspaceDescription">AWS
 * API Reference</a></p>
 */
class WorkspaceDescription {
 public:
  AWS_MANAGEDGRAFANA_API WorkspaceDescription() = default;
  AWS_MANAGEDGRAFANA_API WorkspaceDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API WorkspaceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the workspace can access Amazon Web Services resources in
   * this Amazon Web Services account only, or whether it can also access Amazon Web
   * Services resources in other accounts in the same organization. If this is
   * <code>ORGANIZATION</code>, the <code>workspaceOrganizationalUnits</code>
   * parameter specifies which organizational units the workspace can access.</p>
   */
  inline AccountAccessType GetAccountAccessType() const { return m_accountAccessType; }
  inline bool AccountAccessTypeHasBeenSet() const { return m_accountAccessTypeHasBeenSet; }
  inline void SetAccountAccessType(AccountAccessType value) {
    m_accountAccessTypeHasBeenSet = true;
    m_accountAccessType = value;
  }
  inline WorkspaceDescription& WithAccountAccessType(AccountAccessType value) {
    SetAccountAccessType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date that the workspace was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::Utils::DateTime>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::Utils::DateTime>
  WorkspaceDescription& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon Web Services data sources that have been configured to
   * have IAM roles and permissions created to allow Amazon Managed Grafana to read
   * data from these sources.</p> <p>This list is only used when the workspace was
   * created through the Amazon Web Services console, and the
   * <code>permissionType</code> is <code>SERVICE_MANAGED</code>.</p>
   */
  inline const Aws::Vector<DataSourceType>& GetDataSources() const { return m_dataSources; }
  inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
  template <typename DataSourcesT = Aws::Vector<DataSourceType>>
  void SetDataSources(DataSourcesT&& value) {
    m_dataSourcesHasBeenSet = true;
    m_dataSources = std::forward<DataSourcesT>(value);
  }
  template <typename DataSourcesT = Aws::Vector<DataSourceType>>
  WorkspaceDescription& WithDataSources(DataSourcesT&& value) {
    SetDataSources(std::forward<DataSourcesT>(value));
    return *this;
  }
  inline WorkspaceDescription& AddDataSources(DataSourceType value) {
    m_dataSourcesHasBeenSet = true;
    m_dataSources.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-defined description of the workspace.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  WorkspaceDescription& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL that users can use to access the Grafana console in the
   * workspace.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  WorkspaceDescription& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of Grafana supported in this workspace.</p>
   */
  inline const Aws::String& GetGrafanaVersion() const { return m_grafanaVersion; }
  inline bool GrafanaVersionHasBeenSet() const { return m_grafanaVersionHasBeenSet; }
  template <typename GrafanaVersionT = Aws::String>
  void SetGrafanaVersion(GrafanaVersionT&& value) {
    m_grafanaVersionHasBeenSet = true;
    m_grafanaVersion = std::forward<GrafanaVersionT>(value);
  }
  template <typename GrafanaVersionT = Aws::String>
  WorkspaceDescription& WithGrafanaVersion(GrafanaVersionT&& value) {
    SetGrafanaVersion(std::forward<GrafanaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of this workspace.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  WorkspaceDescription& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The most recent date that the workspace was modified.</p>
   */
  inline const Aws::Utils::DateTime& GetModified() const { return m_modified; }
  inline bool ModifiedHasBeenSet() const { return m_modifiedHasBeenSet; }
  template <typename ModifiedT = Aws::Utils::DateTime>
  void SetModified(ModifiedT&& value) {
    m_modifiedHasBeenSet = true;
    m_modified = std::forward<ModifiedT>(value);
  }
  template <typename ModifiedT = Aws::Utils::DateTime>
  WorkspaceDescription& WithModified(ModifiedT&& value) {
    SetModified(std::forward<ModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  WorkspaceDescription& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the IAM role that is used to access resources through
   * Organizations.</p>
   */
  inline const Aws::String& GetOrganizationRoleName() const { return m_organizationRoleName; }
  inline bool OrganizationRoleNameHasBeenSet() const { return m_organizationRoleNameHasBeenSet; }
  template <typename OrganizationRoleNameT = Aws::String>
  void SetOrganizationRoleName(OrganizationRoleNameT&& value) {
    m_organizationRoleNameHasBeenSet = true;
    m_organizationRoleName = std::forward<OrganizationRoleNameT>(value);
  }
  template <typename OrganizationRoleNameT = Aws::String>
  WorkspaceDescription& WithOrganizationRoleName(OrganizationRoleNameT&& value) {
    SetOrganizationRoleName(std::forward<OrganizationRoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
   * automatically create IAM roles and permissions for, to allow Amazon Managed
   * Grafana to use these channels.</p>
   */
  inline const Aws::Vector<NotificationDestinationType>& GetNotificationDestinations() const { return m_notificationDestinations; }
  inline bool NotificationDestinationsHasBeenSet() const { return m_notificationDestinationsHasBeenSet; }
  template <typename NotificationDestinationsT = Aws::Vector<NotificationDestinationType>>
  void SetNotificationDestinations(NotificationDestinationsT&& value) {
    m_notificationDestinationsHasBeenSet = true;
    m_notificationDestinations = std::forward<NotificationDestinationsT>(value);
  }
  template <typename NotificationDestinationsT = Aws::Vector<NotificationDestinationType>>
  WorkspaceDescription& WithNotificationDestinations(NotificationDestinationsT&& value) {
    SetNotificationDestinations(std::forward<NotificationDestinationsT>(value));
    return *this;
  }
  inline WorkspaceDescription& AddNotificationDestinations(NotificationDestinationType value) {
    m_notificationDestinationsHasBeenSet = true;
    m_notificationDestinations.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the organizational units that this workspace is allowed to use data
   * sources from, if this workspace is in an account that is part of an
   * organization.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOrganizationalUnits() const { return m_organizationalUnits; }
  inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }
  template <typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
  void SetOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits = std::forward<OrganizationalUnitsT>(value);
  }
  template <typename OrganizationalUnitsT = Aws::Vector<Aws::String>>
  WorkspaceDescription& WithOrganizationalUnits(OrganizationalUnitsT&& value) {
    SetOrganizationalUnits(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  template <typename OrganizationalUnitsT = Aws::String>
  WorkspaceDescription& AddOrganizationalUnits(OrganizationalUnitsT&& value) {
    m_organizationalUnitsHasBeenSet = true;
    m_organizationalUnits.emplace_back(std::forward<OrganizationalUnitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If this is <code>SERVICE_MANAGED</code>, and the workplace was created
   * through the Amazon Managed Grafana console, then Amazon Managed Grafana
   * automatically creates the IAM roles and provisions the permissions that the
   * workspace needs to use Amazon Web Services data sources and notification
   * channels.</p> <p>If this is <code>CUSTOMER_MANAGED</code>, you must manage those
   * roles and permissions yourself.</p> <p>If you are working with a workspace in a
   * member account of an organization and that account is not a delegated
   * administrator account, and you want the workspace to access data sources in
   * other Amazon Web Services accounts in the organization, this parameter must be
   * set to <code>CUSTOMER_MANAGED</code>.</p> <p>For more information about
   * converting between customer and service managed, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-datasource-and-notification.html">Managing
   * permissions for data sources and notification channels</a>. For more information
   * about the roles and permissions that must be managed for customer managed
   * workspaces, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/AMG-manage-permissions.html">Amazon
   * Managed Grafana permissions and policies for Amazon Web Services data sources
   * and notification channels</a> </p>
   */
  inline PermissionType GetPermissionType() const { return m_permissionType; }
  inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
  inline void SetPermissionType(PermissionType value) {
    m_permissionTypeHasBeenSet = true;
    m_permissionType = value;
  }
  inline WorkspaceDescription& WithPermissionType(PermissionType value) {
    SetPermissionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudFormation stack set that is used to generate IAM roles
   * to be used for this workspace.</p>
   */
  inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
  inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
  template <typename StackSetNameT = Aws::String>
  void SetStackSetName(StackSetNameT&& value) {
    m_stackSetNameHasBeenSet = true;
    m_stackSetName = std::forward<StackSetNameT>(value);
  }
  template <typename StackSetNameT = Aws::String>
  WorkspaceDescription& WithStackSetName(StackSetNameT&& value) {
    SetStackSetName(std::forward<StackSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the workspace.</p>
   */
  inline WorkspaceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WorkspaceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline WorkspaceDescription& WithStatus(WorkspaceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role that grants permissions to the Amazon Web Services resources
   * that the workspace will view data from. This role must already exist.</p>
   */
  inline const Aws::String& GetWorkspaceRoleArn() const { return m_workspaceRoleArn; }
  inline bool WorkspaceRoleArnHasBeenSet() const { return m_workspaceRoleArnHasBeenSet; }
  template <typename WorkspaceRoleArnT = Aws::String>
  void SetWorkspaceRoleArn(WorkspaceRoleArnT&& value) {
    m_workspaceRoleArnHasBeenSet = true;
    m_workspaceRoleArn = std::forward<WorkspaceRoleArnT>(value);
  }
  template <typename WorkspaceRoleArnT = Aws::String>
  WorkspaceDescription& WithWorkspaceRoleArn(WorkspaceRoleArnT&& value) {
    SetWorkspaceRoleArn(std::forward<WorkspaceRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this workspace has a full Grafana Enterprise license.</p>
   *  <p>Amazon Managed Grafana workspaces no longer support Grafana Enterprise
   * free trials.</p>
   */
  inline LicenseType GetLicenseType() const { return m_licenseType; }
  inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
  inline void SetLicenseType(LicenseType value) {
    m_licenseTypeHasBeenSet = true;
    m_licenseType = value;
  }
  inline WorkspaceDescription& WithLicenseType(LicenseType value) {
    SetLicenseType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this workspace has already fully used its free trial for
   * Grafana Enterprise.</p>  <p>Amazon Managed Grafana workspaces no longer
   * support Grafana Enterprise free trials.</p>
   */
  inline bool GetFreeTrialConsumed() const { return m_freeTrialConsumed; }
  inline bool FreeTrialConsumedHasBeenSet() const { return m_freeTrialConsumedHasBeenSet; }
  inline void SetFreeTrialConsumed(bool value) {
    m_freeTrialConsumedHasBeenSet = true;
    m_freeTrialConsumed = value;
  }
  inline WorkspaceDescription& WithFreeTrialConsumed(bool value) {
    SetFreeTrialConsumed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If this workspace has a full Grafana Enterprise license purchased through
   * Amazon Web Services Marketplace, this specifies when the license ends and will
   * need to be renewed. Purchasing the Enterprise plugins option through Amazon
   * Managed Grafana does not have an expiration. It is valid until the license is
   * removed.</p>
   */
  inline const Aws::Utils::DateTime& GetLicenseExpiration() const { return m_licenseExpiration; }
  inline bool LicenseExpirationHasBeenSet() const { return m_licenseExpirationHasBeenSet; }
  template <typename LicenseExpirationT = Aws::Utils::DateTime>
  void SetLicenseExpiration(LicenseExpirationT&& value) {
    m_licenseExpirationHasBeenSet = true;
    m_licenseExpiration = std::forward<LicenseExpirationT>(value);
  }
  template <typename LicenseExpirationT = Aws::Utils::DateTime>
  WorkspaceDescription& WithLicenseExpiration(LicenseExpirationT&& value) {
    SetLicenseExpiration(std::forward<LicenseExpirationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If this workspace is currently in the free trial period for Grafana
   * Enterprise, this value specifies when that free trial ends.</p>  <p>Amazon
   * Managed Grafana workspaces no longer support Grafana Enterprise free trials.</p>
   *
   */
  inline const Aws::Utils::DateTime& GetFreeTrialExpiration() const { return m_freeTrialExpiration; }
  inline bool FreeTrialExpirationHasBeenSet() const { return m_freeTrialExpirationHasBeenSet; }
  template <typename FreeTrialExpirationT = Aws::Utils::DateTime>
  void SetFreeTrialExpiration(FreeTrialExpirationT&& value) {
    m_freeTrialExpirationHasBeenSet = true;
    m_freeTrialExpiration = std::forward<FreeTrialExpirationT>(value);
  }
  template <typename FreeTrialExpirationT = Aws::Utils::DateTime>
  WorkspaceDescription& WithFreeTrialExpiration(FreeTrialExpirationT&& value) {
    SetFreeTrialExpiration(std::forward<FreeTrialExpirationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A structure that describes whether the workspace uses SAML, IAM Identity
   * Center, or both methods for user authentication.</p>
   */
  inline const AuthenticationSummary& GetAuthentication() const { return m_authentication; }
  inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
  template <typename AuthenticationT = AuthenticationSummary>
  void SetAuthentication(AuthenticationT&& value) {
    m_authenticationHasBeenSet = true;
    m_authentication = std::forward<AuthenticationT>(value);
  }
  template <typename AuthenticationT = AuthenticationSummary>
  WorkspaceDescription& WithAuthentication(AuthenticationT&& value) {
    SetAuthentication(std::forward<AuthenticationT>(value));
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
  WorkspaceDescription& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  WorkspaceDescription& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for connecting to data sources in a private VPC (Amazon
   * Virtual Private Cloud).</p>
   */
  inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
  template <typename VpcConfigurationT = VpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = VpcConfiguration>
  WorkspaceDescription& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for network access to your workspace.</p>
   */
  inline const NetworkAccessConfiguration& GetNetworkAccessControl() const { return m_networkAccessControl; }
  inline bool NetworkAccessControlHasBeenSet() const { return m_networkAccessControlHasBeenSet; }
  template <typename NetworkAccessControlT = NetworkAccessConfiguration>
  void SetNetworkAccessControl(NetworkAccessControlT&& value) {
    m_networkAccessControlHasBeenSet = true;
    m_networkAccessControl = std::forward<NetworkAccessControlT>(value);
  }
  template <typename NetworkAccessControlT = NetworkAccessConfiguration>
  WorkspaceDescription& WithNetworkAccessControl(NetworkAccessControlT&& value) {
    SetNetworkAccessControl(std::forward<NetworkAccessControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that ties this workspace to a Grafana Labs account. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html#AMG-workspace-register-enterprise">Link
   * your account with Grafana Labs</a>.</p>
   */
  inline const Aws::String& GetGrafanaToken() const { return m_grafanaToken; }
  inline bool GrafanaTokenHasBeenSet() const { return m_grafanaTokenHasBeenSet; }
  template <typename GrafanaTokenT = Aws::String>
  void SetGrafanaToken(GrafanaTokenT&& value) {
    m_grafanaTokenHasBeenSet = true;
    m_grafanaToken = std::forward<GrafanaTokenT>(value);
  }
  template <typename GrafanaTokenT = Aws::String>
  WorkspaceDescription& WithGrafanaToken(GrafanaTokenT&& value) {
    SetGrafanaToken(std::forward<GrafanaTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID or ARN of the Key Management Service key used for encrypting workspace
   * data.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  WorkspaceDescription& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  AccountAccessType m_accountAccessType{AccountAccessType::NOT_SET};

  Aws::Utils::DateTime m_created{};

  Aws::Vector<DataSourceType> m_dataSources;

  Aws::String m_description;

  Aws::String m_endpoint;

  Aws::String m_grafanaVersion;

  Aws::String m_id;

  Aws::Utils::DateTime m_modified{};

  Aws::String m_name;

  Aws::String m_organizationRoleName;

  Aws::Vector<NotificationDestinationType> m_notificationDestinations;

  Aws::Vector<Aws::String> m_organizationalUnits;

  PermissionType m_permissionType{PermissionType::NOT_SET};

  Aws::String m_stackSetName;

  WorkspaceStatus m_status{WorkspaceStatus::NOT_SET};

  Aws::String m_workspaceRoleArn;

  LicenseType m_licenseType{LicenseType::NOT_SET};

  bool m_freeTrialConsumed{false};

  Aws::Utils::DateTime m_licenseExpiration{};

  Aws::Utils::DateTime m_freeTrialExpiration{};

  AuthenticationSummary m_authentication;

  Aws::Map<Aws::String, Aws::String> m_tags;

  VpcConfiguration m_vpcConfiguration;

  NetworkAccessConfiguration m_networkAccessControl;

  Aws::String m_grafanaToken;

  Aws::String m_kmsKeyId;
  bool m_accountAccessTypeHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_dataSourcesHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_grafanaVersionHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_modifiedHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_organizationRoleNameHasBeenSet = false;
  bool m_notificationDestinationsHasBeenSet = false;
  bool m_organizationalUnitsHasBeenSet = false;
  bool m_permissionTypeHasBeenSet = false;
  bool m_stackSetNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_workspaceRoleArnHasBeenSet = false;
  bool m_licenseTypeHasBeenSet = false;
  bool m_freeTrialConsumedHasBeenSet = false;
  bool m_licenseExpirationHasBeenSet = false;
  bool m_freeTrialExpirationHasBeenSet = false;
  bool m_authenticationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_vpcConfigurationHasBeenSet = false;
  bool m_networkAccessControlHasBeenSet = false;
  bool m_grafanaTokenHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
