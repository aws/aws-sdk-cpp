/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventTriggerLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

EventTriggerLimits::EventTriggerLimits(JsonView jsonValue)
{
  *this = jsonValue;
}

EventTriggerLimits& EventTriggerLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventExpiration"))
  {
    m_eventExpiration = jsonValue.GetInt64("EventExpiration");
    m_eventExpirationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Periods"))
  {
    Aws::Utils::Array<JsonView> periodsJsonList = jsonValue.GetArray("Periods");
    for(unsigned periodsIndex = 0; periodsIndex < periodsJsonList.GetLength(); ++periodsIndex)
    {
      m_periods.push_back(periodsJsonList[periodsIndex].AsObject());
    }
    m_periodsHasBeenSet = true;
  }
  return *this;
}

JsonValue EventTriggerLimits::Jsonize() const
{
  JsonValue payload;

  if(m_eventExpirationHasBeenSet)
  {
   payload.WithInt64("EventExpiration", m_eventExpiration);

  }

  if(m_periodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> periodsJsonList(m_periods.size());
   for(unsigned periodsIndex = 0; periodsIndex < periodsJsonList.GetLength(); ++periodsIndex)
   {
     periodsJsonList[periodsIndex].AsObject(m_periods[periodsIndex].Jsonize());
   }
   payload.WithArray("Periods", std::move(periodsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
