/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ItemResponse.h>
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

ItemResponse::ItemResponse() : 
    m_endpointItemResponseHasBeenSet(false),
    m_eventsItemResponseHasBeenSet(false)
{
}

ItemResponse::ItemResponse(JsonView jsonValue) : 
    m_endpointItemResponseHasBeenSet(false),
    m_eventsItemResponseHasBeenSet(false)
{
  *this = jsonValue;
}

ItemResponse& ItemResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointItemResponse"))
  {
    m_endpointItemResponse = jsonValue.GetObject("EndpointItemResponse");

    m_endpointItemResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventsItemResponse"))
  {
    Aws::Map<Aws::String, JsonView> eventsItemResponseJsonMap = jsonValue.GetObject("EventsItemResponse").GetAllObjects();
    for(auto& eventsItemResponseItem : eventsItemResponseJsonMap)
    {
      m_eventsItemResponse[eventsItemResponseItem.first] = eventsItemResponseItem.second.AsObject();
    }
    m_eventsItemResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue ItemResponse::Jsonize() const
{
  JsonValue payload;

  if(m_endpointItemResponseHasBeenSet)
  {
   payload.WithObject("EndpointItemResponse", m_endpointItemResponse.Jsonize());

  }

  if(m_eventsItemResponseHasBeenSet)
  {
   JsonValue eventsItemResponseJsonMap;
   for(auto& eventsItemResponseItem : m_eventsItemResponse)
   {
     eventsItemResponseJsonMap.WithObject(eventsItemResponseItem.first, eventsItemResponseItem.second.Jsonize());
   }
   payload.WithObject("EventsItemResponse", std::move(eventsItemResponseJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
