/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes the default properties that are used for creating WorkSpaces. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/update-directory-details.html">Update
   * Directory Details for Your WorkSpaces</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceCreationProperties">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API WorkspaceCreationProperties
  {
  public:
    WorkspaceCreationProperties();
    WorkspaceCreationProperties(Aws::Utils::Json::JsonView jsonValue);
    WorkspaceCreationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline bool GetEnableInternetAccess() const{ return m_enableInternetAccess; }

    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline bool EnableInternetAccessHasBeenSet() const { return m_enableInternetAccessHasBeenSet; }

    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline void SetEnableInternetAccess(bool value) { m_enableInternetAccessHasBeenSet = true; m_enableInternetAccess = value; }

    /**
     * <p>Indicates whether internet access is enabled for your WorkSpaces.</p>
     */
    inline WorkspaceCreationProperties& WithEnableInternetAccess(bool value) { SetEnableInternetAccess(value); return *this;}


    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline const Aws::String& GetDefaultOu() const{ return m_defaultOu; }

    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline bool DefaultOuHasBeenSet() const { return m_defaultOuHasBeenSet; }

    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline void SetDefaultOu(const Aws::String& value) { m_defaultOuHasBeenSet = true; m_defaultOu = value; }

    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline void SetDefaultOu(Aws::String&& value) { m_defaultOuHasBeenSet = true; m_defaultOu = std::move(value); }

    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline void SetDefaultOu(const char* value) { m_defaultOuHasBeenSet = true; m_defaultOu.assign(value); }

    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline WorkspaceCreationProperties& WithDefaultOu(const Aws::String& value) { SetDefaultOu(value); return *this;}

    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline WorkspaceCreationProperties& WithDefaultOu(Aws::String&& value) { SetDefaultOu(std::move(value)); return *this;}

    /**
     * <p>The default organizational unit (OU) for your WorkSpace directories.</p>
     */
    inline WorkspaceCreationProperties& WithDefaultOu(const char* value) { SetDefaultOu(value); return *this;}


    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline const Aws::String& GetCustomSecurityGroupId() const{ return m_customSecurityGroupId; }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline bool CustomSecurityGroupIdHasBeenSet() const { return m_customSecurityGroupIdHasBeenSet; }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline void SetCustomSecurityGroupId(const Aws::String& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = value; }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline void SetCustomSecurityGroupId(Aws::String&& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = std::move(value); }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline void SetCustomSecurityGroupId(const char* value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId.assign(value); }

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline WorkspaceCreationProperties& WithCustomSecurityGroupId(const Aws::String& value) { SetCustomSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline WorkspaceCreationProperties& WithCustomSecurityGroupId(Aws::String&& value) { SetCustomSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your custom security group.</p>
     */
    inline WorkspaceCreationProperties& WithCustomSecurityGroupId(const char* value) { SetCustomSecurityGroupId(value); return *this;}


    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline bool GetUserEnabledAsLocalAdministrator() const{ return m_userEnabledAsLocalAdministrator; }

    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline bool UserEnabledAsLocalAdministratorHasBeenSet() const { return m_userEnabledAsLocalAdministratorHasBeenSet; }

    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline void SetUserEnabledAsLocalAdministrator(bool value) { m_userEnabledAsLocalAdministratorHasBeenSet = true; m_userEnabledAsLocalAdministrator = value; }

    /**
     * <p>Indicates whether users are local administrators of their WorkSpaces.</p>
     */
    inline WorkspaceCreationProperties& WithUserEnabledAsLocalAdministrator(bool value) { SetUserEnabledAsLocalAdministrator(value); return *this;}


    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline bool GetEnableMaintenanceMode() const{ return m_enableMaintenanceMode; }

    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline bool EnableMaintenanceModeHasBeenSet() const { return m_enableMaintenanceModeHasBeenSet; }

    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline void SetEnableMaintenanceMode(bool value) { m_enableMaintenanceModeHasBeenSet = true; m_enableMaintenanceMode = value; }

    /**
     * <p>Indicates whether maintenance mode is enabled for your WorkSpaces. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspace-maintenance.html">WorkSpace
     * Maintenance</a>. </p>
     */
    inline WorkspaceCreationProperties& WithEnableMaintenanceMode(bool value) { SetEnableMaintenanceMode(value); return *this;}

  private:

    bool m_enableInternetAccess;
    bool m_enableInternetAccessHasBeenSet;

    Aws::String m_defaultOu;
    bool m_defaultOuHasBeenSet;

    Aws::String m_customSecurityGroupId;
    bool m_customSecurityGroupIdHasBeenSet;

    bool m_userEnabledAsLocalAdministrator;
    bool m_userEnabledAsLocalAdministratorHasBeenSet;

    bool m_enableMaintenanceMode;
    bool m_enableMaintenanceModeHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
