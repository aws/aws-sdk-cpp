/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FederatedTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

FederatedTable::FederatedTable() : 
    m_identifierHasBeenSet(false),
    m_databaseIdentifierHasBeenSet(false),
    m_connectionNameHasBeenSet(false)
{
}

FederatedTable::FederatedTable(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_databaseIdentifierHasBeenSet(false),
    m_connectionNameHasBeenSet(false)
{
  *this = jsonValue;
}

FederatedTable& FederatedTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseIdentifier"))
  {
    m_databaseIdentifier = jsonValue.GetString("DatabaseIdentifier");

    m_databaseIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FederatedTable::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_databaseIdentifierHasBeenSet)
  {
   payload.WithString("DatabaseIdentifier", m_databaseIdentifier);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
