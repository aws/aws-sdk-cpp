/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Parameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Parameters::Parameters() : 
    m_stringParametersHasBeenSet(false),
    m_integerParametersHasBeenSet(false),
    m_decimalParametersHasBeenSet(false),
    m_dateTimeParametersHasBeenSet(false)
{
}

Parameters::Parameters(JsonView jsonValue) : 
    m_stringParametersHasBeenSet(false),
    m_integerParametersHasBeenSet(false),
    m_decimalParametersHasBeenSet(false),
    m_dateTimeParametersHasBeenSet(false)
{
  *this = jsonValue;
}

Parameters& Parameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringParameters"))
  {
    Aws::Utils::Array<JsonView> stringParametersJsonList = jsonValue.GetArray("StringParameters");
    for(unsigned stringParametersIndex = 0; stringParametersIndex < stringParametersJsonList.GetLength(); ++stringParametersIndex)
    {
      m_stringParameters.push_back(stringParametersJsonList[stringParametersIndex].AsObject());
    }
    m_stringParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerParameters"))
  {
    Aws::Utils::Array<JsonView> integerParametersJsonList = jsonValue.GetArray("IntegerParameters");
    for(unsigned integerParametersIndex = 0; integerParametersIndex < integerParametersJsonList.GetLength(); ++integerParametersIndex)
    {
      m_integerParameters.push_back(integerParametersJsonList[integerParametersIndex].AsObject());
    }
    m_integerParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecimalParameters"))
  {
    Aws::Utils::Array<JsonView> decimalParametersJsonList = jsonValue.GetArray("DecimalParameters");
    for(unsigned decimalParametersIndex = 0; decimalParametersIndex < decimalParametersJsonList.GetLength(); ++decimalParametersIndex)
    {
      m_decimalParameters.push_back(decimalParametersJsonList[decimalParametersIndex].AsObject());
    }
    m_decimalParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeParameters"))
  {
    Aws::Utils::Array<JsonView> dateTimeParametersJsonList = jsonValue.GetArray("DateTimeParameters");
    for(unsigned dateTimeParametersIndex = 0; dateTimeParametersIndex < dateTimeParametersJsonList.GetLength(); ++dateTimeParametersIndex)
    {
      m_dateTimeParameters.push_back(dateTimeParametersJsonList[dateTimeParametersIndex].AsObject());
    }
    m_dateTimeParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue Parameters::Jsonize() const
{
  JsonValue payload;

  if(m_stringParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringParametersJsonList(m_stringParameters.size());
   for(unsigned stringParametersIndex = 0; stringParametersIndex < stringParametersJsonList.GetLength(); ++stringParametersIndex)
   {
     stringParametersJsonList[stringParametersIndex].AsObject(m_stringParameters[stringParametersIndex].Jsonize());
   }
   payload.WithArray("StringParameters", std::move(stringParametersJsonList));

  }

  if(m_integerParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> integerParametersJsonList(m_integerParameters.size());
   for(unsigned integerParametersIndex = 0; integerParametersIndex < integerParametersJsonList.GetLength(); ++integerParametersIndex)
   {
     integerParametersJsonList[integerParametersIndex].AsObject(m_integerParameters[integerParametersIndex].Jsonize());
   }
   payload.WithArray("IntegerParameters", std::move(integerParametersJsonList));

  }

  if(m_decimalParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> decimalParametersJsonList(m_decimalParameters.size());
   for(unsigned decimalParametersIndex = 0; decimalParametersIndex < decimalParametersJsonList.GetLength(); ++decimalParametersIndex)
   {
     decimalParametersJsonList[decimalParametersIndex].AsObject(m_decimalParameters[decimalParametersIndex].Jsonize());
   }
   payload.WithArray("DecimalParameters", std::move(decimalParametersJsonList));

  }

  if(m_dateTimeParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dateTimeParametersJsonList(m_dateTimeParameters.size());
   for(unsigned dateTimeParametersIndex = 0; dateTimeParametersIndex < dateTimeParametersJsonList.GetLength(); ++dateTimeParametersIndex)
   {
     dateTimeParametersJsonList[dateTimeParametersIndex].AsObject(m_dateTimeParameters[dateTimeParametersIndex].Jsonize());
   }
   payload.WithArray("DateTimeParameters", std::move(dateTimeParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
