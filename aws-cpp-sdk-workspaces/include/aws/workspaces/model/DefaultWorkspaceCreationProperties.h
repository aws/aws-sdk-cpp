/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains default WorkSpace creation information.</p>
   */
  class AWS_WORKSPACES_API DefaultWorkspaceCreationProperties
  {
  public:
    DefaultWorkspaceCreationProperties();
    DefaultWorkspaceCreationProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    DefaultWorkspaceCreationProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies if the directory is enabled for Amazon WorkDocs.</p>
     */
    inline bool GetEnableWorkDocs() const{ return m_enableWorkDocs; }

    /**
     * <p>Specifies if the directory is enabled for Amazon WorkDocs.</p>
     */
    inline void SetEnableWorkDocs(bool value) { m_enableWorkDocsHasBeenSet = true; m_enableWorkDocs = value; }

    /**
     * <p>Specifies if the directory is enabled for Amazon WorkDocs.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithEnableWorkDocs(bool value) { SetEnableWorkDocs(value); return *this;}

    /**
     * <p>A public IP address will be attached to all WorkSpaces that are created or
     * rebuilt.</p>
     */
    inline bool GetEnableInternetAccess() const{ return m_enableInternetAccess; }

    /**
     * <p>A public IP address will be attached to all WorkSpaces that are created or
     * rebuilt.</p>
     */
    inline void SetEnableInternetAccess(bool value) { m_enableInternetAccessHasBeenSet = true; m_enableInternetAccess = value; }

    /**
     * <p>A public IP address will be attached to all WorkSpaces that are created or
     * rebuilt.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithEnableInternetAccess(bool value) { SetEnableInternetAccess(value); return *this;}

    /**
     * <p>The organizational unit (OU) in the directory that the WorkSpace machine
     * accounts are placed in.</p>
     */
    inline const Aws::String& GetDefaultOu() const{ return m_defaultOu; }

    /**
     * <p>The organizational unit (OU) in the directory that the WorkSpace machine
     * accounts are placed in.</p>
     */
    inline void SetDefaultOu(const Aws::String& value) { m_defaultOuHasBeenSet = true; m_defaultOu = value; }

    /**
     * <p>The organizational unit (OU) in the directory that the WorkSpace machine
     * accounts are placed in.</p>
     */
    inline void SetDefaultOu(Aws::String&& value) { m_defaultOuHasBeenSet = true; m_defaultOu = value; }

    /**
     * <p>The organizational unit (OU) in the directory that the WorkSpace machine
     * accounts are placed in.</p>
     */
    inline void SetDefaultOu(const char* value) { m_defaultOuHasBeenSet = true; m_defaultOu.assign(value); }

    /**
     * <p>The organizational unit (OU) in the directory that the WorkSpace machine
     * accounts are placed in.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithDefaultOu(const Aws::String& value) { SetDefaultOu(value); return *this;}

    /**
     * <p>The organizational unit (OU) in the directory that the WorkSpace machine
     * accounts are placed in.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithDefaultOu(Aws::String&& value) { SetDefaultOu(value); return *this;}

    /**
     * <p>The organizational unit (OU) in the directory that the WorkSpace machine
     * accounts are placed in.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithDefaultOu(const char* value) { SetDefaultOu(value); return *this;}

    /**
     * <p>The identifier of any custom security groups that are applied to the
     * WorkSpaces when they are created.</p>
     */
    inline const Aws::String& GetCustomSecurityGroupId() const{ return m_customSecurityGroupId; }

    /**
     * <p>The identifier of any custom security groups that are applied to the
     * WorkSpaces when they are created.</p>
     */
    inline void SetCustomSecurityGroupId(const Aws::String& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = value; }

    /**
     * <p>The identifier of any custom security groups that are applied to the
     * WorkSpaces when they are created.</p>
     */
    inline void SetCustomSecurityGroupId(Aws::String&& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = value; }

    /**
     * <p>The identifier of any custom security groups that are applied to the
     * WorkSpaces when they are created.</p>
     */
    inline void SetCustomSecurityGroupId(const char* value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId.assign(value); }

    /**
     * <p>The identifier of any custom security groups that are applied to the
     * WorkSpaces when they are created.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(const Aws::String& value) { SetCustomSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of any custom security groups that are applied to the
     * WorkSpaces when they are created.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(Aws::String&& value) { SetCustomSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of any custom security groups that are applied to the
     * WorkSpaces when they are created.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(const char* value) { SetCustomSecurityGroupId(value); return *this;}

    /**
     * <p>The WorkSpace user is an administrator on the WorkSpace.</p>
     */
    inline bool GetUserEnabledAsLocalAdministrator() const{ return m_userEnabledAsLocalAdministrator; }

    /**
     * <p>The WorkSpace user is an administrator on the WorkSpace.</p>
     */
    inline void SetUserEnabledAsLocalAdministrator(bool value) { m_userEnabledAsLocalAdministratorHasBeenSet = true; m_userEnabledAsLocalAdministrator = value; }

    /**
     * <p>The WorkSpace user is an administrator on the WorkSpace.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithUserEnabledAsLocalAdministrator(bool value) { SetUserEnabledAsLocalAdministrator(value); return *this;}

  private:
    bool m_enableWorkDocs;
    bool m_enableWorkDocsHasBeenSet;
    bool m_enableInternetAccess;
    bool m_enableInternetAccessHasBeenSet;
    Aws::String m_defaultOu;
    bool m_defaultOuHasBeenSet;
    Aws::String m_customSecurityGroupId;
    bool m_customSecurityGroupIdHasBeenSet;
    bool m_userEnabledAsLocalAdministrator;
    bool m_userEnabledAsLocalAdministratorHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
