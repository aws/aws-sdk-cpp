/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/TaxesBreakdownAmount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

TaxesBreakdownAmount::TaxesBreakdownAmount(JsonView jsonValue)
{
  *this = jsonValue;
}

TaxesBreakdownAmount& TaxesBreakdownAmount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Amount"))
  {
    m_amount = jsonValue.GetString("Amount");
    m_amountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rate"))
  {
    m_rate = jsonValue.GetString("Rate");
    m_rateHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxesBreakdownAmount::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_amountHasBeenSet)
  {
   payload.WithString("Amount", m_amount);

  }

  if(m_rateHasBeenSet)
  {
   payload.WithString("Rate", m_rate);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
