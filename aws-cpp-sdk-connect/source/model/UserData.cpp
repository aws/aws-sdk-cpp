/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserData.h>
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

UserData::UserData() : 
    m_userHasBeenSet(false),
    m_routingProfileHasBeenSet(false),
    m_hierarchyPathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_availableSlotsByChannelHasBeenSet(false),
    m_maxSlotsByChannelHasBeenSet(false),
    m_activeSlotsByChannelHasBeenSet(false),
    m_contactsHasBeenSet(false),
    m_nextStatusHasBeenSet(false)
{
}

UserData::UserData(JsonView jsonValue) : 
    m_userHasBeenSet(false),
    m_routingProfileHasBeenSet(false),
    m_hierarchyPathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_availableSlotsByChannelHasBeenSet(false),
    m_maxSlotsByChannelHasBeenSet(false),
    m_activeSlotsByChannelHasBeenSet(false),
    m_contactsHasBeenSet(false),
    m_nextStatusHasBeenSet(false)
{
  *this = jsonValue;
}

UserData& UserData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetObject("User");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingProfile"))
  {
    m_routingProfile = jsonValue.GetObject("RoutingProfile");

    m_routingProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HierarchyPath"))
  {
    m_hierarchyPath = jsonValue.GetObject("HierarchyPath");

    m_hierarchyPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailableSlotsByChannel"))
  {
    Aws::Map<Aws::String, JsonView> availableSlotsByChannelJsonMap = jsonValue.GetObject("AvailableSlotsByChannel").GetAllObjects();
    for(auto& availableSlotsByChannelItem : availableSlotsByChannelJsonMap)
    {
      m_availableSlotsByChannel[ChannelMapper::GetChannelForName(availableSlotsByChannelItem.first)] = availableSlotsByChannelItem.second.AsInteger();
    }
    m_availableSlotsByChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSlotsByChannel"))
  {
    Aws::Map<Aws::String, JsonView> maxSlotsByChannelJsonMap = jsonValue.GetObject("MaxSlotsByChannel").GetAllObjects();
    for(auto& maxSlotsByChannelItem : maxSlotsByChannelJsonMap)
    {
      m_maxSlotsByChannel[ChannelMapper::GetChannelForName(maxSlotsByChannelItem.first)] = maxSlotsByChannelItem.second.AsInteger();
    }
    m_maxSlotsByChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActiveSlotsByChannel"))
  {
    Aws::Map<Aws::String, JsonView> activeSlotsByChannelJsonMap = jsonValue.GetObject("ActiveSlotsByChannel").GetAllObjects();
    for(auto& activeSlotsByChannelItem : activeSlotsByChannelJsonMap)
    {
      m_activeSlotsByChannel[ChannelMapper::GetChannelForName(activeSlotsByChannelItem.first)] = activeSlotsByChannelItem.second.AsInteger();
    }
    m_activeSlotsByChannelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Contacts"))
  {
    Aws::Utils::Array<JsonView> contactsJsonList = jsonValue.GetArray("Contacts");
    for(unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex)
    {
      m_contacts.push_back(contactsJsonList[contactsIndex].AsObject());
    }
    m_contactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextStatus"))
  {
    m_nextStatus = jsonValue.GetString("NextStatus");

    m_nextStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue UserData::Jsonize() const
{
  JsonValue payload;

  if(m_userHasBeenSet)
  {
   payload.WithObject("User", m_user.Jsonize());

  }

  if(m_routingProfileHasBeenSet)
  {
   payload.WithObject("RoutingProfile", m_routingProfile.Jsonize());

  }

  if(m_hierarchyPathHasBeenSet)
  {
   payload.WithObject("HierarchyPath", m_hierarchyPath.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_availableSlotsByChannelHasBeenSet)
  {
   JsonValue availableSlotsByChannelJsonMap;
   for(auto& availableSlotsByChannelItem : m_availableSlotsByChannel)
   {
     availableSlotsByChannelJsonMap.WithInteger(ChannelMapper::GetNameForChannel(availableSlotsByChannelItem.first), availableSlotsByChannelItem.second);
   }
   payload.WithObject("AvailableSlotsByChannel", std::move(availableSlotsByChannelJsonMap));

  }

  if(m_maxSlotsByChannelHasBeenSet)
  {
   JsonValue maxSlotsByChannelJsonMap;
   for(auto& maxSlotsByChannelItem : m_maxSlotsByChannel)
   {
     maxSlotsByChannelJsonMap.WithInteger(ChannelMapper::GetNameForChannel(maxSlotsByChannelItem.first), maxSlotsByChannelItem.second);
   }
   payload.WithObject("MaxSlotsByChannel", std::move(maxSlotsByChannelJsonMap));

  }

  if(m_activeSlotsByChannelHasBeenSet)
  {
   JsonValue activeSlotsByChannelJsonMap;
   for(auto& activeSlotsByChannelItem : m_activeSlotsByChannel)
   {
     activeSlotsByChannelJsonMap.WithInteger(ChannelMapper::GetNameForChannel(activeSlotsByChannelItem.first), activeSlotsByChannelItem.second);
   }
   payload.WithObject("ActiveSlotsByChannel", std::move(activeSlotsByChannelJsonMap));

  }

  if(m_contactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactsJsonList(m_contacts.size());
   for(unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex)
   {
     contactsJsonList[contactsIndex].AsObject(m_contacts[contactsIndex].Jsonize());
   }
   payload.WithArray("Contacts", std::move(contactsJsonList));

  }

  if(m_nextStatusHasBeenSet)
  {
   payload.WithString("NextStatus", m_nextStatus);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
