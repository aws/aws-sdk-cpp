/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/TaggedTable.h>
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

TaggedTable::TaggedTable() : 
    m_tableHasBeenSet(false),
    m_lFTagOnDatabaseHasBeenSet(false),
    m_lFTagsOnTableHasBeenSet(false),
    m_lFTagsOnColumnsHasBeenSet(false)
{
}

TaggedTable::TaggedTable(JsonView jsonValue) : 
    m_tableHasBeenSet(false),
    m_lFTagOnDatabaseHasBeenSet(false),
    m_lFTagsOnTableHasBeenSet(false),
    m_lFTagsOnColumnsHasBeenSet(false)
{
  *this = jsonValue;
}

TaggedTable& TaggedTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LFTagOnDatabase"))
  {
    Aws::Utils::Array<JsonView> lFTagOnDatabaseJsonList = jsonValue.GetArray("LFTagOnDatabase");
    for(unsigned lFTagOnDatabaseIndex = 0; lFTagOnDatabaseIndex < lFTagOnDatabaseJsonList.GetLength(); ++lFTagOnDatabaseIndex)
    {
      m_lFTagOnDatabase.push_back(lFTagOnDatabaseJsonList[lFTagOnDatabaseIndex].AsObject());
    }
    m_lFTagOnDatabaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LFTagsOnTable"))
  {
    Aws::Utils::Array<JsonView> lFTagsOnTableJsonList = jsonValue.GetArray("LFTagsOnTable");
    for(unsigned lFTagsOnTableIndex = 0; lFTagsOnTableIndex < lFTagsOnTableJsonList.GetLength(); ++lFTagsOnTableIndex)
    {
      m_lFTagsOnTable.push_back(lFTagsOnTableJsonList[lFTagsOnTableIndex].AsObject());
    }
    m_lFTagsOnTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LFTagsOnColumns"))
  {
    Aws::Utils::Array<JsonView> lFTagsOnColumnsJsonList = jsonValue.GetArray("LFTagsOnColumns");
    for(unsigned lFTagsOnColumnsIndex = 0; lFTagsOnColumnsIndex < lFTagsOnColumnsJsonList.GetLength(); ++lFTagsOnColumnsIndex)
    {
      m_lFTagsOnColumns.push_back(lFTagsOnColumnsJsonList[lFTagsOnColumnsIndex].AsObject());
    }
    m_lFTagsOnColumnsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaggedTable::Jsonize() const
{
  JsonValue payload;

  if(m_tableHasBeenSet)
  {
   payload.WithObject("Table", m_table.Jsonize());

  }

  if(m_lFTagOnDatabaseHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lFTagOnDatabaseJsonList(m_lFTagOnDatabase.size());
   for(unsigned lFTagOnDatabaseIndex = 0; lFTagOnDatabaseIndex < lFTagOnDatabaseJsonList.GetLength(); ++lFTagOnDatabaseIndex)
   {
     lFTagOnDatabaseJsonList[lFTagOnDatabaseIndex].AsObject(m_lFTagOnDatabase[lFTagOnDatabaseIndex].Jsonize());
   }
   payload.WithArray("LFTagOnDatabase", std::move(lFTagOnDatabaseJsonList));

  }

  if(m_lFTagsOnTableHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lFTagsOnTableJsonList(m_lFTagsOnTable.size());
   for(unsigned lFTagsOnTableIndex = 0; lFTagsOnTableIndex < lFTagsOnTableJsonList.GetLength(); ++lFTagsOnTableIndex)
   {
     lFTagsOnTableJsonList[lFTagsOnTableIndex].AsObject(m_lFTagsOnTable[lFTagsOnTableIndex].Jsonize());
   }
   payload.WithArray("LFTagsOnTable", std::move(lFTagsOnTableJsonList));

  }

  if(m_lFTagsOnColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lFTagsOnColumnsJsonList(m_lFTagsOnColumns.size());
   for(unsigned lFTagsOnColumnsIndex = 0; lFTagsOnColumnsIndex < lFTagsOnColumnsJsonList.GetLength(); ++lFTagsOnColumnsIndex)
   {
     lFTagsOnColumnsJsonList[lFTagsOnColumnsIndex].AsObject(m_lFTagsOnColumns[lFTagsOnColumnsIndex].Jsonize());
   }
   payload.WithArray("LFTagsOnColumns", std::move(lFTagsOnColumnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
