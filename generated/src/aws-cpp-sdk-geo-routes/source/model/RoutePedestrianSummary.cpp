/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutePedestrianSummary.h>
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

RoutePedestrianSummary::RoutePedestrianSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutePedestrianSummary& RoutePedestrianSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Overview"))
  {
    m_overview = jsonValue.GetObject("Overview");
    m_overviewHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TravelOnly"))
  {
    m_travelOnly = jsonValue.GetObject("TravelOnly");
    m_travelOnlyHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutePedestrianSummary::Jsonize() const
{
  JsonValue payload;

  if(m_overviewHasBeenSet)
  {
   payload.WithObject("Overview", m_overview.Jsonize());

  }

  if(m_travelOnlyHasBeenSet)
  {
   payload.WithObject("TravelOnly", m_travelOnly.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
