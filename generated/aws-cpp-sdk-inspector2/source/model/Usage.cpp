/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Usage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Usage::Usage() : 
    m_currency(Currency::NOT_SET),
    m_currencyHasBeenSet(false),
    m_estimatedMonthlyCost(0.0),
    m_estimatedMonthlyCostHasBeenSet(false),
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_type(UsageType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Usage::Usage(JsonView jsonValue) : 
    m_currency(Currency::NOT_SET),
    m_currencyHasBeenSet(false),
    m_estimatedMonthlyCost(0.0),
    m_estimatedMonthlyCostHasBeenSet(false),
    m_total(0.0),
    m_totalHasBeenSet(false),
    m_type(UsageType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Usage& Usage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyMapper::GetCurrencyForName(jsonValue.GetString("currency"));

    m_currencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedMonthlyCost"))
  {
    m_estimatedMonthlyCost = jsonValue.GetDouble("estimatedMonthlyCost");

    m_estimatedMonthlyCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetDouble("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UsageTypeMapper::GetUsageTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Usage::Jsonize() const
{
  JsonValue payload;

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if(m_estimatedMonthlyCostHasBeenSet)
  {
   payload.WithDouble("estimatedMonthlyCost", m_estimatedMonthlyCost);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("total", m_total);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UsageTypeMapper::GetNameForUsageType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
