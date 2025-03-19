/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollPassValidityPeriod.h>
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

RouteTollPassValidityPeriod::RouteTollPassValidityPeriod(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTollPassValidityPeriod& RouteTollPassValidityPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Period"))
  {
    m_period = RouteTollPassValidityPeriodTypeMapper::GetRouteTollPassValidityPeriodTypeForName(jsonValue.GetString("Period"));
    m_periodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PeriodCount"))
  {
    m_periodCount = jsonValue.GetInteger("PeriodCount");
    m_periodCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTollPassValidityPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_periodHasBeenSet)
  {
   payload.WithString("Period", RouteTollPassValidityPeriodTypeMapper::GetNameForRouteTollPassValidityPeriodType(m_period));
  }

  if(m_periodCountHasBeenSet)
  {
   payload.WithInteger("PeriodCount", m_periodCount);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
