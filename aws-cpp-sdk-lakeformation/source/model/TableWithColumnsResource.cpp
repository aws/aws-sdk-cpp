/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TableWithColumnsResource.h>
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

TableWithColumnsResource::TableWithColumnsResource() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_columnNamesHasBeenSet(false),
    m_columnWildcardHasBeenSet(false)
{
}

TableWithColumnsResource::TableWithColumnsResource(JsonView jsonValue) : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_columnNamesHasBeenSet(false),
    m_columnWildcardHasBeenSet(false)
{
  *this = jsonValue;
}

TableWithColumnsResource& TableWithColumnsResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogId"))
  {
    m_catalogId = jsonValue.GetString("CatalogId");

    m_catalogIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
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

JsonValue TableWithColumnsResource::Jsonize() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

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
