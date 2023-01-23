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
    m_portsHasBeenSet(false),
    m_number(0.0),
    m_numberHasBeenSet(false),
    m_numbersHasBeenSet(false),
    m_stringsHasBeenSet(false)
{
}

MetricValue::MetricValue(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_cidrsHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_number(0.0),
    m_numberHasBeenSet(false),
    m_numbersHasBeenSet(false),
    m_stringsHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> cidrsJsonList = jsonValue.GetArray("cidrs");
    for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
    {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ports"))
  {
    Aws::Utils::Array<JsonView> portsJsonList = jsonValue.GetArray("ports");
    for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
    {
      m_ports.push_back(portsJsonList[portsIndex].AsInteger());
    }
    m_portsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("number"))
  {
    m_number = jsonValue.GetDouble("number");

    m_numberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numbers"))
  {
    Aws::Utils::Array<JsonView> numbersJsonList = jsonValue.GetArray("numbers");
    for(unsigned numbersIndex = 0; numbersIndex < numbersJsonList.GetLength(); ++numbersIndex)
    {
      m_numbers.push_back(numbersJsonList[numbersIndex].AsDouble());
    }
    m_numbersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strings"))
  {
    Aws::Utils::Array<JsonView> stringsJsonList = jsonValue.GetArray("strings");
    for(unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex)
    {
      m_strings.push_back(stringsJsonList[stringsIndex].AsString());
    }
    m_stringsHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> cidrsJsonList(m_cidrs.size());
   for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
   {
     cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
   }
   payload.WithArray("cidrs", std::move(cidrsJsonList));

  }

  if(m_portsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portsJsonList(m_ports.size());
   for(unsigned portsIndex = 0; portsIndex < portsJsonList.GetLength(); ++portsIndex)
   {
     portsJsonList[portsIndex].AsInteger(m_ports[portsIndex]);
   }
   payload.WithArray("ports", std::move(portsJsonList));

  }

  if(m_numberHasBeenSet)
  {
   payload.WithDouble("number", m_number);

  }

  if(m_numbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> numbersJsonList(m_numbers.size());
   for(unsigned numbersIndex = 0; numbersIndex < numbersJsonList.GetLength(); ++numbersIndex)
   {
     numbersJsonList[numbersIndex].AsDouble(m_numbers[numbersIndex]);
   }
   payload.WithArray("numbers", std::move(numbersJsonList));

  }

  if(m_stringsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stringsJsonList(m_strings.size());
   for(unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex)
   {
     stringsJsonList[stringsIndex].AsString(m_strings[stringsIndex]);
   }
   payload.WithArray("strings", std::move(stringsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
