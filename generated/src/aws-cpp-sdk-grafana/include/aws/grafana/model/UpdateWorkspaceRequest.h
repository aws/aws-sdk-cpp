/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/model/AccountAccessType.h>
#include <aws/grafana/model/NetworkAccessConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/PermissionType.h>
#include <aws/grafana/model/VpcConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/grafana/model/DataSourceType.h>
#include <aws/grafana/model/NotificationDestinationType.h>
#include <utility>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class UpdateWorkspaceRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspace"; }

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
    inline UpdateWorkspaceRequest& WithAccountAccessType(const AccountAccessType& value) { SetAccountAccessType(value); return *this;}

    /**
     * <p>Specifies whether the workspace can access Amazon Web Services resources in
     * this Amazon Web Services account only, or whether it can also access Amazon Web
     * Services resources in other accounts in the same organization. If you specify
     * <code>ORGANIZATION</code>, you must specify which organizational units the
     * workspace can access in the <code>workspaceOrganizationalUnits</code>
     * parameter.</p>
     */
    inline UpdateWorkspaceRequest& WithAccountAccessType(AccountAccessType&& value) { SetAccountAccessType(std::move(value)); return *this;}


    /**
     * <p>The configuration settings for network access to your workspace.</p> <p>When
     * this is configured, only listed IP addresses and VPC endpoints will be able to
     * access your workspace. Standard Grafana authentication and authorization will
     * still be required.</p> <p>If this is not configured, or is removed, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline const NetworkAccessConfiguration& GetNetworkAccessControl() const{ return m_networkAccessControl; }

    /**
     * <p>The configuration settings for network access to your workspace.</p> <p>When
     * this is configured, only listed IP addresses and VPC endpoints will be able to
     * access your workspace. Standard Grafana authentication and authorization will
     * still be required.</p> <p>If this is not configured, or is removed, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline bool NetworkAccessControlHasBeenSet() const { return m_networkAccessControlHasBeenSet; }

    /**
     * <p>The configuration settings for network access to your workspace.</p> <p>When
     * this is configured, only listed IP addresses and VPC endpoints will be able to
     * access your workspace. Standard Grafana authentication and authorization will
     * still be required.</p> <p>If this is not configured, or is removed, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline void SetNetworkAccessControl(const NetworkAccessConfiguration& value) { m_networkAccessControlHasBeenSet = true; m_networkAccessControl = value; }

    /**
     * <p>The configuration settings for network access to your workspace.</p> <p>When
     * this is configured, only listed IP addresses and VPC endpoints will be able to
     * access your workspace. Standard Grafana authentication and authorization will
     * still be required.</p> <p>If this is not configured, or is removed, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline void SetNetworkAccessControl(NetworkAccessConfiguration&& value) { m_networkAccessControlHasBeenSet = true; m_networkAccessControl = std::move(value); }

    /**
     * <p>The configuration settings for network access to your workspace.</p> <p>When
     * this is configured, only listed IP addresses and VPC endpoints will be able to
     * access your workspace. Standard Grafana authentication and authorization will
     * still be required.</p> <p>If this is not configured, or is removed, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline UpdateWorkspaceRequest& WithNetworkAccessControl(const NetworkAccessConfiguration& value) { SetNetworkAccessControl(value); return *this;}

    /**
     * <p>The configuration settings for network access to your workspace.</p> <p>When
     * this is configured, only listed IP addresses and VPC endpoints will be able to
     * access your workspace. Standard Grafana authentication and authorization will
     * still be required.</p> <p>If this is not configured, or is removed, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline UpdateWorkspaceRequest& WithNetworkAccessControl(NetworkAccessConfiguration&& value) { SetNetworkAccessControl(std::move(value)); return *this;}


    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline const Aws::String& GetOrganizationRoleName() const{ return m_organizationRoleName; }

    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline bool OrganizationRoleNameHasBeenSet() const { return m_organizationRoleNameHasBeenSet; }

    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline void SetOrganizationRoleName(const Aws::String& value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName = value; }

    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline void SetOrganizationRoleName(Aws::String&& value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName = std::move(value); }

    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline void SetOrganizationRoleName(const char* value) { m_organizationRoleNameHasBeenSet = true; m_organizationRoleName.assign(value); }

    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline UpdateWorkspaceRequest& WithOrganizationRoleName(const Aws::String& value) { SetOrganizationRoleName(value); return *this;}

    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline UpdateWorkspaceRequest& WithOrganizationRoleName(Aws::String&& value) { SetOrganizationRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of an IAM role that already exists to use to access resources
     * through Organizations. This can only be used with a workspace that has the
     * <code>permissionType</code> set to <code>CUSTOMER_MANAGED</code>.</p>
     */
    inline UpdateWorkspaceRequest& WithOrganizationRoleName(const char* value) { SetOrganizationRoleName(value); return *this;}


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
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }

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
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }

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
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }

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
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }

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
    inline UpdateWorkspaceRequest& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}

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
    inline UpdateWorkspaceRequest& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}


    /**
     * <p>Whether to remove the network access configuration from the workspace.</p>
     * <p>Setting this to <code>true</code> and providing a
     * <code>networkAccessControl</code> to set will return an error.</p> <p>If you
     * remove this configuration by setting this to <code>true</code>, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline bool GetRemoveNetworkAccessConfiguration() const{ return m_removeNetworkAccessConfiguration; }

    /**
     * <p>Whether to remove the network access configuration from the workspace.</p>
     * <p>Setting this to <code>true</code> and providing a
     * <code>networkAccessControl</code> to set will return an error.</p> <p>If you
     * remove this configuration by setting this to <code>true</code>, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline bool RemoveNetworkAccessConfigurationHasBeenSet() const { return m_removeNetworkAccessConfigurationHasBeenSet; }

    /**
     * <p>Whether to remove the network access configuration from the workspace.</p>
     * <p>Setting this to <code>true</code> and providing a
     * <code>networkAccessControl</code> to set will return an error.</p> <p>If you
     * remove this configuration by setting this to <code>true</code>, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline void SetRemoveNetworkAccessConfiguration(bool value) { m_removeNetworkAccessConfigurationHasBeenSet = true; m_removeNetworkAccessConfiguration = value; }

    /**
     * <p>Whether to remove the network access configuration from the workspace.</p>
     * <p>Setting this to <code>true</code> and providing a
     * <code>networkAccessControl</code> to set will return an error.</p> <p>If you
     * remove this configuration by setting this to <code>true</code>, then all IP
     * addresses and VPC endpoints will be allowed. Standard Grafana authentication and
     * authorization will still be required.</p>
     */
    inline UpdateWorkspaceRequest& WithRemoveNetworkAccessConfiguration(bool value) { SetRemoveNetworkAccessConfiguration(value); return *this;}


    /**
     * <p>Whether to remove the VPC configuration from the workspace.</p> <p>Setting
     * this to <code>true</code> and providing a <code>vpcConfiguration</code> to set
     * will return an error.</p>
     */
    inline bool GetRemoveVpcConfiguration() const{ return m_removeVpcConfiguration; }

    /**
     * <p>Whether to remove the VPC configuration from the workspace.</p> <p>Setting
     * this to <code>true</code> and providing a <code>vpcConfiguration</code> to set
     * will return an error.</p>
     */
    inline bool RemoveVpcConfigurationHasBeenSet() const { return m_removeVpcConfigurationHasBeenSet; }

    /**
     * <p>Whether to remove the VPC configuration from the workspace.</p> <p>Setting
     * this to <code>true</code> and providing a <code>vpcConfiguration</code> to set
     * will return an error.</p>
     */
    inline void SetRemoveVpcConfiguration(bool value) { m_removeVpcConfigurationHasBeenSet = true; m_removeVpcConfiguration = value; }

    /**
     * <p>Whether to remove the VPC configuration from the workspace.</p> <p>Setting
     * this to <code>true</code> and providing a <code>vpcConfiguration</code> to set
     * will return an error.</p>
     */
    inline UpdateWorkspaceRequest& WithRemoveVpcConfiguration(bool value) { SetRemoveVpcConfiguration(value); return *this;}


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
    inline UpdateWorkspaceRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline UpdateWorkspaceRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudFormation stack set to use to generate IAM roles to be
     * used for this workspace.</p>
     */
    inline UpdateWorkspaceRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


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
    inline UpdateWorkspaceRequest& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>The configuration settings for an Amazon VPC that contains data sources for
     * your Grafana workspace to connect to.</p>
     */
    inline UpdateWorkspaceRequest& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline const Aws::Vector<DataSourceType>& GetWorkspaceDataSources() const{ return m_workspaceDataSources; }

    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline bool WorkspaceDataSourcesHasBeenSet() const { return m_workspaceDataSourcesHasBeenSet; }

    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline void SetWorkspaceDataSources(const Aws::Vector<DataSourceType>& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources = value; }

    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline void SetWorkspaceDataSources(Aws::Vector<DataSourceType>&& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources = std::move(value); }

    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceDataSources(const Aws::Vector<DataSourceType>& value) { SetWorkspaceDataSources(value); return *this;}

    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceDataSources(Aws::Vector<DataSourceType>&& value) { SetWorkspaceDataSources(std::move(value)); return *this;}

    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline UpdateWorkspaceRequest& AddWorkspaceDataSources(const DataSourceType& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources.push_back(value); return *this; }

    /**
     * <p>This parameter is for internal use only, and should not be used.</p>
     */
    inline UpdateWorkspaceRequest& AddWorkspaceDataSources(DataSourceType&& value) { m_workspaceDataSourcesHasBeenSet = true; m_workspaceDataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline const Aws::String& GetWorkspaceDescription() const{ return m_workspaceDescription; }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline bool WorkspaceDescriptionHasBeenSet() const { return m_workspaceDescriptionHasBeenSet; }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline void SetWorkspaceDescription(const Aws::String& value) { m_workspaceDescriptionHasBeenSet = true; m_workspaceDescription = value; }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline void SetWorkspaceDescription(Aws::String&& value) { m_workspaceDescriptionHasBeenSet = true; m_workspaceDescription = std::move(value); }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline void SetWorkspaceDescription(const char* value) { m_workspaceDescriptionHasBeenSet = true; m_workspaceDescription.assign(value); }

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceDescription(const Aws::String& value) { SetWorkspaceDescription(value); return *this;}

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceDescription(Aws::String&& value) { SetWorkspaceDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the workspace. This is used only to help you identify this
     * workspace.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceDescription(const char* value) { SetWorkspaceDescription(value); return *this;}


    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline const Aws::String& GetWorkspaceName() const{ return m_workspaceName; }

    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }

    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline void SetWorkspaceName(const Aws::String& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = value; }

    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline void SetWorkspaceName(Aws::String&& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = std::move(value); }

    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline void SetWorkspaceName(const char* value) { m_workspaceNameHasBeenSet = true; m_workspaceName.assign(value); }

    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceName(const Aws::String& value) { SetWorkspaceName(value); return *this;}

    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceName(Aws::String&& value) { SetWorkspaceName(std::move(value)); return *this;}

    /**
     * <p>A new name for the workspace to update.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceName(const char* value) { SetWorkspaceName(value); return *this;}


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
    inline UpdateWorkspaceRequest& WithWorkspaceNotificationDestinations(const Aws::Vector<NotificationDestinationType>& value) { SetWorkspaceNotificationDestinations(value); return *this;}

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceNotificationDestinations(Aws::Vector<NotificationDestinationType>&& value) { SetWorkspaceNotificationDestinations(std::move(value)); return *this;}

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline UpdateWorkspaceRequest& AddWorkspaceNotificationDestinations(const NotificationDestinationType& value) { m_workspaceNotificationDestinationsHasBeenSet = true; m_workspaceNotificationDestinations.push_back(value); return *this; }

    /**
     * <p>Specify the Amazon Web Services notification channels that you plan to use in
     * this workspace. Specifying these data sources here enables Amazon Managed
     * Grafana to create IAM roles and permissions that allow Amazon Managed Grafana to
     * use these channels.</p>
     */
    inline UpdateWorkspaceRequest& AddWorkspaceNotificationDestinations(NotificationDestinationType&& value) { m_workspaceNotificationDestinationsHasBeenSet = true; m_workspaceNotificationDestinations.push_back(std::move(value)); return *this; }


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
    inline UpdateWorkspaceRequest& WithWorkspaceOrganizationalUnits(const Aws::Vector<Aws::String>& value) { SetWorkspaceOrganizationalUnits(value); return *this;}

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceOrganizationalUnits(Aws::Vector<Aws::String>&& value) { SetWorkspaceOrganizationalUnits(std::move(value)); return *this;}

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline UpdateWorkspaceRequest& AddWorkspaceOrganizationalUnits(const Aws::String& value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits.push_back(value); return *this; }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline UpdateWorkspaceRequest& AddWorkspaceOrganizationalUnits(Aws::String&& value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the organizational units that this workspace is allowed to use data
     * sources from, if this workspace is in an account that is part of an
     * organization.</p>
     */
    inline UpdateWorkspaceRequest& AddWorkspaceOrganizationalUnits(const char* value) { m_workspaceOrganizationalUnitsHasBeenSet = true; m_workspaceOrganizationalUnits.push_back(value); return *this; }


    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline const Aws::String& GetWorkspaceRoleArn() const{ return m_workspaceRoleArn; }

    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline bool WorkspaceRoleArnHasBeenSet() const { return m_workspaceRoleArnHasBeenSet; }

    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline void SetWorkspaceRoleArn(const Aws::String& value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn = value; }

    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline void SetWorkspaceRoleArn(Aws::String&& value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn = std::move(value); }

    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline void SetWorkspaceRoleArn(const char* value) { m_workspaceRoleArnHasBeenSet = true; m_workspaceRoleArn.assign(value); }

    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceRoleArn(const Aws::String& value) { SetWorkspaceRoleArn(value); return *this;}

    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceRoleArn(Aws::String&& value) { SetWorkspaceRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies an IAM role that grants permissions to Amazon Web Services
     * resources that the workspace accesses, such as data sources and notification
     * channels. If this workspace has <code>permissionType</code>
     * <code>CUSTOMER_MANAGED</code>, then this role is required.</p>
     */
    inline UpdateWorkspaceRequest& WithWorkspaceRoleArn(const char* value) { SetWorkspaceRoleArn(value); return *this;}

  private:

    AccountAccessType m_accountAccessType;
    bool m_accountAccessTypeHasBeenSet = false;

    NetworkAccessConfiguration m_networkAccessControl;
    bool m_networkAccessControlHasBeenSet = false;

    Aws::String m_organizationRoleName;
    bool m_organizationRoleNameHasBeenSet = false;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    bool m_removeNetworkAccessConfiguration;
    bool m_removeNetworkAccessConfigurationHasBeenSet = false;

    bool m_removeVpcConfiguration;
    bool m_removeVpcConfigurationHasBeenSet = false;

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<DataSourceType> m_workspaceDataSources;
    bool m_workspaceDataSourcesHasBeenSet = false;

    Aws::String m_workspaceDescription;
    bool m_workspaceDescriptionHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

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
