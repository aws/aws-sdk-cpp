/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/ArrayValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

ArrayValue::ArrayValue() : 
    m_arrayValuesHasBeenSet(false),
    m_booleanValuesHasBeenSet(false),
    m_doubleValuesHasBeenSet(false),
    m_longValuesHasBeenSet(false),
    m_stringValuesHasBeenSet(false)
{
}

ArrayValue::ArrayValue(JsonView jsonValue) : 
    m_arrayValuesHasBeenSet(false),
    m_booleanValuesHasBeenSet(false),
    m_doubleValuesHasBeenSet(false),
    m_longValuesHasBeenSet(false),
    m_stringValuesHasBeenSet(false)
{
  *this = jsonValue;
}

ArrayValue& ArrayValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arrayValues"))
  {
    Array<JsonView> arrayValuesJsonList = jsonValue.GetArray("arrayValues");
    for(unsigned arrayValuesIndex = 0; arrayValuesIndex < arrayValuesJsonList.GetLength(); ++arrayValuesIndex)
    {
      m_arrayValues.push_back(arrayValuesJsonList[arrayValuesIndex].AsObject());
    }
    m_arrayValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("booleanValues"))
  {
    Array<JsonView> booleanValuesJsonList = jsonValue.GetArray("booleanValues");
    for(unsigned booleanValuesIndex = 0; booleanValuesIndex < booleanValuesJsonList.GetLength(); ++booleanValuesIndex)
    {
      m_booleanValues.push_back(booleanValuesJsonList[booleanValuesIndex].AsBool());
    }
    m_booleanValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValues"))
  {
    Array<JsonView> doubleValuesJsonList = jsonValue.GetArray("doubleValues");
    for(unsigned doubleValuesIndex = 0; doubleValuesIndex < doubleValuesJsonList.GetLength(); ++doubleValuesIndex)
    {
      m_doubleValues.push_back(doubleValuesJsonList[doubleValuesIndex].AsDouble());
    }
    m_doubleValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longValues"))
  {
    Array<JsonView> longValuesJsonList = jsonValue.GetArray("longValues");
    for(unsigned longValuesIndex = 0; longValuesIndex < longValuesJsonList.GetLength(); ++longValuesIndex)
    {
      m_longValues.push_back(longValuesJsonList[longValuesIndex].AsInt64());
    }
    m_longValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValues"))
  {
    Array<JsonView> stringValuesJsonList = jsonValue.GetArray("stringValues");
    for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
    {
      m_stringValues.push_back(stringValuesJsonList[stringValuesIndex].AsString());
    }
    m_stringValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue ArrayValue::Jsonize() const
{
  JsonValue payload;

  if(m_arrayValuesHasBeenSet)
  {
   Array<JsonValue> arrayValuesJsonList(m_arrayValues.size());
   for(unsigned arrayValuesIndex = 0; arrayValuesIndex < arrayValuesJsonList.GetLength(); ++arrayValuesIndex)
   {
     arrayValuesJsonList[arrayValuesIndex].AsObject(m_arrayValues[arrayValuesIndex].Jsonize());
   }
   payload.WithArray("arrayValues", std::move(arrayValuesJsonList));

  }

  if(m_booleanValuesHasBeenSet)
  {
   Array<JsonValue> booleanValuesJsonList(m_booleanValues.size());
   for(unsigned booleanValuesIndex = 0; booleanValuesIndex < booleanValuesJsonList.GetLength(); ++booleanValuesIndex)
   {
     booleanValuesJsonList[booleanValuesIndex].AsBool(m_booleanValues[booleanValuesIndex]);
   }
   payload.WithArray("booleanValues", std::move(booleanValuesJsonList));

  }

  if(m_doubleValuesHasBeenSet)
  {
   Array<JsonValue> doubleValuesJsonList(m_doubleValues.size());
   for(unsigned doubleValuesIndex = 0; doubleValuesIndex < doubleValuesJsonList.GetLength(); ++doubleValuesIndex)
   {
     doubleValuesJsonList[doubleValuesIndex].AsDouble(m_doubleValues[doubleValuesIndex]);
   }
   payload.WithArray("doubleValues", std::move(doubleValuesJsonList));

  }

  if(m_longValuesHasBeenSet)
  {
   Array<JsonValue> longValuesJsonList(m_longValues.size());
   for(unsigned longValuesIndex = 0; longValuesIndex < longValuesJsonList.GetLength(); ++longValuesIndex)
   {
     longValuesJsonList[longValuesIndex].AsInt64(m_longValues[longValuesIndex]);
   }
   payload.WithArray("longValues", std::move(longValuesJsonList));

  }

  if(m_stringValuesHasBeenSet)
  {
   Array<JsonValue> stringValuesJsonList(m_stringValues.size());
   for(unsigned stringValuesIndex = 0; stringValuesIndex < stringValuesJsonList.GetLength(); ++stringValuesIndex)
   {
     stringValuesJsonList[stringValuesIndex].AsString(m_stringValues[stringValuesIndex]);
   }
   payload.WithArray("stringValues", std::move(stringValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
