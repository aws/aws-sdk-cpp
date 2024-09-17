/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AccountAccessType.h>
#include <aws/grafana/model/AuthenticationSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/LicenseType.h>
#include <aws/grafana/model/NetworkAccessConfiguration.h>
#include <aws/grafana/model/PermissionType.h>
#include <aws/grafana/model/WorkspaceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/grafana/model/VpcConfiguration.h>
#include <aws/grafana/model/DataSourceType.h>
#include <aws/grafana/model/NotificationDestinationType.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure containing information about an Amazon Managed Grafana workspace
   * in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/WorkspaceDescription">AWS
   * API Reference</a></p>
   */
  class WorkspaceDescription
  {
  public:
    AWS_MANAGEDGRAFANA_API WorkspaceDescription();
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
    inline const AccountAccessType& GetAccountAccessType() const{ return m_accountAccessType; }
    inline bool AccountAccessTypeHasBeenSet() const { return m_accountAccessTypeHasBeenSet; }
    inline void SetAccountAccessType(const AccountAccessType& value) { m_accountAccessTypeHasBeenSet = true; m_accountAccessType = value; }
    inline void SetAccountAccessType(AccountAccessType&& value) { m_accountAccessTypeHasBeenSet = true; m_accountAccessType = std::move(value); }
    inline WorkspaceDescription& WithAccountAccessType(const AccountAccessType& value) { SetAccountAccessType(value); return *this;}
    inline WorkspaceDescription& WithAccountAccessType(AccountAccessType&& value) { SetAccountAccessType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes whether the workspace uses SAML, IAM Identity
     * Center, or both methods for user authentication.</p>
     */
    inline const AuthenticationSummary& GetAuthentication() const{ return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    inline void SetAuthentication(const AuthenticationSummary& value) { m_authenticationHasBeenSet = true; m_authentication = value; }
    inline void SetAuthentication(AuthenticationSummary&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }
    inline WorkspaceDescription& WithAuthentication(const AuthenticationSummary& value) { SetAuthentication(value); return *this;}
    inline WorkspaceDescription& WithAuthentication(AuthenticationSummary&& value) { SetAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the workspace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline WorkspaceDescription& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline WorkspaceDescription& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services data sources that have been configured to
     * have IAM roles and permissions created to allow Amazon Managed Grafana to read
     * data from these sources.</p> <p>This list is only used when the workspace was
     * created through the Amazon Web Services console, and the
     * <code>permissionType</code> is <code>SERVICE_MANAGED</code>.</p>
     */
    inline const Aws::Vector<DataSourceType>& GetDataSources() const{ return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    inline void SetDataSources(const Aws::Vector<DataSourceType>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }
    inline void SetDataSources(Aws::Vector<DataSourceType>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }
    inline WorkspaceDescription& WithDataSources(const Aws::Vector<DataSourceType>& value) { SetDataSources(value); return *this;}
    inline WorkspaceDescription& WithDataSources(Aws::Vector<DataSourceType>&& value) { SetDataSources(std::move(value)); return *this;}
    inline WorkspaceDescription& AddDataSources(const DataSourceType& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }
    inline WorkspaceDescription& AddDataSources(DataSourceType&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-defined description of the workspace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkspaceDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkspaceDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkspaceDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that users can use to access the Grafana console in the
     * workspace.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline WorkspaceDescription& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline WorkspaceDescription& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline WorkspaceDescription& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this workspace has already fully used its free trial for
     * Grafana Enterprise.</p>  <p>Amazon Managed Grafana workspaces no longer
     * support Grafana Enterprise free trials.</p> 
     */
    inline bool GetFreeTrialConsumed() const{ return m_freeTrialConsumed; }
    inline bool FreeTrialConsumedHasBeenSet() const { return m_freeTrialConsumedHasBeenSet; }
    inline void SetFreeTrialConsumed(bool value) { m_freeTrialConsumedHasBeenSet = true; m_freeTrialConsumed = value; }
    inline WorkspaceDescription& WithFreeTrialConsumed(bool value) { SetFreeTrialConsumed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this workspace is currently in the free trial period for Grafana
     * Enterprise, this value specifies when that free trial ends.</p>  <p>Amazon
     * Managed Grafana workspaces no longer support Grafana Enterprise free trials.</p>
     * 
     */
    inline const Aws::Utils::DateTime& GetFreeTrialExpiration() const{ return m_freeTrialExpiration; }
    inline bool FreeTrialExpirationHasBeenSet() const { return m_freeTrialExpirationHasBeenSet; }
    inline void SetFreeTrialExpiration(const Aws::Utils::DateTime& value) { m_freeTrialExpirationHasBeenSet = true; m_freeTrialExpiration = value; }
    inline void SetFreeTrialExpiration(Aws::Utils::DateTime&& value) { m_freeTrialExpirationHasBeenSet = true; m_freeTrialExpiration = std::move(value); }
    inline WorkspaceDescription& WithFreeTrialExpiration(const Aws::Utils::DateTime& value) { SetFreeTrialExpiration(value); return *this;}
    inline WorkspaceDescription& WithFreeTrialExpiration(Aws::Utils::DateTime&& value) { SetFreeTrialExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that ties this workspace to a Grafana Labs account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html#AMG-workspace-register-enterprise">Link
     * your account with Grafana Labs</a>.</p>
     */
    inline const Aws::String& GetGrafanaToken() const{ return m_grafanaToken; }
    inline bool GrafanaTokenHasBeenSet() const { return m_grafanaTokenHasBeenSet; }
    inline void SetGrafanaToken(const Aws::String& value) { m_grafanaTokenHasBeenSet = true; m_grafanaToken = value; }
    inline void SetGrafanaToken(Aws::String&& value) { m_grafanaTokenHasBeenSet = true; m_grafanaToken = std::move(value); }
    inline void SetGrafanaToken(const char* value) { m_grafanaTokenHasBeenSet = true; m_grafanaToken.assign(value); }
    inline WorkspaceDescription& WithGrafanaToken(const Aws::String& value) { SetGrafanaToken(value); return *this;}
    inline WorkspaceDescription& WithGrafanaToken(Aws::String&& value) { SetGrafanaToken(std::move(value)); return *this;}
    inline WorkspaceDescription& WithGrafanaToken(const char* value) { SetGrafanaToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of Grafana supported in this workspace.</p>
     */
    inline const Aws::String& GetGrafanaVersion() const{ return m_grafanaVersion; }
    inline bool GrafanaVersionHasBeenSet() const { return m_grafanaVersionHasBeenSet; }
    inline void SetGrafanaVersion(const Aws::String& value) { m_grafanaVersionHasBeenSet = true; m_grafanaVersion = value; }
    inline void SetGrafanaVersion(Aws::String&& value) { m_grafanaVersionHasBeenSet = true; m_grafanaVersion = std::move(value); }
    inline void SetGrafanaVersion(const char* value) { m_grafanaVersionHasBeenSet = true; m_grafanaVersion.assign(value); }
    inline WorkspaceDescription& WithGrafanaVersion(const Aws::String& value) { SetGrafanaVersion(value); return *this;}
    inline WorkspaceDescription& WithGrafanaVersion(Aws::String&& value) { SetGrafanaVersion(std::move(value)); return *this;}
    inline WorkspaceDescription& WithGrafanaVersion(const char* value) { SetGrafanaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of this workspace.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WorkspaceDescription& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WorkspaceDescription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WorkspaceDescription& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this workspace has a full Grafana Enterprise license purchased through
     * Amazon Web Services Marketplace, this specifies when the license ends and will
     * need to be renewed. Purchasing the Enterprise plugins option through Amazon
     * Managed Grafana does not have an expiration. It is valid until the license is
     * removed.</p>
     */
    inline const Aws::Utils::DateTime& GetLicenseExpiration() const{ return m_licenseExpiration; }
    inline bool LicenseExpirationHasBeenSet() const { return m_licenseExpirationHasBeenSet; }
    inline void SetLicenseExpiration(const Aws::Utils::DateTime& value) { m_licenseExpirationHasBeenSet = true; m_licenseExpiration = value; }
    inline void SetLicenseExpiration(Aws::Utils::DateTime&& value) { m_licenseExpirationHasBeenSet = true; m_licenseExpiration = std::move(value); }
    inline WorkspaceDescription& WithLicenseExpiration(const Aws::Utils::DateTime& value) { SetLicenseExpiration(value); return *this;}
    inline WorkspaceDescription& WithLicenseExpiration(Aws::Utils::DateTime&& value) { SetLicenseExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this workspace has a full Grafana Enterprise license.</p>
     *  <p>Amazon Managed Grafana workspaces no longer support Grafana Enterprise
     * free trials.</p> 
     */
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline WorkspaceDescription& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}
    inline WorkspaceDescription& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date that the workspace was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModified() const{ return m_modified; }
    inline bool ModifiedHasBeenSet() const { return m_modifiedHasBeenSet; }
    inline void SetModified(const Aws::Utils::DateTime& value) { m_modifiedHasBeenSet = true; m_modified = value; }
    inline void SetModified(Aws::Utils::DateTime&& value) { m_modifiedHasBeenSet = true; m_modified = std::move(value); }
    inline WorkspaceDescription& WithModified(const Aws::Utils::DateTime& value) { SetModified(value); return *this;}
    inline WorkspaceDescription& WithModified(Aws::Utils::DateTime&& value) { SetModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workspace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WorkspaceDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WorkspaceDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WorkspaceDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for network access to your workspace.</p>
     */
    inline const NetworkAccessConfiguration& GetNetworkAccessControl() const{ return m_networkAccessControl; }
    inline bool NetworkAccessControlHasBeenSet() const { return m_networkAccessControlHasBeenSet; }
    inline void SetNetworkAccessControl(const NetworkAccessConfiguration& value) { m_networkAccessControlHasBeenSet = true; m_networkAccessControl = value; }
    inline void SetNetworkAccessControl(NetworkAccessConfiguration&& value) { m_networkAccessControlHasBeenSet = true; m_networkAccessControl = std::move(value); }
    inline WorkspaceDescription& WithNetworkAccessControl(const NetworkAccessConfiguration& value) { SetNetworkAccessControl(value); return *this;}
    inline WorkspaceDescription& WithNetworkAccessControl(NetworkAccessConfiguration&& value) { SetNetworkAccessControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services notification channels that Amazon Managed Grafana can
     * automatically create IAM roles and permissions for, to allow Amazon Managed
     * Grafana to use these channels.</p>
     */
    inline const Aws::Vector<NotificationDestinationType>& GetNotificationDestinations() const{ return m_notificationDestinations; }
    inline bool NotificationDestinationsHasBeenSet() const { return m_notificationDestinationsHasBeenSet; }
    inline void SetNotificationDestinations(const Aws::Vector<NotificationDestinationType>& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations = value; }
    inline void SetNotificationDestinations(Aws::Vector<NotificationDestinationType>&& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations = std::move(value); }
    inline WorkspaceDescription& WithNotificationDestinations(const Aws::Vector<NotificationDestinationType>& value) { SetNotificationDestinations(value); return *this;}
    inline WorkspaceDescription& WithNotificationDestinations(Aws::Vector<NotificationDestinationType>&& value) { SetNotificationDestinations(std::move(value)); return *this;}
    inline WorkspaceDescription& AddNotificationDestinations(const NotificationDestinationType& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations.push_back(value); return *this; }
    inline WorkspaceDescription& AddNotificationDestinations(NotificationDestinationType&& value) { m_notificationDestinationsHasBeenSet = true; m_notificationDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role that is used to access resources through
     * Organizations.</p>
     */
    inline const Aws::String& GetOrganizationRoleName() const{ return m_organizationRoleName; }
    inline bool OrganizationRoleNameHasBeenSet() const { return m_organizationRoleNameHasBeenSet; }
    inline void SetOrganizationRoleName(const Aws::String& value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName = value; }
    inline void SetOrganizationRoleName(Aws::String&& value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName = std::move(value); }
    inline void SetOrganizationRoleName(const char* value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName.assign(value); }
    inline WorkspaceDescription& WithOrganizationRoleName(const Aws::String& value) { SetOrganizationRoleName(value); return *this;}
    inline WorkspaceDescription& WithOrganizationRoleName(Aws::String&& value) { SetOrganizationRoleName(std::move(value)); return *this;}
    inline WorkspaceDescription& WithOrganizationRoleName(const char* value) { SetOrganizationRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnits() const{ return m_organizationalUnits; }
    inline bool OrganizationalUnitsHasBeenSet() const { return m_organizationalUnitsHasBeenSet; }
    inline void SetOrganizationalUnits(const Aws::Vector<Aws::String>& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = value; }
    inline void SetOrganizationalUnits(Aws::Vector<Aws::String>&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits = std::move(value); }
    inline WorkspaceDescription& WithOrganizationalUnits(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnits(value); return *this;}
    inline WorkspaceDescription& WithOrganizationalUnits(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnits(std::move(value)); return *this;}
    inline WorkspaceDescription& AddOrganizationalUnits(const Aws::String& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.push_back(value); return *this; }
    inline WorkspaceDescription& AddOrganizationalUnits(Aws::String&& value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.push_back(std::move(value)); return *this; }
    inline WorkspaceDescription& AddOrganizationalUnits(const char* value) { m_organizationalUnitsHasBeenSet = true; m_organizationalUnits.push_back(value); return *this; }
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
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }
    inline WorkspaceDescription& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}
    inline WorkspaceDescription& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudFormation stack set that is used to generate IAM roles
     * to be used for this workspace.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }
    inline WorkspaceDescription& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}
    inline WorkspaceDescription& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}
    inline WorkspaceDescription& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the workspace.</p>
     */
    inline const WorkspaceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkspaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkspaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline WorkspaceDescription& WithStatus(const WorkspaceStatus& value) { SetStatus(value); return *this;}
    inline WorkspaceDescription& WithStatus(WorkspaceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with the workspace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline WorkspaceDescription& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline WorkspaceDescription& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline WorkspaceDescription& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline WorkspaceDescription& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline WorkspaceDescription& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline WorkspaceDescription& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline WorkspaceDescription& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline WorkspaceDescription& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline WorkspaceDescription& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for connecting to data sources in a private VPC (Amazon
     * Virtual Private Cloud).</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline WorkspaceDescription& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline WorkspaceDescription& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to the Amazon Web Services resources
     * that the workspace will view data from. This role must already exist.</p>
     */
    inline const Aws::String& GetWorkspaceRoleArn() const{ return m_workspaceRoleArn; }
    inline bool WorkspaceRoleArnHasBeenSet() const { return m_workspaceRoleArnHasBeenSet; }
    inline void SetWorkspaceRoleArn(const Aws::String& value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn = value; }
    inline void SetWorkspaceRoleArn(Aws::String&& value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn = std::move(value); }
    inline void SetWorkspaceRoleArn(const char* value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn.assign(value); }
    inline WorkspaceDescription& WithWorkspaceRoleArn(const Aws::String& value) { SetWorkspaceRoleArn(value); return *this;}
    inline WorkspaceDescription& WithWorkspaceRoleArn(Aws::String&& value) { SetWorkspaceRoleArn(std::move(value)); return *this;}
    inline WorkspaceDescription& WithWorkspaceRoleArn(const char* value) { SetWorkspaceRoleArn(value); return *this;}
    ///@}
  private:

    AccountAccessType m_accountAccessType;
    bool m_accountAccessTypeHasBeenSet = false;

    AuthenticationSummary m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Vector<DataSourceType> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_freeTrialConsumed;
    bool m_freeTrialConsumedHasBeenSet = false;

    Aws::Utils::DateTime m_freeTrialExpiration;
    bool m_freeTrialExpirationHasBeenSet = false;

    Aws::String m_grafanaToken;
    bool m_grafanaTokenHasBeenSet = false;

    Aws::String m_grafanaVersion;
    bool m_grafanaVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_licenseExpiration;
    bool m_licenseExpirationHasBeenSet = false;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::Utils::DateTime m_modified;
    bool m_modifiedHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    NetworkAccessConfiguration m_networkAccessControl;
    bool m_networkAccessControlHasBeenSet = false;

    Aws::Vector<NotificationDestinationType> m_notificationDestinations;
    bool m_notificationDestinationsHasBeenSet = false;

    Aws::String m_organizationRoleName;
    bool m_organizationRoleNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnits;
    bool m_organizationalUnitsHasBeenSet = false;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    WorkspaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::String m_workspaceRoleArn;
    bool m_workspaceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
