/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/EstimateByTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

EstimateByTime::EstimateByTime() : 
    m_usageCost(0.0),
    m_usageCostHasBeenSet(false),
    m_pricingUnit(PricingUnit::NOT_SET),
    m_pricingUnitHasBeenSet(false),
    m_unit(0.0),
    m_unitHasBeenSet(false),
    m_currency(Currency::NOT_SET),
    m_currencyHasBeenSet(false),
    m_timePeriodHasBeenSet(false)
{
}

EstimateByTime::EstimateByTime(JsonView jsonValue) : 
    m_usageCost(0.0),
    m_usageCostHasBeenSet(false),
    m_pricingUnit(PricingUnit::NOT_SET),
    m_pricingUnitHasBeenSet(false),
    m_unit(0.0),
    m_unitHasBeenSet(false),
    m_currency(Currency::NOT_SET),
    m_currencyHasBeenSet(false),
    m_timePeriodHasBeenSet(false)
{
  *this = jsonValue;
}

EstimateByTime& EstimateByTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usageCost"))
  {
    m_usageCost = jsonValue.GetDouble("usageCost");

    m_usageCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pricingUnit"))
  {
    m_pricingUnit = PricingUnitMapper::GetPricingUnitForName(jsonValue.GetString("pricingUnit"));

    m_pricingUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = jsonValue.GetDouble("unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyMapper::GetCurrencyForName(jsonValue.GetString("currency"));

    m_currencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("timePeriod");

    m_timePeriodHasBeenSet = true;
  }

  return *this;
}

JsonValue EstimateByTime::Jsonize() const
{
  JsonValue payload;

  if(m_usageCostHasBeenSet)
  {
   payload.WithDouble("usageCost", m_usageCost);

  }

  if(m_pricingUnitHasBeenSet)
  {
   payload.WithString("pricingUnit", PricingUnitMapper::GetNameForPricingUnit(m_pricingUnit));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithDouble("unit", m_unit);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if(m_timePeriodHasBeenSet)
  {
   payload.WithObject("timePeriod", m_timePeriod.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
