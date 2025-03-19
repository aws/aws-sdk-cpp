/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteDriverOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteDriverOptions::RouteDriverOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteDriverOptions& RouteDriverOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Schedule"))
  {
    Aws::Utils::Array<JsonView> scheduleJsonList = jsonValue.GetArray("Schedule");
    for(unsigned scheduleIndex = 0; scheduleIndex < scheduleJsonList.GetLength(); ++scheduleIndex)
    {
      m_schedule.push_back(scheduleJsonList[scheduleIndex].AsObject());
    }
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteDriverOptions::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scheduleJsonList(m_schedule.size());
   for(unsigned scheduleIndex = 0; scheduleIndex < scheduleJsonList.GetLength(); ++scheduleIndex)
   {
     scheduleJsonList[scheduleIndex].AsObject(m_schedule[scheduleIndex].Jsonize());
   }
   payload.WithArray("Schedule", std::move(scheduleJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
