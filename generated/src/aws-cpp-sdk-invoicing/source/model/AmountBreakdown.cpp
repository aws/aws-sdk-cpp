/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/AmountBreakdown.h>
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

AmountBreakdown::AmountBreakdown(JsonView jsonValue)
{
  *this = jsonValue;
}

AmountBreakdown& AmountBreakdown::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubTotalAmount"))
  {
    m_subTotalAmount = jsonValue.GetString("SubTotalAmount");
    m_subTotalAmountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Discounts"))
  {
    m_discounts = jsonValue.GetObject("Discounts");
    m_discountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Taxes"))
  {
    m_taxes = jsonValue.GetObject("Taxes");
    m_taxesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Fees"))
  {
    m_fees = jsonValue.GetObject("Fees");
    m_feesHasBeenSet = true;
  }
  return *this;
}

JsonValue AmountBreakdown::Jsonize() const
{
  JsonValue payload;

  if(m_subTotalAmountHasBeenSet)
  {
   payload.WithString("SubTotalAmount", m_subTotalAmount);

  }

  if(m_discountsHasBeenSet)
  {
   payload.WithObject("Discounts", m_discounts.Jsonize());

  }

  if(m_taxesHasBeenSet)
  {
   payload.WithObject("Taxes", m_taxes.Jsonize());

  }

  if(m_feesHasBeenSet)
  {
   payload.WithObject("Fees", m_fees.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
