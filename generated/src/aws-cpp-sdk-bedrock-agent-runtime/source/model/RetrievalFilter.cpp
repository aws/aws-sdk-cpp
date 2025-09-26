/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

RetrievalFilter::RetrievalFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrievalFilter& RetrievalFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("equals"))
  {
    m_equals = jsonValue.GetObject("equals");
    m_equalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notEquals"))
  {
    m_notEquals = jsonValue.GetObject("notEquals");
    m_notEqualsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("greaterThan"))
  {
    m_greaterThan = jsonValue.GetObject("greaterThan");
    m_greaterThanHasBeenSet = true;
  }
  if(jsonValue.ValueExists("greaterThanOrEquals"))
  {
    m_greaterThanOrEquals = jsonValue.GetObject("greaterThanOrEquals");
    m_greaterThanOrEqualsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lessThan"))
  {
    m_lessThan = jsonValue.GetObject("lessThan");
    m_lessThanHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lessThanOrEquals"))
  {
    m_lessThanOrEquals = jsonValue.GetObject("lessThanOrEquals");
    m_lessThanOrEqualsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("in"))
  {
    m_in = jsonValue.GetObject("in");
    m_inHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notIn"))
  {
    m_notIn = jsonValue.GetObject("notIn");
    m_notInHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startsWith"))
  {
    m_startsWith = jsonValue.GetObject("startsWith");
    m_startsWithHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listContains"))
  {
    m_listContains = jsonValue.GetObject("listContains");
    m_listContainsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stringContains"))
  {
    m_stringContains = jsonValue.GetObject("stringContains");
    m_stringContainsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("andAll"))
  {
    Aws::Utils::Array<JsonView> andAllJsonList = jsonValue.GetArray("andAll");
    for(unsigned andAllIndex = 0; andAllIndex < andAllJsonList.GetLength(); ++andAllIndex)
    {
      m_andAll.push_back(andAllJsonList[andAllIndex].AsObject());
    }
    m_andAllHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orAll"))
  {
    Aws::Utils::Array<JsonView> orAllJsonList = jsonValue.GetArray("orAll");
    for(unsigned orAllIndex = 0; orAllIndex < orAllJsonList.GetLength(); ++orAllIndex)
    {
      m_orAll.push_back(orAllJsonList[orAllIndex].AsObject());
    }
    m_orAllHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalFilter::Jsonize() const
{
  JsonValue payload;

  if(m_equalsHasBeenSet)
  {
   payload.WithObject("equals", m_equals.Jsonize());

  }

  if(m_notEqualsHasBeenSet)
  {
   payload.WithObject("notEquals", m_notEquals.Jsonize());

  }

  if(m_greaterThanHasBeenSet)
  {
   payload.WithObject("greaterThan", m_greaterThan.Jsonize());

  }

  if(m_greaterThanOrEqualsHasBeenSet)
  {
   payload.WithObject("greaterThanOrEquals", m_greaterThanOrEquals.Jsonize());

  }

  if(m_lessThanHasBeenSet)
  {
   payload.WithObject("lessThan", m_lessThan.Jsonize());

  }

  if(m_lessThanOrEqualsHasBeenSet)
  {
   payload.WithObject("lessThanOrEquals", m_lessThanOrEquals.Jsonize());

  }

  if(m_inHasBeenSet)
  {
   payload.WithObject("in", m_in.Jsonize());

  }

  if(m_notInHasBeenSet)
  {
   payload.WithObject("notIn", m_notIn.Jsonize());

  }

  if(m_startsWithHasBeenSet)
  {
   payload.WithObject("startsWith", m_startsWith.Jsonize());

  }

  if(m_listContainsHasBeenSet)
  {
   payload.WithObject("listContains", m_listContains.Jsonize());

  }

  if(m_stringContainsHasBeenSet)
  {
   payload.WithObject("stringContains", m_stringContains.Jsonize());

  }

  if(m_andAllHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> andAllJsonList(m_andAll.size());
   for(unsigned andAllIndex = 0; andAllIndex < andAllJsonList.GetLength(); ++andAllIndex)
   {
     andAllJsonList[andAllIndex].AsObject(m_andAll[andAllIndex].Jsonize());
   }
   payload.WithArray("andAll", std::move(andAllJsonList));

  }

  if(m_orAllHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orAllJsonList(m_orAll.size());
   for(unsigned orAllIndex = 0; orAllIndex < orAllJsonList.GetLength(); ++orAllIndex)
   {
     orAllJsonList[orAllIndex].AsObject(m_orAll[orAllIndex].Jsonize());
   }
   payload.WithArray("orAll", std::move(orAllJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
