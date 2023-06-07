/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventStreamSummary.h>
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

EventStreamSummary::EventStreamSummary() : 
    m_domainNameHasBeenSet(false),
    m_eventStreamNameHasBeenSet(false),
    m_eventStreamArnHasBeenSet(false),
    m_state(EventStreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stoppedSinceHasBeenSet(false),
    m_destinationSummaryHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

EventStreamSummary::EventStreamSummary(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_eventStreamNameHasBeenSet(false),
    m_eventStreamArnHasBeenSet(false),
    m_state(EventStreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stoppedSinceHasBeenSet(false),
    m_destinationSummaryHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

EventStreamSummary& EventStreamSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventStreamName"))
  {
    m_eventStreamName = jsonValue.GetString("EventStreamName");

    m_eventStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventStreamArn"))
  {
    m_eventStreamArn = jsonValue.GetString("EventStreamArn");

    m_eventStreamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EventStreamStateMapper::GetEventStreamStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StoppedSince"))
  {
    m_stoppedSince = jsonValue.GetDouble("StoppedSince");

    m_stoppedSinceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSummary"))
  {
    m_destinationSummary = jsonValue.GetObject("DestinationSummary");

    m_destinationSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue EventStreamSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_eventStreamNameHasBeenSet)
  {
   payload.WithString("EventStreamName", m_eventStreamName);

  }

  if(m_eventStreamArnHasBeenSet)
  {
   payload.WithString("EventStreamArn", m_eventStreamArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EventStreamStateMapper::GetNameForEventStreamState(m_state));
  }

  if(m_stoppedSinceHasBeenSet)
  {
   payload.WithDouble("StoppedSince", m_stoppedSince.SecondsWithMSPrecision());
  }

  if(m_destinationSummaryHasBeenSet)
  {
   payload.WithObject("DestinationSummary", m_destinationSummary.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
