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

#include <aws/workdocs/model/SharePrincipal.h>
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

SharePrincipal::SharePrincipal() : 
    m_idHasBeenSet(false),
    m_type(PrincipalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_role(RoleType::NOT_SET),
    m_roleHasBeenSet(false)
{
}

SharePrincipal::SharePrincipal(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_type(PrincipalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_role(RoleType::NOT_SET),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

SharePrincipal& SharePrincipal::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoleTypeMapper::GetRoleTypeForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue SharePrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PrincipalTypeMapper::GetNameForPrincipalType(m_type));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", RoleTypeMapper::GetNameForRoleType(m_role));
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
