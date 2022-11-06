/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AttributeValue::AttributeValue(JsonView jsonValue) : 
    m_sHasBeenSet(false),
    m_n(0.0),
    m_nHasBeenSet(false),
    m_sLHasBeenSet(false),
    m_sDMHasBeenSet(false)
{
  *this = jsonValue;
}

AttributeValue& AttributeValue::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> sLJsonList = jsonValue.GetArray("SL");
    for(unsigned sLIndex = 0; sLIndex < sLJsonList.GetLength(); ++sLIndex)
    {
      m_sL.push_back(sLJsonList[sLIndex].AsString());
    }
    m_sLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SDM"))
  {
    Aws::Map<Aws::String, JsonView> sDMJsonMap = jsonValue.GetObject("SDM").GetAllObjects();
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
   Aws::Utils::Array<JsonValue> sLJsonList(m_sL.size());
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
