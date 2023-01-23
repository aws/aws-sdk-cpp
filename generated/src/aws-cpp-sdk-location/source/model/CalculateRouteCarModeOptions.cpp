/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteCarModeOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

CalculateRouteCarModeOptions::CalculateRouteCarModeOptions() : 
    m_avoidFerries(false),
    m_avoidFerriesHasBeenSet(false),
    m_avoidTolls(false),
    m_avoidTollsHasBeenSet(false)
{
}

CalculateRouteCarModeOptions::CalculateRouteCarModeOptions(JsonView jsonValue) : 
    m_avoidFerries(false),
    m_avoidFerriesHasBeenSet(false),
    m_avoidTolls(false),
    m_avoidTollsHasBeenSet(false)
{
  *this = jsonValue;
}

CalculateRouteCarModeOptions& CalculateRouteCarModeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvoidFerries"))
  {
    m_avoidFerries = jsonValue.GetBool("AvoidFerries");

    m_avoidFerriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvoidTolls"))
  {
    m_avoidTolls = jsonValue.GetBool("AvoidTolls");

    m_avoidTollsHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculateRouteCarModeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_avoidFerriesHasBeenSet)
  {
   payload.WithBool("AvoidFerries", m_avoidFerries);

  }

  if(m_avoidTollsHasBeenSet)
  {
   payload.WithBool("AvoidTolls", m_avoidTolls);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
