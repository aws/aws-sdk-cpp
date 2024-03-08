/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/TermRelations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

TermRelations::TermRelations() : 
    m_classifiesHasBeenSet(false),
    m_isAHasBeenSet(false)
{
}

TermRelations::TermRelations(JsonView jsonValue) : 
    m_classifiesHasBeenSet(false),
    m_isAHasBeenSet(false)
{
  *this = jsonValue;
}

TermRelations& TermRelations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("classifies"))
  {
    Aws::Utils::Array<JsonView> classifiesJsonList = jsonValue.GetArray("classifies");
    for(unsigned classifiesIndex = 0; classifiesIndex < classifiesJsonList.GetLength(); ++classifiesIndex)
    {
      m_classifies.push_back(classifiesJsonList[classifiesIndex].AsString());
    }
    m_classifiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isA"))
  {
    Aws::Utils::Array<JsonView> isAJsonList = jsonValue.GetArray("isA");
    for(unsigned isAIndex = 0; isAIndex < isAJsonList.GetLength(); ++isAIndex)
    {
      m_isA.push_back(isAJsonList[isAIndex].AsString());
    }
    m_isAHasBeenSet = true;
  }

  return *this;
}

JsonValue TermRelations::Jsonize() const
{
  JsonValue payload;

  if(m_classifiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> classifiesJsonList(m_classifies.size());
   for(unsigned classifiesIndex = 0; classifiesIndex < classifiesJsonList.GetLength(); ++classifiesIndex)
   {
     classifiesJsonList[classifiesIndex].AsString(m_classifies[classifiesIndex]);
   }
   payload.WithArray("classifies", std::move(classifiesJsonList));

  }

  if(m_isAHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> isAJsonList(m_isA.size());
   for(unsigned isAIndex = 0; isAIndex < isAJsonList.GetLength(); ++isAIndex)
   {
     isAJsonList[isAIndex].AsString(m_isA[isAIndex]);
   }
   payload.WithArray("isA", std::move(isAJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
