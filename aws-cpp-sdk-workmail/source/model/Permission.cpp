/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/Permission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

Permission::Permission() : 
    m_granteeIdHasBeenSet(false),
    m_granteeType(MemberType::NOT_SET),
    m_granteeTypeHasBeenSet(false),
    m_permissionValuesHasBeenSet(false)
{
}

Permission::Permission(JsonView jsonValue) : 
    m_granteeIdHasBeenSet(false),
    m_granteeType(MemberType::NOT_SET),
    m_granteeTypeHasBeenSet(false),
    m_permissionValuesHasBeenSet(false)
{
  *this = jsonValue;
}

Permission& Permission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GranteeId"))
  {
    m_granteeId = jsonValue.GetString("GranteeId");

    m_granteeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GranteeType"))
  {
    m_granteeType = MemberTypeMapper::GetMemberTypeForName(jsonValue.GetString("GranteeType"));

    m_granteeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionValues"))
  {
    Aws::Utils::Array<JsonView> permissionValuesJsonList = jsonValue.GetArray("PermissionValues");
    for(unsigned permissionValuesIndex = 0; permissionValuesIndex < permissionValuesJsonList.GetLength(); ++permissionValuesIndex)
    {
      m_permissionValues.push_back(PermissionTypeMapper::GetPermissionTypeForName(permissionValuesJsonList[permissionValuesIndex].AsString()));
    }
    m_permissionValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Permission::Jsonize() const
{
  JsonValue payload;

  if(m_granteeIdHasBeenSet)
  {
   payload.WithString("GranteeId", m_granteeId);

  }

  if(m_granteeTypeHasBeenSet)
  {
   payload.WithString("GranteeType", MemberTypeMapper::GetNameForMemberType(m_granteeType));
  }

  if(m_permissionValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionValuesJsonList(m_permissionValues.size());
   for(unsigned permissionValuesIndex = 0; permissionValuesIndex < permissionValuesJsonList.GetLength(); ++permissionValuesIndex)
   {
     permissionValuesJsonList[permissionValuesIndex].AsString(PermissionTypeMapper::GetNameForPermissionType(m_permissionValues[permissionValuesIndex]));
   }
   payload.WithArray("PermissionValues", std::move(permissionValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
