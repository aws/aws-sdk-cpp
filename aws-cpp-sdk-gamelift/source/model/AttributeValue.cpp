/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/gamelift/model/AttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

AttributeValue::AttributeValue() : 
    m_sHasBeenSet(false),
    m_n(0.0),
    m_nHasBeenSet(false),
    m_sLHasBeenSet(false),
    m_sDMHasBeenSet(false)
{
}

AttributeValue::AttributeValue(const JsonValue& jsonValue) : 
    m_sHasBeenSet(false),
    m_n(0.0),
    m_nHasBeenSet(false),
    m_sLHasBeenSet(false),
    m_sDMHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeValue& AttributeValue::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("S"))
  {
    m_s = jsonValue.GetString("S");

    m_sHasBeenSet = true;
  }

  if(jsonValue.ValueExists("N"))
  {
    m_n = jsonValue.GetDouble("N");

    m_nHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SL"))
  {
    Array<JsonValue> sLJsonList = jsonValue.GetArray("SL");
    for(unsigned sLIndex = 0; sLIndex < sLJsonList.GetLength(); ++sLIndex)
    {
      m_sL.push_back(sLJsonList[sLIndex].AsString());
    }
    m_sLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SDM"))
  {
    Aws::Map<Aws::String, JsonValue> sDMJsonMap = jsonValue.GetObject("SDM").GetAllObjects();
    for(auto& sDMItem : sDMJsonMap)
    {
      m_sDM[sDMItem.first] = sDMItem.second.AsDouble();
    }
    m_sDMHasBeenSet = true;
  }

  return *this;
}

JsonValue AttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_sHasBeenSet)
  {
   payload.WithString("S", m_s);

  }

  if(m_nHasBeenSet)
  {
   payload.WithDouble("N", m_n);

  }

  if(m_sLHasBeenSet)
  {
   Array<JsonValue> sLJsonList(m_sL.size());
   for(unsigned sLIndex = 0; sLIndex < sLJsonList.GetLength(); ++sLIndex)
   {
     sLJsonList[sLIndex].AsString(m_sL[sLIndex]);
   }
   payload.WithArray("SL", std::move(sLJsonList));

  }

  if(m_sDMHasBeenSet)
  {
   JsonValue sDMJsonMap;
   for(auto& sDMItem : m_sDM)
   {
     sDMJsonMap.WithDouble(sDMItem.first, sDMItem.second);
   }
   payload.WithObject("SDM", std::move(sDMJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
