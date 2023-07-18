/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DataCellsFilterResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

DataCellsFilterResource::DataCellsFilterResource() : 
    m_tableCatalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

DataCellsFilterResource::DataCellsFilterResource(JsonView jsonValue) : 
    m_tableCatalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

DataCellsFilterResource& DataCellsFilterResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableCatalogId"))
  {
    m_tableCatalogId = jsonValue.GetString("TableCatalogId");

    m_tableCatalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCellsFilterResource::Jsonize() const
{
  JsonValue payload;

  if(m_tableCatalogIdHasBeenSet)
  {
   payload.WithString("TableCatalogId", m_tableCatalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
