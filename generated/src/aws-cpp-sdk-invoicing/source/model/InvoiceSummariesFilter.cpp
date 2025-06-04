/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/InvoiceSummariesFilter.h>
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

InvoiceSummariesFilter::InvoiceSummariesFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

InvoiceSummariesFilter& InvoiceSummariesFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeInterval"))
  {
    m_timeInterval = jsonValue.GetObject("TimeInterval");
    m_timeIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingPeriod"))
  {
    m_billingPeriod = jsonValue.GetObject("BillingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvoicingEntity"))
  {
    m_invoicingEntity = jsonValue.GetString("InvoicingEntity");
    m_invoicingEntityHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceSummariesFilter::Jsonize() const
{
  JsonValue payload;

  if(m_timeIntervalHasBeenSet)
  {
   payload.WithObject("TimeInterval", m_timeInterval.Jsonize());

  }

  if(m_billingPeriodHasBeenSet)
  {
   payload.WithObject("BillingPeriod", m_billingPeriod.Jsonize());

  }

  if(m_invoicingEntityHasBeenSet)
  {
   payload.WithString("InvoicingEntity", m_invoicingEntity);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
