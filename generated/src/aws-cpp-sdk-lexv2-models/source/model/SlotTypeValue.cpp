/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotTypeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

SlotTypeValue::SlotTypeValue() : 
    m_sampleValueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
}

SlotTypeValue::SlotTypeValue(JsonView jsonValue) : 
    m_sampleValueHasBeenSet(false),
    m_synonymsHasBeenSet(false)
{
  *this = jsonValue;
}

SlotTypeValue& SlotTypeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sampleValue"))
  {
    m_sampleValue = jsonValue.GetObject("sampleValue");

    m_sampleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("synonyms"))
  {
    Aws::Utils::Array<JsonView> synonymsJsonList = jsonValue.GetArray("synonyms");
    for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
    {
      m_synonyms.push_back(synonymsJsonList[synonymsIndex].AsObject());
    }
    m_synonymsHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotTypeValue::Jsonize() const
{
  JsonValue payload;

  if(m_sampleValueHasBeenSet)
  {
   payload.WithObject("sampleValue", m_sampleValue.Jsonize());

  }

  if(m_synonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> synonymsJsonList(m_synonyms.size());
   for(unsigned synonymsIndex = 0; synonymsIndex < synonymsJsonList.GetLength(); ++synonymsIndex)
   {
     synonymsJsonList[synonymsIndex].AsObject(m_synonyms[synonymsIndex].Jsonize());
   }
   payload.WithArray("synonyms", std::move(synonymsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
