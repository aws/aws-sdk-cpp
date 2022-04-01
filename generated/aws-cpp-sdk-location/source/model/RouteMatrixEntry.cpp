/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/RouteMatrixEntry.h>
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

RouteMatrixEntry::RouteMatrixEntry() : 
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_durationSeconds(0.0),
    m_durationSecondsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

RouteMatrixEntry::RouteMatrixEntry(JsonView jsonValue) : 
    m_distance(0.0),
    m_distanceHasBeenSet(false),
    m_durationSeconds(0.0),
    m_durationSecondsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
  *this = jsonValue;
}

RouteMatrixEntry& RouteMatrixEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetDouble("Distance");

    m_distanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationSeconds"))
  {
    m_durationSeconds = jsonValue.GetDouble("DurationSeconds");

    m_durationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteMatrixEntry::Jsonize() const
{
  JsonValue payload;

  if(m_distanceHasBeenSet)
  {
   payload.WithDouble("Distance", m_distance);

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithDouble("DurationSeconds", m_durationSeconds);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
