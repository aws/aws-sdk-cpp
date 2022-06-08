/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/InventoryData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

InventoryData::InventoryData() : 
    m_numberOfDatabases(0),
    m_numberOfDatabasesHasBeenSet(false),
    m_numberOfSchemas(0),
    m_numberOfSchemasHasBeenSet(false)
{
}

InventoryData::InventoryData(JsonView jsonValue) : 
    m_numberOfDatabases(0),
    m_numberOfDatabasesHasBeenSet(false),
    m_numberOfSchemas(0),
    m_numberOfSchemasHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryData& InventoryData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberOfDatabases"))
  {
    m_numberOfDatabases = jsonValue.GetInteger("NumberOfDatabases");

    m_numberOfDatabasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfSchemas"))
  {
    m_numberOfSchemas = jsonValue.GetInteger("NumberOfSchemas");

    m_numberOfSchemasHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryData::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfDatabasesHasBeenSet)
  {
   payload.WithInteger("NumberOfDatabases", m_numberOfDatabases);

  }

  if(m_numberOfSchemasHasBeenSet)
  {
   payload.WithInteger("NumberOfSchemas", m_numberOfSchemas);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
