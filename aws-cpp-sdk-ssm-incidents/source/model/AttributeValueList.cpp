/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/AttributeValueList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

AttributeValueList::AttributeValueList() : 
    m_integerValuesHasBeenSet(false),
    m_stringValuesHasBeenSet(false)
{
}

AttributeValueList::AttributeValueList(JsonView jsonValue) : 
    m_integerValuesHasBeenSet(false),
    m_stringValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeValueList& AttributeValueList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("integerValues"))
  {
    Aws::Utils::Array<JsonView> integerValuesJsonList = jsonValue.GetArray("integerValues");
    for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
    {
      m_integerValues.push_back(integerValuesJsonList[integerValuesIndex].AsInteger());
    }
    m_integerValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValues"))
  {
    Aws::Utils::Array<JsonView> stringValuesJsonList = jsonValue.GetArray("stringValues");
    for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
    {
      m_stringValues.push_back(stringValuesJsonList[stringValuesIndex].AsString());
    }
    m_stringValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeValueList::Jsonize() const
{
  JsonValue payload;

  if(m_integerValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integerValuesJsonList(m_integerValues.size());
   for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
   {
     integerValuesJsonList[integerValuesIndex].AsInteger(m_integerValues[integerValuesIndex]);
   }
   payload.WithArray("integerValues", std::move(integerValuesJsonList));

  }

  if(m_stringValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringValuesJsonList(m_stringValues.size());
   for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
   {
     stringValuesJsonList[stringValuesIndex].AsString(m_stringValues[stringValuesIndex]);
   }
   payload.WithArray("stringValues", std::move(stringValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
