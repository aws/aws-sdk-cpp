/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteTruckModeOptions.h>
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

CalculateRouteTruckModeOptions::CalculateRouteTruckModeOptions() : 
    m_avoidFerries(false),
    m_avoidFerriesHasBeenSet(false),
    m_avoidTolls(false),
    m_avoidTollsHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CalculateRouteTruckModeOptions::CalculateRouteTruckModeOptions(JsonView jsonValue) : 
    m_avoidFerries(false),
    m_avoidFerriesHasBeenSet(false),
    m_avoidTolls(false),
    m_avoidTollsHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

CalculateRouteTruckModeOptions& CalculateRouteTruckModeOptions::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Weight"))
  {
    m_weight = jsonValue.GetObject("Weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculateRouteTruckModeOptions::Jsonize() const
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

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_weightHasBeenSet)
  {
   payload.WithObject("Weight", m_weight.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
