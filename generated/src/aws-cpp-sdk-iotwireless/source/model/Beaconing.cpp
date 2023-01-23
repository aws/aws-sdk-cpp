/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/Beaconing.h>
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

Beaconing::Beaconing() : 
    m_dataRate(0),
    m_dataRateHasBeenSet(false),
    m_frequenciesHasBeenSet(false)
{
}

Beaconing::Beaconing(JsonView jsonValue) : 
    m_dataRate(0),
    m_dataRateHasBeenSet(false),
    m_frequenciesHasBeenSet(false)
{
  *this = jsonValue;
}

Beaconing& Beaconing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataRate"))
  {
    m_dataRate = jsonValue.GetInteger("DataRate");

    m_dataRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Frequencies"))
  {
    Aws::Utils::Array<JsonView> frequenciesJsonList = jsonValue.GetArray("Frequencies");
    for(unsigned frequenciesIndex = 0; frequenciesIndex < frequenciesJsonList.GetLength(); ++frequenciesIndex)
    {
      m_frequencies.push_back(frequenciesJsonList[frequenciesIndex].AsInteger());
    }
    m_frequenciesHasBeenSet = true;
  }

  return *this;
}

JsonValue Beaconing::Jsonize() const
{
  JsonValue payload;

  if(m_dataRateHasBeenSet)
  {
   payload.WithInteger("DataRate", m_dataRate);

  }

  if(m_frequenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> frequenciesJsonList(m_frequencies.size());
   for(unsigned frequenciesIndex = 0; frequenciesIndex < frequenciesJsonList.GetLength(); ++frequenciesIndex)
   {
     frequenciesJsonList[frequenciesIndex].AsInteger(m_frequencies[frequenciesIndex]);
   }
   payload.WithArray("Frequencies", std::move(frequenciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
