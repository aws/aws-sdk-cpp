/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/BatchPermissionsRequestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

BatchPermissionsRequestEntry::BatchPermissionsRequestEntry() : 
    m_idHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_permissionsWithGrantOptionHasBeenSet(false)
{
}

BatchPermissionsRequestEntry::BatchPermissionsRequestEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_permissionsWithGrantOptionHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPermissionsRequestEntry& BatchPermissionsRequestEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Principal"))
  {
    m_principal = jsonValue.GetObject("Principal");

    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resource"))
  {
    m_resource = jsonValue.GetObject("Resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(PermissionMapper::GetPermissionForName(permissionsJsonList[permissionsIndex].AsString()));
    }
    m_permissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionsWithGrantOption"))
  {
    Aws::Utils::Array<JsonView> permissionsWithGrantOptionJsonList = jsonValue.GetArray("PermissionsWithGrantOption");
    for(unsigned permissionsWithGrantOptionIndex = 0; permissionsWithGrantOptionIndex < permissionsWithGrantOptionJsonList.GetLength(); ++permissionsWithGrantOptionIndex)
    {
      m_permissionsWithGrantOption.push_back(PermissionMapper::GetPermissionForName(permissionsWithGrantOptionJsonList[permissionsWithGrantOptionIndex].AsString()));
    }
    m_permissionsWithGrantOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPermissionsRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithObject("Principal", m_principal.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(PermissionMapper::GetNameForPermission(m_permissions[permissionsIndex]));
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  if(m_permissionsWithGrantOptionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsWithGrantOptionJsonList(m_permissionsWithGrantOption.size());
   for(unsigned permissionsWithGrantOptionIndex = 0; permissionsWithGrantOptionIndex < permissionsWithGrantOptionJsonList.GetLength(); ++permissionsWithGrantOptionIndex)
   {
     permissionsWithGrantOptionJsonList[permissionsWithGrantOptionIndex].AsString(PermissionMapper::GetNameForPermission(m_permissionsWithGrantOption[permissionsWithGrantOptionIndex]));
   }
   payload.WithArray("PermissionsWithGrantOption", std::move(permissionsWithGrantOptionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
