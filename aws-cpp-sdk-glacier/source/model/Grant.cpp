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

#include <aws/glacier/model/Grant.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

Grant::Grant() : 
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
}

Grant::Grant(const JsonValue& jsonValue) : 
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
  *this = jsonValue;
}

Grant& Grant::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Grantee"))
  {
    m_grantee = jsonValue.GetObject("Grantee");

    m_granteeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permission"))
  {
    m_permission = PermissionMapper::GetPermissionForName(jsonValue.GetString("Permission"));

    m_permissionHasBeenSet = true;
  }

  return *this;
}

JsonValue Grant::Jsonize() const
{
  JsonValue payload;

  if(m_granteeHasBeenSet)
  {
   payload.WithObject("Grantee", m_grantee.Jsonize());

  }

  if(m_permissionHasBeenSet)
  {
   payload.WithString("Permission", PermissionMapper::GetNameForPermission(m_permission));
  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
