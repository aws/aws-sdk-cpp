/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingProfile.h>
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

RoutingProfile::RoutingProfile() : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_routingProfileArnHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_mediaConcurrenciesHasBeenSet(false),
    m_defaultOutboundQueueIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_numberOfAssociatedQueues(0),
    m_numberOfAssociatedQueuesHasBeenSet(false),
    m_numberOfAssociatedUsers(0),
    m_numberOfAssociatedUsersHasBeenSet(false)
{
}

RoutingProfile::RoutingProfile(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_routingProfileArnHasBeenSet(false),
    m_routingProfileIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_mediaConcurrenciesHasBeenSet(false),
    m_defaultOutboundQueueIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_numberOfAssociatedQueues(0),
    m_numberOfAssociatedQueuesHasBeenSet(false),
    m_numberOfAssociatedUsers(0),
    m_numberOfAssociatedUsersHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingProfile& RoutingProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingProfileArn"))
  {
    m_routingProfileArn = jsonValue.GetString("RoutingProfileArn");

    m_routingProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingProfileId"))
  {
    m_routingProfileId = jsonValue.GetString("RoutingProfileId");

    m_routingProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaConcurrencies"))
  {
    Aws::Utils::Array<JsonView> mediaConcurrenciesJsonList = jsonValue.GetArray("MediaConcurrencies");
    for(unsigned mediaConcurrenciesIndex = 0; mediaConcurrenciesIndex < mediaConcurrenciesJsonList.GetLength(); ++mediaConcurrenciesIndex)
    {
      m_mediaConcurrencies.push_back(mediaConcurrenciesJsonList[mediaConcurrenciesIndex].AsObject());
    }
    m_mediaConcurrenciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultOutboundQueueId"))
  {
    m_defaultOutboundQueueId = jsonValue.GetString("DefaultOutboundQueueId");

    m_defaultOutboundQueueIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("NumberOfAssociatedQueues"))
  {
    m_numberOfAssociatedQueues = jsonValue.GetInt64("NumberOfAssociatedQueues");

    m_numberOfAssociatedQueuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfAssociatedUsers"))
  {
    m_numberOfAssociatedUsers = jsonValue.GetInt64("NumberOfAssociatedUsers");

    m_numberOfAssociatedUsersHasBeenSet = true;
  }

  return *this;
}

JsonValue RoutingProfile::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_routingProfileArnHasBeenSet)
  {
   payload.WithString("RoutingProfileArn", m_routingProfileArn);

  }

  if(m_routingProfileIdHasBeenSet)
  {
   payload.WithString("RoutingProfileId", m_routingProfileId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_mediaConcurrenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaConcurrenciesJsonList(m_mediaConcurrencies.size());
   for(unsigned mediaConcurrenciesIndex = 0; mediaConcurrenciesIndex < mediaConcurrenciesJsonList.GetLength(); ++mediaConcurrenciesIndex)
   {
     mediaConcurrenciesJsonList[mediaConcurrenciesIndex].AsObject(m_mediaConcurrencies[mediaConcurrenciesIndex].Jsonize());
   }
   payload.WithArray("MediaConcurrencies", std::move(mediaConcurrenciesJsonList));

  }

  if(m_defaultOutboundQueueIdHasBeenSet)
  {
   payload.WithString("DefaultOutboundQueueId", m_defaultOutboundQueueId);

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

  if(m_numberOfAssociatedQueuesHasBeenSet)
  {
   payload.WithInt64("NumberOfAssociatedQueues", m_numberOfAssociatedQueues);

  }

  if(m_numberOfAssociatedUsersHasBeenSet)
  {
   payload.WithInt64("NumberOfAssociatedUsers", m_numberOfAssociatedUsers);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
