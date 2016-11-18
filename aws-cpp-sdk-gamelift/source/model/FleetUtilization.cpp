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

FleetUtilization::FleetUtilization() : 
    m_fleetIdHasBeenSet(false),
    m_activeServerProcessCount(0),
    m_activeServerProcessCountHasBeenSet(false),
    m_activeGameSessionCount(0),
    m_activeGameSessionCountHasBeenSet(false),
    m_currentPlayerSessionCount(0),
    m_currentPlayerSessionCountHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false)
{
}

FleetUtilization::FleetUtilization(const JsonValue& jsonValue) : 
    m_fleetIdHasBeenSet(false),
    m_activeServerProcessCount(0),
    m_activeServerProcessCountHasBeenSet(false),
    m_activeGameSessionCount(0),
    m_activeGameSessionCountHasBeenSet(false),
    m_currentPlayerSessionCount(0),
    m_currentPlayerSessionCountHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false)
{
  *this = jsonValue;
}

FleetUtilization& FleetUtilization::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
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

  return *this;
}

JsonValue FleetUtilization::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

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

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws