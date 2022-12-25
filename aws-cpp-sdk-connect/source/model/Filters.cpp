/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Filters.h>
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

Filters::Filters() : 
    m_queuesHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_routingProfilesHasBeenSet(false)
{
}

Filters::Filters(JsonView jsonValue) : 
    m_queuesHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_routingProfilesHasBeenSet(false)
{
  *this = jsonValue;
}

Filters& Filters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Queues"))
  {
    Aws::Utils::Array<JsonView> queuesJsonList = jsonValue.GetArray("Queues");
    for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
    {
      m_queues.push_back(queuesJsonList[queuesIndex].AsString());
    }
    m_queuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Channels"))
  {
    Aws::Utils::Array<JsonView> channelsJsonList = jsonValue.GetArray("Channels");
    for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
    {
      m_channels.push_back(ChannelMapper::GetChannelForName(channelsJsonList[channelsIndex].AsString()));
    }
    m_channelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingProfiles"))
  {
    Aws::Utils::Array<JsonView> routingProfilesJsonList = jsonValue.GetArray("RoutingProfiles");
    for(unsigned routingProfilesIndex = 0; routingProfilesIndex < routingProfilesJsonList.GetLength(); ++routingProfilesIndex)
    {
      m_routingProfiles.push_back(routingProfilesJsonList[routingProfilesIndex].AsString());
    }
    m_routingProfilesHasBeenSet = true;
  }

  return *this;
}

JsonValue Filters::Jsonize() const
{
  JsonValue payload;

  if(m_queuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queuesJsonList(m_queues.size());
   for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
   {
     queuesJsonList[queuesIndex].AsString(m_queues[queuesIndex]);
   }
   payload.WithArray("Queues", std::move(queuesJsonList));

  }

  if(m_channelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> channelsJsonList(m_channels.size());
   for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
   {
     channelsJsonList[channelsIndex].AsString(ChannelMapper::GetNameForChannel(m_channels[channelsIndex]));
   }
   payload.WithArray("Channels", std::move(channelsJsonList));

  }

  if(m_routingProfilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingProfilesJsonList(m_routingProfiles.size());
   for(unsigned routingProfilesIndex = 0; routingProfilesIndex < routingProfilesJsonList.GetLength(); ++routingProfilesIndex)
   {
     routingProfilesJsonList[routingProfilesIndex].AsString(m_routingProfiles[routingProfilesIndex]);
   }
   payload.WithArray("RoutingProfiles", std::move(routingProfilesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
