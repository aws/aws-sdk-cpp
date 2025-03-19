/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoutePedestrianOptions.h>
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

RoutePedestrianOptions::RoutePedestrianOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutePedestrianOptions& RoutePedestrianOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Speed"))
  {
    m_speed = jsonValue.GetDouble("Speed");
    m_speedHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutePedestrianOptions::Jsonize() const
{
  JsonValue payload;

  if(m_speedHasBeenSet)
  {
   payload.WithDouble("Speed", m_speed);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
