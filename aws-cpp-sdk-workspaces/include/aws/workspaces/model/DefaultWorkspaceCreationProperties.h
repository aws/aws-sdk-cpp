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
   * <p>Describes the default values used to create a WorkSpace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/DefaultWorkspaceCreationProperties">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API DefaultWorkspaceCreationProperties
  {
  public:
    DefaultWorkspaceCreationProperties();
    DefaultWorkspaceCreationProperties(Aws::Utils::Json::JsonView jsonValue);
    DefaultWorkspaceCreationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The public IP address to attach to all WorkSpaces that are created or
     * rebuilt.</p>
     */
    inline bool GetEnableInternetAccess() const{ return m_enableInternetAccess; }

    /**
     * <p>The public IP address to attach to all WorkSpaces that are created or
     * rebuilt.</p>
     */
    inline bool EnableInternetAccessHasBeenSet() const { return m_enableInternetAccessHasBeenSet; }

    /**
     * <p>The public IP address to attach to all WorkSpaces that are created or
     * rebuilt.</p>
     */
    inline void SetEnableInternetAccess(bool value) { m_enableInternetAccessHasBeenSet = true; m_enableInternetAccess = value; }

    /**
     * <p>The public IP address to attach to all WorkSpaces that are created or
     * rebuilt.</p>
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
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline const Aws::String& GetCustomSecurityGroupId() const{ return m_customSecurityGroupId; }

    /**
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline bool CustomSecurityGroupIdHasBeenSet() const { return m_customSecurityGroupIdHasBeenSet; }

    /**
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline void SetCustomSecurityGroupId(const Aws::String& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = value; }

    /**
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline void SetCustomSecurityGroupId(Aws::String&& value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId = std::move(value); }

    /**
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline void SetCustomSecurityGroupId(const char* value) { m_customSecurityGroupIdHasBeenSet = true; m_customSecurityGroupId.assign(value); }

    /**
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(const Aws::String& value) { SetCustomSecurityGroupId(value); return *this;}

    /**
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(Aws::String&& value) { SetCustomSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of any security groups to apply to WorkSpaces when they are
     * created.</p>
     */
    inline DefaultWorkspaceCreationProperties& WithCustomSecurityGroupId(const char* value) { SetCustomSecurityGroupId(value); return *this;}


    /**
     * <p>Specifies whether the WorkSpace user is an administrator on the
     * WorkSpace.</p>
     */
    inline bool GetUserEnabledAsLocalAdministrator() const{ return m_userEnabledAsLocalAdministrator; }

    /**
     * <p>Specifies whether the WorkSpace user is an administrator on the
     * WorkSpace.</p>
     */
    inline bool UserEnabledAsLocalAdministratorHasBeenSet() const { return m_userEnabledAsLocalAdministratorHasBeenSet; }

    /**
     * <p>Specifies whether the WorkSpace user is an administrator on the
     * WorkSpace.</p>
     */
    inline void SetUserEnabledAsLocalAdministrator(bool value) { m_userEnabledAsLocalAdministratorHasBeenSet = true; m_userEnabledAsLocalAdministrator = value; }

    /**
     * <p>Specifies whether the WorkSpace user is an administrator on the
     * WorkSpace.</p>
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
