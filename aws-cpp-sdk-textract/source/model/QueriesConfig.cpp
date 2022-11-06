/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/QueriesConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

QueriesConfig::QueriesConfig() : 
    m_queriesHasBeenSet(false)
{
}

QueriesConfig::QueriesConfig(JsonView jsonValue) : 
    m_queriesHasBeenSet(false)
{
  *this = jsonValue;
}

QueriesConfig& QueriesConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Queries"))
  {
    Aws::Utils::Array<JsonView> queriesJsonList = jsonValue.GetArray("Queries");
    for(unsigned queriesIndex = 0; queriesIndex < queriesJsonList.GetLength(); ++queriesIndex)
    {
      m_queries.push_back(queriesJsonList[queriesIndex].AsObject());
    }
    m_queriesHasBeenSet = true;
  }

  return *this;
}

JsonValue QueriesConfig::Jsonize() const
{
  JsonValue payload;

  if(m_queriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queriesJsonList(m_queries.size());
   for(unsigned queriesIndex = 0; queriesIndex < queriesJsonList.GetLength(); ++queriesIndex)
   {
     queriesJsonList[queriesIndex].AsObject(m_queries[queriesIndex].Jsonize());
   }
   payload.WithArray("Queries", std::move(queriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
