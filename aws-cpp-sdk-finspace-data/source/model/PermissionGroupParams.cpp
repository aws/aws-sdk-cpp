/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/PermissionGroupParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

PermissionGroupParams::PermissionGroupParams() : 
    m_permissionGroupIdHasBeenSet(false),
    m_datasetPermissionsHasBeenSet(false)
{
}

PermissionGroupParams::PermissionGroupParams(JsonView jsonValue) : 
    m_permissionGroupIdHasBeenSet(false),
    m_datasetPermissionsHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionGroupParams& PermissionGroupParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permissionGroupId"))
  {
    m_permissionGroupId = jsonValue.GetString("permissionGroupId");

    m_permissionGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("datasetPermissions"))
  {
    Aws::Utils::Array<JsonView> datasetPermissionsJsonList = jsonValue.GetArray("datasetPermissions");
    for(unsigned datasetPermissionsIndex = 0; datasetPermissionsIndex < datasetPermissionsJsonList.GetLength(); ++datasetPermissionsIndex)
    {
      m_datasetPermissions.push_back(datasetPermissionsJsonList[datasetPermissionsIndex].AsObject());
    }
    m_datasetPermissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionGroupParams::Jsonize() const
{
  JsonValue payload;

  if(m_permissionGroupIdHasBeenSet)
  {
   payload.WithString("permissionGroupId", m_permissionGroupId);

  }

  if(m_datasetPermissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasetPermissionsJsonList(m_datasetPermissions.size());
   for(unsigned datasetPermissionsIndex = 0; datasetPermissionsIndex < datasetPermissionsJsonList.GetLength(); ++datasetPermissionsIndex)
   {
     datasetPermissionsJsonList[datasetPermissionsIndex].AsObject(m_datasetPermissions[datasetPermissionsIndex].Jsonize());
   }
   payload.WithArray("datasetPermissions", std::move(datasetPermissionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
