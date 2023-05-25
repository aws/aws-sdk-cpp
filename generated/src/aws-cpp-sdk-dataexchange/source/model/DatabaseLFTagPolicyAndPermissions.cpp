/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/DatabaseLFTagPolicyAndPermissions.h>
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

DatabaseLFTagPolicyAndPermissions::DatabaseLFTagPolicyAndPermissions() : 
    m_expressionHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

DatabaseLFTagPolicyAndPermissions::DatabaseLFTagPolicyAndPermissions(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseLFTagPolicyAndPermissions& DatabaseLFTagPolicyAndPermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    Aws::Utils::Array<JsonView> expressionJsonList = jsonValue.GetArray("Expression");
    for(unsigned expressionIndex = 0; expressionIndex < expressionJsonList.GetLength(); ++expressionIndex)
    {
      m_expression.push_back(expressionJsonList[expressionIndex].AsObject());
    }
    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    Aws::Utils::Array<JsonView> permissionsJsonList = jsonValue.GetArray("Permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(DatabaseLFTagPolicyPermissionMapper::GetDatabaseLFTagPolicyPermissionForName(permissionsJsonList[permissionsIndex].AsString()));
    }
    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseLFTagPolicyAndPermissions::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expressionJsonList(m_expression.size());
   for(unsigned expressionIndex = 0; expressionIndex < expressionJsonList.GetLength(); ++expressionIndex)
   {
     expressionJsonList[expressionIndex].AsObject(m_expression[expressionIndex].Jsonize());
   }
   payload.WithArray("Expression", std::move(expressionJsonList));

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(DatabaseLFTagPolicyPermissionMapper::GetNameForDatabaseLFTagPolicyPermission(m_permissions[permissionsIndex]));
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
