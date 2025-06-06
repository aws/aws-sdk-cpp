﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixDestinationOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteMatrixDestinationOptions::RouteMatrixDestinationOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixDestinationOptions& RouteMatrixDestinationOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvoidActionsForDistance"))
  {
    m_avoidActionsForDistance = jsonValue.GetInt64("AvoidActionsForDistance");
    m_avoidActionsForDistanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Heading"))
  {
    m_heading = jsonValue.GetDouble("Heading");
    m_headingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Matching"))
  {
    m_matching = jsonValue.GetObject("Matching");
    m_matchingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SideOfStreet"))
  {
    m_sideOfStreet = jsonValue.GetObject("SideOfStreet");
    m_sideOfStreetHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixDestinationOptions::Jsonize() const
{
  JsonValue payload;

  if(m_avoidActionsForDistanceHasBeenSet)
  {
   payload.WithInt64("AvoidActionsForDistance", m_avoidActionsForDistance);

  }

  if(m_headingHasBeenSet)
  {
   payload.WithDouble("Heading", m_heading);

  }

  if(m_matchingHasBeenSet)
  {
   payload.WithObject("Matching", m_matching.Jsonize());

  }

  if(m_sideOfStreetHasBeenSet)
  {
   payload.WithObject("SideOfStreet", m_sideOfStreet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
