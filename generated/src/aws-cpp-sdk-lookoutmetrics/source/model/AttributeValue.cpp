/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AttributeValue::AttributeValue() : 
    m_sHasBeenSet(false),
    m_nHasBeenSet(false),
    m_bHasBeenSet(false),
    m_sSHasBeenSet(false),
    m_nSHasBeenSet(false),
    m_bSHasBeenSet(false)
{
}

AttributeValue::AttributeValue(JsonView jsonValue) : 
    m_sHasBeenSet(false),
    m_nHasBeenSet(false),
    m_bHasBeenSet(false),
    m_sSHasBeenSet(false),
    m_nSHasBeenSet(false),
    m_bSHasBeenSet(false)
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
    m_b = jsonValue.GetString("B");

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
      m_bS.push_back(bSJsonList[bSIndex].AsString());
    }
    m_bSHasBeenSet = true;
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
   payload.WithString("B", m_b);

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
     bSJsonList[bSIndex].AsString(m_bS[bSIndex]);
   }
   payload.WithArray("BS", std::move(bSJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
