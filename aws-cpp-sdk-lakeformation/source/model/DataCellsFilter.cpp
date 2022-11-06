/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DataCellsFilter.h>
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

DataCellsFilter::DataCellsFilter() : 
    m_tableCatalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rowFilterHasBeenSet(false),
    m_columnNamesHasBeenSet(false),
    m_columnWildcardHasBeenSet(false)
{
}

DataCellsFilter::DataCellsFilter(JsonView jsonValue) : 
    m_tableCatalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rowFilterHasBeenSet(false),
    m_columnNamesHasBeenSet(false),
    m_columnWildcardHasBeenSet(false)
{
  *this = jsonValue;
}

DataCellsFilter& DataCellsFilter::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("RowFilter"))
  {
    m_rowFilter = jsonValue.GetObject("RowFilter");

    m_rowFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnNames"))
  {
    Aws::Utils::Array<JsonView> columnNamesJsonList = jsonValue.GetArray("ColumnNames");
    for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
    {
      m_columnNames.push_back(columnNamesJsonList[columnNamesIndex].AsString());
    }
    m_columnNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnWildcard"))
  {
    m_columnWildcard = jsonValue.GetObject("ColumnWildcard");

    m_columnWildcardHasBeenSet = true;
  }

  return *this;
}

JsonValue DataCellsFilter::Jsonize() const
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

  if(m_rowFilterHasBeenSet)
  {
   payload.WithObject("RowFilter", m_rowFilter.Jsonize());

  }

  if(m_columnNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnNamesJsonList(m_columnNames.size());
   for(unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex)
   {
     columnNamesJsonList[columnNamesIndex].AsString(m_columnNames[columnNamesIndex]);
   }
   payload.WithArray("ColumnNames", std::move(columnNamesJsonList));

  }

  if(m_columnWildcardHasBeenSet)
  {
   payload.WithObject("ColumnWildcard", m_columnWildcard.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
