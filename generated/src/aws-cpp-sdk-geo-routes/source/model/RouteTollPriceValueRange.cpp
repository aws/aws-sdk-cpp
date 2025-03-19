/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollPriceValueRange.h>
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

RouteTollPriceValueRange::RouteTollPriceValueRange(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTollPriceValueRange& RouteTollPriceValueRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetDouble("Min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTollPriceValueRange::Jsonize() const
{
  JsonValue payload;

  if(m_minHasBeenSet)
  {
   payload.WithDouble("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
