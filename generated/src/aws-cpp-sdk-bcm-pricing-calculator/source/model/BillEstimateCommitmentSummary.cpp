/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillEstimateCommitmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

BillEstimateCommitmentSummary::BillEstimateCommitmentSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

BillEstimateCommitmentSummary& BillEstimateCommitmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("purchaseAgreementType"))
  {
    m_purchaseAgreementType = PurchaseAgreementTypeMapper::GetPurchaseAgreementTypeForName(jsonValue.GetString("purchaseAgreementType"));
    m_purchaseAgreementTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");
    m_offeringIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageAccountId"))
  {
    m_usageAccountId = jsonValue.GetString("usageAccountId");
    m_usageAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("termLength"))
  {
    m_termLength = jsonValue.GetString("termLength");
    m_termLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("paymentOption"))
  {
    m_paymentOption = jsonValue.GetString("paymentOption");
    m_paymentOptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upfrontPayment"))
  {
    m_upfrontPayment = jsonValue.GetObject("upfrontPayment");
    m_upfrontPaymentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monthlyPayment"))
  {
    m_monthlyPayment = jsonValue.GetObject("monthlyPayment");
    m_monthlyPaymentHasBeenSet = true;
  }
  return *this;
}

JsonValue BillEstimateCommitmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_purchaseAgreementTypeHasBeenSet)
  {
   payload.WithString("purchaseAgreementType", PurchaseAgreementTypeMapper::GetNameForPurchaseAgreementType(m_purchaseAgreementType));
  }

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

  }

  if(m_usageAccountIdHasBeenSet)
  {
   payload.WithString("usageAccountId", m_usageAccountId);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_termLengthHasBeenSet)
  {
   payload.WithString("termLength", m_termLength);

  }

  if(m_paymentOptionHasBeenSet)
  {
   payload.WithString("paymentOption", m_paymentOption);

  }

  if(m_upfrontPaymentHasBeenSet)
  {
   payload.WithObject("upfrontPayment", m_upfrontPayment.Jsonize());

  }

  if(m_monthlyPaymentHasBeenSet)
  {
   payload.WithObject("monthlyPayment", m_monthlyPayment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
