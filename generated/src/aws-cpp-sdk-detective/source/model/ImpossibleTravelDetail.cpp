/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/ImpossibleTravelDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

ImpossibleTravelDetail::ImpossibleTravelDetail() : 
    m_startingIpAddressHasBeenSet(false),
    m_endingIpAddressHasBeenSet(false),
    m_startingLocationHasBeenSet(false),
    m_endingLocationHasBeenSet(false),
    m_hourlyTimeDelta(0),
    m_hourlyTimeDeltaHasBeenSet(false)
{
}

ImpossibleTravelDetail::ImpossibleTravelDetail(JsonView jsonValue) : 
    m_startingIpAddressHasBeenSet(false),
    m_endingIpAddressHasBeenSet(false),
    m_startingLocationHasBeenSet(false),
    m_endingLocationHasBeenSet(false),
    m_hourlyTimeDelta(0),
    m_hourlyTimeDeltaHasBeenSet(false)
{
  *this = jsonValue;
}

ImpossibleTravelDetail& ImpossibleTravelDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartingIpAddress"))
  {
    m_startingIpAddress = jsonValue.GetString("StartingIpAddress");

    m_startingIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndingIpAddress"))
  {
    m_endingIpAddress = jsonValue.GetString("EndingIpAddress");

    m_endingIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingLocation"))
  {
    m_startingLocation = jsonValue.GetString("StartingLocation");

    m_startingLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndingLocation"))
  {
    m_endingLocation = jsonValue.GetString("EndingLocation");

    m_endingLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HourlyTimeDelta"))
  {
    m_hourlyTimeDelta = jsonValue.GetInteger("HourlyTimeDelta");

    m_hourlyTimeDeltaHasBeenSet = true;
  }

  return *this;
}

JsonValue ImpossibleTravelDetail::Jsonize() const
{
  JsonValue payload;

  if(m_startingIpAddressHasBeenSet)
  {
   payload.WithString("StartingIpAddress", m_startingIpAddress);

  }

  if(m_endingIpAddressHasBeenSet)
  {
   payload.WithString("EndingIpAddress", m_endingIpAddress);

  }

  if(m_startingLocationHasBeenSet)
  {
   payload.WithString("StartingLocation", m_startingLocation);

  }

  if(m_endingLocationHasBeenSet)
  {
   payload.WithString("EndingLocation", m_endingLocation);

  }

  if(m_hourlyTimeDeltaHasBeenSet)
  {
   payload.WithInteger("HourlyTimeDelta", m_hourlyTimeDelta);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
