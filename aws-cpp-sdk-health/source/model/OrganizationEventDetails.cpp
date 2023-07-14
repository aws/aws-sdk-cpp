/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/OrganizationEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

OrganizationEventDetails::OrganizationEventDetails() : 
    m_awsAccountIdHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_eventMetadataHasBeenSet(false)
{
}

OrganizationEventDetails::OrganizationEventDetails(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_eventHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_eventMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationEventDetails& OrganizationEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("event"))
  {
    m_event = jsonValue.GetObject("event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventDescription"))
  {
    m_eventDescription = jsonValue.GetString("eventDescription");

    m_eventDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventMetadata"))
  {
    Aws::Map<Aws::String, JsonView> eventMetadataJsonMap = jsonValue.GetObject("eventMetadata").GetAllObjects();
    for(auto& eventMetadataItem : eventMetadataJsonMap)
    {
      m_eventMetadata[eventMetadataItem.first] = eventMetadataItem.second.AsString();
    }
    m_eventMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithObject("event", m_event.Jsonize());

  }

  if(m_eventDescriptionHasBeenSet)
  {
   payload.WithString("eventDescription", m_eventDescription);

  }

  if(m_eventMetadataHasBeenSet)
  {
   JsonValue eventMetadataJsonMap;
   for(auto& eventMetadataItem : m_eventMetadata)
   {
     eventMetadataJsonMap.WithString(eventMetadataItem.first, eventMetadataItem.second);
   }
   payload.WithObject("eventMetadata", std::move(eventMetadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
