/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ByoipCidr.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

ByoipCidr::ByoipCidr() : 
    m_cidrHasBeenSet(false),
    m_state(ByoipCidrState::NOT_SET),
    m_stateHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

ByoipCidr::ByoipCidr(JsonView jsonValue) : 
    m_cidrHasBeenSet(false),
    m_state(ByoipCidrState::NOT_SET),
    m_stateHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

ByoipCidr& ByoipCidr::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cidr"))
  {
    m_cidr = jsonValue.GetString("Cidr");

    m_cidrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ByoipCidrStateMapper::GetByoipCidrStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue ByoipCidr::Jsonize() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("Cidr", m_cidr);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ByoipCidrStateMapper::GetNameForByoipCidrState(m_state));
  }

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("Events", std::move(eventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
