/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/PermissionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

PermissionInfo::PermissionInfo() : 
    m_role(RoleType::NOT_SET),
    m_roleHasBeenSet(false),
    m_type(RolePermissionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

PermissionInfo::PermissionInfo(JsonView jsonValue) : 
    m_role(RoleType::NOT_SET),
    m_roleHasBeenSet(false),
    m_type(RolePermissionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionInfo& PermissionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoleTypeMapper::GetRoleTypeForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RolePermissionTypeMapper::GetRolePermissionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", RoleTypeMapper::GetNameForRoleType(m_role));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RolePermissionTypeMapper::GetNameForRolePermissionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
