/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CellTowers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

CellTowers::CellTowers() : 
    m_gsmHasBeenSet(false),
    m_wcdmaHasBeenSet(false),
    m_tdscdmaHasBeenSet(false),
    m_lteHasBeenSet(false),
    m_cdmaHasBeenSet(false)
{
}

CellTowers::CellTowers(JsonView jsonValue) : 
    m_gsmHasBeenSet(false),
    m_wcdmaHasBeenSet(false),
    m_tdscdmaHasBeenSet(false),
    m_lteHasBeenSet(false),
    m_cdmaHasBeenSet(false)
{
  *this = jsonValue;
}

CellTowers& CellTowers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Gsm"))
  {
    Aws::Utils::Array<JsonView> gsmJsonList = jsonValue.GetArray("Gsm");
    for(unsigned gsmIndex = 0; gsmIndex < gsmJsonList.GetLength(); ++gsmIndex)
    {
      m_gsm.push_back(gsmJsonList[gsmIndex].AsObject());
    }
    m_gsmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Wcdma"))
  {
    Aws::Utils::Array<JsonView> wcdmaJsonList = jsonValue.GetArray("Wcdma");
    for(unsigned wcdmaIndex = 0; wcdmaIndex < wcdmaJsonList.GetLength(); ++wcdmaIndex)
    {
      m_wcdma.push_back(wcdmaJsonList[wcdmaIndex].AsObject());
    }
    m_wcdmaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tdscdma"))
  {
    Aws::Utils::Array<JsonView> tdscdmaJsonList = jsonValue.GetArray("Tdscdma");
    for(unsigned tdscdmaIndex = 0; tdscdmaIndex < tdscdmaJsonList.GetLength(); ++tdscdmaIndex)
    {
      m_tdscdma.push_back(tdscdmaJsonList[tdscdmaIndex].AsObject());
    }
    m_tdscdmaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lte"))
  {
    Aws::Utils::Array<JsonView> lteJsonList = jsonValue.GetArray("Lte");
    for(unsigned lteIndex = 0; lteIndex < lteJsonList.GetLength(); ++lteIndex)
    {
      m_lte.push_back(lteJsonList[lteIndex].AsObject());
    }
    m_lteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cdma"))
  {
    Aws::Utils::Array<JsonView> cdmaJsonList = jsonValue.GetArray("Cdma");
    for(unsigned cdmaIndex = 0; cdmaIndex < cdmaJsonList.GetLength(); ++cdmaIndex)
    {
      m_cdma.push_back(cdmaJsonList[cdmaIndex].AsObject());
    }
    m_cdmaHasBeenSet = true;
  }

  return *this;
}

JsonValue CellTowers::Jsonize() const
{
  JsonValue payload;

  if(m_gsmHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gsmJsonList(m_gsm.size());
   for(unsigned gsmIndex = 0; gsmIndex < gsmJsonList.GetLength(); ++gsmIndex)
   {
     gsmJsonList[gsmIndex].AsObject(m_gsm[gsmIndex].Jsonize());
   }
   payload.WithArray("Gsm", std::move(gsmJsonList));

  }

  if(m_wcdmaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wcdmaJsonList(m_wcdma.size());
   for(unsigned wcdmaIndex = 0; wcdmaIndex < wcdmaJsonList.GetLength(); ++wcdmaIndex)
   {
     wcdmaJsonList[wcdmaIndex].AsObject(m_wcdma[wcdmaIndex].Jsonize());
   }
   payload.WithArray("Wcdma", std::move(wcdmaJsonList));

  }

  if(m_tdscdmaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tdscdmaJsonList(m_tdscdma.size());
   for(unsigned tdscdmaIndex = 0; tdscdmaIndex < tdscdmaJsonList.GetLength(); ++tdscdmaIndex)
   {
     tdscdmaJsonList[tdscdmaIndex].AsObject(m_tdscdma[tdscdmaIndex].Jsonize());
   }
   payload.WithArray("Tdscdma", std::move(tdscdmaJsonList));

  }

  if(m_lteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lteJsonList(m_lte.size());
   for(unsigned lteIndex = 0; lteIndex < lteJsonList.GetLength(); ++lteIndex)
   {
     lteJsonList[lteIndex].AsObject(m_lte[lteIndex].Jsonize());
   }
   payload.WithArray("Lte", std::move(lteJsonList));

  }

  if(m_cdmaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cdmaJsonList(m_cdma.size());
   for(unsigned cdmaIndex = 0; cdmaIndex < cdmaJsonList.GetLength(); ++cdmaIndex)
   {
     cdmaJsonList[cdmaIndex].AsObject(m_cdma[cdmaIndex].Jsonize());
   }
   payload.WithArray("Cdma", std::move(cdmaJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
