/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/RoutingStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

RoutingStrategy::RoutingStrategy() : 
    m_type(RoutingStrategyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

RoutingStrategy::RoutingStrategy(JsonView jsonValue) : 
    m_type(RoutingStrategyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingStrategy& RoutingStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RoutingStrategyTypeMapper::GetRoutingStrategyTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue RoutingStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RoutingStrategyTypeMapper::GetNameForRoutingStrategyType(m_type));
  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
