/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/MonetaryAmount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FreeTier
{
namespace Model
{

MonetaryAmount::MonetaryAmount(JsonView jsonValue)
{
  *this = jsonValue;
}

MonetaryAmount& MonetaryAmount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amount"))
  {
    m_amount = jsonValue.GetDouble("amount");
    m_amountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue MonetaryAmount::Jsonize() const
{
  JsonValue payload;

  if(m_amountHasBeenSet)
  {
   payload.WithDouble("amount", m_amount);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", CurrencyCodeMapper::GetNameForCurrencyCode(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace FreeTier
} // namespace Aws
