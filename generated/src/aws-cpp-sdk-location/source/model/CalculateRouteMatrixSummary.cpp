/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteMatrixSummary.h>
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

CalculateRouteMatrixSummary::CalculateRouteMatrixSummary() : 
    m_dataSourceHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_routeCount(0),
    m_routeCountHasBeenSet(false)
{
}

CalculateRouteMatrixSummary::CalculateRouteMatrixSummary(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_distanceUnit(DistanceUnit::NOT_SET),
    m_distanceUnitHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_routeCount(0),
    m_routeCountHasBeenSet(false)
{
  *this = jsonValue;
}

CalculateRouteMatrixSummary& CalculateRouteMatrixSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetString("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DistanceUnit"))
  {
    m_distanceUnit = DistanceUnitMapper::GetDistanceUnitForName(jsonValue.GetString("DistanceUnit"));

    m_distanceUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCount"))
  {
    m_errorCount = jsonValue.GetInteger("ErrorCount");

    m_errorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteCount"))
  {
    m_routeCount = jsonValue.GetInteger("RouteCount");

    m_routeCountHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculateRouteMatrixSummary::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", m_dataSource);

  }

  if(m_distanceUnitHasBeenSet)
  {
   payload.WithString("DistanceUnit", DistanceUnitMapper::GetNameForDistanceUnit(m_distanceUnit));
  }

  if(m_errorCountHasBeenSet)
  {
   payload.WithInteger("ErrorCount", m_errorCount);

  }

  if(m_routeCountHasBeenSet)
  {
   payload.WithInteger("RouteCount", m_routeCount);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
