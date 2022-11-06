/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/Principal.h>
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

Principal::Principal() : 
    m_idHasBeenSet(false),
    m_type(PrincipalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
}

Principal::Principal(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(PrincipalType::NOT_SET),
    m_typeHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
  *this = jsonValue;
}

Principal& Principal::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Roles"))
  {
    Aws::Utils::Array<JsonView> rolesJsonList = jsonValue.GetArray("Roles");
    for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
    {
      m_roles.push_back(rolesJsonList[rolesIndex].AsObject());
    }
    m_rolesHasBeenSet = true;
  }

  return *this;
}

JsonValue Principal::Jsonize() const
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

  if(m_rolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rolesJsonList(m_roles.size());
   for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
   {
     rolesJsonList[rolesIndex].AsObject(m_roles[rolesIndex].Jsonize());
   }
   payload.WithArray("Roles", std::move(rolesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
