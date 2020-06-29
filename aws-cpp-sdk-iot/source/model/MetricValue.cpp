/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MetricValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MetricValue::MetricValue() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_cidrsHasBeenSet(false),
    m_portsHasBeenSet(false)
{
}

MetricValue::MetricValue(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_cidrsHasBeenSet(false),
    m_portsHasBeenSet(false)
{
  *this = jsonValue;
}

MetricValue& MetricValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cidrs"))
  {
    Array<JsonView> cidrsJsonList = jsonValue.GetArray("cidrs");
    for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
    {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ports"))
  {
    Array<JsonView> portsJsonList = jsonValue.GetArray("ports");
    for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
    {
      m_ports.push_back(portsJsonList[portsIndex].AsInteger());
    }
    m_portsHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricValue::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_cidrsHasBeenSet)
  {
   Array<JsonValue> cidrsJsonList(m_cidrs.size());
   for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
   {
     cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
   }
   payload.WithArray("cidrs", std::move(cidrsJsonList));

  }

  if(m_portsHasBeenSet)
  {
   Array<JsonValue> portsJsonList(m_ports.size());
   for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
   {
     portsJsonList[portsIndex].AsInteger(m_ports[portsIndex]);
   }
   payload.WithArray("ports", std::move(portsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
