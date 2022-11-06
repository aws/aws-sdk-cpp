/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/AttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

AttributeValue::AttributeValue() : 
    m_sHasBeenSet(false),
    m_nHasBeenSet(false),
    m_bHasBeenSet(false),
    m_sSHasBeenSet(false),
    m_nSHasBeenSet(false),
    m_bSHasBeenSet(false),
    m_mHasBeenSet(false),
    m_lHasBeenSet(false),
    m_nULL(false),
    m_nULLHasBeenSet(false),
    m_bOOL(false),
    m_bOOLHasBeenSet(false)
{
}

AttributeValue::AttributeValue(JsonView jsonValue) : 
    m_sHasBeenSet(false),
    m_nHasBeenSet(false),
    m_bHasBeenSet(false),
    m_sSHasBeenSet(false),
    m_nSHasBeenSet(false),
    m_bSHasBeenSet(false),
    m_mHasBeenSet(false),
    m_lHasBeenSet(false),
    m_nULL(false),
    m_nULLHasBeenSet(false),
    m_bOOL(false),
    m_bOOLHasBeenSet(false)
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
    m_n = jsonValue.GetString("N");

    m_nHasBeenSet = true;
  }

  if(jsonValue.ValueExists("B"))
  {
    m_b = HashingUtils::Base64Decode(jsonValue.GetString("B"));
    m_bHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SS"))
  {
    Aws::Utils::Array<JsonView> sSJsonList = jsonValue.GetArray("SS");
    for(unsigned sSIndex = 0; sSIndex < sSJsonList.GetLength(); ++sSIndex)
    {
      m_sS.push_back(sSJsonList[sSIndex].AsString());
    }
    m_sSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NS"))
  {
    Aws::Utils::Array<JsonView> nSJsonList = jsonValue.GetArray("NS");
    for(unsigned nSIndex = 0; nSIndex < nSJsonList.GetLength(); ++nSIndex)
    {
      m_nS.push_back(nSJsonList[nSIndex].AsString());
    }
    m_nSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BS"))
  {
    Aws::Utils::Array<JsonView> bSJsonList = jsonValue.GetArray("BS");
    for(unsigned bSIndex = 0; bSIndex < bSJsonList.GetLength(); ++bSIndex)
    {
      m_bS.push_back(HashingUtils::Base64Decode(bSJsonList[bSIndex].AsString()));
    }
    m_bSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("M"))
  {
    Aws::Map<Aws::String, JsonView> mJsonMap = jsonValue.GetObject("M").GetAllObjects();
    for(auto& mItem : mJsonMap)
    {
      m_m[mItem.first] = mItem.second.AsObject();
    }
    m_mHasBeenSet = true;
  }

  if(jsonValue.ValueExists("L"))
  {
    Aws::Utils::Array<JsonView> lJsonList = jsonValue.GetArray("L");
    for(unsigned lIndex = 0; lIndex < lJsonList.GetLength(); ++lIndex)
    {
      m_l.push_back(lJsonList[lIndex].AsObject());
    }
    m_lHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NULL"))
  {
    m_nULL = jsonValue.GetBool("NULL");

    m_nULLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BOOL"))
  {
    m_bOOL = jsonValue.GetBool("BOOL");

    m_bOOLHasBeenSet = true;
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
   payload.WithString("N", m_n);

  }

  if(m_bHasBeenSet)
  {
   payload.WithString("B", HashingUtils::Base64Encode(m_b));
  }

  if(m_sSHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sSJsonList(m_sS.size());
   for(unsigned sSIndex = 0; sSIndex < sSJsonList.GetLength(); ++sSIndex)
   {
     sSJsonList[sSIndex].AsString(m_sS[sSIndex]);
   }
   payload.WithArray("SS", std::move(sSJsonList));

  }

  if(m_nSHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nSJsonList(m_nS.size());
   for(unsigned nSIndex = 0; nSIndex < nSJsonList.GetLength(); ++nSIndex)
   {
     nSJsonList[nSIndex].AsString(m_nS[nSIndex]);
   }
   payload.WithArray("NS", std::move(nSJsonList));

  }

  if(m_bSHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bSJsonList(m_bS.size());
   for(unsigned bSIndex = 0; bSIndex < bSJsonList.GetLength(); ++bSIndex)
   {
     bSJsonList[bSIndex].AsString(HashingUtils::Base64Encode(m_bS[bSIndex]));
   }
   payload.WithArray("BS", std::move(bSJsonList));

  }

  if(m_mHasBeenSet)
  {
   JsonValue mJsonMap;
   for(auto& mItem : m_m)
   {
     mJsonMap.WithObject(mItem.first, mItem.second.Jsonize());
   }
   payload.WithObject("M", std::move(mJsonMap));

  }

  if(m_lHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lJsonList(m_l.size());
   for(unsigned lIndex = 0; lIndex < lJsonList.GetLength(); ++lIndex)
   {
     lJsonList[lIndex].AsObject(m_l[lIndex].Jsonize());
   }
   payload.WithArray("L", std::move(lJsonList));

  }

  if(m_nULLHasBeenSet)
  {
   payload.WithBool("NULL", m_nULL);

  }

  if(m_bOOLHasBeenSet)
  {
   payload.WithBool("BOOL", m_bOOL);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
