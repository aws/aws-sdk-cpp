/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UsageTotal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

UsageTotal::UsageTotal() : 
    m_currency(Currency::NOT_SET),
    m_currencyHasBeenSet(false),
    m_estimatedCostHasBeenSet(false),
    m_type(UsageType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

UsageTotal::UsageTotal(JsonView jsonValue) : 
    m_currency(Currency::NOT_SET),
    m_currencyHasBeenSet(false),
    m_estimatedCostHasBeenSet(false),
    m_type(UsageType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

UsageTotal& UsageTotal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currency"))
  {
    m_currency = CurrencyMapper::GetCurrencyForName(jsonValue.GetString("currency"));

    m_currencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedCost"))
  {
    m_estimatedCost = jsonValue.GetString("estimatedCost");

    m_estimatedCostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = UsageTypeMapper::GetUsageTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageTotal::Jsonize() const
{
  JsonValue payload;

  if(m_currencyHasBeenSet)
  {
   payload.WithString("currency", CurrencyMapper::GetNameForCurrency(m_currency));
  }

  if(m_estimatedCostHasBeenSet)
  {
   payload.WithString("estimatedCost", m_estimatedCost);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UsageTypeMapper::GetNameForUsageType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
