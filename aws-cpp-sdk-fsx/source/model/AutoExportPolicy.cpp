/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/AutoExportPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

AutoExportPolicy::AutoExportPolicy() : 
    m_eventsHasBeenSet(false)
{
}

AutoExportPolicy::AutoExportPolicy(JsonView jsonValue) : 
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoExportPolicy& AutoExportPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(EventTypeMapper::GetEventTypeForName(eventsJsonList[eventsIndex].AsString()));
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoExportPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsString(EventTypeMapper::GetNameForEventType(m_events[eventsIndex]));
   }
   payload.WithArray("Events", std::move(eventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
