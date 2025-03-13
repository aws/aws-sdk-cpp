/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixEntry.h>
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

RouteMatrixEntry::RouteMatrixEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixEntry& RouteMatrixEntry::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Error"))
  {
    m_error = RouteMatrixErrorCodeMapper::GetRouteMatrixErrorCodeForName(jsonValue.GetString("Error"));
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixEntry::Jsonize() const
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

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", RouteMatrixErrorCodeMapper::GetNameForRouteMatrixErrorCode(m_error));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
