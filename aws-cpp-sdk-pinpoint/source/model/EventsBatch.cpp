/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/EventsBatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EventsBatch::EventsBatch() : 
    m_endpointHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

EventsBatch::EventsBatch(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

EventsBatch& EventsBatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetObject("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Events"))
  {
    Aws::Map<Aws::String, JsonView> eventsJsonMap = jsonValue.GetObject("Events").GetAllObjects();
    for(auto& eventsItem : eventsJsonMap)
    {
      m_events[eventsItem.first] = eventsItem.second.AsObject();
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue EventsBatch::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("Endpoint", m_endpoint.Jsonize());

  }

  if(m_eventsHasBeenSet)
  {
   JsonValue eventsJsonMap;
   for(auto& eventsItem : m_events)
   {
     eventsJsonMap.WithObject(eventsItem.first, eventsItem.second.Jsonize());
   }
   payload.WithObject("Events", std::move(eventsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
