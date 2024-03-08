/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_permissionHasBeenSet(false),
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false)
{
}

UserSetting::UserSetting(JsonView jsonValue) : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false)
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

  if(jsonValue.ValueExists("MaximumLength"))
  {
    m_maximumLength = jsonValue.GetInteger("MaximumLength");

    m_maximumLengthHasBeenSet = true;
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

  if(m_maximumLengthHasBeenSet)
  {
   payload.WithInteger("MaximumLength", m_maximumLength);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
