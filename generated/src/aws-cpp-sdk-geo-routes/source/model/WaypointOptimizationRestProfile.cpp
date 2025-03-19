/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationRestProfile.h>
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

WaypointOptimizationRestProfile::WaypointOptimizationRestProfile(JsonView jsonValue)
{
  *this = jsonValue;
}

WaypointOptimizationRestProfile& WaypointOptimizationRestProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Profile"))
  {
    m_profile = jsonValue.GetString("Profile");
    m_profileHasBeenSet = true;
  }
  return *this;
}

JsonValue WaypointOptimizationRestProfile::Jsonize() const
{
  JsonValue payload;

  if(m_profileHasBeenSet)
  {
   payload.WithString("Profile", m_profile);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
