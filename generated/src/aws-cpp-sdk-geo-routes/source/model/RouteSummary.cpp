/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSummary.h>
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

RouteSummary::RouteSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteSummary& RouteSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tolls"))
  {
    m_tolls = jsonValue.GetObject("Tolls");
    m_tollsHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteSummary::Jsonize() const
{
  JsonValue payload;

  if(m_distanceHasBeenSet)
  {
   payload.WithInt64("Distance", m_distance);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("Duration", m_duration);

  }

  if(m_tollsHasBeenSet)
  {
   payload.WithObject("Tolls", m_tolls.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
