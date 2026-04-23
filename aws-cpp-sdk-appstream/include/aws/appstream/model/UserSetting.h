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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Action.h>
#include <aws/appstream/model/Permission.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes an action and whether the action is enabled or disabled for users
   * during their streaming sessions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/UserSetting">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API UserSetting
  {
  public:
    UserSetting();
    UserSetting(Aws::Utils::Json::JsonView jsonValue);
    UserSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline UserSetting& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action that is enabled or disabled.</p>
     */
    inline UserSetting& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline UserSetting& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * <p>Indicates whether the action is enabled or disabled.</p>
     */
    inline UserSetting& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet;

    Permission m_permission;
    bool m_permissionHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
