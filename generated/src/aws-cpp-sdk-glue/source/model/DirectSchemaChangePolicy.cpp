/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DirectSchemaChangePolicy.h>
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

DirectSchemaChangePolicy::DirectSchemaChangePolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

DirectSchemaChangePolicy& DirectSchemaChangePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableUpdateCatalog"))
  {
    m_enableUpdateCatalog = jsonValue.GetBool("EnableUpdateCatalog");
    m_enableUpdateCatalogHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateBehavior"))
  {
    m_updateBehavior = UpdateCatalogBehaviorMapper::GetUpdateCatalogBehaviorForName(jsonValue.GetString("UpdateBehavior"));
    m_updateBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");
    m_tableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");
    m_databaseHasBeenSet = true;
  }
  return *this;
}

JsonValue DirectSchemaChangePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_enableUpdateCatalogHasBeenSet)
  {
   payload.WithBool("EnableUpdateCatalog", m_enableUpdateCatalog);

  }

  if(m_updateBehaviorHasBeenSet)
  {
   payload.WithString("UpdateBehavior", UpdateCatalogBehaviorMapper::GetNameForUpdateCatalogBehavior(m_updateBehavior));
  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
