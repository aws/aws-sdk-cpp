/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogSource.h>
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

CatalogSource::CatalogSource() : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
}

CatalogSource::CatalogSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogSource& CatalogSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Database"))
  {
    m_database = jsonValue.GetString("Database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");

    m_tableHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_databaseHasBeenSet)
  {
   payload.WithString("Database", m_database);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
