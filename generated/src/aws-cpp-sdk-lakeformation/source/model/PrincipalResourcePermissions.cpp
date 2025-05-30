﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/PrincipalResourcePermissions.h>
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

PrincipalResourcePermissions::PrincipalResourcePermissions(JsonView jsonValue)
{
  *this = jsonValue;
}

PrincipalResourcePermissions& PrincipalResourcePermissions::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetObject("Condition");
    m_conditionHasBeenSet = true;
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
  if(jsonValue.ValueExists("AdditionalDetails"))
  {
    m_additionalDetails = jsonValue.GetObject("AdditionalDetails");
    m_additionalDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");
    m_lastUpdatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("LastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  return *this;
}

JsonValue PrincipalResourcePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithObject("Principal", m_principal.Jsonize());

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

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

  if(m_additionalDetailsHasBeenSet)
  {
   payload.WithObject("AdditionalDetails", m_additionalDetails.Jsonize());

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("LastUpdatedBy", m_lastUpdatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
