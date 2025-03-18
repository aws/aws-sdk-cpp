/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/FleetUtilization.h>
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

FleetUtilization::FleetUtilization(JsonView jsonValue)
{
  *this = jsonValue;
}

FleetUtilization& FleetUtilization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");
    m_fleetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveServerProcessCount"))
  {
    m_activeServerProcessCount = jsonValue.GetInteger("ActiveServerProcessCount");
    m_activeServerProcessCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveGameSessionCount"))
  {
    m_activeGameSessionCount = jsonValue.GetInteger("ActiveGameSessionCount");
    m_activeGameSessionCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CurrentPlayerSessionCount"))
  {
    m_currentPlayerSessionCount = jsonValue.GetInteger("CurrentPlayerSessionCount");
    m_currentPlayerSessionCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaximumPlayerSessionCount"))
  {
    m_maximumPlayerSessionCount = jsonValue.GetInteger("MaximumPlayerSessionCount");
    m_maximumPlayerSessionCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue FleetUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_activeServerProcessCountHasBeenSet)
  {
   payload.WithInteger("ActiveServerProcessCount", m_activeServerProcessCount);

  }

  if(m_activeGameSessionCountHasBeenSet)
  {
   payload.WithInteger("ActiveGameSessionCount", m_activeGameSessionCount);

  }

  if(m_currentPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("CurrentPlayerSessionCount", m_currentPlayerSessionCount);

  }

  if(m_maximumPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("MaximumPlayerSessionCount", m_maximumPlayerSessionCount);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
