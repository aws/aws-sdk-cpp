/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/NetworkRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

NetworkRoute::NetworkRoute() : 
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_state(RouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(RouteType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

NetworkRoute::NetworkRoute(JsonView jsonValue) : 
    m_destinationCidrBlockHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_state(RouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(RouteType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkRoute& NetworkRoute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationCidrBlock"))
  {
    m_destinationCidrBlock = jsonValue.GetString("DestinationCidrBlock");

    m_destinationCidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrefixListId"))
  {
    m_prefixListId = jsonValue.GetString("PrefixListId");

    m_prefixListIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = RouteStateMapper::GetRouteStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RouteTypeMapper::GetRouteTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkRoute::Jsonize() const
{
  JsonValue payload;

  if(m_destinationCidrBlockHasBeenSet)
  {
   payload.WithString("DestinationCidrBlock", m_destinationCidrBlock);

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_prefixListIdHasBeenSet)
  {
   payload.WithString("PrefixListId", m_prefixListId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", RouteStateMapper::GetNameForRouteState(m_state));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RouteTypeMapper::GetNameForRouteType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
