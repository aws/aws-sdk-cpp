/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/QueryGenerationContext.h>
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

QueryGenerationContext::QueryGenerationContext(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryGenerationContext& QueryGenerationContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tables"))
  {
    Aws::Utils::Array<JsonView> tablesJsonList = jsonValue.GetArray("tables");
    for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
    {
      m_tables.push_back(tablesJsonList[tablesIndex].AsObject());
    }
    m_tablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("curatedQueries"))
  {
    Aws::Utils::Array<JsonView> curatedQueriesJsonList = jsonValue.GetArray("curatedQueries");
    for(unsigned curatedQueriesIndex = 0; curatedQueriesIndex < curatedQueriesJsonList.GetLength(); ++curatedQueriesIndex)
    {
      m_curatedQueries.push_back(curatedQueriesJsonList[curatedQueriesIndex].AsObject());
    }
    m_curatedQueriesHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryGenerationContext::Jsonize() const
{
  JsonValue payload;

  if(m_tablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tablesJsonList(m_tables.size());
   for(unsigned tablesIndex = 0; tablesIndex < tablesJsonList.GetLength(); ++tablesIndex)
   {
     tablesJsonList[tablesIndex].AsObject(m_tables[tablesIndex].Jsonize());
   }
   payload.WithArray("tables", std::move(tablesJsonList));

  }

  if(m_curatedQueriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> curatedQueriesJsonList(m_curatedQueries.size());
   for(unsigned curatedQueriesIndex = 0; curatedQueriesIndex < curatedQueriesJsonList.GetLength(); ++curatedQueriesIndex)
   {
     curatedQueriesJsonList[curatedQueriesIndex].AsObject(m_curatedQueries[curatedQueriesIndex].Jsonize());
   }
   payload.WithArray("curatedQueries", std::move(curatedQueriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
