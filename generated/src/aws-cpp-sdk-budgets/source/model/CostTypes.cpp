/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/CostTypes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

CostTypes::CostTypes() : 
    m_includeTax(false),
    m_includeTaxHasBeenSet(false),
    m_includeSubscription(false),
    m_includeSubscriptionHasBeenSet(false),
    m_useBlended(false),
    m_useBlendedHasBeenSet(false),
    m_includeRefund(false),
    m_includeRefundHasBeenSet(false),
    m_includeCredit(false),
    m_includeCreditHasBeenSet(false),
    m_includeUpfront(false),
    m_includeUpfrontHasBeenSet(false),
    m_includeRecurring(false),
    m_includeRecurringHasBeenSet(false),
    m_includeOtherSubscription(false),
    m_includeOtherSubscriptionHasBeenSet(false),
    m_includeSupport(false),
    m_includeSupportHasBeenSet(false),
    m_includeDiscount(false),
    m_includeDiscountHasBeenSet(false),
    m_useAmortized(false),
    m_useAmortizedHasBeenSet(false)
{
}

CostTypes::CostTypes(JsonView jsonValue) : 
    m_includeTax(false),
    m_includeTaxHasBeenSet(false),
    m_includeSubscription(false),
    m_includeSubscriptionHasBeenSet(false),
    m_useBlended(false),
    m_useBlendedHasBeenSet(false),
    m_includeRefund(false),
    m_includeRefundHasBeenSet(false),
    m_includeCredit(false),
    m_includeCreditHasBeenSet(false),
    m_includeUpfront(false),
    m_includeUpfrontHasBeenSet(false),
    m_includeRecurring(false),
    m_includeRecurringHasBeenSet(false),
    m_includeOtherSubscription(false),
    m_includeOtherSubscriptionHasBeenSet(false),
    m_includeSupport(false),
    m_includeSupportHasBeenSet(false),
    m_includeDiscount(false),
    m_includeDiscountHasBeenSet(false),
    m_useAmortized(false),
    m_useAmortizedHasBeenSet(false)
{
  *this = jsonValue;
}

CostTypes& CostTypes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludeTax"))
  {
    m_includeTax = jsonValue.GetBool("IncludeTax");

    m_includeTaxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeSubscription"))
  {
    m_includeSubscription = jsonValue.GetBool("IncludeSubscription");

    m_includeSubscriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseBlended"))
  {
    m_useBlended = jsonValue.GetBool("UseBlended");

    m_useBlendedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeRefund"))
  {
    m_includeRefund = jsonValue.GetBool("IncludeRefund");

    m_includeRefundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeCredit"))
  {
    m_includeCredit = jsonValue.GetBool("IncludeCredit");

    m_includeCreditHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeUpfront"))
  {
    m_includeUpfront = jsonValue.GetBool("IncludeUpfront");

    m_includeUpfrontHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeRecurring"))
  {
    m_includeRecurring = jsonValue.GetBool("IncludeRecurring");

    m_includeRecurringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeOtherSubscription"))
  {
    m_includeOtherSubscription = jsonValue.GetBool("IncludeOtherSubscription");

    m_includeOtherSubscriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeSupport"))
  {
    m_includeSupport = jsonValue.GetBool("IncludeSupport");

    m_includeSupportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeDiscount"))
  {
    m_includeDiscount = jsonValue.GetBool("IncludeDiscount");

    m_includeDiscountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UseAmortized"))
  {
    m_useAmortized = jsonValue.GetBool("UseAmortized");

    m_useAmortizedHasBeenSet = true;
  }

  return *this;
}

JsonValue CostTypes::Jsonize() const
{
  JsonValue payload;

  if(m_includeTaxHasBeenSet)
  {
   payload.WithBool("IncludeTax", m_includeTax);

  }

  if(m_includeSubscriptionHasBeenSet)
  {
   payload.WithBool("IncludeSubscription", m_includeSubscription);

  }

  if(m_useBlendedHasBeenSet)
  {
   payload.WithBool("UseBlended", m_useBlended);

  }

  if(m_includeRefundHasBeenSet)
  {
   payload.WithBool("IncludeRefund", m_includeRefund);

  }

  if(m_includeCreditHasBeenSet)
  {
   payload.WithBool("IncludeCredit", m_includeCredit);

  }

  if(m_includeUpfrontHasBeenSet)
  {
   payload.WithBool("IncludeUpfront", m_includeUpfront);

  }

  if(m_includeRecurringHasBeenSet)
  {
   payload.WithBool("IncludeRecurring", m_includeRecurring);

  }

  if(m_includeOtherSubscriptionHasBeenSet)
  {
   payload.WithBool("IncludeOtherSubscription", m_includeOtherSubscription);

  }

  if(m_includeSupportHasBeenSet)
  {
   payload.WithBool("IncludeSupport", m_includeSupport);

  }

  if(m_includeDiscountHasBeenSet)
  {
   payload.WithBool("IncludeDiscount", m_includeDiscount);

  }

  if(m_useAmortizedHasBeenSet)
  {
   payload.WithBool("UseAmortized", m_useAmortized);

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
