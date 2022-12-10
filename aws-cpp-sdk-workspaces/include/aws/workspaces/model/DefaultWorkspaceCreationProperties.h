/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the default values that are used to create WorkSpaces. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html">Update
   * Directory Details for Your WorkSpaces</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DefaultWorkspaceCreationProperties">AWS
   * API Reference</a></p>
   */
  class DefaultWorkspaceCreationProperties
  {
  public:
    AWS_WORKSPACES_API DefaultWorkspaceCreationProperties();
    AWS_WORKSPACES_API DefaultWorkspaceCreationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API DefaultWorkspaceCreationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the directory is enabled for Amazon WorkDocs.</p>
     */
    inline bool GetEnableWorkDocs() const{ return m_enableWorkDocs; }

    /**
     * <p>Specifies whether the directory is enabled for Amazon WorkDocs.</p>
     */
    inline bool EnableWorkDocsHasBeenSet() const { return m_enableWorkDocsHasBeenSet; }

    /**
     * <p>Specifies whether the directory is enabled for Amazon WorkDocs.</p>
     */
    inline void SetEnableWorkDocs(bool value) { m_enableWorkDocsHasBeenSet = true; m_enableWorkDocs = value; }

    /**
     * <p>Specifies whether the directory is enabled for Amazon WorkDocs.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithEnableWorkDocs(bool value) { SetEnableWorkDocs(value); return *this;}


    /**
     * <p>Specifies whether to automatically assign an Elastic public IP address to
     * WorkSpaces in this directory by default. If enabled, the Elastic public IP
     * address allows outbound internet access from your WorkSpaces when you’re using
     * an internet gateway in the Amazon VPC in which your WorkSpaces are located. If
     * you're using a Network Address Translation (NAT) gateway for outbound internet
     * access from your VPC, or if your WorkSpaces are in public subnets and you
     * manually assign them Elastic IP addresses, you should disable this setting. This
     * setting applies to new WorkSpaces that you launch or to existing WorkSpaces that
     * you rebuild. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-vpc.html">
     * Configure a VPC for Amazon WorkSpaces</a>.</p>
     */
    inline bool GetEnableInternetAccess() const{ return m_enableInternetAccess; }

    /**
     * <p>Specifies whether to automatically assign an Elastic public IP address to
     * WorkSpaces in this directory by default. If enabled, the Elastic public IP
     * address allows outbound internet access from your WorkSpaces when you’re using
     * an internet gateway in the Amazon VPC in which your WorkSpaces are located. If
     * you're using a Network Address Translation (NAT) gateway for outbound internet
     * access from your VPC, or if your WorkSpaces are in public subnets and you
     * manually assign them Elastic IP addresses, you should disable this setting. This
     * setting applies to new WorkSpaces that you launch or to existing WorkSpaces that
     * you rebuild. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-vpc.html">
     * Configure a VPC for Amazon WorkSpaces</a>.</p>
     */
    inline bool EnableInternetAccessHasBeenSet() const { return m_enableInternetAccessHasBeenSet; }

    /**
     * <p>Specifies whether to automatically assign an Elastic public IP address to
     * WorkSpaces in this directory by default. If enabled, the Elastic public IP
     * address allows outbound internet access from your WorkSpaces when you’re using
     * an internet gateway in the Amazon VPC in which your WorkSpaces are located. If
     * you're using a Network Address Translation (NAT) gateway for outbound internet
     * access from your VPC, or if your WorkSpaces are in public subnets and you
     * manually assign them Elastic IP addresses, you should disable this setting. This
     * setting applies to new WorkSpaces that you launch or to existing WorkSpaces that
     * you rebuild. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-vpc.html">
     * Configure a VPC for Amazon WorkSpaces</a>.</p>
     */
    inline void SetEnableInternetAccess(bool value) { m_enableInternetAccessHasBeenSet = true; m_enableInternetAccess = value; }

    /**
     * <p>Specifies whether to automatically assign an Elastic public IP address to
     * WorkSpaces in this directory by default. If enabled, the Elastic public IP
     * address allows outbound internet access from your WorkSpaces when you’re using
     * an internet gateway in the Amazon VPC in which your WorkSpaces are located. If
     * you're using a Network Address Translation (NAT) gateway for outbound internet
     * access from your VPC, or if your WorkSpaces are in public subnets and you
     * manually assign them Elastic IP addresses, you should disable this setting. This
     * setting applies to new WorkSpaces that you launch or to existing WorkSpaces that
     * you rebuild. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-vpc.html">
     * Configure a VPC for Amazon WorkSpaces</a>.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithEnableInternetAccess(bool value) { SetEnableInternetAccess(value); return *this;}


    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline const Aws::String& GetDefaultOu() const{ return m_defaultOu; }

    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline bool DefaultOuHasBeenSet() const { return m_defaultOuHasBeenSet; }

    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline void SetDefaultOu(const Aws::String& value) { m_defaultOuHasBeenSet = true; m_defaultOu = value; }

    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline void SetDefaultOu(Aws::String&& value) { m_defaultOuHasBeenSet = true; m_defaultOu = std::move(value); }

    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline void SetDefaultOu(const char* value) { m_defaultOuHasBeenSet = true; m_defaultOu.assign(value); }

    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithDefaultOu(const Aws::String& value) { SetDefaultOu(value); return *this;}

    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithDefaultOu(Aws::String&& value) { SetDefaultOu(std::move(value)); return *this;}

    /**
     * <p>The organizational unit (OU) in the directory for the WorkSpace machine
     * accounts.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithDefaultOu(const char* value) { SetDefaultOu(value); return *this;}


    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline const Aws::String& GetCustomSecurityGroupId() const{ return m_customSecurityGroupId; }

    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline bool CustomSecurityGroupIdHasBeenSet() const { return m_customSecurityGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline void SetCustomSecurityGroupId(const Aws::String& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = value; }

    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline void SetCustomSecurityGroupId(Aws::String&& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = std::move(value); }

    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline void SetCustomSecurityGroupId(const char* value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId.assign(value); }

    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(const Aws::String& value) { SetCustomSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(Aws::String&& value) { SetCustomSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the default security group to apply to WorkSpaces when they
     * are created. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-security-groups.html">
     * Security Groups for Your WorkSpaces</a>.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(const char* value) { SetCustomSecurityGroupId(value); return *this;}


    /**
     * <p>Specifies whether WorkSpace users are local administrators on their
     * WorkSpaces.</p>
     */
    inline bool GetUserEnabledAsLocalAdministrator() const{ return m_userEnabledAsLocalAdministrator; }

    /**
     * <p>Specifies whether WorkSpace users are local administrators on their
     * WorkSpaces.</p>
     */
    inline bool UserEnabledAsLocalAdministratorHasBeenSet() const { return m_userEnabledAsLocalAdministratorHasBeenSet; }

    /**
     * <p>Specifies whether WorkSpace users are local administrators on their
     * WorkSpaces.</p>
     */
    inline void SetUserEnabledAsLocalAdministrator(bool value) { m_userEnabledAsLocalAdministratorHasBeenSet = true; m_userEnabledAsLocalAdministrator = value; }

    /**
     * <p>Specifies whether WorkSpace users are local administrators on their
     * WorkSpaces.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithUserEnabledAsLocalAdministrator(bool value) { SetUserEnabledAsLocalAdministrator(value); return *this;}


    /**
     * <p>Specifies whether maintenance mode is enabled for WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>.</p>
     */
    inline bool GetEnableMaintenanceMode() const{ return m_enableMaintenanceMode; }

    /**
     * <p>Specifies whether maintenance mode is enabled for WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>.</p>
     */
    inline bool EnableMaintenanceModeHasBeenSet() const { return m_enableMaintenanceModeHasBeenSet; }

    /**
     * <p>Specifies whether maintenance mode is enabled for WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>.</p>
     */
    inline void SetEnableMaintenanceMode(bool value) { m_enableMaintenanceModeHasBeenSet = true; m_enableMaintenanceMode = value; }

    /**
     * <p>Specifies whether maintenance mode is enabled for WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithEnableMaintenanceMode(bool value) { SetEnableMaintenanceMode(value); return *this;}

  private:

    bool m_enableWorkDocs;
    bool m_enableWorkDocsHasBeenSet = false;

    bool m_enableInternetAccess;
    bool m_enableInternetAccessHasBeenSet = false;

    Aws::String m_defaultOu;
    bool m_defaultOuHasBeenSet = false;

    Aws::String m_customSecurityGroupId;
    bool m_customSecurityGroupIdHasBeenSet = false;

    bool m_userEnabledAsLocalAdministrator;
    bool m_userEnabledAsLocalAdministratorHasBeenSet = false;

    bool m_enableMaintenanceMode;
    bool m_enableMaintenanceModeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
