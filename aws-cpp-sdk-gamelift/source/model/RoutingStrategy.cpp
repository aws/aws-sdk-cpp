/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

RoutingStrategy::RoutingStrategy(const JsonValue& jsonValue) : 
    m_type(RoutingStrategyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingStrategy& RoutingStrategy::operator =(const JsonValue& jsonValue)
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