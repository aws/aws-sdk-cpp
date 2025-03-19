/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EffectiveHoursOfOperations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EffectiveHoursOfOperations::EffectiveHoursOfOperations(JsonView jsonValue)
{
  *this = jsonValue;
}

EffectiveHoursOfOperations& EffectiveHoursOfOperations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetString("Date");
    m_dateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperationalHours"))
  {
    Aws::Utils::Array<JsonView> operationalHoursJsonList = jsonValue.GetArray("OperationalHours");
    for(unsigned operationalHoursIndex = 0; operationalHoursIndex < operationalHoursJsonList.GetLength(); ++operationalHoursIndex)
    {
      m_operationalHours.push_back(operationalHoursJsonList[operationalHoursIndex].AsObject());
    }
    m_operationalHoursHasBeenSet = true;
  }
  return *this;
}

JsonValue EffectiveHoursOfOperations::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithString("Date", m_date);

  }

  if(m_operationalHoursHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operationalHoursJsonList(m_operationalHours.size());
   for(unsigned operationalHoursIndex = 0; operationalHoursIndex < operationalHoursJsonList.GetLength(); ++operationalHoursIndex)
   {
     operationalHoursJsonList[operationalHoursIndex].AsObject(m_operationalHours[operationalHoursIndex].Jsonize());
   }
   payload.WithArray("OperationalHours", std::move(operationalHoursJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
