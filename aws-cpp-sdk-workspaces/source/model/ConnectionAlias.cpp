/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ConnectionAlias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ConnectionAlias::ConnectionAlias() : 
    m_connectionStringHasBeenSet(false),
    m_aliasIdHasBeenSet(false),
    m_state(ConnectionAliasState::NOT_SET),
    m_stateHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_associationsHasBeenSet(false)
{
}

ConnectionAlias::ConnectionAlias(JsonView jsonValue) : 
    m_connectionStringHasBeenSet(false),
    m_aliasIdHasBeenSet(false),
    m_state(ConnectionAliasState::NOT_SET),
    m_stateHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_associationsHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionAlias& ConnectionAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionString"))
  {
    m_connectionString = jsonValue.GetString("ConnectionString");

    m_connectionStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasId"))
  {
    m_aliasId = jsonValue.GetString("AliasId");

    m_aliasIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ConnectionAliasStateMapper::GetConnectionAliasStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Associations"))
  {
    Aws::Utils::Array<JsonView> associationsJsonList = jsonValue.GetArray("Associations");
    for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
    {
      m_associations.push_back(associationsJsonList[associationsIndex].AsObject());
    }
    m_associationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionAlias::Jsonize() const
{
  JsonValue payload;

  if(m_connectionStringHasBeenSet)
  {
   payload.WithString("ConnectionString", m_connectionString);

  }

  if(m_aliasIdHasBeenSet)
  {
   payload.WithString("AliasId", m_aliasId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ConnectionAliasStateMapper::GetNameForConnectionAliasState(m_state));
  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_associationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationsJsonList(m_associations.size());
   for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
   {
     associationsJsonList[associationsIndex].AsObject(m_associations[associationsIndex].Jsonize());
   }
   payload.WithArray("Associations", std::move(associationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
