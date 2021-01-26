/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogTarget.h>
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

CatalogTarget::CatalogTarget() : 
    m_databaseNameHasBeenSet(false),
    m_tablesHasBeenSet(false)
{
}

CatalogTarget::CatalogTarget(JsonView jsonValue) : 
    m_databaseNameHasBeenSet(false),
    m_tablesHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogTarget& CatalogTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tables"))
  {
    Array<JsonView> tablesJsonList = jsonValue.GetArray("Tables");
    for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
    {
      m_tables.push_back(tablesJsonList[tablesIndex].AsString());
    }
    m_tablesHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogTarget::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tablesHasBeenSet)
  {
   Array<JsonValue> tablesJsonList(m_tables.size());
   for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
   {
     tablesJsonList[tablesIndex].AsString(m_tables[tablesIndex]);
   }
   payload.WithArray("Tables", std::move(tablesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
