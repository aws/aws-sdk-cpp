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

PermissionInfo::PermissionInfo(const JsonValue& jsonValue) : 
    m_role(RoleType::NOT_SET),
    m_roleHasBeenSet(false),
    m_type(RolePermissionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionInfo& PermissionInfo::operator =(const JsonValue& jsonValue)
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
