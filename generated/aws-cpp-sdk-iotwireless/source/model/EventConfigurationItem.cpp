/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/EventConfigurationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

EventConfigurationItem::EventConfigurationItem() : 
    m_identifierHasBeenSet(false),
    m_identifierType(IdentifierType::NOT_SET),
    m_identifierTypeHasBeenSet(false),
    m_partnerType(EventNotificationPartnerType::NOT_SET),
    m_partnerTypeHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

EventConfigurationItem::EventConfigurationItem(JsonView jsonValue) : 
    m_identifierHasBeenSet(false),
    m_identifierType(IdentifierType::NOT_SET),
    m_identifierTypeHasBeenSet(false),
    m_partnerType(EventNotificationPartnerType::NOT_SET),
    m_partnerTypeHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

EventConfigurationItem& EventConfigurationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifierType"))
  {
    m_identifierType = IdentifierTypeMapper::GetIdentifierTypeForName(jsonValue.GetString("IdentifierType"));

    m_identifierTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartnerType"))
  {
    m_partnerType = EventNotificationPartnerTypeMapper::GetEventNotificationPartnerTypeForName(jsonValue.GetString("PartnerType"));

    m_partnerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Events"))
  {
    m_events = jsonValue.GetObject("Events");

    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue EventConfigurationItem::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_identifierTypeHasBeenSet)
  {
   payload.WithString("IdentifierType", IdentifierTypeMapper::GetNameForIdentifierType(m_identifierType));
  }

  if(m_partnerTypeHasBeenSet)
  {
   payload.WithString("PartnerType", EventNotificationPartnerTypeMapper::GetNameForEventNotificationPartnerType(m_partnerType));
  }

  if(m_eventsHasBeenSet)
  {
   payload.WithObject("Events", m_events.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
