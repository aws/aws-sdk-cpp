/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/EnumerationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

EnumerationValue::EnumerationValue() : 
    m_valueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
}

EnumerationValue::EnumerationValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
  *this = jsonValue;
}

EnumerationValue& EnumerationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("synonyms"))
  {
    Aws::Utils::Array<JsonView> synonymsJsonList = jsonValue.GetArray("synonyms");
    for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
    {
      m_synonyms.push_back(synonymsJsonList[synonymsIndex].AsString());
    }
    m_synonymsHasBeenSet = true;
  }

  return *this;
}

JsonValue EnumerationValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_synonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> synonymsJsonList(m_synonyms.size());
   for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
   {
     synonymsJsonList[synonymsIndex].AsString(m_synonyms[synonymsIndex]);
   }
   payload.WithArray("synonyms", std::move(synonymsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
