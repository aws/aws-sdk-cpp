/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollPrice.h>
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

RouteTollPrice::RouteTollPrice(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTollPrice& RouteTollPrice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Currency"))
  {
    m_currency = jsonValue.GetString("Currency");
    m_currencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Estimate"))
  {
    m_estimate = jsonValue.GetBool("Estimate");
    m_estimateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerDuration"))
  {
    m_perDuration = jsonValue.GetInt64("PerDuration");
    m_perDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetBool("Range");
    m_rangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RangeValue"))
  {
    m_rangeValue = jsonValue.GetObject("RangeValue");
    m_rangeValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTollPrice::Jsonize() const
{
  JsonValue payload;

  if(m_currencyHasBeenSet)
  {
   payload.WithString("Currency", m_currency);

  }

  if(m_estimateHasBeenSet)
  {
   payload.WithBool("Estimate", m_estimate);

  }

  if(m_perDurationHasBeenSet)
  {
   payload.WithInt64("PerDuration", m_perDuration);

  }

  if(m_rangeHasBeenSet)
  {
   payload.WithBool("Range", m_range);

  }

  if(m_rangeValueHasBeenSet)
  {
   payload.WithObject("RangeValue", m_rangeValue.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
