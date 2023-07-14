/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EventsResponse.h>
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

EventsResponse::EventsResponse() : 
    m_resultsHasBeenSet(false)
{
}

EventsResponse::EventsResponse(JsonView jsonValue) : 
    m_resultsHasBeenSet(false)
{
  *this = jsonValue;
}

EventsResponse& EventsResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Results"))
  {
    Aws::Map<Aws::String, JsonView> resultsJsonMap = jsonValue.GetObject("Results").GetAllObjects();
    for(auto& resultsItem : resultsJsonMap)
    {
      m_results[resultsItem.first] = resultsItem.second.AsObject();
    }
    m_resultsHasBeenSet = true;
  }

  return *this;
}

JsonValue EventsResponse::Jsonize() const
{
  JsonValue payload;

  if(m_resultsHasBeenSet)
  {
   JsonValue resultsJsonMap;
   for(auto& resultsItem : m_results)
   {
     resultsJsonMap.WithObject(resultsItem.first, resultsItem.second.Jsonize());
   }
   payload.WithObject("Results", std::move(resultsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
