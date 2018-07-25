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

#include <aws/appstream/model/UserSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

UserSetting::UserSetting() : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
}

UserSetting::UserSetting(JsonView jsonValue) : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
  *this = jsonValue;
}

UserSetting& UserSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionMapper::GetActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permission"))
  {
    m_permission = PermissionMapper::GetPermissionForName(jsonValue.GetString("Permission"));

    m_permissionHasBeenSet = true;
  }

  return *this;
}

JsonValue UserSetting::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_permissionHasBeenSet)
  {
   payload.WithString("Permission", PermissionMapper::GetNameForPermission(m_permission));
  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
