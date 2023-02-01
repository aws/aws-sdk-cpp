/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/LakeFormationDataPermissionAsset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

LakeFormationDataPermissionAsset::LakeFormationDataPermissionAsset() : 
    m_lakeFormationDataPermissionDetailsHasBeenSet(false),
    m_lakeFormationDataPermissionType(LakeFormationDataPermissionType::NOT_SET),
    m_lakeFormationDataPermissionTypeHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

LakeFormationDataPermissionAsset::LakeFormationDataPermissionAsset(JsonView jsonValue) : 
    m_lakeFormationDataPermissionDetailsHasBeenSet(false),
    m_lakeFormationDataPermissionType(LakeFormationDataPermissionType::NOT_SET),
    m_lakeFormationDataPermissionTypeHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

LakeFormationDataPermissionAsset& LakeFormationDataPermissionAsset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LakeFormationDataPermissionDetails"))
  {
    m_lakeFormationDataPermissionDetails = jsonValue.GetObject("LakeFormationDataPermissionDetails");

    m_lakeFormationDataPermissionDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LakeFormationDataPermissionType"))
  {
    m_lakeFormationDataPermissionType = LakeFormationDataPermissionTypeMapper::GetLakeFormationDataPermissionTypeForName(jsonValue.GetString("LakeFormationDataPermissionType"));

    m_lakeFormationDataPermissionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(LFPermissionMapper::GetLFPermissionForName(permissionsJsonList[permissionsIndex].AsString()));
    }
    m_permissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LakeFormationDataPermissionAsset::Jsonize() const
{
  JsonValue payload;

  if(m_lakeFormationDataPermissionDetailsHasBeenSet)
  {
   payload.WithObject("LakeFormationDataPermissionDetails", m_lakeFormationDataPermissionDetails.Jsonize());

  }

  if(m_lakeFormationDataPermissionTypeHasBeenSet)
  {
   payload.WithString("LakeFormationDataPermissionType", LakeFormationDataPermissionTypeMapper::GetNameForLakeFormationDataPermissionType(m_lakeFormationDataPermissionType));
  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(LFPermissionMapper::GetNameForLFPermission(m_permissions[permissionsIndex]));
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
