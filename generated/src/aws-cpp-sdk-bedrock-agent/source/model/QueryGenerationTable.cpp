/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/QueryGenerationTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

QueryGenerationTable::QueryGenerationTable() : 
    m_columnsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inclusion(IncludeExclude::NOT_SET),
    m_inclusionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

QueryGenerationTable::QueryGenerationTable(JsonView jsonValue)
  : QueryGenerationTable()
{
  *this = jsonValue;
}

QueryGenerationTable& QueryGenerationTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inclusion"))
  {
    m_inclusion = IncludeExcludeMapper::GetIncludeExcludeForName(jsonValue.GetString("inclusion"));

    m_inclusionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryGenerationTable::Jsonize() const
{
  JsonValue payload;

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("columns", std::move(columnsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_inclusionHasBeenSet)
  {
   payload.WithString("inclusion", IncludeExcludeMapper::GetNameForIncludeExclude(m_inclusion));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
